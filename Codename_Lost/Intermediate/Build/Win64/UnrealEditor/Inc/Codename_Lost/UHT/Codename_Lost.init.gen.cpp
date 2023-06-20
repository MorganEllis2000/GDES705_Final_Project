// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodename_Lost_init() {}
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature();
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature();
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Codename_Lost;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Codename_Lost()
	{
		if (!Z_Registration_Info_UPackage__Script_Codename_Lost.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Codename_Lost",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x35318451,
				0x824FE521,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Codename_Lost.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Codename_Lost.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Codename_Lost(Z_Construct_UPackage__Script_Codename_Lost, TEXT("/Script/Codename_Lost"), Z_Registration_Info_UPackage__Script_Codename_Lost, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x35318451, 0x824FE521));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
