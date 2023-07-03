// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Codename_LostGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodename_LostGameModeBase() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_ACodename_LostGameModeBase();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ACodename_LostGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void ACodename_LostGameModeBase::StaticRegisterNativesACodename_LostGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACodename_LostGameModeBase);
	UClass* Z_Construct_UClass_ACodename_LostGameModeBase_NoRegister()
	{
		return ACodename_LostGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACodename_LostGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasFirstKey_MetaData[];
#endif
		static void NewProp_bHasFirstKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFirstKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArrayOfKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfKeys;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TMapOfKeys_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TMapOfKeys_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TMapOfKeys_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TMapOfKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodename_LostGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodename_LostGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Codename_LostGameModeBase.h" },
		{ "ModuleRelativePath", "Codename_LostGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey_MetaData[] = {
		{ "Category", "Codename_LostGameModeBase" },
		{ "ModuleRelativePath", "Codename_LostGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey_SetBit(void* Obj)
	{
		((ACodename_LostGameModeBase*)Obj)->bHasFirstKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey = { "bHasFirstKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACodename_LostGameModeBase), &Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys_Inner = { "ArrayOfKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys_MetaData[] = {
		{ "Category", "Codename_LostGameModeBase" },
		{ "ModuleRelativePath", "Codename_LostGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys = { "ArrayOfKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACodename_LostGameModeBase, ArrayOfKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_ValueProp = { "TMapOfKeys", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_Key_KeyProp = { "TMapOfKeys_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_MetaData[] = {
		{ "Category", "Codename_LostGameModeBase" },
		{ "ModuleRelativePath", "Codename_LostGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys = { "TMapOfKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACodename_LostGameModeBase, TMapOfKeys), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodename_LostGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_bHasFirstKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_ArrayOfKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodename_LostGameModeBase_Statics::NewProp_TMapOfKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodename_LostGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodename_LostGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::ClassParams = {
		&ACodename_LostGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACodename_LostGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodename_LostGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodename_LostGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACodename_LostGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACodename_LostGameModeBase.OuterSingleton, Z_Construct_UClass_ACodename_LostGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACodename_LostGameModeBase.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<ACodename_LostGameModeBase>()
	{
		return ACodename_LostGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodename_LostGameModeBase);
	ACodename_LostGameModeBase::~ACodename_LostGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodename_LostGameModeBase, ACodename_LostGameModeBase::StaticClass, TEXT("ACodename_LostGameModeBase"), &Z_Registration_Info_UClass_ACodename_LostGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodename_LostGameModeBase), 2099960110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_4176734439(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
