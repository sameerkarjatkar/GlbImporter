// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SCS_Node.h"

#include "ISequencer.h"
#include "ISequencerModule.h"

#include "GLTFImporterContext.h"
#include <set>
/**
 * 
 */

class UMovieScene3DTransformSection;
class TFGLTFIMPORTER_API BlueprintCreationFactory
{
public:
	BlueprintCreationFactory();
	bool CreateBlueprint(const FGLTFImporterContext &Context, std::shared_ptr < UBlueprint>& CreatedBlueprint);
	TMap<int32, GLTF::FNode> NodeMap;
	TMap<int32, USCS_Node*> BPNodeMap;
	int32 j = -1;
private:

	void AddNodes(UBlueprint* NewBP, const FGLTFImporterContext& Context);
	int32 CreateNewNode(UBlueprint* NewBP, const FGLTFImporterContext& Context, int32 i, USimpleConstructionScript* SCS);
	TMap<int32, GLTF::FNode>PopulateNodeMap(const FGLTFImporterContext& Context);
	std::set<FString> nodeName;
	USCS_Node* CreateActorComponent(const FGLTFImporterContext& Context, GLTF::FNode* CurrentNode, USimpleConstructionScript* SCS);
	void HandleAnimation(UBlueprint* NewBP, const GLTF::FAnimation& GLTFAnimation, const FGLTFImporterContext& Context);
	USCS_Node* ReturnNode(UBlueprint* NewBP, const GLTF::FAnimation::FChannel& Channel);
	void AddKeys(UMovieScene3DTransformSection* TransformSection, const GLTF::FAnimation::FSampler& Sampler, const GLTF::FAnimation::FChannel& Channel, UMovieScene* MovieScene, FFrameRate DesiredFrameRate);
};
