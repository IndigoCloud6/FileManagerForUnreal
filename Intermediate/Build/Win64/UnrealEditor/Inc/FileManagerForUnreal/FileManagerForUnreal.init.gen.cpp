// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManagerForUnreal_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FileManagerForUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FileManagerForUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_FileManagerForUnreal.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FileManagerForUnreal",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5802F906,
				0x90DCB4F2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FileManagerForUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FileManagerForUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FileManagerForUnreal(Z_Construct_UPackage__Script_FileManagerForUnreal, TEXT("/Script/FileManagerForUnreal"), Z_Registration_Info_UPackage__Script_FileManagerForUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5802F906, 0x90DCB4F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
