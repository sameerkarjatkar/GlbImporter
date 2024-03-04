// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GLTFAsset.h"
#include "GLTFLogger.h"
#include "GLTFMaterialFactory.h"
#include "GLTFReader.h"
#include "GLTFStaticMeshFactory.h"

#include "Materials/MaterialInstanceDynamic.h"


class UMaterial;
struct FGLTFImporterContext
{
	mutable TArray<GLTF::FLogMessage> LogMessages;
	GLTF::FFileReader                 Reader;
	GLTF::FAsset                      Asset;
	GLTF::FStaticMeshFactory          StaticMeshFactory;
	GLTF::FMaterialFactory            MaterialFactory;
	GLTF::FNode                       Node;
	TArray<UMaterial*>                Materials;
	std::vector<UMaterialInstanceDynamic*> MaterialShaders;

	FGLTFImporterContext();

	bool OpenFile(const FString& FilePath);

	const TArray<UStaticMesh*>& CreateMeshes(UObject* ParentPackage, EObjectFlags Flags, bool bApplyPostEditChange);
	const TArray<UMaterial*>&   CreateMaterials(UObject* ParentPackage, EObjectFlags Flags);

	const TArray<GLTF::FLogMessage>& GetLogMessages() const;

private:
	
};

inline const TArray<UStaticMesh*>& FGLTFImporterContext::CreateMeshes(UObject* ParentPackage, EObjectFlags Flags, bool bApplyPostEditChange)
{
	return StaticMeshFactory.CreateMeshes(Asset, ParentPackage, Flags, bApplyPostEditChange);
}
