// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/Services/BTS_UpdatePlayerSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_UpdatePlayerSeen() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_UpdatePlayerSeen();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_UpdatePlayerSeen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTS_UpdatePlayerSeen::StaticRegisterNativesUBTS_UpdatePlayerSeen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_UpdatePlayerSeen);
	UClass* Z_Construct_UClass_UBTS_UpdatePlayerSeen_NoRegister()
	{
		return UBTS_UpdatePlayerSeen::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Services/BTS_UpdatePlayerSeen.h" },
		{ "ModuleRelativePath", "AI/Services/BTS_UpdatePlayerSeen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_UpdatePlayerSeen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::ClassParams = {
		&UBTS_UpdatePlayerSeen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTS_UpdatePlayerSeen()
	{
		if (!Z_Registration_Info_UClass_UBTS_UpdatePlayerSeen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_UpdatePlayerSeen.OuterSingleton, Z_Construct_UClass_UBTS_UpdatePlayerSeen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_UpdatePlayerSeen.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTS_UpdatePlayerSeen>()
	{
		return UBTS_UpdatePlayerSeen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_UpdatePlayerSeen);
	UBTS_UpdatePlayerSeen::~UBTS_UpdatePlayerSeen() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Services_BTS_UpdatePlayerSeen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Services_BTS_UpdatePlayerSeen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_UpdatePlayerSeen, UBTS_UpdatePlayerSeen::StaticClass, TEXT("UBTS_UpdatePlayerSeen"), &Z_Registration_Info_UClass_UBTS_UpdatePlayerSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_UpdatePlayerSeen), 1235150028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Services_BTS_UpdatePlayerSeen_h_1008111023(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Services_BTS_UpdatePlayerSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Services_BTS_UpdatePlayerSeen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
