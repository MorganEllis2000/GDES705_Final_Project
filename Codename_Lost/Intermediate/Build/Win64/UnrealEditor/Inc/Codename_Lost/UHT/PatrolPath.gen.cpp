// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/PatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPath() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_APatrolPath();
	CODENAME_LOST_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void APatrolPath::StaticRegisterNativesAPatrolPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatrolPath);
	UClass* Z_Construct_UClass_APatrolPath_NoRegister()
	{
		return APatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_APatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatrolPath.h" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APatrolPath, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_PatrolPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APatrolPath_Statics::ClassParams = {
		&APatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolPath()
	{
		if (!Z_Registration_Info_UClass_APatrolPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatrolPath.OuterSingleton, Z_Construct_UClass_APatrolPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APatrolPath.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<APatrolPath>()
	{
		return APatrolPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPath);
	APatrolPath::~APatrolPath() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_PatrolPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_PatrolPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APatrolPath, APatrolPath::StaticClass, TEXT("APatrolPath"), &Z_Registration_Info_UClass_APatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatrolPath), 1122644229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_PatrolPath_h_2665116093(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_PatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_PatrolPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
