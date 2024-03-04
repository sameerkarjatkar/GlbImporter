// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
    public class TFGLTFImporter : ModuleRules
    {
        public TFGLTFImporter(ReadOnlyTargetRules Target) : base(Target)
        {
            //string DracoDirectory = "$(ProjectDir)/Plugins/TFGLTFImporter/Binaries/Win64";
            string DracoDirectory = "$(ProjectDir)/Plugins/TFGLTFCore";

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "TFGLTFCore",
                    "TFGLTFDraco",
                    "Core",
                    "CoreUObject",
                    "Engine",
					"EditorFramework",
                    "UnrealEd",
                    "MeshDescription",
					"StaticMeshDescription",
                    "MeshUtilities",
                    "MessageLog",
                    "Json",
                    "MaterialEditor",
                    "Slate",
                    "SlateCore",
                    "MainFrame",
                    "InputCore",
					//"TFUtils",
                    //"DatasmithContent",
                    "ExtrasCustomProperty",
                    "ToolMenus",
                    "UnrealEd",
                    "EditorStyle",
                    "DesktopPlatform",
                    "AssetTools",
                    "AssetRegistry",
                    "ActorSequence",
                    "MovieSceneTracks",
                    "MovieScene",
                    "Sequencer",
                }
                );

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "TFGLTFCore",
                    "TFGLTFDraco",
                }
                );

            PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
                
            // Path.Combine(EngineDirectory, @"tempGltf"),
            // Path.Combine(EngineDirectory, @"Plugins/Enterprise/DatasmithContent/Source/DatasmithContent/Public"),
            //Path.Combine(EngineDirectory, @"Plugins/ExtrasCustomProperty/Source/ExtrasCustomProperty/Public"),
            Path.Combine(DracoDirectory, @"Source"),
                //Path.Combine(Params.BaseStageDirectory, @"Plugins/TFGLTFImporter/Source/TFGLTFImporter/Public")
                //Path.Combine(ProjectDir, @"Plugins/TFGLTFImporter/Source/TFGLTFImporter/Public")

            //C:\Projects\TF\GLTFCustom\Plugins\TFGLTFImporter\Source\TFGLTFImporter\Public\GLTFImportOptions.h

        }
            );

            PrivateIncludePaths.AddRange(
            new string[] {
				// ... add private include paths required here ...
              //  Path.Combine(EngineDirectory, @"Plugins/ExtrasCustomProperty/Source/ExtrasCustomProperty/Public"),
                //Path.Combine(DracoDirectory, @"draco"),

               }
            );

            

            string LibPath = Path.Combine(EngineDirectory, @"Plugins/Enterprise/GLTFExporter/Binaries/Win64");
          //  PublicAdditionalLibraries.Add(Path.Combine(LibPath, "libgltf.lib"));
            //PublicAdditionalLibraries.Add(Path.Combine(LibPath, "draco.lib"));
            //PublicAdditionalLibraries.Add(Path.Combine(DracoDirectory, "draco.lib"));
            //PublicAdditionalLibraries.Add(Path.Combine(DracoDirectory, "draco_io.lib"));
            

            // add the draco libs to the Project lib directory 


        }
    }
}
