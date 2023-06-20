// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Flashlight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAME_LOST_Flashlight_generated_h
#error "Flashlight.generated.h already included, missing '#pragma once' in Flashlight.h"
#endif
#define CODENAME_LOST_Flashlight_generated_h

#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_9_DELEGATE \
struct _Script_Codename_Lost_eventFlashLightToggled_Parms \
{ \
	bool IsOn; \
}; \
static inline void FFlashLightToggled_DelegateWrapper(const FMulticastScriptDelegate& FlashLightToggled, bool IsOn) \
{ \
	_Script_Codename_Lost_eventFlashLightToggled_Parms Parms; \
	Parms.IsOn=IsOn ? true : false; \
	FlashLightToggled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_10_DELEGATE \
struct _Script_Codename_Lost_eventFlashLightDrained_Parms \
{ \
	float CurrentBatteryLife; \
}; \
static inline void FFlashLightDrained_DelegateWrapper(const FMulticastScriptDelegate& FlashLightDrained, float CurrentBatteryLife) \
{ \
	_Script_Codename_Lost_eventFlashLightDrained_Parms Parms; \
	Parms.CurrentBatteryLife=CurrentBatteryLife; \
	FlashLightDrained.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_SPARSE_DATA
#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_RPC_WRAPPERS
#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_ACCESSORS
#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlashlight(); \
	friend struct Z_Construct_UClass_AFlashlight_Statics; \
public: \
	DECLARE_CLASS(AFlashlight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(AFlashlight)


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFlashlight(); \
	friend struct Z_Construct_UClass_AFlashlight_Statics; \
public: \
	DECLARE_CLASS(AFlashlight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(AFlashlight)


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlashlight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlashlight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashlight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashlight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashlight(AFlashlight&&); \
	NO_API AFlashlight(const AFlashlight&); \
public: \
	NO_API virtual ~AFlashlight();


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlashlight(AFlashlight&&); \
	NO_API AFlashlight(const AFlashlight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlashlight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlashlight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlashlight) \
	NO_API virtual ~AFlashlight();


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_12_PROLOG
#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_SPARSE_DATA \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_RPC_WRAPPERS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_ACCESSORS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_INCLASS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_SPARSE_DATA \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_ACCESSORS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_INCLASS_NO_PURE_DECLS \
	FID_Codename_Lost_Source_Codename_Lost_Flashlight_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAME_LOST_API UClass* StaticClass<class AFlashlight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Codename_Lost_Source_Codename_Lost_Flashlight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
