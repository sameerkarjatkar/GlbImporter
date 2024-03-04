#include "Exporters/GLTFBlueprintExporter.h"
#include "Utilities/GLTFCoreUtilities.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "CustomProperty.h"

#include "Engine/World.h"


UGLTFBlueprintExporter::UGLTFBlueprintExporter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UBlueprint::StaticClass();
}

bool UGLTFBlueprintExporter::AddObject(FGLTFContainerBuilder& Builder, const UObject* Object)
{
	const UBlueprint* GLTFBlueprint = CastChecked<UBlueprint>(Object);	
	USimpleConstructionScript* SCS = GLTFBlueprint->SimpleConstructionScript;
	USCS_Node* URootNode = UGetRootNode(SCS);
	TArray<USCS_Node*> Nodes = URootNode->GetChildNodes();
	JSONNodes.Empty();
	Scene = Builder.AddScene();

	for (USCS_Node* UNode : Nodes)
	{
		AddNewNode(UNode, URootNode,nullptr, Builder);
	}
	
	Builder.DefaultScene = Scene;
	return true;
}

USCS_Node* UGLTFBlueprintExporter::UGetRootNode(USimpleConstructionScript* SCS)
{
	TArray<USCS_Node*> Nodes = SCS->GetAllNodes();
	for (USCS_Node* UNode : Nodes)
	{
		if (UNode->IsRootNode())
		{
			return UNode;
		}
	}
	return nullptr;
}

void UGLTFBlueprintExporter::AddNewNode(USCS_Node* UNode, USCS_Node* ParentNode, FGLTFJsonNode* JParentNode, FGLTFContainerBuilder& Builder)
{
	if (ParentNode->IsRootNode())
	{
		FGLTFJsonNode* JNode = AddParentNode(UNode, Builder);
		if (JNode)
		{
			Scene->Nodes.Add(JNode);
		}
		
		if (UNode->ChildNodes.Num() != 0)
		{
			TArray<USCS_Node*> UCNodes = UNode->GetChildNodes();
			for (USCS_Node* UCNode : UCNodes)
			{
				AddNewNode(UCNode, UNode, JNode, Builder);
			}
				
		}
	}
	else
	{
			
		FGLTFJsonNode* JPNode = AddChildrenNodes(JParentNode, UNode, Builder);
		if (JPNode)
		{
			//Scene->Nodes.Add(JPNode);
		}
		if (UNode->ChildNodes.Num() != 0)
		{
			TArray<USCS_Node*> UCNodes = UNode->GetChildNodes();
			for (USCS_Node* UCNode : UCNodes)
			{
				AddNewNode(UCNode, UNode, JPNode, Builder);
			}
		}
	}	
}

FGLTFJsonNode* UGLTFBlueprintExporter::AddParentNode(USCS_Node* ParentNode, FGLTFContainerBuilder& Builder)
{
	UStaticMeshComponent* StaticActMeshComponent = Cast<UStaticMeshComponent>(ParentNode->ComponentTemplate);
	if (StaticActMeshComponent)
	{
		const UStaticMesh* StaticMesh = StaticActMeshComponent->GetStaticMesh();
		if (StaticMesh)
		{
			FGLTFJsonNode* JNode = AddStaticMesh(StaticActMeshComponent, Builder);
			return JNode;
		}
	}

	USceneComponent* SceneComponent = Cast<USceneComponent>(ParentNode->ComponentTemplate);
	FGLTFJsonNode* Node = AddScene(SceneComponent, Builder);
	return Node;
}

FGLTFJsonNode* UGLTFBlueprintExporter::AddChildrenNodes(FGLTFJsonNode* JParentNode, USCS_Node* ChildNode, FGLTFContainerBuilder& Builder)
{
	UStaticMeshComponent* StaticActMeshComponent = Cast<UStaticMeshComponent>(ChildNode->ComponentTemplate);
	if (StaticActMeshComponent)
	{
		FGLTFJsonNode* Node = AddStaticMesh(StaticActMeshComponent, Builder);
		JParentNode->Children.AddUnique(Node);
		return Node;
	}
	
	USceneComponent* SceneComponent = Cast<USceneComponent>(ChildNode->ComponentTemplate);
	FGLTFJsonNode* Node = AddScene(SceneComponent, Builder);
	JParentNode->Children.AddUnique(Node);
	return Node;
}

FGLTFJsonNode* UGLTFBlueprintExporter::AddStaticMesh(UStaticMeshComponent* StaticMeshComponent, FGLTFContainerBuilder& Builder)
{
	const UStaticMesh* StaticMesh = StaticMeshComponent->GetStaticMesh();
	if (StaticMesh)
	{
		FGLTFJsonMesh* Mesh = nullptr;
		FGLTFJsonNode* Node = Builder.AddNode();
		Mesh = Builder.AddUniqueMesh(StaticMeshComponent);
		Node->Mesh = Mesh;
		
		//Add Name
		FString SMCName = StaticMeshComponent->GetName();
		int32 UnderscoreIndex = SMCName.Find(TEXT("_GEN"));

		if (UnderscoreIndex != INDEX_NONE)
		{
			// Extract the substring before the underscore.
			FString FormattedName = SMCName.Left(UnderscoreIndex);
			Node->Name = FormattedName;
		}

		// Add Transform
		SetComponentLoction(StaticMeshComponent, Node);
		SetComponentRotation(StaticMeshComponent, Node);
		SetComponentScale(StaticMeshComponent, Node);
		
		return Node;
	}
	return nullptr;
}

FGLTFJsonNode* UGLTFBlueprintExporter::AddScene(USceneComponent* SceneComponent, FGLTFContainerBuilder& Builder)
{
		FGLTFJsonNode* Node = Builder.AddNode();

		//Add name
		FString SMCName = SceneComponent->GetName();
		int32 UnderscoreIndex = SMCName.Find(TEXT("_GEN"));

		if (UnderscoreIndex != INDEX_NONE)
		{
			// Extract the substring before the underscore.
			FString FormattedName = SMCName.Left(UnderscoreIndex);
			Node->Name = FormattedName;
		}

		//Add Transform
		SetComponentLoction(SceneComponent, Node);
		SetComponentRotation(SceneComponent, Node);
		SetComponentScale(SceneComponent, Node);
	return Node;
}

void UGLTFBlueprintExporter::SetComponentLoction(USceneComponent* SceneComponent, FGLTFJsonNode* JNode)
{
	FVector SMLVector = SceneComponent->GetRelativeLocation();
	FVector3f ConvertedPosition(SMLVector.X, SMLVector.Y, SMLVector.Z);
	FGLTFVector3 JTranslation = FGLTFCoreUtilities::ConvertPosition(ConvertedPosition, 0.01f);
	JNode->Translation = JTranslation;
}

void UGLTFBlueprintExporter::SetComponentRotation(USceneComponent* SceneComponent, FGLTFJsonNode* JNode)
{
	const FRotator SMRRotator = SceneComponent->GetRelativeRotation();
	FRotator3f Yup(SMRRotator.Pitch, SMRRotator.Yaw, SMRRotator.Roll);
	FGLTFQuaternion SMRQuaternion = FGLTFCoreUtilities::ConvertRotation(Yup);
	JNode->Rotation = SMRQuaternion;

}

void UGLTFBlueprintExporter::SetComponentScale(USceneComponent* SceneComponent, FGLTFJsonNode* JNode)
{
	FVector3d SMSVector = SceneComponent->GetRelativeScale3D();
	FVector3f ConvertedScale(SMSVector.X, SMSVector.Y, SMSVector.Z);
	FGLTFVector3 JScale = FGLTFCoreUtilities::ConvertScale(ConvertedScale);
	JNode->Scale = JScale;
}
