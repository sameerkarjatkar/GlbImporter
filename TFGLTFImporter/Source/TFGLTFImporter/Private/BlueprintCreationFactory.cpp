// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintCreationFactory.h"


//Blueprint
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "ComponentAssetBroker.h"
#include "Engine/SCS_Node.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StaticMeshActor.h"


//Animations
#include "ActorSequenceComponent.h"
#include "ActorSequence.h"
#include "MovieScene.h"
#include "Tracks/MovieScene3DTransformTrack.h"
#include "Sections/MovieScene3DTransformSection.h"
#include "Channels/MovieSceneChannelProxy.h"
#include"Channels/MovieSceneDoubleChannel.h"
#include "TFGLTFCore/Private/TFGLTF/ConversionUtilities.h"


//Utils
#include "Utils/TFGLTFUtils.h"


BlueprintCreationFactory::BlueprintCreationFactory()
{
}


bool BlueprintCreationFactory::CreateBlueprint(const FGLTFImporterContext &Context, std::shared_ptr < UBlueprint>& CreatedBlueprint)
{
	//UBlueprint* CreatedBlueprint = FKismetEditorUtilities::CreateBlueprintFromClass(FText::FromString("My Window Title"), AActor::StaticClass(), Context.Asset.Name);
	UBlueprint* RawBlueprint = FKismetEditorUtilities::CreateBlueprintFromClass(FText::FromString("Create Blueprint"), AActor::StaticClass(), Context.Asset.Name);

	if (RawBlueprint)
	{
		if (Context.Asset.Nodes.Num() > 0)
		{
			AddNodes(RawBlueprint, Context);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No Elements in the array of Static Meshes"))
		}



		CreatedBlueprint = std::shared_ptr<UBlueprint>(RawBlueprint, [](UBlueprint* Ptr) {
			// Do nothing in the deleter since Unreal manages the object's lifetime
			});

		for (const GLTF::FAnimation& GLTFAnimation : Context.Asset.Animations )
		{
			HandleAnimation(CreatedBlueprint.get(), GLTFAnimation, Context);
		}

		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(CreatedBlueprint.get());
		FKismetEditorUtilities::CompileBlueprint(CreatedBlueprint.get(), EBlueprintCompileOptions::BatchCompile);

		
		//oBP = CreatedBlueprint;
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Fail to create Blueprint"));
		return false;
	}

}



void BlueprintCreationFactory::AddNodes(UBlueprint* NewBP, const FGLTFImporterContext& Context)
{
	
	NodeMap = PopulateNodeMap(Context);
	USimpleConstructionScript* SCS = NewBP->SimpleConstructionScript;
	BPNodeMap.Reset();
	
	if (SCS)
	{
		//Add default root nodeto the blueprint
		TSubclassOf<UActorComponent> ComponentClass = USceneComponent::StaticClass();
		USCS_Node* Node = SCS->CreateNode(ComponentClass);
		SCS->AddNode(Node);
		Node->AddToRoot();
		BPNodeMap.Add(-1, Node);
		Node->SetVariableName("__root__", true);
		if (USceneComponent* SceneComponent = Cast<USceneComponent>(Node->ComponentTemplate))
		{
			SceneComponent->SetMobility(EComponentMobility::Static);
		}

		// Iterate over the array of static meshes
		for (int32 i = 0; i<NodeMap.Num();i++)
		{
			while (j != i)
			{
				j = CreateNewNode(NewBP, Context, i, SCS);
			}
			
		}
		FKismetEditorUtilities::CompileBlueprint(NewBP, EBlueprintCompileOptions::BatchCompile);
	}
}

int32 BlueprintCreationFactory::CreateNewNode(UBlueprint* NewBP, const FGLTFImporterContext& Context, int32 i, USimpleConstructionScript* SCS)
{
	GLTF::FNode* CurrentNode = NodeMap.Find(i);
	
	TArray<USCS_Node*> AllNodes = NewBP->SimpleConstructionScript->GetAllNodes();

	//Attach Node 
	if (!BPNodeMap.Contains(i))
	{
		if (BPNodeMap.Contains(CurrentNode->ParentIndex))
		{

			if (nodeName.find(CurrentNode->Name) != nodeName.end())
			{
				UE_LOG(LogTemp, Warning, TEXT("Duplicate Variable names not supported ..skipping the node creation "));
				return i;
			}
			else
			nodeName.insert(CurrentNode->Name);

			
			AllNodes.Empty();
			AllNodes = NewBP->SimpleConstructionScript->GetAllNodes();
			
			USCS_Node* NewNode = CreateActorComponent(Context, CurrentNode, SCS);
			
			AllNodes.Empty();
			AllNodes = NewBP->SimpleConstructionScript->GetAllNodes();
			
			BPNodeMap.FindRef(CurrentNode->ParentIndex)->AddChildNode(NewNode);

			AllNodes.Empty();
			AllNodes = NewBP->SimpleConstructionScript->GetAllNodes();

			BPNodeMap.Add(i, NewNode);
			NewNode->SetVariableName(*CurrentNode->Name, true);
				
			if (USceneComponent* SceneComponent = Cast<USceneComponent>(NewNode->ComponentTemplate))
			{
				SceneComponent->SetRelativeLocation(CurrentNode->Transform.GetLocation()*100);
				SceneComponent->SetRelativeRotation(CurrentNode->Transform.GetRotation());
				SceneComponent->SetRelativeScale3D(CurrentNode->Transform.GetScale3D());
				SceneComponent->SetMobility(EComponentMobility::Static);
			}	
			
		}

		else
		{
			i = CreateNewNode(NewBP, Context, CurrentNode->ParentIndex, SCS);				
		}
				
	}
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(NewBP);
	return i;
}

TMap<int32, GLTF::FNode> BlueprintCreationFactory::PopulateNodeMap(const FGLTFImporterContext& Context)
{
	TArray<GLTF::FNode>  NodesArray = Context.Asset.Nodes;
	for (int32 i = 0; i < NodesArray.Num(); i++)
	{
		NodeMap.Add(i, NodesArray[i]);
	}
	return NodeMap;
	
}

USCS_Node* BlueprintCreationFactory::CreateActorComponent(const FGLTFImporterContext& Context, GLTF::FNode* CurrentNode, USimpleConstructionScript* SCS)
{
	if (CurrentNode->Type == GLTF::FNode::EType::Mesh || CurrentNode->Type == GLTF::FNode::EType::MeshSkinned)
	{
		UStaticMesh* Mesh = Context.StaticMeshFactory.GetMeshes()[CurrentNode->MeshIndex];
		
		TSubclassOf<UActorComponent> ComponentClass = FComponentAssetBrokerage::GetPrimaryComponentForAsset(Mesh->GetClass());
		USCS_Node* Node = SCS->CreateNode(ComponentClass);

		// Material Handeling
		TFGLTFUtils::SetMaterialShaders(Mesh, Context.MaterialShaders);
		// Assign the asset to the template
		FComponentAssetBrokerage::AssignAssetToComponent(Node->ComponentTemplate, Mesh);
		SCS->AddNode(Node);
		return Node;
	}

	else if (CurrentNode->Type == GLTF::FNode::EType::Transform || CurrentNode->Type == GLTF::FNode::EType::None || CurrentNode->Type == GLTF::FNode::EType::Joint)
	{
		TSubclassOf<UActorComponent> ComponentClass = USceneComponent::StaticClass();
		USCS_Node* Node = SCS->CreateNode(ComponentClass);
		SCS->AddNode(Node);
		return Node;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unknown type "));
		return nullptr;
	}
}

void BlueprintCreationFactory::HandleAnimation(UBlueprint* NewBP, const GLTF::FAnimation& GLTFAnimation, const FGLTFImporterContext& Context)
{
	TSubclassOf<UActorComponent> ComponentClass = UActorSequenceComponent::StaticClass();
	USCS_Node* Node = NewBP->SimpleConstructionScript->CreateNode(ComponentClass);
	Node->SetVariableName(*GLTFAnimation.Name);
	NewBP->SimpleConstructionScript->AddNode(Node);

	UActorSequenceComponent* ASequenceComponent = Cast<UActorSequenceComponent>(Node->ComponentTemplate);
	if (ASequenceComponent)
	{
		UActorSequence* ASequence = ASequenceComponent->GetSequence();
		if (ASequence)
		{
			UMovieScene* MovieScene = ASequence->GetMovieScene();

			if (MovieScene)
			{
				FGuid OwnerGuid = MovieScene->GetPossessable(0).GetGuid();
				FMovieScenePossessable OwnerScene = MovieScene->GetPossessable(0);

				USCS_Node* BindingNode = nullptr;
				FGuid CompnentGuid;
				UMovieScene3DTransformSection* TransformSection = nullptr;
				int32 EndFrame = 0;
				float DesiredFPS = 30;
				//FFrameRate DesiredFrameRate = FFrameRate(30, 1);
				// Set frame rate of the movie scene
				for (const GLTF::FAnimation::FSampler& Sampler : GLTFAnimation.Samplers)
				{
					if (EndFrame < static_cast<int32>(Sampler.Input.Count))
					{
						EndFrame = Sampler.Input.Count;
						TArray<float> FrameTimes;
						FrameTimes.Empty(Sampler.Input.Count);
						Sampler.Input.GetFloatArray(FrameTimes);
						DesiredFPS = Sampler.Input.Count / FrameTimes.Last();
					}
				}
				FFrameRate DesiredFrameRate = FFrameRate(DesiredFPS, 1);
				MovieScene->SetTickResolutionDirectly(DesiredFrameRate);
				MovieScene->SetDisplayRate(DesiredFrameRate);
				MovieScene->SetPlaybackRange(TRange<FFrameNumber>(FFrameNumber(0), FFrameNumber(EndFrame)));


				for (const GLTF::FAnimation::FChannel& Channel : GLTFAnimation.Channels)
				{

					const GLTF::FAnimation::FSampler& Sampler = GLTFAnimation.Samplers[Channel.Sampler];

					if (BindingNode != ReturnNode(NewBP, Channel))
					{
						BindingNode = ReturnNode(NewBP, Channel);


						CompnentGuid = MovieScene->AddPossessable(Channel.Target.Node.Name, BindingNode->ComponentTemplate.GetClass());
						UObject* BindingObject = BindingNode->ComponentTemplate;
						ASequence->BindPossessableObject(CompnentGuid, *BindingObject, NewBP->GeneratedClass->GetDefaultObject());

						FMovieScenePossessable* ChildPossessable = MovieScene->FindPossessable(CompnentGuid);
						if (ensure(ChildPossessable))
						{
							ChildPossessable->SetParent(OwnerGuid, MovieScene);
						}

						UMovieScene3DTransformTrack* TransformTrack = MovieScene->AddTrack<UMovieScene3DTransformTrack>(CompnentGuid);
						TransformSection = Cast<UMovieScene3DTransformSection>(TransformTrack->CreateNewSection());



						TransformSection->SetBlendType(EMovieSceneBlendType::Absolute);
						TransformTrack->AddSection(*TransformSection);

						TransformSection->SetRange(TRange<FFrameNumber>(FFrameNumber(0), FFrameNumber(EndFrame)));

					}
					AddKeys(TransformSection, Sampler, Channel, MovieScene, DesiredFrameRate);

					TransformSection->Modify();
					MovieScene->Modify();
					UE_LOG(LogTemp, Warning, TEXT("Unknown type "));

				}

			}
		}
	}
}

USCS_Node* BlueprintCreationFactory::ReturnNode(UBlueprint* NewBP, const GLTF::FAnimation::FChannel& Channel)
{
	TArray<USCS_Node*> AllNodes = NewBP->SimpleConstructionScript->GetAllNodes();
	for (USCS_Node* AnimNode : AllNodes)
	{
		FString Name = AnimNode->ComponentTemplate.GetName();
		int32 UnderscoreIndex = Name.Find(TEXT("_GEN"));

		if (UnderscoreIndex != INDEX_NONE)
		{
			// Extract the substring before the underscore.
			FString FormattedName = Name.Left(UnderscoreIndex);

			if (FormattedName == Channel.Target.Node.Name)
			{
				return AnimNode;
			}
		}
	}
	return nullptr;
}

void BlueprintCreationFactory::AddKeys(UMovieScene3DTransformSection* TransformSection, const GLTF::FAnimation::FSampler& Sampler, const GLTF::FAnimation::FChannel& Channel, UMovieScene* MovieScene, FFrameRate DesiredFrameRate)
{

	TArray<float> FrameTimes;

	FrameTimes.Empty(Sampler.Input.Count);

	Sampler.Input.GetFloatArray(FrameTimes);



	switch (Channel.Target.Path)
	{
	case GLTF::FAnimation::EPath::Rotation:
	{
		//Rotation Channel
		FMovieSceneDoubleChannel* ChannelRoll = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(3);
		FMovieSceneDoubleChannel* ChannelPitch = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(4);
		FMovieSceneDoubleChannel* ChannelYaw = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(5);

		TArray<FVector4f> FrameDataRotation;
		FrameDataRotation.Empty(Sampler.Output.Count);
		Sampler.Output.GetQuatArray(FrameDataRotation);

		for (int i = 0; i < FrameTimes.Num(); i++)
		{
			int32 FrameNumber = FMath::RoundToInt(FrameTimes[i] * DesiredFrameRate.AsDecimal());
			FQuat4f Rot(FrameDataRotation[i].X, FrameDataRotation[i].Y, FrameDataRotation[i].Z, FrameDataRotation[i].W);
			//FVector3f ConvertedRot = GLTF::ConvertQuat(Rot).Euler();
			FVector3f ConvertedRot = Rot.Euler();

			ChannelRoll->AddLinearKey(FrameNumber, ConvertedRot.X);
			ChannelPitch->AddLinearKey(FrameNumber, ConvertedRot.Y);
			ChannelYaw->AddLinearKey(FrameNumber, ConvertedRot.Z);
		}
		break;
	}
	case GLTF::FAnimation::EPath::Translation:
	{
		//Translation Channel
		FMovieSceneDoubleChannel* ChannelX = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(0);
		FMovieSceneDoubleChannel* ChannelY = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(1);
		FMovieSceneDoubleChannel* ChannelZ = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(2);

		TArray<FVector3f> FrameDataTranslation;
		FrameDataTranslation.Empty(Sampler.Output.Count);
		Sampler.Output.GetVec3Array(FrameDataTranslation);

		for (int i = 0; i < FrameTimes.Num(); i++)
		{
			int32 FrameNumber = FMath::RoundToInt(FrameTimes[i] * DesiredFrameRate.AsDecimal());
			FVector Location(FrameDataTranslation[i].X, FrameDataTranslation[i].Y, FrameDataTranslation[i].Z);
			FVector Position = GLTF::ConvertVec3(Location * 100);
			ChannelX->AddLinearKey(FrameNumber, Position.X);
			ChannelY->AddLinearKey(FrameNumber, Position.Y);
			ChannelZ->AddLinearKey(FrameNumber, Position.Z);
		}
		break;
	}
	case GLTF::FAnimation::EPath::Scale:
	{
		//ScaleChannel
		FMovieSceneDoubleChannel* ChannelSX = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(6);
		FMovieSceneDoubleChannel* ChannelSY = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(7);
		FMovieSceneDoubleChannel* ChannelSZ = TransformSection->GetChannelProxy().GetChannel<FMovieSceneDoubleChannel>(8);



		for (int i = 0; i < FrameTimes.Num(); i++)
		{
			/*	ChannelSX->AddLinearKey(i, FrameDataTranslation[i].X );
				ChannelSY->AddLinearKey(i, FrameDataTranslation[i].Z );
				ChannelSZ->AddLinearKey(i, FrameDataTranslation[i].Y );*/
		}
		break;
	}
	}
}
