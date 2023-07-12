// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/Tasks/BTT_FindPatrolPathPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_FindPatrolPathPoint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_FindPatrolPathPoint();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UBTT_FindPatrolPathPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UBTT_FindPatrolPathPoint::StaticRegisterNativesUBTT_FindPatrolPathPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_FindPatrolPathPoint);
	UClass* Z_Construct_UClass_UBTT_FindPatrolPathPoint_NoRegister()
	{
		return UBTT_FindPatrolPathPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Tasks/BTT_FindPatrolPathPoint.h" },
		{ "ModuleRelativePath", "AI/Tasks/BTT_FindPatrolPathPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_FindPatrolPathPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::ClassParams = {
		&UBTT_FindPatrolPathPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_FindPatrolPathPoint()
	{
		if (!Z_Registration_Info_UClass_UBTT_FindPatrolPathPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_FindPatrolPathPoint.OuterSingleton, Z_Construct_UClass_UBTT_FindPatrolPathPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_FindPatrolPathPoint.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UBTT_FindPatrolPathPoint>()
	{
		return UBTT_FindPatrolPathPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_FindPatrolPathPoint);
	UBTT_FindPatrolPathPoint::~UBTT_FindPatrolPathPoint() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_FindPatrolPathPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_FindPatrolPathPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_FindPatrolPathPoint, UBTT_FindPatrolPathPoint::StaticClass, TEXT("UBTT_FindPatrolPathPoint"), &Z_Registration_Info_UClass_UBTT_FindPatrolPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_FindPatrolPathPoint), 1445571491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_FindPatrolPathPoint_h_3498559297(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_FindPatrolPathPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_Tasks_BTT_FindPatrolPathPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
