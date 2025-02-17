// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class S1 : ModuleRules
{
	public S1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking", "EnhancedInput" });

		PrivateDependencyModuleNames.AddRange(new string[] { "ProtobufCore" });

		PrivateIncludePaths.AddRange(new string[] 
		{
			"S1/",
			"S1/Network/",
			"S1/Game/",
		});
	}
}
