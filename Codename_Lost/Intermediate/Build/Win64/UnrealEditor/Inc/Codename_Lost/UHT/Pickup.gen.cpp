// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_APickup();
	CODENAME_LOST_API UClass* Z_Construct_UClass_APickup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void APickup::StaticRegisterNativesAPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup);
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHolding_MetaData[];
#endif
		static void NewProp_bHolding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHolding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_ObjectMesh = { "ObjectMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_ObjectMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_ObjectMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_HoldingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bHolding_MetaData[] = {
		{ "Category", "Bools" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bHolding_SetBit(void* Obj)
	{
		((APickup*)Obj)->bHolding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bHolding = { "bHolding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bHolding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bHolding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bHolding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_InitialLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_InitialRotation_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_InitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_InitialRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "Item Info" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, ObjectName), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "Item Info" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, ObjectType), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_ObjectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_ObjectDescription_MetaData[] = {
		{ "Category", "Item Info" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_ObjectDescription = { "ObjectDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickup, ObjectDescription), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_ObjectDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_ObjectDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_ObjectMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_HoldingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bHolding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_InitialLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_InitialRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_ObjectDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickup.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	APickup::~APickup() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Pickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Pickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 1071425018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Pickup_h_1443613609(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Pickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
