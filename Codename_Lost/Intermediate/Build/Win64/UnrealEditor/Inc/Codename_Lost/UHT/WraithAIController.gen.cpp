// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/WraithAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithAIController();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void AWraithAIController::StaticRegisterNativesAWraithAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWraithAIController);
	UClass* Z_Construct_UClass_AWraithAIController_NoRegister()
	{
		return AWraithAIController::StaticClass();
	}
	struct Z_Construct_UClass_AWraithAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWraithAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WraithAIController.h" },
		{ "ModuleRelativePath", "WraithAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "WraithAIController" },
		{ "ModuleRelativePath", "WraithAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWraithAIController, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWraithAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWraithAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWraithAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWraithAIController_Statics::ClassParams = {
		&AWraithAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWraithAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWraithAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWraithAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWraithAIController()
	{
		if (!Z_Registration_Info_UClass_AWraithAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWraithAIController.OuterSingleton, Z_Construct_UClass_AWraithAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWraithAIController.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<AWraithAIController>()
	{
		return AWraithAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWraithAIController);
	AWraithAIController::~AWraithAIController() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_WraithAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_WraithAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWraithAIController, AWraithAIController::StaticClass, TEXT("AWraithAIController"), &Z_Registration_Info_UClass_AWraithAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWraithAIController), 4206740054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_WraithAIController_h_223058618(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_WraithAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_WraithAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
