// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_VtuberStudio : ModuleRules
{
	public UE_VtuberStudio(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "WebBrowser" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "HeadMountedDisplay" });
	}
}
