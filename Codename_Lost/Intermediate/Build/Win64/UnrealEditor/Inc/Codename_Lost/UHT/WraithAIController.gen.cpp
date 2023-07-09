// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithAIController();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AWraithAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	DEFINE_FUNCTION(AWraithAIController::execOnTargetDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDetected(Z_Param_actor,Z_Param_stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWraithAIController::execSetupPerceptionSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPerceptionSystem();
		P_NATIVE_END;
	}
	void AWraithAIController::StaticRegisterNativesAWraithAIController()
	{
		UClass* Class = AWraithAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetDetected", &AWraithAIController::execOnTargetDetected },
			{ "SetupPerceptionSystem", &AWraithAIController::execSetupPerceptionSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics
	{
		struct WraithAIController_eventOnTargetDetected_Parms
		{
			AActor* actor;
			FAIStimulus stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stimulus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WraithAIController_eventOnTargetDetected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WraithAIController_eventOnTargetDetected_Parms, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_stimulus_MetaData)) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::NewProp_stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/WraithAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWraithAIController, nullptr, "OnTargetDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::WraithAIController_eventOnTargetDetected_Parms), Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWraithAIController_OnTargetDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWraithAIController_OnTargetDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/WraithAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWraithAIController, nullptr, "SetupPerceptionSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWraithAIController);
	UClass* Z_Construct_UClass_AWraithAIController_NoRegister()
	{
		return AWraithAIController::StaticClass();
	}
	struct Z_Construct_UClass_AWraithAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWraithAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWraithAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWraithAIController_OnTargetDetected, "OnTargetDetected" }, // 386865074
		{ &Z_Construct_UFunction_AWraithAIController_SetupPerceptionSystem, "SetupPerceptionSystem" }, // 2274044460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/WraithAIController.h" },
		{ "ModuleRelativePath", "AI/WraithAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "WraithAIController" },
		{ "ModuleRelativePath", "AI/WraithAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWraithAIController, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "Patrol Points" },
		{ "ModuleRelativePath", "AI/WraithAIController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWraithAIController, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWraithAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithAIController_Statics::NewProp_AIBehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWraithAIController_Statics::NewProp_PatrolPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWraithAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWraithAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWraithAIController_Statics::ClassParams = {
		&AWraithAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWraithAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWraithAIController, AWraithAIController::StaticClass, TEXT("AWraithAIController"), &Z_Registration_Info_UClass_AWraithAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWraithAIController), 2611854596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_24052583(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
