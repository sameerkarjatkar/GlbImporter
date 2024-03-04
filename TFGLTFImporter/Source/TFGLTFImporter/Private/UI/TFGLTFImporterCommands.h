#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "TFGLTFImporterStyle.h"

class FTFGLTFImporterCommands : public TCommands<FTFGLTFImporterCommands>
{
public:

	FTFGLTFImporterCommands(): TCommands<FTFGLTFImporterCommands>(TEXT("TFGLTFImporter"), NSLOCTEXT("Contexts", "TFGLTFImporter", "GLTFImporterExtended Plugin"), NAME_None, FTFGLTFImporterStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	//TSharedPtr< FUICommandInfo > PluginAction;
	TSharedPtr< FUICommandInfo > ImportAction;
	//TSharedPtr< FUICommandInfo > ExportAction;
};
