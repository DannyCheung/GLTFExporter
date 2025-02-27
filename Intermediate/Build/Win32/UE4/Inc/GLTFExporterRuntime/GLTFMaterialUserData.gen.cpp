// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporterRuntime/Public/UserData/GLTFMaterialUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialUserData() {}
// Cross Module References
	GLTFEXPORTERRUNTIME_API UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup();
	UPackage* Z_Construct_UPackage__Script_GLTFExporterRuntime();
	GLTFEXPORTERRUNTIME_API UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT();
	GLTFEXPORTERRUNTIME_API UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeMode();
	GLTFEXPORTERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister();
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
// End Cross Module References
	static UEnum* EGLTFMaterialPropertyGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup, Z_Construct_UPackage__Script_GLTFExporterRuntime(), TEXT("EGLTFMaterialPropertyGroup"));
		}
		return Singleton;
	}
	template<> GLTFEXPORTERRUNTIME_API UEnum* StaticEnum<EGLTFMaterialPropertyGroup>()
	{
		return EGLTFMaterialPropertyGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGLTFMaterialPropertyGroup(EGLTFMaterialPropertyGroup_StaticEnum, TEXT("/Script/GLTFExporterRuntime"), TEXT("EGLTFMaterialPropertyGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup_Hash() { return 2712662936U; }
	UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GLTFExporterRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGLTFMaterialPropertyGroup"), 0, Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGLTFMaterialPropertyGroup::None", (int64)EGLTFMaterialPropertyGroup::None },
				{ "EGLTFMaterialPropertyGroup::BaseColorOpacity", (int64)EGLTFMaterialPropertyGroup::BaseColorOpacity },
				{ "EGLTFMaterialPropertyGroup::MetallicRoughness", (int64)EGLTFMaterialPropertyGroup::MetallicRoughness },
				{ "EGLTFMaterialPropertyGroup::EmissiveColor", (int64)EGLTFMaterialPropertyGroup::EmissiveColor },
				{ "EGLTFMaterialPropertyGroup::Normal", (int64)EGLTFMaterialPropertyGroup::Normal },
				{ "EGLTFMaterialPropertyGroup::AmbientOcclusion", (int64)EGLTFMaterialPropertyGroup::AmbientOcclusion },
				{ "EGLTFMaterialPropertyGroup::ClearCoatRoughness", (int64)EGLTFMaterialPropertyGroup::ClearCoatRoughness },
				{ "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal", (int64)EGLTFMaterialPropertyGroup::ClearCoatBottomNormal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "AmbientOcclusion.Name", "EGLTFMaterialPropertyGroup::AmbientOcclusion" },
				{ "BaseColorOpacity.DisplayName", "Base Color + Opacity (Mask)" },
				{ "BaseColorOpacity.Name", "EGLTFMaterialPropertyGroup::BaseColorOpacity" },
				{ "BlueprintType", "true" },
				{ "ClearCoatBottomNormal.DisplayName", "Clear Coat Bottom Normal" },
				{ "ClearCoatBottomNormal.Name", "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal" },
				{ "ClearCoatRoughness.DisplayName", "Clear Coat + Clear Coat Roughness" },
				{ "ClearCoatRoughness.Name", "EGLTFMaterialPropertyGroup::ClearCoatRoughness" },
				{ "EmissiveColor.DisplayName", "Emissive Color" },
				{ "EmissiveColor.Name", "EGLTFMaterialPropertyGroup::EmissiveColor" },
				{ "MetallicRoughness.DisplayName", "Metallic + Roughness" },
				{ "MetallicRoughness.Name", "EGLTFMaterialPropertyGroup::MetallicRoughness" },
				{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EGLTFMaterialPropertyGroup::None" },
				{ "Normal.DisplayName", "Normal" },
				{ "Normal.Name", "EGLTFMaterialPropertyGroup::Normal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
				nullptr,
				"EGLTFMaterialPropertyGroup",
				"EGLTFMaterialPropertyGroup",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGLTFMaterialBakeSizePOT_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT, Z_Construct_UPackage__Script_GLTFExporterRuntime(), TEXT("EGLTFMaterialBakeSizePOT"));
		}
		return Singleton;
	}
	template<> GLTFEXPORTERRUNTIME_API UEnum* StaticEnum<EGLTFMaterialBakeSizePOT>()
	{
		return EGLTFMaterialBakeSizePOT_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGLTFMaterialBakeSizePOT(EGLTFMaterialBakeSizePOT_StaticEnum, TEXT("/Script/GLTFExporterRuntime"), TEXT("EGLTFMaterialBakeSizePOT"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT_Hash() { return 3023559798U; }
	UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GLTFExporterRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGLTFMaterialBakeSizePOT"), 0, Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGLTFMaterialBakeSizePOT::POT_1", (int64)EGLTFMaterialBakeSizePOT::POT_1 },
				{ "EGLTFMaterialBakeSizePOT::POT_2", (int64)EGLTFMaterialBakeSizePOT::POT_2 },
				{ "EGLTFMaterialBakeSizePOT::POT_4", (int64)EGLTFMaterialBakeSizePOT::POT_4 },
				{ "EGLTFMaterialBakeSizePOT::POT_8", (int64)EGLTFMaterialBakeSizePOT::POT_8 },
				{ "EGLTFMaterialBakeSizePOT::POT_16", (int64)EGLTFMaterialBakeSizePOT::POT_16 },
				{ "EGLTFMaterialBakeSizePOT::POT_32", (int64)EGLTFMaterialBakeSizePOT::POT_32 },
				{ "EGLTFMaterialBakeSizePOT::POT_64", (int64)EGLTFMaterialBakeSizePOT::POT_64 },
				{ "EGLTFMaterialBakeSizePOT::POT_128", (int64)EGLTFMaterialBakeSizePOT::POT_128 },
				{ "EGLTFMaterialBakeSizePOT::POT_256", (int64)EGLTFMaterialBakeSizePOT::POT_256 },
				{ "EGLTFMaterialBakeSizePOT::POT_512", (int64)EGLTFMaterialBakeSizePOT::POT_512 },
				{ "EGLTFMaterialBakeSizePOT::POT_1024", (int64)EGLTFMaterialBakeSizePOT::POT_1024 },
				{ "EGLTFMaterialBakeSizePOT::POT_2048", (int64)EGLTFMaterialBakeSizePOT::POT_2048 },
				{ "EGLTFMaterialBakeSizePOT::POT_4096", (int64)EGLTFMaterialBakeSizePOT::POT_4096 },
				{ "EGLTFMaterialBakeSizePOT::POT_8192", (int64)EGLTFMaterialBakeSizePOT::POT_8192 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
				{ "POT_1.DisplayName", "1 x 1" },
				{ "POT_1.Name", "EGLTFMaterialBakeSizePOT::POT_1" },
				{ "POT_1024.DisplayName", "1024 x 1024" },
				{ "POT_1024.Name", "EGLTFMaterialBakeSizePOT::POT_1024" },
				{ "POT_128.DisplayName", "128 x 128" },
				{ "POT_128.Name", "EGLTFMaterialBakeSizePOT::POT_128" },
				{ "POT_16.DisplayName", "16 x 16" },
				{ "POT_16.Name", "EGLTFMaterialBakeSizePOT::POT_16" },
				{ "POT_2.DisplayName", "2 x 2" },
				{ "POT_2.Name", "EGLTFMaterialBakeSizePOT::POT_2" },
				{ "POT_2048.DisplayName", "2048 x 2048" },
				{ "POT_2048.Name", "EGLTFMaterialBakeSizePOT::POT_2048" },
				{ "POT_256.DisplayName", "256 x 256" },
				{ "POT_256.Name", "EGLTFMaterialBakeSizePOT::POT_256" },
				{ "POT_32.DisplayName", "32 x 32" },
				{ "POT_32.Name", "EGLTFMaterialBakeSizePOT::POT_32" },
				{ "POT_4.DisplayName", "4 x 4" },
				{ "POT_4.Name", "EGLTFMaterialBakeSizePOT::POT_4" },
				{ "POT_4096.DisplayName", "4096 x 4096" },
				{ "POT_4096.Name", "EGLTFMaterialBakeSizePOT::POT_4096" },
				{ "POT_512.DisplayName", "512 x 512" },
				{ "POT_512.Name", "EGLTFMaterialBakeSizePOT::POT_512" },
				{ "POT_64.DisplayName", "64 x 64" },
				{ "POT_64.Name", "EGLTFMaterialBakeSizePOT::POT_64" },
				{ "POT_8.DisplayName", "8 x 8" },
				{ "POT_8.Name", "EGLTFMaterialBakeSizePOT::POT_8" },
				{ "POT_8192.DisplayName", "8192 x 8192" },
				{ "POT_8192.Name", "EGLTFMaterialBakeSizePOT::POT_8192" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
				nullptr,
				"EGLTFMaterialBakeSizePOT",
				"EGLTFMaterialBakeSizePOT",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGLTFMaterialBakeMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeMode, Z_Construct_UPackage__Script_GLTFExporterRuntime(), TEXT("EGLTFMaterialBakeMode"));
		}
		return Singleton;
	}
	template<> GLTFEXPORTERRUNTIME_API UEnum* StaticEnum<EGLTFMaterialBakeMode>()
	{
		return EGLTFMaterialBakeMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGLTFMaterialBakeMode(EGLTFMaterialBakeMode_StaticEnum, TEXT("/Script/GLTFExporterRuntime"), TEXT("EGLTFMaterialBakeMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeMode_Hash() { return 2809343201U; }
	UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GLTFExporterRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGLTFMaterialBakeMode"), 0, Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGLTFMaterialBakeMode::Disabled", (int64)EGLTFMaterialBakeMode::Disabled },
				{ "EGLTFMaterialBakeMode::Simple", (int64)EGLTFMaterialBakeMode::Simple },
				{ "EGLTFMaterialBakeMode::UseMeshData", (int64)EGLTFMaterialBakeMode::UseMeshData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Comment", "/** Never bake material inputs. */" },
				{ "Disabled.Name", "EGLTFMaterialBakeMode::Disabled" },
				{ "Disabled.ToolTip", "Never bake material inputs." },
				{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
				{ "Simple.Comment", "/** Only use a simple quad if a material input needs to be baked out. */" },
				{ "Simple.Name", "EGLTFMaterialBakeMode::Simple" },
				{ "Simple.ToolTip", "Only use a simple quad if a material input needs to be baked out." },
				{ "UseMeshData.Comment", "/** Allow usage of the mesh data if a material input needs to be baked out with vertex data. */" },
				{ "UseMeshData.Name", "EGLTFMaterialBakeMode::UseMeshData" },
				{ "UseMeshData.ToolTip", "Allow usage of the mesh data if a material input needs to be baked out with vertex data." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
				nullptr,
				"EGLTFMaterialBakeMode",
				"EGLTFMaterialBakeMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGLTFOverrideMaterialBakeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFEXPORTERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, Z_Construct_UPackage__Script_GLTFExporterRuntime(), TEXT("GLTFOverrideMaterialBakeSettings"), sizeof(FGLTFOverrideMaterialBakeSettings), Get_Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Hash());
	}
	return Singleton;
}
template<> GLTFEXPORTERRUNTIME_API UScriptStruct* StaticStruct<FGLTFOverrideMaterialBakeSettings>()
{
	return FGLTFOverrideMaterialBakeSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGLTFOverrideMaterialBakeSettings(FGLTFOverrideMaterialBakeSettings::StaticStruct, TEXT("/Script/GLTFExporterRuntime"), TEXT("GLTFOverrideMaterialBakeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_GLTFExporterRuntime_StaticRegisterNativesFGLTFOverrideMaterialBakeSettings
{
	FScriptStruct_GLTFExporterRuntime_StaticRegisterNativesFGLTFOverrideMaterialBakeSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GLTFOverrideMaterialBakeSettings")),new UScriptStruct::TCppStructOps<FGLTFOverrideMaterialBakeSettings>);
	}
} ScriptStruct_GLTFExporterRuntime_StaticRegisterNativesFGLTFOverrideMaterialBakeSettings;
	struct Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSize_MetaData[];
#endif
		static void NewProp_bOverrideSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilter_MetaData[];
#endif
		static void NewProp_bOverrideFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTiling_MetaData[];
#endif
		static void NewProp_bOverrideTiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tiling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFOverrideMaterialBakeSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default size will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default size will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize = { "bOverrideSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides default size of the baked out texture. */" },
		{ "EditCondition", "bOverrideSize" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides default size of the baked out texture." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Size), Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialBakeSizePOT, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default filtering mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default filtering mode will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter = { "bOverrideFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default filtering mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideFilter" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default filtering mode used when sampling the baked out texture." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default addressing mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default addressing mode will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideTiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling = { "bOverrideTiling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default addressing mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideTiling" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default addressing mode used when sampling the baked out texture." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Tiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
		nullptr,
		&NewStructOps,
		"GLTFOverrideMaterialBakeSettings",
		sizeof(FGLTFOverrideMaterialBakeSettings),
		alignof(FGLTFOverrideMaterialBakeSettings),
		Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GLTFExporterRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GLTFOverrideMaterialBakeSettings"), sizeof(FGLTFOverrideMaterialBakeSettings), Get_Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Hash() { return 1324299086U; }
	void UGLTFMaterialExportOptions::StaticRegisterNativesUGLTFMaterialExportOptions()
	{
	}
	UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister()
	{
		return UGLTFMaterialExportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFMaterialExportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Inputs_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Inputs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** glTF-specific user data that can be added to material assets to override export options */" },
		{ "DisplayName", "GLTF Material Export Options" },
		{ "IncludePath", "UserData/GLTFMaterialUserData.h" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "glTF-specific user data that can be added to material assets to override export options" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Default bake settings for this material in general. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default bake settings for this material in general." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLTFMaterialExportOptions, Default), Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp = { "Inputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GLTFExporterRuntime_EGLTFMaterialPropertyGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Input-specific bake settings that override the defaults above. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Input-specific bake settings that override the defaults above." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLTFMaterialExportOptions, Inputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialExportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams = {
		&UGLTFMaterialExportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFMaterialExportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLTFMaterialExportOptions, 134664448);
	template<> GLTFEXPORTERRUNTIME_API UClass* StaticClass<UGLTFMaterialExportOptions>()
	{
		return UGLTFMaterialExportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLTFMaterialExportOptions(Z_Construct_UClass_UGLTFMaterialExportOptions, &UGLTFMaterialExportOptions::StaticClass, TEXT("/Script/GLTFExporterRuntime"), TEXT("UGLTFMaterialExportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialExportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
