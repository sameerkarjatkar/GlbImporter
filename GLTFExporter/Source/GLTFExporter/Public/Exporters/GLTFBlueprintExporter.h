#pragma once

#include "Exporters/GLTFExporter.h"
#include "Engine/SCS_Node.h"
#include "Builders/GLTFContainerBuilder.h"
#include "GLTFBlueprintExporter.generated.h"



UCLASS()
class GLTFEXPORTER_API UGLTFBlueprintExporter : public UGLTFExporter
{
public:

	GENERATED_BODY()

		explicit UGLTFBlueprintExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer());

	virtual bool AddObject(FGLTFContainerBuilder& Builder, const UObject* Object) override;

private:
	USCS_Node* UGetRootNode(USimpleConstructionScript* SCS);
	void AddNewNode(USCS_Node* UNode, USCS_Node* ParentNode, FGLTFJsonNode* JParentNode, FGLTFContainerBuilder& Builder);
	FGLTFJsonNode* AddParentNode(USCS_Node* ParentNode, FGLTFContainerBuilder& Builder);
	FGLTFJsonNode* AddChildrenNodes(FGLTFJsonNode* JParentNode, USCS_Node* ChildNode, FGLTFContainerBuilder& Builder);
	FGLTFJsonNode* AddStaticMesh(UStaticMeshComponent* StaticMeshComponent, FGLTFContainerBuilder& Builder);
	FGLTFJsonNode* AddScene(USceneComponent* SceneComponent, FGLTFContainerBuilder& Builder);
	void SetComponentLoction(USceneComponent* SceneComponent, FGLTFJsonNode* JNode);
	void SetComponentRotation(USceneComponent* SceneComponent, FGLTFJsonNode* JNode);
	void SetComponentScale(USceneComponent* SceneComponent, FGLTFJsonNode* JNode);

	TArray<FGLTFJsonNode*> JSONNodes;
	FGLTFJsonScene* Scene;
};
