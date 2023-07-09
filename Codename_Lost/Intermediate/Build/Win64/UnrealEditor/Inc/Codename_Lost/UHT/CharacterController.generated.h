// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Controllers/CharacterController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APickup;
#ifdef CODENAME_LOST_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define CODENAME_LOST_CharacterController_generated_h

#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_13_DELEGATE \
struct _Script_Codename_Lost_eventUpdateIventoryDelegate_Parms \
{ \
	TArray<APickup*> IventoryItems; \
}; \
static inline void FUpdateIventoryDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateIventoryDelegate, TArray<APickup*> const& IventoryItems) \
{ \
	_Script_Codename_Lost_eventUpdateIventoryDelegate_Parms Parms; \
	Parms.IventoryItems=IventoryItems; \
	UpdateIventoryDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_SPARSE_DATA
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execUpdateInventoryDelegate); \
	DECLARE_FUNCTION(execClearInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execUpdateInventoryDelegate); \
	DECLARE_FUNCTION(execClearInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_ACCESSORS
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	NO_API virtual ~ACharacterController();


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController) \
	NO_API virtual ~ACharacterController();


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_15_PROLOG
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_SPARSE_DATA \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_RPC_WRAPPERS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_ACCESSORS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_INCLASS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_SPARSE_DATA \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_ACCESSORS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAME_LOST_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Controllers_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
