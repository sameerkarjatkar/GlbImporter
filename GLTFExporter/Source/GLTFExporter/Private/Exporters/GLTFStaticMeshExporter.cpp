// Copyright Epic Games, Inc. All Rights Reserved.

#include "Exporters/GLTFStaticMeshExporter.h"
#include "Builders/GLTFContainerBuilder.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"

//#include "../../../../../Source/GLTFCustom/CustomExtraField.h"
//#include "DatasmithAssetUserData.h"


UGLTFStaticMeshExporter::UGLTFStaticMeshExporter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UStaticMesh::StaticClass();
}

bool UGLTFStaticMeshExporter::AddObject(FGLTFContainerBuilder& Builder, const UObject* Object)
{

	if (Object->IsA<UStaticMesh>())
	{

		 const UStaticMesh* StaticMesh = Cast<UStaticMesh>(Object);
		 
		 FActorSpawnParameters SpawnParams;
		 AStaticMeshActor* NewStaticMeshActor = GEngine->GetWorldContexts()[0].World()->SpawnActor<AStaticMeshActor>(SpawnParams);
		 NewStaticMeshActor->GetStaticMeshComponent()->SetStaticMesh(const_cast<UStaticMesh*>(StaticMesh));

		 const FName & MeshLabel = FName(StaticMesh->GetName());

		AActor* NewActor = GEngine->GetWorldContexts()[0].World()->SpawnActor<AActor>();
		if (!NewActor)
			return false;
		NewActor->SetActorLabel(StaticMesh->GetName());
		UStaticMeshComponent* StaticMeshComponent = NewObject<UStaticMeshComponent>(NewActor, MeshLabel);
		StaticMeshComponent->SetStaticMesh(const_cast<UStaticMesh*>(StaticMesh));
		StaticMeshComponent->AttachToComponent(NewActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		StaticMeshComponent->SetupAttachment(NewActor->GetRootComponent());
		StaticMeshComponent->RegisterComponent();
		

		

		//GEngine->GetWorldContexts()[0].World()->
		// Access properties of the StaticMesh

		TArray<AStaticMeshActor*> StaticMeshActors;
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GEngine->GetWorldContexts()[0].World(), AStaticMeshActor::StaticClass()/*NewActor->GetClass()*/, FoundActors);
		AStaticMeshActor* FoundActor = nullptr;

		for (AActor* Actor : FoundActors)
		{
		//	FMetaDataUtilities::DumpMetaData(Cast<UMetaData>(Actor));
			//TMap<FName, FAssetRegistryTagMetadata> OutMetadata;
			//Actor->GetAssetRegistryTagMetadata(OutMetadata);
			//
			//for (const auto& AssetTagMetaDataPair : OutMetadata)
			//{
			//	FString keyStr = AssetTagMetaDataPair.Key.GetPlainNameString();

			//	if (!AssetTagMetaDataPair.Value.DisplayName.IsEmpty())
			//	{
			//		const FName DisplayName = MakeObjectNameFromDisplayLabel(AssetTagMetaDataPair.Value.DisplayName.ToString(), NAME_None);
			//	//	AliasToSourceTagMapping->Add(DisplayName, AssetTagMetaDataPair.Key);
			//	}
			//}

		
			AStaticMeshActor* StaticMeshActor = Cast<AStaticMeshActor>(Actor);
			if (StaticMeshActor)
			{
				UStaticMeshComponent* StaticActMeshComponent = StaticMeshActor->GetStaticMeshComponent();
				if (StaticActMeshComponent && StaticActMeshComponent->GetStaticMesh() == StaticMesh)
				{
					Actor->SetActorLabel(StaticMesh->GetName());
					StaticMeshActors.Add(StaticMeshActor);
					const FString actorLabel = StaticMeshActor->GetActorLabel();

					//UDatasmithAssetUserData* pAssetUserData = UDatasmithAssetUserData::GetDatasmithUserData(StaticActMeshComponent->GetStaticMesh());
					//if (!pAssetUserData)
					//{
					//	UE_LOG(LogGLTF, Display, TEXT("Failed to Get Extra field in the Metadata"));
					//	continue;
					//}

					// Get the Extra Fields
					//CustomExtraField* pAssetUserData = StaticActMeshComponent->GetStaticMesh()->GetAssetUserData<CustomExtraField>();
					//if (pAssetUserData)
					//{
					//	TMap<FString, FString> oExtraroperties;
					//	//pAssetUserData->GetMetaData(StaticActMeshComponent->GetStaticMesh(), oExtraroperties);
					//	oExtraroperties = pAssetUserData->Extras;
					//}

					FGLTFJsonMesh* GltfMesh = Builder.AddUniqueMesh(StaticActMeshComponent->GetStaticMesh());
					
					if (GltfMesh == nullptr)
					{
						Builder.LogError(FString::Printf(TEXT("Failed to export static mesh %s"), *StaticMesh->GetName()));
						continue;;
					}
					FGLTFJsonNode* Node = Builder.AddNode();
					Node->Mesh = GltfMesh;
					Node->Name = StaticMeshActor->GetActorLabel();
					FGLTFJsonScene* Scene = Builder.AddScene();
					Scene->Nodes.Add(Node);
					Builder.DefaultScene = Scene;
					return true;

				}
			}
		}
		

	}
	/*const UStaticMesh* StaticMesh = CastChecked<UStaticMesh>(Object);
	const AStaticMeshActor* StaticMeshActor = CastChecked<AStaticMeshActor>(StaticMesh);
	const UStaticMeshComponent* StaticMeshComp = StaticMeshActor->GetStaticMeshComponent();
	FGLTFJsonMesh* GltfMesh = Builder.AddUniqueMesh(StaticMeshComp->GetStaticMesh());
	if (GltfMesh == nullptr)
	{
		Builder.LogError(FString::Printf(TEXT("Failed to export static mesh %s"), *StaticMesh->GetName()));
		return false;
	}
	
	FGLTFJsonNode* Node = Builder.AddNode();
	Node->Mesh = GltfMesh;
	Node->Name = StaticMeshActor->GetActorLabel();

	FGLTFJsonScene* Scene = Builder.AddScene();
	Scene->Nodes.Add(Node);
	Builder.DefaultScene = Scene;*/
	return true;
}
