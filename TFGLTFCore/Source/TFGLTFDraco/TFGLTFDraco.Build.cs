// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

using System.IO;

public class TFGLTFDraco : ModuleRules
{
	public TFGLTFDraco(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
                string DracoDirectory = "$(ProjectDir)/Plugins";

        PublicDefinitions.Add("DRACO_DECODEBUFFER_EXPORTS");
		PublicDefinitions.Add("DRACO_DECODER_EXPORTS");
		PublicDefinitions.Add("DRACO_POINTATTRIBUTE_EXPORTS");
		PublicDefinitions.Add("DRACO_MESH_EXPORTS");
		PublicDefinitions.Add("DRACO_POINTCLOUD_EXPORTS");
		PublicDefinitions.Add("DRACO_METADATA_EXPORTS");
		PublicDefinitions.Add("DRACO_GEOMMETADATA_EXPORTS");

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
                                Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/eigen"),
                                Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/filesystem/include"),
                                Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco"),
                                Path.Combine(DracoDirectory, @"TFGLTFCore/Source"),
                                Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/tinygltf"),
                                Path.Combine(EngineDirectory, @"Source/ThirdParty/Eigen/Eigen"),
                                Path.Combine(EngineDirectory, @"Source/ThirdParty/Eigen"),
                                Path.Combine(EngineDirectory, @"Source/ThirdParty/Boost/boost-1_70_0/include/boost")

            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
                               //Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/eigen"),
                               //Path.Combine(DracoDirectory, @"TFGLTFCore/Source/TFGLTFDraco/third_party/tinygltf")
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
                "Json",
                "RenderCore",
				"Boost"
                		// ... add private dependencies that you statically link with here ...
                                
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                               
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
