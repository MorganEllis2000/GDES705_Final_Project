// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/WraithController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithController() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithController();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void AWraithController::StaticRegisterNativesAWraithController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWraithController);
	UClass* Z_Construct_UClass_AWraithController_NoRegister()
	{
		return AWraithController::StaticClass();
	}
	struct Z_Construct_UClass_AWraithController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWraithController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/WraithController.h" },
		{ "ModuleRelativePath", "AI/WraithController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "Patrol Points" },
		{ "ModuleRelativePath", "AI/WraithController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWraithController, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/WraithController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWraithController, PatrolPath), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWraithController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithController_Statics::NewProp_PatrolPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWraithController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWraithController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWraithController_Statics::ClassParams = {
		&AWraithController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWraithController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWraithController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWraithController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWraithController()
	{
		if (!Z_Registration_Info_UClass_AWraithController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWraithController.OuterSingleton, Z_Construct_UClass_AWraithController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWraithController.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<AWraithController>()
	{
		return AWraithController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWraithController);
	AWraithController::~AWraithController() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWraithController, AWraithController::StaticClass, TEXT("AWraithController"), &Z_Registration_Info_UClass_AWraithController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWraithController), 2396154259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithController_h_3904710244(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
