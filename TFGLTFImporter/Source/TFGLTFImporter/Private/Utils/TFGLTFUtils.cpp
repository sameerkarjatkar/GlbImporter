// Fill out your copyright notice in the Description page of Project Settings.


#include "Utils/TFGLTFUtils.h"
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/FileManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"



TFGLTFUtils::TFGLTFUtils()
{
}

TFGLTFUtils::~TFGLTFUtils()
{
}

void TFGLTFUtils::InitMaterialShaders(std::vector<UMaterialInstanceDynamic*>& oMaterialInstance)
{
	FString ShaderPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Plugins"), TEXT("TFGLTFImporter"), TEXT("Content"), TEXT("shaders"));
	if (IFileManager::Get().DirectoryExists(*ShaderPath))
	{
		IFileManager& FileManager = IFileManager::Get();
		TArray<FString> MaterialFiles;
		//std::vector< UMaterialInstanceDynamic*> listDyMaterial;
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
				oMaterialInstance.push_back(DynamicMaterialInstance);
			}
		}
	}
}

void TFGLTFUtils::SetMaterialShaders(UStaticMesh* iMesh, std::vector<UMaterialInstanceDynamic*> oMaterialInstance)
{
	TArray<FStaticMaterial> ListMaterials = iMesh->GetStaticMaterials();

	if (!iMesh->GetName().Compare("Shape_176",ESearchCase::IgnoreCase))
	{
		FName mSlotName = ListMaterials[0].MaterialSlotName;
		int matIndex = iMesh->GetMaterialIndex(mSlotName);

	}

	int iIndex = 0;
	for (; iIndex < ListMaterials.Num(); ++iIndex)
	{
		FName mSlotName = ListMaterials[iIndex].MaterialSlotName;
		int matIndex = iMesh->GetMaterialIndex(mSlotName);

		UE_LOG(LogTemp, Warning, TEXT("Material Index: %d"), matIndex);
		UE_LOG(LogTemp, Warning, TEXT("Material Slot Name: %s"), *mSlotName.ToString());
		if (matIndex >= 0)
		{
			UMaterialInterface* iMaterialObj = iMesh->GetMaterial(matIndex);
			if (iMaterialObj)
			{
				TArray<UTexture*> OriginalTextures;
				iMaterialObj->GetUsedTextures(OriginalTextures, EMaterialQualityLevel::Num, true, ERHIFeatureLevel::Num, true);

				TArray<FMaterialParameterInfo> TexParamInfos;
				TArray<FGuid> TexParamIds;
				iMaterialObj->GetAllTextureParameterInfo(TexParamInfos, TexParamIds);

				if (iMaterialObj->GetBlendMode() == EBlendMode::BLEND_Translucent)
				{
					//iMesh->SetMaterial(matIndex, oMaterialInstance[2]);
					if (TexParamInfos.Num() > 0)
					{
						for (const FMaterialParameterInfo& ParamInfo : TexParamInfos)
						{
							UTexture* TextureValue = nullptr;
							{
								iMaterialObj->GetTextureParameterValue(ParamInfo, TextureValue);
							}

							if (TextureValue && FPackageName::IsValidObjectPath(TextureValue->GetPathName()))
							{
								if (UTexture* InputTexture = Cast<UTexture>(FSoftObjectPath(TextureValue->GetPathName()).TryLoad()))
								{
									iMesh->SetMaterial(ParamInfo.Index, oMaterialInstance[2]);

								}
							}

						}
					}
					else
					{
						iMesh->SetMaterial(matIndex, oMaterialInstance[2]);
					}
				}

				else
				{
					for (const FMaterialParameterInfo& ParamInfo : TexParamInfos)
					{
						UTexture* TextureValue = nullptr;
						{
							iMaterialObj->GetTextureParameterValue(ParamInfo, TextureValue);
						}

						if (TextureValue && FPackageName::IsValidObjectPath(TextureValue->GetPathName()))
						{
							if (UTexture* InputTexture = Cast<UTexture>(FSoftObjectPath(TextureValue->GetPathName()).TryLoad()))
							{
								iMesh->SetMaterial(ParamInfo.Index, oMaterialInstance[3]);

							}
						}

					}

				}
			}
		}
	}
}
