// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Flashlight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlight() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_AFlashlight();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AFlashlight_NoRegister();
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature();
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics
	{
		struct _Script_Codename_Lost_eventFlashLightToggled_Parms
		{
			bool IsOn;
		};
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((_Script_Codename_Lost_eventFlashLightToggled_Parms*)Obj)->IsOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Codename_Lost_eventFlashLightToggled_Parms), &Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Codename_Lost, nullptr, "FlashLightToggled__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::_Script_Codename_Lost_eventFlashLightToggled_Parms), Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics
	{
		struct _Script_Codename_Lost_eventFlashLightDrained_Parms
		{
			float CurrentBatteryLife;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBatteryLife;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::NewProp_CurrentBatteryLife = { "CurrentBatteryLife", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Codename_Lost_eventFlashLightDrained_Parms, CurrentBatteryLife), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::NewProp_CurrentBatteryLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Codename_Lost, nullptr, "FlashLightDrained__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::_Script_Codename_Lost_eventFlashLightDrained_Parms), Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFlashlight::StaticRegisterNativesAFlashlight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlashlight);
	UClass* Z_Construct_UClass_AFlashlight_NoRegister()
	{
		return AFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_AFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Light;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBatteryLife_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBatteryLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBatteryLife_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBatteryLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrainBatteryLifeTickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrainBatteryLifeTickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatteryDrainPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BatteryDrainPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightOn_MetaData[];
#endif
		static void NewProp_bIsLightOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightToggled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LightToggled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightDrained_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LightDrained;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Flashlight.h" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, Light), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_Light_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_MaxBatteryLife_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_MaxBatteryLife = { "MaxBatteryLife", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, MaxBatteryLife), METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_MaxBatteryLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_MaxBatteryLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_CurrentBatteryLife_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_CurrentBatteryLife = { "CurrentBatteryLife", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, CurrentBatteryLife), METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_CurrentBatteryLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_CurrentBatteryLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_DrainBatteryLifeTickTime_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_DrainBatteryLifeTickTime = { "DrainBatteryLifeTickTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, DrainBatteryLifeTickTime), METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_DrainBatteryLifeTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_DrainBatteryLifeTickTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_BatteryDrainPerTick_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_BatteryDrainPerTick = { "BatteryDrainPerTick", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, BatteryDrainPerTick), METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_BatteryDrainPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_BatteryDrainPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	void Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn_SetBit(void* Obj)
	{
		((AFlashlight*)Obj)->bIsLightOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn = { "bIsLightOn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AFlashlight), &Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_LightToggled_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_LightToggled = { "LightToggled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, LightToggled), Z_Construct_UDelegateFunction_Codename_Lost_FlashLightToggled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_LightToggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_LightToggled_MetaData)) }; // 1858050441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_LightDrained_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_LightDrained = { "LightDrained", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlashlight, LightDrained), Z_Construct_UDelegateFunction_Codename_Lost_FlashLightDrained__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_LightDrained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_LightDrained_MetaData)) }; // 4086551542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_Light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_MaxBatteryLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_CurrentBatteryLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_DrainBatteryLifeTickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_BatteryDrainPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_bIsLightOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_LightToggled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_LightDrained,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashlight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlashlight_Statics::ClassParams = {
		&AFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashlight()
	{
		if (!Z_Registration_Info_UClass_AFlashlight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlashlight.OuterSingleton, Z_Construct_UClass_AFlashlight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlashlight.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<AFlashlight>()
	{
		return AFlashlight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashlight);
	AFlashlight::~AFlashlight() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Flashlight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Flashlight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlashlight, AFlashlight::StaticClass, TEXT("AFlashlight"), &Z_Registration_Info_UClass_AFlashlight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlashlight), 894231232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Flashlight_h_218612177(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Flashlight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Flashlight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS