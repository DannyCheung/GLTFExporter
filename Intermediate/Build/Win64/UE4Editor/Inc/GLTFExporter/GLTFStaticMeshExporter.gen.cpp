// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFStaticMeshExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFStaticMeshExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFStaticMeshExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFStaticMeshExporter::StaticRegisterNativesUGLTFStaticMeshExporter()
	{
	}
	UClass* Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister()
	{
		return UGLTFStaticMeshExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFStaticMeshExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFStaticMeshExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFStaticMeshExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFStaticMeshExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::ClassParams = {
		&UGLTFStaticMeshExporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFStaticMeshExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFStaticMeshExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFStaticMeshExporter, 3591709507);
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFStaticMeshExporter>()
	{
		return UGLTFStaticMeshExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFStaticMeshExporter(Z_Construct_UClass_UGLTFStaticMeshExporter, &UGLTFStaticMeshExporter::StaticClass, TEXT("/Script/GLTFExporter"), TEXT("UGLTFStaticMeshExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFStaticMeshExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
