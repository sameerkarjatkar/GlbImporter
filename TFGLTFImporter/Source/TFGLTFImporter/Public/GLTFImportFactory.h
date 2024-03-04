// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
//#include "TFGLTFImportModule.h"
#include "GLTFImportFactory.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGLTF, Log, All);

class ITGLTFImporterModule;
class BlueprintCreationFactory;

UCLASS(transient)
class UGLTFImportFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename,
	                                   const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;

	virtual void CleanUp() override;
	virtual bool FactoryCanImport(const FString& Filename) override;
	virtual TArray<FString> GetFormats() const override;

private:
	void UpdateMeshes() const;
	void UpdateNodes() const;
	void CreateBluePrints(std::shared_ptr < UBlueprint> & oBP);
	void ReadDracoCompressedFile(const FString& Filename, FString& oFilename);
	void PostprocessShaders(const std::shared_ptr < UBlueprint>& iBP);

private:
	ITGLTFImporterModule* GLTFImporterModule;
	std::shared_ptr<BlueprintCreationFactory> BluePrintCreator;
};
