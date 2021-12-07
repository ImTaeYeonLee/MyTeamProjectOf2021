// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE_VtuberStudioTarget : TargetRules
{
	public UE_VtuberStudioTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("UE_VtuberStudio");
	bForceEnableExceptions = true;
	bOverrideBuildEnvironment = true;
	}
}
