// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUtility_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameUtility;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameUtility()
	{
		if (!Z_Registration_Info_UPackage__Script_GameUtility.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameUtility",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x56F53829,
				0x00B3B9AE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameUtility.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameUtility.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameUtility(Z_Construct_UPackage__Script_GameUtility, TEXT("/Script/GameUtility"), Z_Registration_Info_UPackage__Script_GameUtility, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56F53829, 0x00B3B9AE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
