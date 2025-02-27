// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFExporter::StaticRegisterNativesUGLTFExporter()
	{
	}
	UClass* Z_Construct_UClass_UGLTFExporter_NoRegister()
	{
		return UGLTFExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFExporter_Statics::ClassParams = {
		&UGLTFExporter::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFExporter, 1839132698);
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFExporter>()
	{
		return UGLTFExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFExporter(Z_Construct_UClass_UGLTFExporter, &UGLTFExporter::StaticClass, TEXT("/Script/GLTFExporter"), TEXT("UGLTFExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
