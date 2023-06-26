// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/MyLegacyCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLegacyCameraShake() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_UMyLegacyCameraShake();
	CODENAME_LOST_API UClass* Z_Construct_UClass_UMyLegacyCameraShake_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShake();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void UMyLegacyCameraShake::StaticRegisterNativesUMyLegacyCameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyLegacyCameraShake);
	UClass* Z_Construct_UClass_UMyLegacyCameraShake_NoRegister()
	{
		return UMyLegacyCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMyLegacyCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLegacyCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULegacyCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLegacyCameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "CameraShakePattern" },
		{ "IncludePath", "MyLegacyCameraShake.h" },
		{ "ModuleRelativePath", "MyLegacyCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLegacyCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLegacyCameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyLegacyCameraShake_Statics::ClassParams = {
		&UMyLegacyCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyLegacyCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLegacyCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLegacyCameraShake()
	{
		if (!Z_Registration_Info_UClass_UMyLegacyCameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyLegacyCameraShake.OuterSingleton, Z_Construct_UClass_UMyLegacyCameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyLegacyCameraShake.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<UMyLegacyCameraShake>()
	{
		return UMyLegacyCameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLegacyCameraShake);
	UMyLegacyCameraShake::~UMyLegacyCameraShake() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_MyLegacyCameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_MyLegacyCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyLegacyCameraShake, UMyLegacyCameraShake::StaticClass, TEXT("UMyLegacyCameraShake"), &Z_Registration_Info_UClass_UMyLegacyCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyLegacyCameraShake), 391511334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_MyLegacyCameraShake_h_3692264995(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_MyLegacyCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_MyLegacyCameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
