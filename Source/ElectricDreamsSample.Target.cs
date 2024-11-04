// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ElectricDreamsSampleTarget : TargetRules
{
	public ElectricDreamsSampleTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        CppStandard = CppStandardVersion.Cpp20;
        bValidateFormatStrings = true;


        ExtraModuleNames.AddRange( new string[] { "ElectricDreamsSample" } );
	}
}
