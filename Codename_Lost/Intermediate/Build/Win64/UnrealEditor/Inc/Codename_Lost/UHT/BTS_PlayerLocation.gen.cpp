// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/BTS_PlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_PlayerLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_PlayerLocation();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_PlayerLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTS_PlayerLocation::StaticRegisterNativesUBTS_PlayerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_PlayerLocation);
	UClass* Z_Construct_UClass_UBTS_PlayerLocation_NoRegister()
	{
		return UBTS_PlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_PlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_PlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_PlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTS_PlayerLocation.h" },
		{ "ModuleRelativePath", "BTS_PlayerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_PlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_PlayerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_PlayerLocation_Statics::ClassParams = {
		&UBTS_PlayerLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTS_PlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTS_PlayerLocation()
	{
		if (!Z_Registration_Info_UClass_UBTS_PlayerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_PlayerLocation.OuterSingleton, Z_Construct_UClass_UBTS_PlayerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_PlayerLocation.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTS_PlayerLocation>()
	{
		return UBTS_PlayerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_PlayerLocation);
	UBTS_PlayerLocation::~UBTS_PlayerLocation() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_PlayerLocation, UBTS_PlayerLocation::StaticClass, TEXT("UBTS_PlayerLocation"), &Z_Registration_Info_UClass_UBTS_PlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_PlayerLocation), 3629631666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocation_h_3878799045(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
