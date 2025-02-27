// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelVariantSetsExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelVariantSetsExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFLevelVariantSetsExporter::StaticRegisterNativesUGLTFLevelVariantSetsExporter()
	{
	}
	UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister()
	{
		return UGLTFLevelVariantSetsExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelVariantSetsExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelVariantSetsExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelVariantSetsExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::ClassParams = {
		&UGLTFLevelVariantSetsExporter::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFLevelVariantSetsExporter, 4230793902);
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelVariantSetsExporter>()
	{
		return UGLTFLevelVariantSetsExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFLevelVariantSetsExporter(Z_Construct_UClass_UGLTFLevelVariantSetsExporter, &UGLTFLevelVariantSetsExporter::StaticClass, TEXT("/Script/GLTFExporter"), TEXT("UGLTFLevelVariantSetsExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelVariantSetsExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
