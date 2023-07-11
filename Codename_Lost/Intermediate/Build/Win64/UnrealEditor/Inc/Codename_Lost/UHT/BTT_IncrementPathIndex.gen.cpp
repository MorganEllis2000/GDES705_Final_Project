// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/Tasks/BTT_IncrementPathIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_IncrementPathIndex() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_IncrementPathIndex();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_IncrementPathIndex_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTT_IncrementPathIndex::StaticRegisterNativesUBTT_IncrementPathIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_IncrementPathIndex);
	UClass* Z_Construct_UClass_UBTT_IncrementPathIndex_NoRegister()
	{
		return UBTT_IncrementPathIndex::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_IncrementPathIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Tasks/BTT_IncrementPathIndex.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTT_IncrementPathIndex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_IncrementPathIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::ClassParams = {
		&UBTT_IncrementPathIndex::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_IncrementPathIndex()
	{
		if (!Z_Registration_Info_UClass_UBTT_IncrementPathIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_IncrementPathIndex.OuterSingleton, Z_Construct_UClass_UBTT_IncrementPathIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_IncrementPathIndex.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTT_IncrementPathIndex>()
	{
		return UBTT_IncrementPathIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_IncrementPathIndex);
	UBTT_IncrementPathIndex::~UBTT_IncrementPathIndex() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_IncrementPathIndex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_IncrementPathIndex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_IncrementPathIndex, UBTT_IncrementPathIndex::StaticClass, TEXT("UBTT_IncrementPathIndex"), &Z_Registration_Info_UClass_UBTT_IncrementPathIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_IncrementPathIndex), 2210219177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_IncrementPathIndex_h_3009878980(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_IncrementPathIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_IncrementPathIndex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
