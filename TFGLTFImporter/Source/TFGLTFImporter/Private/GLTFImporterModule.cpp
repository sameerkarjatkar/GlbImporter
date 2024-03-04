// Copyright Epic Games, Inc. All Rights Reserved.

#include "GLTFImporterModule.h"

//Toolbar button
#include "ToolMenu.h"
#include "Misc/MessageDialog.h"
#include "TFGLTFImporter/Private/UI/TFGLTFImporterCommands.h"
#include "TFGLTFImporter/Private/UI/TFGLTFImporterStyle.h"

//Open File Explorer
#include "IDesktopPlatform.h"
#include "DesktopPlatformModule.h"
#include "EditorDirectories.h"

//Import
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "GLTFImportFactory.h"

//Export
#include "Interfaces/IMainFrameModule.h"
#include "UI/GLTFOptionsWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "UI/BlueprintExportOptions.h"
#include "UI/BlueprintExportWindow.h"

#include "GLTFImporterContext.h"

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * glTF Importer module implementation (private)
 */
static const FName GLTFImporterTabName("Import GLTF");

#define LOCTEXT_NAMESPACE "FGLTFImporterModule"

class FGLTFImporterModule : public ITGLTFImporterModule
{
	FGLTFImporterContext ImporterContext;

public:
	virtual FGLTFImporterContext& GetImporterContext() override
	{
		return ImporterContext;
	}

	virtual void StartupModule() override
	{
		FTFGLTFImporterStyle::Initialize();
		FTFGLTFImporterStyle::ReloadTextures();

		FTFGLTFImporterCommands::Register();

		PluginCommands = MakeShared<FUICommandList>();


		PluginCommands->MapAction(
			FTFGLTFImporterCommands::Get().ImportAction,
			FExecuteAction::CreateRaw(this, &FGLTFImporterModule::ImportButtonClicked),
			FCanExecuteAction());

		/*PluginCommands->MapAction(
			FTFGLTFImporterCommands::Get().ExportAction,
			FExecuteAction::CreateRaw(this, &FGLTFImporterModule::ExportButtonClicked),
			FCanExecuteAction());*/

		UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FGLTFImporterModule::RegisterMenus));

	}

	virtual void ShutdownModule() override 
	{
		UToolMenus::UnRegisterStartupCallback(this);

		UToolMenus::UnregisterOwner(this);

		FTFGLTFImporterStyle::Shutdown();

		FTFGLTFImporterCommands::Unregister();
	}

};

	void ITGLTFImporterModule::ImportButtonClicked()
	{
		UE_LOG(LogTemp, Warning, TEXT("Import Button Clicked"));
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

		FString FolderPath;
		TArray<FString> SelectedFiles;
		FString DefaultPath("C:\\Downloads");
		FString DestinationPath = TEXT("/Game/TFS_Assets/");
		// set a default path
		FEditorDirectories::Get().SetLastDirectory(ELastDirectory::GENERIC_EXPORT, DefaultPath);
		//FSlateApplication::Get().GetTopLevelWindows();
		TArray<TSharedRef<SWindow>>pMainDialogWindow = FSlateApplication::Get().GetTopLevelWindows();

		if (DesktopPlatform)
		{
			bOpened = DesktopPlatform->OpenFileDialog(
				pMainDialogWindow[0]->GetNativeWindow()->GetOSWindowHandle(),
				"Open GLB/GLTF File",
				DefaultPath,
				"",
				"GLB Files (*.glb)|*.glb|GLTF Files (*.gltf)|*.gltf",
				EFileDialogFlags::Multiple,
				SelectedFiles
			);
			
		}
		if (bOpened)
		{
			if (SelectedFiles.Num() > 0)
			{
				UGLTFImportFactory* GLTFFactory = NewObject<UGLTFImportFactory>();
				UFactory* ChosenFactory = GLTFFactory;
				//UFactory* ChosenFactory = nullptr;
			
				FEditorDirectories::Get().SetLastDirectory(ELastDirectory::GENERIC_IMPORT, SelectedFiles[0]);
				const bool bSyncToBrowser = false;
				TArray<TPair<FString, FString>>* FilesAndDestination = nullptr;
				AssetTools.ImportAssets(SelectedFiles, DestinationPath, ChosenFactory, bSyncToBrowser, FilesAndDestination, false);
				//ImportAssets(SelectedFiles, DestinationPath, ChosenFactory, bSyncToBrowser, FilesAndDestination, bAllowAsyncImport);
			}
		}
	}

	void ITGLTFImporterModule::ExportButtonClicked()
	{
		UBlueprintExportOptions* ExporterOptions = NewObject<UBlueprintExportOptions>() ;
		//TArray<FAssetData> GLTFActorClasses = ExporterOptions->GLTFAssetClasses();
		TSharedPtr<SWindow> ParentWindow;
		if (FModuleManager::Get().IsModuleLoaded("MainFrame"))
		{
			IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
			ParentWindow = MainFrame.GetParentWindow();
		}

		TSharedRef<SWindow> Window = SNew(SWindow).Title(LOCTEXT("TFGLTFImportOptionsTitle", "glTF/glb Export Options")).SizingRule(ESizingRule::Autosized);

		TSharedPtr<SBlueprintExportWindow> OptionsWindow;
		//OptionsWindow->set
		Window->SetContent(
			SAssignNew(OptionsWindow, SBlueprintExportWindow)
			.ExportOptions(ExporterOptions)
			.WidgetWindow(Window));

		//FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);
		FSlateApplication::Get().AddWindow(Window, true);
		FSlateApplication::Get().SetKeyboardFocus(Window, EFocusCause::SetDirectly);
		//OptionsWindow->ShouldImport();
	}

	void ITGLTFImporterModule::RegisterMenus()
	{
		FToolMenuOwnerScoped OwnerScoped(this);

		{
			UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.User");
			{
				FToolMenuSection& Section = ToolbarMenu->AddSection("GLTFTools");
				Section.AddSeparator("GLTF Seperator");
				{
					//Setting DropDown

					FToolMenuEntry Entry = FToolMenuEntry::InitComboButton(
						"Button", FUIAction(),
						FOnGetContent::CreateLambda(
							[&]()
							{
								//FMenuBuilder GetComboButtonContent(class FToolMenuContext)
								//{
								FMenuBuilder MenuBuilder(true, PluginCommands);

					// Add menu items or other widgets to the dropdown menu
					MenuBuilder.AddMenuEntry(LOCTEXT("Import", "Gltf Import"),
						LOCTEXT("ImportTooltip", "Import Gltf/Glb assets"),
						FSlateIcon(),
						FUIAction(FExecuteAction::CreateRaw(this, &FGLTFImporterModule::ImportButtonClicked))
					);

					/*MenuBuilder.AddMenuEntry(
						LOCTEXT("Export", "Gltf Export"),
						LOCTEXT("ExportTooltip", "Export to Gltf/Glb assets"),
						FSlateIcon(),
						FUIAction(FExecuteAction::CreateRaw(this, &FGLTFImporterModule::ExportButtonClicked))
					);*/

					// ... add more menu items or widgets as needed

					return MenuBuilder.MakeWidget();
							}
							//}
								),
						LOCTEXT("ComboButtonLabel", "GLTF/GLB"),
						LOCTEXT("ComboButtonTooltip", "Import and Export GLTF/GLB assets"));

					Entry.SetCommandList(PluginCommands);
					Entry.StyleNameOverride = "CalloutToolbar";
					Section.AddEntry(Entry);

				}
			}
		}
	}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FGLTFImporterModule, TFGLTFImporter);