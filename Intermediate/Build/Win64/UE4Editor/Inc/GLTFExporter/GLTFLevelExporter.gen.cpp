// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFLevelExporter::StaticRegisterNativesUGLTFLevelExporter()
	{
	}
	UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister()
	{
		return UGLTFLevelExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFLevelExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFLevelExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFLevelExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams = {
		&UGLTFLevelExporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFLevelExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFLevelExporter, 2201695691);
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelExporter>()
	{
		return UGLTFLevelExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFLevelExporter(Z_Construct_UClass_UGLTFLevelExporter, &UGLTFLevelExporter::StaticClass, TEXT("/Script/GLTFExporter"), TEXT("UGLTFLevelExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
