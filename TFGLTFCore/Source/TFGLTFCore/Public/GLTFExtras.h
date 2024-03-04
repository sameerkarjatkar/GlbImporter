// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"

namespace GLTF
{
	struct TFGLTFCORE_API FExtras
	{
		TMap<FString, FString> Extras; // Store Extra Information   
		TSharedPtr<FJsonObject> ExtrasInfo;
		FExtras()
		    
		{
		}
	};

}  // namespace GLTF
