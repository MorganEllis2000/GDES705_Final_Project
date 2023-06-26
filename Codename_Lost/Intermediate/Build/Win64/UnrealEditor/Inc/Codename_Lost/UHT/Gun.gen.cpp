// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_AGun();
	CODENAME_LOST_API UClass* Z_Construct_UClass_AGun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void AGun::StaticRegisterNativesAGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGun);
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserSight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserSight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReserveAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxReserveAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReserveAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentReserveAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MagazineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLaserOn_MetaData[];
#endif
		static void NewProp_bIsLaserOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLaserOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleComponent_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleComponent = { "MuzzleComponent", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, MuzzleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_LaserSight_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_LaserSight = { "LaserSight", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, LaserSight), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_LaserSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_LaserSight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxReserveAmmo = { "MaxReserveAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, MaxReserveAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxReserveAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxReserveAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentReserveAmmo = { "CurrentReserveAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, CurrentReserveAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentReserveAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentReserveAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MagazineSize_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, MagazineSize), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MagazineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MagazineSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, Damage), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsLaserOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn = { "bIsLaserOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, ImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGun, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_LaserSight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxReserveAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentReserveAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MagazineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsLaserOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGun.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
	AGun::~AGun() {}
	struct Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Gun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 687412054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Gun_h_778971681(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Codename_Lost_Source_Codename_Lost_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
