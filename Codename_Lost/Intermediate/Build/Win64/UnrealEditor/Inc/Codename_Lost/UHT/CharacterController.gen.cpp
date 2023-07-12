// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
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
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
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
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
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
	DEFINE_FUNCTION(ACharacterController::execAddItemToInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execUpdateInventoryDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventoryDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execClearInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterController::execAddToInventory)
	{
		P_GET_OBJECT(APickup,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory(Z_Param_actor);
		P_NATIVE_END;
	}
	void ACharacterController::StaticRegisterNativesACharacterController()
	{
		UClass* Class = ACharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &ACharacterController::execAddItemToInventory },
			{ "AddToInventory", &ACharacterController::execAddToInventory },
			{ "ClearInventory", &ACharacterController::execClearInventory },
			{ "PrintInventory", &ACharacterController::execPrintInventory },
			{ "UpdateInventoryDelegate", &ACharacterController::execUpdateInventoryDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "AddItemToInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_AddToInventory_Statics
	{
		struct CharacterController_eventAddToInventory_Parms
		{
			APickup* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterController_eventAddToInventory_Parms, actor), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "AddToInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::CharacterController_eventAddToInventory_Parms), Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterController_ClearInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_ClearInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_ClearInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "ClearInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_ClearInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_ClearInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_ClearInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_ClearInventory_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
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
	struct Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "UpdateInventoryDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldingItem_MetaData[];
#endif
		static void NewProp_bHoldingItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldingItem;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsZoomedIn_MetaData[];
#endif
		static void NewProp_bIsZoomedIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsZoomedIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrainStaminaTickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrainStaminaTickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeartRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeartRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHeartRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingBreathingSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkingBreathingSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningBreathingSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningBreathingSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Glock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Glock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookRotationX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseLookRotationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookRotationY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseLookRotationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookRotationRateX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseLookRotationRateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookRotationRateY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseLookRotationRateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerLookRotationRateX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerLookRotationRateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerLookRotationRateY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerLookRotationRateY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_AddItemToInventory, "AddItemToInventory" }, // 769957971
		{ &Z_Construct_UFunction_ACharacterController_AddToInventory, "AddToInventory" }, // 1741591324
		{ &Z_Construct_UFunction_ACharacterController_ClearInventory, "ClearInventory" }, // 4212383022
		{ &Z_Construct_UFunction_ACharacterController_PrintInventory, "PrintInventory" }, // 2175066670
		{ &Z_Construct_UFunction_ACharacterController_UpdateInventoryDelegate, "UpdateInventoryDelegate" }, // 3778961138
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Controllers/CharacterController.h" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation = { "OriginalRotation", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset = { "CrouchEyeOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CrouchEyeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean = { "MinLean", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MinLean), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean = { "MaxLean", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MaxLean), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos = { "CameraInitalPos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CameraInitalPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass = { "FlashlightClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, FlashlightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFlashlight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CurrentItem), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bHoldingItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem = { "bHoldingItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
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
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bInspecting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting = { "bInspecting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bCanInteract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
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
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory = { "OnUpdateInventory", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, OnUpdateInventory), Z_Construct_UDelegateFunction_Codename_Lost_UpdateIventoryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory_MetaData)) }; // 1095202753
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_Inner = { "_inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory = { "_inventory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, _inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "Comment", "// Camera Shake\n" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
		{ "ToolTip", "Camera Shake" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake = { "MyShake", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MyShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, InputActions), Z_Construct_UClass_UMyInputConfigData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent = { "HoldingComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, HoldingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsZoomedIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn = { "bIsZoomedIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((ACharacterController*)Obj)->bIsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, CurrentStamina), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_DrainStaminaTickTime_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_DrainStaminaTickTime = { "DrainStaminaTickTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, DrainStaminaTickTime), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_DrainStaminaTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_DrainStaminaTickTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_StaminaDrainPerTick_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_StaminaDrainPerTick = { "StaminaDrainPerTick", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, StaminaDrainPerTick), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_StaminaDrainPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_StaminaDrainPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_HeartRate_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_HeartRate = { "HeartRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, HeartRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_HeartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_HeartRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_BaseHeartRate_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_BaseHeartRate = { "BaseHeartRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, BaseHeartRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_BaseHeartRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_BaseHeartRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_DamagedSoundCue_MetaData[] = {
		{ "Category", "SFX" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_DamagedSoundCue = { "DamagedSoundCue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, DamagedSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_DamagedSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_DamagedSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_WalkingBreathingSoundCue_MetaData[] = {
		{ "Category", "SFX" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_WalkingBreathingSoundCue = { "WalkingBreathingSoundCue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, WalkingBreathingSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_WalkingBreathingSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_WalkingBreathingSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningBreathingSoundCue_MetaData[] = {
		{ "Category", "SFX" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningBreathingSoundCue = { "RunningBreathingSoundCue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, RunningBreathingSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningBreathingSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningBreathingSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningAudioComponent_MetaData[] = {
		{ "Category", "SFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningAudioComponent = { "RunningAudioComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, RunningAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningAudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock = { "Glock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, Glock), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "CharacterController" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, GunClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationX_MetaData[] = {
		{ "Category", "Mouse Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationX = { "MouseLookRotationX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MouseLookRotationX), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationY_MetaData[] = {
		{ "Category", "Mouse Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationY = { "MouseLookRotationY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MouseLookRotationY), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateX_MetaData[] = {
		{ "Category", "Mouse Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateX = { "MouseLookRotationRateX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MouseLookRotationRateX), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateY_MetaData[] = {
		{ "Category", "Mouse Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateY = { "MouseLookRotationRateY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, MouseLookRotationRateY), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateX_MetaData[] = {
		{ "Category", "Controller Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateX = { "ControllerLookRotationRateX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, ControllerLookRotationRateX), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateY_MetaData[] = {
		{ "Category", "Controller Inputs" },
		{ "ModuleRelativePath", "Actors/Controllers/CharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateY = { "ControllerLookRotationRateY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterController, ControllerLookRotationRateY), METADATA_PARAMS(Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_OriginalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchEyeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MinLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxLean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CameraInitalPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_FlashlightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bHoldingItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bShowCanInspectWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bInspecting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsInventoryOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_OnUpdateInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp__inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MyShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_HoldingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsZoomedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CurrentStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_DrainStaminaTickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_StaminaDrainPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_HeartRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_BaseHeartRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_DamagedSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_WalkingBreathingSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningBreathingSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_RunningAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Glock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_GunClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MouseLookRotationRateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_ControllerLookRotationRateY,
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
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 1306421027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_946117397(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
