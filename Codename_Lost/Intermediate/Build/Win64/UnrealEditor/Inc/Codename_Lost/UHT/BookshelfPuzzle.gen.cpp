// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Actors/BookshelfPuzzle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookshelfPuzzle() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABook_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABookshelfPuzzle();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABookshelfPuzzle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void ABookshelfPuzzle::StaticRegisterNativesABookshelfPuzzle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABookshelfPuzzle);
	UClass* Z_Construct_UClass_ABookshelfPuzzle_NoRegister()
	{
		return ABookshelfPuzzle::StaticClass();
	}
	struct Z_Construct_UClass_ABookshelfPuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookShelf_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BookShelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Book1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Book1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Book2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Book2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Book3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Book3;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CorrectBookOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectBookOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorrectBookOrder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UsersBookOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsersBookOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsersBookOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABookshelfPuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BookshelfPuzzle.h" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_BookShelf_MetaData[] = {
		{ "Category", "Books" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_BookShelf = { "BookShelf", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, BookShelf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_BookShelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_BookShelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book1_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book1 = { "Book1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, Book1), Z_Construct_UClass_ABook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book2_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book2 = { "Book2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, Book2), Z_Construct_UClass_ABook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book3_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book3 = { "Book3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, Book3), Z_Construct_UClass_ABook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book3_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder_Inner = { "CorrectBookOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder = { "CorrectBookOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, CorrectBookOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder_Inner = { "UsersBookOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/BookshelfPuzzle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder = { "UsersBookOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABookshelfPuzzle, UsersBookOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABookshelfPuzzle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_BookShelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_Book3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_CorrectBookOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABookshelfPuzzle_Statics::NewProp_UsersBookOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABookshelfPuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABookshelfPuzzle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABookshelfPuzzle_Statics::ClassParams = {
		&ABookshelfPuzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABookshelfPuzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABookshelfPuzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABookshelfPuzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABookshelfPuzzle()
	{
		if (!Z_Registration_Info_UClass_ABookshelfPuzzle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABookshelfPuzzle.OuterSingleton, Z_Construct_UClass_ABookshelfPuzzle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABookshelfPuzzle.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<ABookshelfPuzzle>()
	{
		return ABookshelfPuzzle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABookshelfPuzzle);
	ABookshelfPuzzle::~ABookshelfPuzzle() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_BookshelfPuzzle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_BookshelfPuzzle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABookshelfPuzzle, ABookshelfPuzzle::StaticClass, TEXT("ABookshelfPuzzle"), &Z_Registration_Info_UClass_ABookshelfPuzzle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABookshelfPuzzle), 71989105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_BookshelfPuzzle_h_3947075072(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_BookshelfPuzzle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_BookshelfPuzzle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
