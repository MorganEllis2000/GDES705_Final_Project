// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/WraithAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef CODENAME_LOST_WraithAIController_generated_h
#error "WraithAIController.generated.h already included, missing '#pragma once' in WraithAIController.h"
#endif
#define CODENAME_LOST_WraithAIController_generated_h

#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_SPARSE_DATA
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTargetDetected); \
	DECLARE_FUNCTION(execSetupPerceptionSystem);


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTargetDetected); \
	DECLARE_FUNCTION(execSetupPerceptionSystem);


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_ACCESSORS
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWraithAIController(); \
	friend struct Z_Construct_UClass_AWraithAIController_Statics; \
public: \
	DECLARE_CLASS(AWraithAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(AWraithAIController)


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWraithAIController(); \
	friend struct Z_Construct_UClass_AWraithAIController_Statics; \
public: \
	DECLARE_CLASS(AWraithAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Codename_Lost"), NO_API) \
	DECLARE_SERIALIZER(AWraithAIController)


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWraithAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWraithAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithAIController(AWraithAIController&&); \
	NO_API AWraithAIController(const AWraithAIController&); \
public: \
	NO_API virtual ~AWraithAIController();


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWraithAIController(AWraithAIController&&); \
	NO_API AWraithAIController(const AWraithAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWraithAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWraithAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWraithAIController) \
	NO_API virtual ~AWraithAIController();


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_14_PROLOG
#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_SPARSE_DATA \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_RPC_WRAPPERS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_ACCESSORS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_INCLASS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_SPARSE_DATA \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_ACCESSORS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAME_LOST_API UClass* StaticClass<class AWraithAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_AI_WraithAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
