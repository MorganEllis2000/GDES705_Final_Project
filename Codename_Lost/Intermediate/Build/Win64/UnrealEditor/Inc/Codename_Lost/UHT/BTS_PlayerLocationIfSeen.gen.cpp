// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/BTS_PlayerLocationIfSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_PlayerLocationIfSeen() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTS_PlayerLocationIfSeen::StaticRegisterNativesUBTS_PlayerLocationIfSeen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_PlayerLocationIfSeen);
	UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen_NoRegister()
	{
		return UBTS_PlayerLocationIfSeen::StaticClass();
	}
	struct Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTS_PlayerLocationIfSeen.h" },
		{ "ModuleRelativePath", "BTS_PlayerLocationIfSeen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_PlayerLocationIfSeen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::ClassParams = {
		&UBTS_PlayerLocationIfSeen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTS_PlayerLocationIfSeen()
	{
		if (!Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton, Z_Construct_UClass_UBTS_PlayerLocationIfSeen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTS_PlayerLocationIfSeen>()
	{
		return UBTS_PlayerLocationIfSeen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_PlayerLocationIfSeen);
	UBTS_PlayerLocationIfSeen::~UBTS_PlayerLocationIfSeen() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocationIfSeen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocationIfSeen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_PlayerLocationIfSeen, UBTS_PlayerLocationIfSeen::StaticClass, TEXT("UBTS_PlayerLocationIfSeen"), &Z_Registration_Info_UClass_UBTS_PlayerLocationIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_PlayerLocationIfSeen), 495288842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocationIfSeen_h_1934447574(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocationIfSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_BTS_PlayerLocationIfSeen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
