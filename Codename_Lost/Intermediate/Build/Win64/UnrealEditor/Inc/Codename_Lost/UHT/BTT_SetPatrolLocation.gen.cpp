// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/Tasks/BTT_SetPatrolLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_SetPatrolLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_SetPatrolLocation();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_SetPatrolLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTT_SetPatrolLocation::StaticRegisterNativesUBTT_SetPatrolLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_SetPatrolLocation);
	UClass* Z_Construct_UClass_UBTT_SetPatrolLocation_NoRegister()
	{
		return UBTT_SetPatrolLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_SetPatrolLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Tasks/BTT_SetPatrolLocation.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTT_SetPatrolLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_SetPatrolLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::ClassParams = {
		&UBTT_SetPatrolLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_SetPatrolLocation()
	{
		if (!Z_Registration_Info_UClass_UBTT_SetPatrolLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_SetPatrolLocation.OuterSingleton, Z_Construct_UClass_UBTT_SetPatrolLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_SetPatrolLocation.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTT_SetPatrolLocation>()
	{
		return UBTT_SetPatrolLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_SetPatrolLocation);
	UBTT_SetPatrolLocation::~UBTT_SetPatrolLocation() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_SetPatrolLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_SetPatrolLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_SetPatrolLocation, UBTT_SetPatrolLocation::StaticClass, TEXT("UBTT_SetPatrolLocation"), &Z_Registration_Info_UClass_UBTT_SetPatrolLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_SetPatrolLocation), 2219005624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_SetPatrolLocation_h_1689029932(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_SetPatrolLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_SetPatrolLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
