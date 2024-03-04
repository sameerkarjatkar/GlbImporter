#include "TFGLTFImporterCommands.h"

#define LOCTEXT_NAMESPACE "FTFGLTFImporterModule"

void FTFGLTFImporterCommands::RegisterCommands()
{
	UI_COMMAND(ImportAction, "TFGLTFImporter", "Execute TFGLTFImporter action", EUserInterfaceActionType::Button, FInputChord());
	//UI_COMMAND(ExportAction, "TFGLTFImporter", "Execute TFGLTFImporter action", EUserInterfaceActionType::Button, FInputChord());
}
#undef LOCTEXT_NAMESPACE