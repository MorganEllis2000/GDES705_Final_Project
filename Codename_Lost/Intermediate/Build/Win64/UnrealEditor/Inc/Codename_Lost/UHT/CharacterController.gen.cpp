// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/CharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterController() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_ACharacterController();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AFlashlight_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AGun_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_APickup_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UMyInputConfigData_NoRegister();
	CODENAME_LOST_API UFunction* Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics
	{
		struct _Script_Codename_Lost_eventUpdateIventoryDelegate_Parms
		{
			TArray<APickup*> IventoryItems;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IventoryItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IventoryItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IventoryItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems_Inner = { "IventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems = { "IventoryItems", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Codename_Lost_eventUpdateIventoryDelegate_Parms, IventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::NewProp_IventoryItems,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Codename_Lost, nullptr, "UpdateIventoryDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::_Script_Codename_Lost_eventUpdateIventoryDelegate_Parms), Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACharacterController::execPrintInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintInventory();
		P_NATIVE_END;
	}
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
		UClass* Class = ACharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintInventory", &ACharacterController::execPrintInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterController_PrintInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_PrintInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_PrintInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "PrintInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_PrintInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_PrintInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_PrintInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_PrintInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterController);
	UClass* Z_Construct_UClass_ACharacterController_NoRegister()
	{
		return ACharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchEyeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchEyeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraInitalPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraInitalPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FlashlightClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCanInspectWidget_MetaData[];
#endif
		static void NewProp_bShowCanInspectWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCanInspectWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInspecting_MetaData[];
#endif
		static void NewProp_bInspecting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInspecting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInventoryOpen_MetaData[];
#endif
		static void NewProp_bIsInventoryOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInventoryOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateInventory_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateInventory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MyShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Glock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Glock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookRotationRateX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookRotationRateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookRotationRateY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookRotationRateY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_PrintInventory, "PrintInventory" }, // 2165920787
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterController.h" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "// Movement Variables\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Movement Variables" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation = { "OriginalRotation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset = { "CrouchEyeOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CrouchEyeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean = { "MinLean", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MinLean), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean = { "MaxLean", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MaxLean), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos = { "CameraInitalPos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CameraInitalPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "Comment", "// Flashlight Variables\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Flashlight Variables" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass = { "FlashlightClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, FlashlightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFlashlight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "Comment", "// Pickup Variables\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Pickup Variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CurrentItem), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bShowCanInspectWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget = { "bShowCanInspectWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bInspecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting = { "bInspecting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_MetaData[] = {
		{ "Category", "Bools" },
		{ "Comment", "// Inventory Variables\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Inventory Variables" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsInventoryOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen = { "bIsInventoryOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory = { "OnUpdateInventory", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, OnUpdateInventory), Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory_MetaData)) }; // 2147995970
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_Inner = { "_inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory = { "_inventory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, _inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "Comment", "// Camera Shake\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Camera Shake" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake = { "MyShake", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MyShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "// Components and Setup\n" },
		{ "ModuleRelativePath", "CharacterController.h" },
		{ "ToolTip", "Components and Setup" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, InputActions), Z_Construct_UClass_UMyInputConfigData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent = { "HoldingComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, HoldingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, PlayerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, GunClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock = { "Glock", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, Glock), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateX_MetaData[] = {
		{ "Category", "Controller Inputs" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateX = { "LookRotationRateX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, LookRotationRateX), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateY_MetaData[] = {
		{ "Category", "Controller Inputs" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateY = { "LookRotationRateY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, LookRotationRateY), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LookRotationRateY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
		&ACharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterController()
	{
		if (!Z_Registration_Info_UClass_ACharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterController.OuterSingleton, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterController.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<ACharacterController>()
	{
		return ACharacterController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
	ACharacterController::~ACharacterController() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_CharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_CharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 4104960832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_CharacterController_h_1816174776(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_CharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
