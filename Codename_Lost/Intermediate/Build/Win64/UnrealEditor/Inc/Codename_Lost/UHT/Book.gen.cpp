// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Codename_Lost/Actors/Book.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBook() {}
// Cross Module References
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABook();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABook_NoRegister();
	CODENAME_LOST_API UClass* Z_Construct_UClass_ABookshelfPuzzle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Codename_Lost();
// End Cross Module References
	void ABook::StaticRegisterNativesABook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABook);
	UClass* Z_Construct_UClass_ABook_NoRegister()
	{
		return ABook::StaticClass();
	}
	struct Z_Construct_UClass_ABook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BookMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BookName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookshelfPuzzle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BookshelfPuzzle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Codename_Lost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Book.h" },
		{ "ModuleRelativePath", "Actors/Book.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABook_Statics::NewProp_BookMesh_MetaData[] = {
		{ "Category", "Books" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Book.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABook_Statics::NewProp_BookMesh = { "BookMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABook, BookMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABook_Statics::NewProp_BookMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABook_Statics::NewProp_BookMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABook_Statics::NewProp_BookName_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/Book.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABook_Statics::NewProp_BookName = { "BookName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABook, BookName), METADATA_PARAMS(Z_Construct_UClass_ABook_Statics::NewProp_BookName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABook_Statics::NewProp_BookName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABook_Statics::NewProp_BookshelfPuzzle_MetaData[] = {
		{ "Category", "Books" },
		{ "ModuleRelativePath", "Actors/Book.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABook_Statics::NewProp_BookshelfPuzzle = { "BookshelfPuzzle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABook, BookshelfPuzzle), Z_Construct_UClass_ABookshelfPuzzle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABook_Statics::NewProp_BookshelfPuzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABook_Statics::NewProp_BookshelfPuzzle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABook_Statics::NewProp_BookMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABook_Statics::NewProp_BookName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABook_Statics::NewProp_BookshelfPuzzle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABook_Statics::ClassParams = {
		&ABook::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABook_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABook_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABook()
	{
		if (!Z_Registration_Info_UClass_ABook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABook.OuterSingleton, Z_Construct_UClass_ABook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABook.OuterSingleton;
	}
	template<> CODENAME_LOST_API UClass* StaticClass<ABook>()
	{
		return ABook::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABook);
	ABook::~ABook() {}
	struct Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Book_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Book_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABook, ABook::StaticClass, TEXT("ABook"), &Z_Registration_Info_UClass_ABook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABook), 825608794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Book_h_1380875163(TEXT("/Script/Codename_Lost"),
		Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Book_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GDES705_Final_Project_Codename_Lost_Source_Codename_Lost_Actors_Book_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
