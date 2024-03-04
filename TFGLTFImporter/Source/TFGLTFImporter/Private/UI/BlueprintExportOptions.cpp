// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/BlueprintExportOptions.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "CoreTypes.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(BlueprintExportOptions)

UBlueprintExportOptions::UBlueprintExportOptions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, BlueprintActorClasses()
	, bGLb(true)
{}

//TArray<FAssetData> UBlueprintExportOptions::GLTFAssetClasses()
//{
//        // Define the folder path you want to search for AActor classes
//        FName FolderPath = TEXT("/Game/Blueprints"); // Change "YourFolder" to your desired folder path
//
//        // Create a filter for UClass to search for AActor classes
//        //UClass* BaseClass = AActor::StaticClass();
//
//        // Use the Asset Registry Module to retrieve asset data from the specified folder
//        TArray<FAssetData> AssetData;
//        FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
//        AssetRegistryModule.Get().GetAssetsByPath(FolderPath, AssetData);
//
//        //// Array to store the found AActor classes
//        //TArray<UClass*> ActorClasses;
//
//        //// Iterate through the asset data and filter AActor classes
//        //for (const FAssetData& Data : AssetData)
//        //{
//        //    UClass* AssetClass = Cast<UClass>(Data.GetAsset());
//        //    if (AssetClass && AssetClass->IsChildOf(BaseClass))
//        //    {
//        //        ActorClasses.Add(AssetClass);
//        //    }
//        //}
//	return AssetData;
//}
