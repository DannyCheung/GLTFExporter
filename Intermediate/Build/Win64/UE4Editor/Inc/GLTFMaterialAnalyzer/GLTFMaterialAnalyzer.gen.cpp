// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFMaterialAnalyzer/Public/GLTFMaterialAnalyzer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialAnalyzer() {}
// Cross Module References
	GLTFMATERIALANALYZER_API UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer_NoRegister();
	GLTFMATERIALANALYZER_API UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	UPackage* Z_Construct_UPackage__Script_GLTFMaterialAnalyzer();
// End Cross Module References
	void UGLTFMaterialAnalyzer::StaticRegisterNativesUGLTFMaterialAnalyzer()
	{
	}
	UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer_NoRegister()
	{
		return UGLTFMaterialAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFMaterialAnalyzer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "GLTFMaterialAnalyzer.h" },
		{ "ModuleRelativePath", "Public/GLTFMaterialAnalyzer.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialAnalyzer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::ClassParams = {
		&UGLTFMaterialAnalyzer::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFMaterialAnalyzer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFMaterialAnalyzer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFMaterialAnalyzer, 3788805920);
	template<> GLTFMATERIALANALYZER_API UClass* StaticClass<UGLTFMaterialAnalyzer>()
	{
		return UGLTFMaterialAnalyzer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFMaterialAnalyzer(Z_Construct_UClass_UGLTFMaterialAnalyzer, &UGLTFMaterialAnalyzer::StaticClass, TEXT("/Script/GLTFMaterialAnalyzer"), TEXT("UGLTFMaterialAnalyzer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialAnalyzer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
