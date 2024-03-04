// Copyright Epic Games, Inc. All Rights Reserved.

#include "GLTFImportFactory.h"

#include "GLTFImportOptions.h"
#include "GLTFImporterContext.h"
#include "GLTFImporterModule.h"
#include "UI/GLTFOptionsWindow.h"

#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"

#include "Misc/FeedbackContext.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetImportTask.h"
#include "Editor.h"
#include "Engine/StaticMesh.h"
#include "IMessageLogListing.h"
#include "Interfaces/IMainFrameModule.h"
#include "Logging/LogMacros.h"
#include "Logging/TokenizedMessage.h"
#include "Materials/Material.h"
#include "MessageLogModule.h"
#include "PackageTools.h"
#include "UObject/StrongObjectPtr.h"

#include "Misc/ScopedSlowTask.h"

//Blueprint
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet/GameplayStatics.h"

#include "BlueprintCreationFactory.h"
#include "Engine/SCS_Node.h"
//ComponentAssetBroker
#include "ComponentAssetBroker.h"
//Utils
#include "Utils/TFGLTFUtils.h"

#include <filesystem>

#define TINYGLTF_LITTLE_ENDIAN 
//#include "DatasmithAssetUserData.h"
//#include "compression/decode.h"
//#include "core/decoder_buffer.h"


//#include "TGLTFDraco/compression/decode.h"
//#include "draco/core/cycle_timer.h"
//#include "draco/io/file_utils.h"
//#include "draco/io/obj_encoder.h"
//#include "draco/io/parser_utils.h"
//#include "draco/io/ply_encoder.h"

// CustomProperty
#include "CustomProperty.h"

#define TINYGLTF_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define DRACO_TRANSCODER_SUPPORTED
#define TINYGLTF_ENABLE_DRACO


#include "libgltf.h"
#include "tiny_gltf.h"
#include "draco_features.h"
#include <String>
#include <filesystem>
#include <sstream>
#include <fstream>
#include <iostream>
#include <Memory>
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/FileManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Materials/MaterialInstanceDynamic.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GLTFImportFactory)

DEFINE_LOG_CATEGORY(LogGLTF);

#define LOCTEXT_NAMESPACE "GLTFFactory"



namespace GLTFImporterImpl
{
	bool ShowOptionsWindow(const FString& Filepath, const FString& PackagePath, UGLTFImportOptions& ImporterOptions)
	{
		TSharedPtr<SWindow> ParentWindow;
		if (FModuleManager::Get().IsModuleLoaded("MainFrame"))
		{
			IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
			ParentWindow                = MainFrame.GetParentWindow();
		}

		TSharedRef<SWindow> Window = SNew(SWindow).Title(LOCTEXT("TFGLTFImportOptionsTitle", "glTF Import Options")).SizingRule(ESizingRule::Autosized);

		TSharedPtr<SGLTFOptionsWindow> OptionsWindow;
		Window->SetContent(
		    SAssignNew(OptionsWindow, SGLTFOptionsWindow)
		        .ImportOptions(&ImporterOptions)
		        .WidgetWindow(Window)
		        .FileNameText(FText::Format(LOCTEXT("GLTFImportOptionsFileName", "  Import File  :    {0}"),
		                                    FText::FromString(FPaths::GetCleanFilename(Filepath))))
		        .FilePathText(FText::FromString(Filepath))
		        .PackagePathText(FText::Format(LOCTEXT("GLTFImportOptionsPackagePath", "  Import To   :    {0}"), FText::FromString(PackagePath))));

		FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);
		return OptionsWindow->ShouldImport();
	}

	void ShowLogMessages(const TArray<GLTF::FLogMessage>& Messages)
	{
		if (Messages.Num() > 0)
		{
			FMessageLogModule&             MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
			TSharedRef<IMessageLogListing> LogListing       = (MessageLogModule.GetLogListing("LoadErrors"));
			LogListing->ClearMessages();
			for (const GLTF::FLogMessage& Error : Messages)
			{
				EMessageSeverity::Type Severity =
				    Error.Get<0>() == GLTF::EMessageSeverity::Error ? EMessageSeverity::Error : EMessageSeverity::Warning;
				LogListing->AddMessage(FTokenizedMessage::Create(Severity, FText::FromString(Error.Get<1>())));
			}
			MessageLogModule.OpenMessageLog("LoadErrors");
		}
	}
}

UGLTFImportFactory::UGLTFImportFactory(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
    , GLTFImporterModule(&ITGLTFImporterModule::Get())
{
	bCreateNew    = false;
	bEditAfterNew = false;
	bEditorImport = true;   // binary / general file source
	bText         = false;  // text source

	SupportedClass = UStaticMesh::StaticClass();

	Formats.Add(TEXT("gltf;GL Transmission Format"));
	Formats.Add(TEXT("glb;GL Transmission Format (Binary)"));
}

UObject* UGLTFImportFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename,
                                               const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPreImport(this, InClass, InParent, InName, Parms);
	AdditionalImportedObjects.Empty();

	Warn->Log(Filename);
	std::shared_ptr < UBlueprint> createdBP;
	TStrongObjectPtr<UGLTFImportOptions> ImporterOptions(NewObject<UGLTFImportOptions>(GetTransientPackage(), TEXT("GLTF Importer Options")));
	// show import options window
	if (!IsAutomatedImport())
	{
		const FString Filepath    = FPaths::ConvertRelativePathToFull(Filename);
		const FString PackagePath = InParent->GetPathName();

		if (!GLTFImporterImpl::ShowOptionsWindow(Filepath, PackagePath, *ImporterOptions))
		{
			bOutOperationCanceled = true;
			return nullptr;
		}
	}
	else
	{
		ImporterOptions->bGenerateLightmapUVs = false;
		ImporterOptions->ImportScale = 100.0f;

		if (AssetImportTask->Options != nullptr)
		{
			UGLTFImportOptions* Options = Cast<UGLTFImportOptions>(AssetImportTask->Options);
			if (Options == nullptr)
			{
				UE_LOG(LogGLTF, Display, TEXT("The options set in the Asset Import Task are not of type UTFGLTFImportOptions and will be ignored"));
			}
			else
			{
				ImporterOptions->bGenerateLightmapUVs = Options->bGenerateLightmapUVs;
				ImporterOptions->ImportScale = Options->ImportScale;
			}
		}
	}

	FGLTFImporterContext& Context = GLTFImporterModule->GetImporterContext();
	// setup import options
	{
		Context.StaticMeshFactory.SetUniformScale(ImporterOptions->ImportScale);
		Context.StaticMeshFactory.SetGenerateLightmapUVs(ImporterOptions->bGenerateLightmapUVs);
	}

	UObject* Object = nullptr;
	FString decGlbFile;
	ReadDracoCompressedFile(Filename, decGlbFile);
	std::vector<UMaterialInstanceDynamic*> ListMaterialShaders;
	TFGLTFUtils::InitMaterialShaders(ListMaterialShaders);
	//if (Context.OpenFile(Filename))
	if (Context.OpenFile(decGlbFile))
	{
		const FString AssetName      = Context.Asset.Name;
		const FString NewPackageName = UPackageTools::SanitizePackageName(*(FPaths::GetPath(InParent->GetName()) / AssetName));
		UObject*      ParentPackage  = NewPackageName == InParent->GetName() ? InParent : CreatePackage(*NewPackageName);

		const TArray<UStaticMesh*>& CreatedMeshes = Context.CreateMeshes(ParentPackage, Flags, false);
		Context.CreateMaterials(ParentPackage, Flags);
		UpdateMeshes();
		UpdateNodes();
		GLTFImporterModule->GetImporterContext().MaterialShaders = ListMaterialShaders;
		CreateBluePrints(createdBP);
		if (CreatedMeshes.Num() == 1)
		{
			Object = CreatedMeshes[0];
		}
		else if (CreatedMeshes.Num() != 0)
		{
			Object = CreatedMeshes[0]->GetOutermost();
			AdditionalImportedObjects.Append(CreatedMeshes);
		}
	}

	//////////////////////////////////////////////////////////////////////
	

//	draco::DecoderBuffer buffer;
//	//std::shared_ptr<libgltf::SGlTF> loaded_gltf = gltf_loader->glTF().lock();
//	const std::unique_ptr<libgltf::SGlTF>& loaded_gltf = gltf_loader->glTF();
//	if (!loaded_gltf)
//	{
//		printf("failed to load your gltf file");
//	}
	//////////////////////////////////////////////////////////////////////////////////////////////
	/*libgltf::TVertexList<1, size_t> triangle_data;
	{
		std::shared_ptr<libgltf::TAccessorStream<libgltf::TVertexList<1, size_t>>> accessor_stream =
			std::make_shared<libgltf::TAccessorStream<libgltf::TVertexList<1, size_t>>>(triangle_data);
		gltf_loader->LoadMeshPrimitiveIndicesData(0, 0, accessor_stream);
	}

	libgltf::TVertexList<3, float> position_data;
	{
		std::shared_ptr<libgltf::TAccessorStream<libgltf::TVertexList<3, float>>> accessor_stream =
			std::make_shared<libgltf::TAccessorStream<libgltf::TVertexList<3, float>>>(position_data);
		gltf_loader->LoadMeshPrimitiveAttributeData(0, 0, "position", accessor_stream);
	}

	libgltf::TVertexList<3, float> normal_data;
	{
		std::shared_ptr<libgltf::TAccessorStream<libgltf::TVertexList<3, float>>> accessor_stream =
			std::make_shared<libgltf::TAccessorStream<libgltf::TVertexList<3, float>>>(normal_data);
		gltf_loader->LoadMeshPrimitiveAttributeData(0, 0, "normal", accessor_stream);
	}

	libgltf::TVertexList<2, float> texcoord_0_data;
	{
		std::shared_ptr<libgltf::TAccessorStream<libgltf::TVertexList<2, float>>> accessor_stream =
			std::make_shared<libgltf::TAccessorStream<libgltf::TVertexList<2, float>>>(texcoord_0_data);
		gltf_loader->LoadMeshPrimitiveAttributeData(0, 0, "texcoord_0", accessor_stream);
	}

	std::vector<uint8_t> image0_data;
	std::string          image0_data_type;
	gltf_loader->LoadImageData(0, image0_data, image0_data_type);

	std::string gltf_json;
	if (!(*loaded_gltf >> gltf_json))
		printf("Failed to convert to json!\n");*/



	GEditor->GetEditorSubsystem<UImportSubsystem>()->BroadcastAssetPostImport(this, Object);
	

	GLTFImporterImpl::ShowLogMessages(Context.GetLogMessages());

	// Purge the decoded file ?
	// Delete the file
	//if (IFileManager::Get().Delete(*decGlbFile))
	//{
	//	// File was successfully deleted
	//	UE_LOG(LogTemp, Log, TEXT("Temporary File deleted: %s"), *decGlbFile);
	//}
	//else
	//{
	//	// Failed to delete the file
	//	UE_LOG(LogTemp, Error, TEXT("Failed to delete file: %s"), *decGlbFile);
	//}

	return Object;
}

void UGLTFImportFactory::ReadDracoCompressedFile(const FString& Filename, FString& oFilename)
{
	const FString iFilepath = FPaths::ConvertRelativePathToFull(Filename);
	std::string input_file_path(std::string(TCHAR_TO_UTF8(*iFilepath)));
	std::string out_file_path = input_file_path + "_temp.gltf";
	tinygltf::TinyGLTF loader;
	tinygltf::Model model;
	std::string err, warn;
	bool bResult = false;
	const FString Extension = FPaths::GetExtension(iFilepath);
	if (Extension == "gltf")
	{
		bResult = loader.LoadASCIIFromFile(&model, &err, &warn, input_file_path.c_str());
		if (bResult)
		{
			model.asset.version = "2.0";
			model.asset.generator = "Unreal Engine 5.1.1 glTF Exporter 1.3.1 (Modified)";
			bool bWrite = loader.WriteGltfSceneToFile(&model, out_file_path, true, true, true, false);
			if (!bWrite)
			{
				//log
				UE_LOG(LogGLTF, Error, TEXT("Failed to create a decoded Gltf file "));
				return;
			}
			oFilename = out_file_path.c_str();
		}
		else
		{
			//log
			UE_LOG(LogGLTF, Error, TEXT("Failed to create a decoded Gltf file "));
			return;
		}
	}
	else
	{
		bResult = loader.LoadBinaryFromFile(&model, &err, &warn, input_file_path.c_str());
		if (bResult)
		{
			model.asset.version = "2.0";
			model.asset.generator = "Unreal Engine 5.1.1 glTF Exporter 1.3.1 (Modified)";
			bool bWrite = loader.WriteGltfSceneToFile(&model, out_file_path, true, true, true, false);
			if (!bWrite)
			{
				//log
				UE_LOG(LogGLTF, Error, TEXT("Failed to create a decoded Glb file "));
				return;
			}
			oFilename = out_file_path.c_str();
		}
	}
	//    }

	//std::shared_ptr<libgltf::IglTFLoader> gltf_loader = libgltf::IglTFLoader::Create(
	//	[input_file_path](const std::string& _path)
	//	{
	//		std::filesystem::path file_path;
	//		if (_path.empty())
	//			file_path = std::filesystem::path(input_file_path);
	//		else
	//			file_path = std::filesystem::path(input_file_path).parent_path().append(_path);

	//		std::shared_ptr<std::istream> stream_ptr = nullptr;
	//		if (!std::filesystem::exists(file_path))
	//			return stream_ptr;

	//		stream_ptr = std::make_shared<std::ifstream>(file_path.string(), std::ios::in | std::ios::binary);
	//		return stream_ptr;
	//	});

	////tinygltf::TinyGLTF loader;

	//const std::unique_ptr<libgltf::SGlTF>& loaded_gltf = gltf_loader->glTF();
	//if (!loaded_gltf)
	//{
	//	//printf("failed to load your gltf file");
	//}

	//libgltf::TVertexList<1, size_t> triangle_data;
	//{
	//	std::shared_ptr<libgltf::TAccessorStream<libgltf::TVertexList<1, size_t>>> accessor_stream =
	//		std::make_shared<libgltf::TAccessorStream<libgltf::TVertexList<1, size_t>>>(triangle_data);
	//	gltf_loader->LoadMeshPrimitiveIndicesData(0, 0, accessor_stream);
	//}
}


void UGLTFImportFactory::PostprocessShaders(const std::shared_ptr < UBlueprint>& iBP)
{

	FString ShaderPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Plugins"),TEXT("TFGLTFImporter"), TEXT("Content"), TEXT("shaders"));
	
	if (IFileManager::Get().DirectoryExists(*ShaderPath))
	{
		IFileManager& FileManager = IFileManager::Get();
		TArray<FString> MaterialFiles;
		std::vector< UMaterialInstanceDynamic*> listDyMaterial;
		FileManager.FindFiles(MaterialFiles, *(IFileManager::Get().ConvertToRelativePath(*ShaderPath)), TEXT("*.*"));
		{
			for (const FString& MaterialFile : MaterialFiles)
			{
				FString PackagePath = FPaths::GetBaseFilename(MaterialFile, false);
				FString tempMat("/TFGLTFImporter/Shaders/");
				tempMat.Append(FPaths::GetBaseFilename(MaterialFile, false));
				UMaterial* LoadedMaterial = LoadObject<UMaterial>(nullptr, *tempMat);
				if (!LoadedMaterial)
					continue;
				UMaterialInstanceDynamic* DynamicMaterialInstance = UMaterialInstanceDynamic::Create(LoadedMaterial, nullptr);
				listDyMaterial.push_back(DynamicMaterialInstance);
			}
		}


		TArray<USCS_Node*> MeshNodes =  iBP->SimpleConstructionScript->GetAllNodes();
		TArray<AStaticMeshActor*> staticMeshActors;
		FBlueprintEditorUtils::GetAllNodesOfClass(iBP.get(), staticMeshActors);
		for (USCS_Node* iUscsNode : MeshNodes)
		{
			if (UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(iUscsNode->ComponentTemplate))
			{
				TFGLTFUtils::SetMaterialShaders(StaticMeshComponent->GetStaticMesh(), listDyMaterial);
			}
			
		}


		TArray<AActor*> AllMeshActors;
		UGameplayStatics::GetAllActorsOfClass(GEditor->GetEditorWorldContext().World(), AStaticMeshActor::StaticClass(), AllMeshActors);
		std::vector<UMaterial*> vMaterial;
		for (AActor* MeshActor : AllMeshActors)
		{
			// Get the mesh component from the actor
			
			UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(MeshActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));

			// Check if the mesh component uses the old material
			if (MeshComponent && MeshComponent->GetMaterials().Num() > 0)
			{
				// Assign the new material
				for (int iMIndex = 0; iMIndex < MeshComponent->GetMaterials().Num(); ++iMIndex)
				{
					if (MeshComponent->GetMaterial(iMIndex)->GetBlendMode() == EBlendMode::BLEND_Translucent)
					{
						vMaterial.push_back(MeshComponent->GetMaterial(iMIndex)->GetBaseMaterial()->GetMaterial());
					}
				}
			}
		}



	}
}

bool UGLTFImportFactory::FactoryCanImport(const FString& Filename)
{
	const FString Extension = FPaths::GetExtension(Filename);

	if( Extension == TEXT("gltf") || Extension == TEXT("glb") )
	{
		return true;
	}
	return false;
}

TArray<FString> UGLTFImportFactory::GetFormats() const
{
	static TArray<FString> EmptyArray;
	static const auto CVarGltf = IConsoleManager::Get().FindConsoleVariable(TEXT("Interchange.FeatureFlags.Import.GLTF"));
	const bool bUseLegacyGltf = (!CVarGltf || !CVarGltf->GetBool());
	if (bUseLegacyGltf)
	{
		return Formats;
	}
	return EmptyArray;
}

void UGLTFImportFactory::CleanUp()
{
	// cleanup any resources/buffers

	FGLTFImporterContext& Context = GLTFImporterModule->GetImporterContext();
	Context.StaticMeshFactory.CleanUp();

	Context.Asset.Clear(8 * 1024, 512);
	Super::CleanUp();
}

void UGLTFImportFactory::CreateBluePrints(std::shared_ptr < UBlueprint> & oBPObject)
{
	const FGLTFImporterContext& Context = GLTFImporterModule->GetImporterContext();
	const TArray<UStaticMesh*>& Meshes = Context.StaticMeshFactory.GetMeshes();
	
	BluePrintCreator = std::make_shared<BlueprintCreationFactory>();
	bool bResult = BluePrintCreator->CreateBlueprint(Context, oBPObject);
	if (!bResult)
	{
		UE_LOG(LogGLTF, Error, TEXT("Failed to Set Extra field in the Metadata"));
	}
}

void UGLTFImportFactory::UpdateNodes() const
{
	const FGLTFImporterContext& Context = GLTFImporterModule->GetImporterContext();
	const TArray<GLTF::FNode>  & NodeElements = Context.Asset.Nodes;
	/*UBlueprint* CreatedBlueprint = FKismetEditorUtilities::CreateBlueprintFromClass(FText::FromString("My Window Title"), 
		                           AActor::StaticClass(), "Nodes");
	USimpleConstructionScript* SCS = CreatedBlueprint->SimpleConstructionScript;*/

	for (GLTF::FNode Node : NodeElements)
	{
		//AStaticMeshActor* SMActor;
		//SMActor = Cast<AStaticMeshActor>(GEngine->GetWorldContexts()[0].World()->SpawnActor(AStaticMeshActor::StaticClass(), &Node.Transform));
		//SMActor->SetActorLabel(Node.Name);
		UStaticMesh* StaticMesh = nullptr;
		if (Node.MeshIndex >= 0)
		{
			StaticMesh = Context.StaticMeshFactory.GetMeshes()[Node.MeshIndex];
			
			//AStaticMeshActor* NewStaticMeshActor = GEngine->GetWorldContexts()[0].World()->SpawnActor<AStaticMeshActor>(SpawnParams);
			//NewStaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(const_cast<UStaticMesh*>(StaticMesh));

			if (!Node.Extras.IsEmpty())
			{
				for (const auto& Pair : Node.Extras)
				{
					FName Key = FName(Pair.Key);
					const FString& Value = Pair.Value;
					//bool bRes = UDatasmithAssetUserData::SetDatasmithUserDataValueForKey(StaticMesh, Key, Value);
					//if (!bRes)
					//{
					//	//UE_LOG(LogGLTF, Display, TEXT("Failed to Set Extra field in the Metadata"));
					//	//continue;
					//}
				}
			}

			if (Node.ExtrasInfo && !Node.ExtrasInfo->Values.IsEmpty())
			{
				bool bResult = UCustomProperty::SetExtrasInfo(StaticMesh, Node.ExtrasInfo);
				if (!bResult)
				{
					//log
				}

				StaticMesh->AddAssetUserData(UCustomProperty::GetExtrasInfo(StaticMesh));
			}
			
		}
	}

	//FKismetEditorUtilities::CompileBlueprint(CreatedBlueprint, EBlueprintCompileOptions::BatchCompile);
}

void UGLTFImportFactory::UpdateMeshes() const
{
	const FGLTFImporterContext& Context = GLTFImporterModule->GetImporterContext();
	const TArray<UStaticMesh*>& Meshes = Context.StaticMeshFactory.GetMeshes();
	const TArray<UMaterial*>& Materials = Context.Materials;
	check(Materials.Num() == Context.Asset.Materials.Num());

	int32 MeshIndex = 0;
	for (UStaticMesh* StaticMesh : Meshes)
	{
		const GLTF::FMesh& GltfMesh = Context.Asset.Meshes[MeshIndex++];
		if (GltfMesh.ExtrasInfo)
		{
			TSharedPtr<FJsonObject> extraData = GltfMesh.ExtrasInfo;
			if (!extraData->Values.IsEmpty())
			{
				bool bResult = UCustomProperty::SetExtrasInfo(StaticMesh, extraData);
				if (!bResult)
				{
					UE_LOG(LogGLTF, Error, TEXT("Failed to Set Extra field for Mesh"));
				}
			}
			/// <metadata>
			TArray<GLTF::FExtras>	fExtras = GltfMesh.Extras;
			TMap<FString, FString> extrasMap;
			for (const GLTF::FExtras extraInfo : fExtras)
			{
				extrasMap = extraInfo.Extras;

			}
		}

		for (int32 PrimIndex = 0; PrimIndex < GltfMesh.Primitives.Num(); ++PrimIndex)
		{
			const GLTF::FPrimitive& Primitive = GltfMesh.Primitives[PrimIndex];

			UMaterialInterface* Material = nullptr;
			if (Primitive.MaterialIndex != INDEX_NONE)
			{
				Material = static_cast<UMaterialInterface*>(Materials[Primitive.MaterialIndex]);
				check(Material);
			}

			StaticMesh->GetStaticMaterials()[PrimIndex].MaterialInterface = Material;
		}

		StaticMesh->MarkPackageDirty();
		StaticMesh->PostEditChange();
		FAssetRegistryModule::AssetCreated(StaticMesh);
	}
	
}

#undef LOCTEXT_NAMESPACE

