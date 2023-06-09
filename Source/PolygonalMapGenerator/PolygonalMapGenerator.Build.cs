// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PolygonalMapGenerator : ModuleRules
{
	public PolygonalMapGenerator(ReadOnlyTargetRules ROTargetRules) : base(ROTargetRules)
    {
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"GameplayTags",
				"ProceduralMeshComponent"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Delaunator",
				"DualMesh",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
				// ... add private dependencies that you statically link with here ...	
			}
			);
    }
}
