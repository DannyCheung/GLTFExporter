// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelSequenceExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelSequenceExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFLevelSequenceExporter::StaticRegisterNativesUGLTFLevelSequenceExporter()
	{
	}
	UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter_NoRegister()
	{
		return UGLTFLevelSequenceExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelSequenceExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelSequenceExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelSequenceExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::ClassParams = {
		&UGLTFLevelSequenceExporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFLevelSequenceExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFLevelSequenceExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFLevelSequenceExporter, 3813696891);
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelSequenceExporter>()
	{
		return UGLTFLevelSequenceExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFLevelSequenceExporter(Z_Construct_UClass_UGLTFLevelSequenceExporter, &UGLTFLevelSequenceExporter::StaticClass, TEXT("/Script/GLTFExporter"), TEXT("UGLTFLevelSequenceExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelSequenceExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
