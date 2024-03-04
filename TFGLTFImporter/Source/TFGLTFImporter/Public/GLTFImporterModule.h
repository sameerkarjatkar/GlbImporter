// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "IAssetTools.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

struct FGLTFImporterContext;

/**
 * The public interface of the GLTFImporter module
 */
class ITGLTFImporterModule : public IModuleInterface
{
public:
	/**
	 * Singleton-like access to IGLTFImporter
	 *
	 * @return Returns IGLTFImporter singleton instance, loading the module on demand if needed
	 */
	static ITGLTFImporterModule& Get()
	{
		return FModuleManager::LoadModuleChecked<ITGLTFImporterModule>("TFGLTFImporter");
	}

	/**
	 * Access to the internal context that can be used to import GLTF files
	 *
	 * @return Returns the internal context
	 */
	virtual FGLTFImporterContext& GetImporterContext() = 0;

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("TFGLTFImporter");
	}
	TSharedPtr<class FUICommandList> PluginCommands;

	void ImportButtonClicked();
	void ExportButtonClicked();
	void RegisterMenus();

private:
	bool bOpened;
};
