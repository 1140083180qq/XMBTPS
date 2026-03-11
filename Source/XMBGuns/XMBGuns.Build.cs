// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class XMBGuns : ModuleRules
{
	public XMBGuns(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Core", "Niagara", "MultiplayerSessions", "OnlineSubsystem", "OnlineSubsystemSteam"
		});
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {  "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
