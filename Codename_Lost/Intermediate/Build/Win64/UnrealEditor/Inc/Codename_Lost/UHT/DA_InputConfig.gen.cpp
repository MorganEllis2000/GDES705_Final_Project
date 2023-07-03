// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/DA_InputConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_InputConfig() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_UDA_InputConfig();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UDA_InputConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UDA_InputConfig::StaticRegisterNativesUDA_InputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_InputConfig);
	UClass* Z_Construct_UClass_UDA_InputConfig_NoRegister()
	{
		return UDA_InputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDA_InputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_InputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_InputConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DA_InputConfig.h" },
		{ "ModuleRelativePath", "DA_InputConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_InputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_InputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_InputConfig_Statics::ClassParams = {
		&UDA_InputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDA_InputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_InputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDA_InputConfig()
	{
		if (!Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton, Z_Construct_UClass_UDA_InputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDA_InputConfig.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UDA_InputConfig>()
	{
		return UDA_InputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_InputConfig);
	UDA_InputConfig::~UDA_InputConfig() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_DA_InputConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_DA_InputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDA_InputConfig, UDA_InputConfig::StaticClass, TEXT("UDA_InputConfig"), &Z_Registration_Info_UClass_UDA_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_InputConfig), 3930466437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_DA_InputConfig_h_1859817672(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_DA_InputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_DA_InputConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
