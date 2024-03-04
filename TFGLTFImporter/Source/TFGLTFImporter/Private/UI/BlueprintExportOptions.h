// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "BlueprintExportOptions.generated.h"

/**
 * 
 */
UCLASS(config = EditorPerProjectUserSettings, HideCategories = (DebugProperty))
class TFGLTFIMPORTER_API UBlueprintExportOptions : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(BlueprintReadWrite,config, EditAnywhere,meta =(ToolTip ="Blueprint actor to gltf/glb"))
		TArray<TSubclassOf<AActor>> BlueprintActorClasses;

	UPROPERTY(BlueprintReadWrite, config, EditAnywhere, meta = (ToolTip = "If false it will export gltf"))
		bool bGLb;

	//TArray<FAssetData> GLTFAssetClasses();

};
