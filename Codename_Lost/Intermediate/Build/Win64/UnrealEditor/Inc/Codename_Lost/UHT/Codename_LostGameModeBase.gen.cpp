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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodename_LostGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodename_LostGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodename_LostGameModeBase_Statics::ClassParams = {
		&ACodename_LostGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodename_LostGameModeBase, ACodename_LostGameModeBase::StaticClass, TEXT("ACodename_LostGameModeBase"), &Z_Registration_Info_UClass_ACodename_LostGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodename_LostGameModeBase), 3760283993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_563683572(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Codename_LostGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
