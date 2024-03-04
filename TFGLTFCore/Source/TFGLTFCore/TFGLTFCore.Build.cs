// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;

using UnrealBuildTool;

public class TFGLTFCore : ModuleRules
{
	public TFGLTFCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
                //string DracoDirectory = "$(ProjectDir)/Plugins";
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
                       //           Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/eigen")
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
                             //Path.Combine(DracoDirectory, @"TFGLTFCore/Source"),
                             //Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco"),
                             //Path.Combine(DracoDirectory, @"googletest/googletest/include"),
                             //Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/eigen")

            }
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
                "MeshDescription",
                "StaticMeshDescription",
                "Json",
                "RenderCore",
                "Slate",
				"SlateCore",
				
				// ... add private dependencies that you statically link with here ...
                                
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                               
				// ... add any modules that your module loads dynamically here ...
				"TFGLTFDraco"
			}
			);
	}
}
