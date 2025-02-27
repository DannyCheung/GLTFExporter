// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporterRuntime/Public/Actors/GLTFHotspotActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFHotspotActor() {}
// Cross Module References
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_AGLTFHotspotActor_NoRegister();
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_AGLTFHotspotActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GLTFExporterRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGLTFHotspotActor::execClicked)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clicked(Z_Param_TouchedComponent,Z_Param_ButtonPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLTFHotspotActor::execEndCursorOver)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCursorOver(Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLTFHotspotActor::execBeginCursorOver)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginCursorOver(Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	void AGLTFHotspotActor::StaticRegisterNativesAGLTFHotspotActor()
	{
		UClass* Class = AGLTFHotspotActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCursorOver", &AGLTFHotspotActor::execBeginCursorOver },
			{ "Clicked", &AGLTFHotspotActor::execClicked },
			{ "EndCursorOver", &AGLTFHotspotActor::execEndCursorOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics
	{
		struct GLTFHotspotActor_eventBeginCursorOver_Parms
		{
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFHotspotActor_eventBeginCursorOver_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFHotspotActor, nullptr, "BeginCursorOver", nullptr, nullptr, sizeof(GLTFHotspotActor_eventBeginCursorOver_Parms), Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics
	{
		struct GLTFHotspotActor_eventClicked_Parms
		{
			UPrimitiveComponent* TouchedComponent;
			FKey ButtonPressed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFHotspotActor_eventClicked_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFHotspotActor_eventClicked_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_TouchedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::NewProp_ButtonPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFHotspotActor, nullptr, "Clicked", nullptr, nullptr, sizeof(GLTFHotspotActor_eventClicked_Parms), Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFHotspotActor_Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFHotspotActor_Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics
	{
		struct GLTFHotspotActor_eventEndCursorOver_Parms
		{
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFHotspotActor_eventEndCursorOver_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::NewProp_TouchedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFHotspotActor, nullptr, "EndCursorOver", nullptr, nullptr, sizeof(GLTFHotspotActor_eventEndCursorOver_Parms), Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGLTFHotspotActor_NoRegister()
	{
		return AGLTFHotspotActor::StaticClass();
	}
	struct Z_Construct_UClass_AGLTFHotspotActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoveredImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggledImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledHoveredImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToggledHoveredImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHoveredImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultHoveredImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToggledImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultToggledImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultToggledHoveredImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultToggledHoveredImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIconMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultIconMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequencePlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGLTFHotspotActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGLTFHotspotActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGLTFHotspotActor_BeginCursorOver, "BeginCursorOver" }, // 3687616920
		{ &Z_Construct_UFunction_AGLTFHotspotActor_Clicked, "Clicked" }, // 3227416656
		{ &Z_Construct_UFunction_AGLTFHotspotActor_EndCursorOver, "EndCursorOver" }, // 2944617012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Actor wrapper for the GLTF hotspot component. Appears as a billboard and allows playback of animations when cursor input is enabled.\n */" },
		{ "DisplayName", "GLTF Hotspot" },
		{ "HideCategories", "Sprite Physics Collision Navigation" },
		{ "IncludePath", "Actors/GLTFHotspotActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor wrapper for the GLTF hotspot component. Appears as a billboard and allows playback of animations when cursor input is enabled." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SkeletalMeshActor_MetaData[] = {
		{ "Category", "Hotspot Animation" },
		{ "Comment", "/* The skeletal mesh actor that will be animated when the hotspot is clicked. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The skeletal mesh actor that will be animated when the hotspot is clicked." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SkeletalMeshActor = { "SkeletalMeshActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, SkeletalMeshActor), Z_Construct_UClass_ASkeletalMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SkeletalMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SkeletalMeshActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "Category", "Hotspot Animation" },
		{ "Comment", "/* The animation sequence that will be played on the skeletal mesh actor. Must be compatible with its skeletal mesh asset. */" },
		{ "EditCondition", "SkeletalMeshActor != nullptr" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The animation sequence that will be played on the skeletal mesh actor. Must be compatible with its skeletal mesh asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_AnimationSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "Category", "Hotspot Animation" },
		{ "Comment", "/* The level sequence that will be played in the level. */" },
		{ "EditCondition", "SkeletalMeshActor == nullptr" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The level sequence that will be played in the level." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Hotspot Appearance" },
		{ "Comment", "/* The billboard image that will be shown when the hotspot is in an inactive state or one without a specified image. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The billboard image that will be shown when the hotspot is in an inactive state or one without a specified image." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_HoveredImage_MetaData[] = {
		{ "Category", "Hotspot Appearance" },
		{ "Comment", "/** The optional billboard image that will be shown when a cursor enters the hotspot. */" },
		{ "EditCondition", "Image != nullptr" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The optional billboard image that will be shown when a cursor enters the hotspot." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_HoveredImage = { "HoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, HoveredImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_HoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_HoveredImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledImage_MetaData[] = {
		{ "Category", "Hotspot Appearance" },
		{ "Comment", "/** The optional billboard image that will be shown when the hotspot is toggled by a click. */" },
		{ "EditCondition", "Image != nullptr" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The optional billboard image that will be shown when the hotspot is toggled by a click." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledImage = { "ToggledImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, ToggledImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledHoveredImage_MetaData[] = {
		{ "Category", "Hotspot Appearance" },
		{ "Comment", "/** The optional billboard image that will be shown when the hotspot is toggled by a click and a cursor enters it. */" },
		{ "EditCondition", "Image != nullptr" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "ToolTip", "The optional billboard image that will be shown when the hotspot is toggled by a click and a cursor enters it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledHoveredImage = { "ToggledHoveredImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, ToggledHoveredImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledHoveredImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x0040000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, BillboardComponent), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0040000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultHoveredImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultHoveredImage = { "DefaultHoveredImage", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultHoveredImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultHoveredImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledImage = { "DefaultToggledImage", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultToggledImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledHoveredImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledHoveredImage = { "DefaultToggledHoveredImage", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultToggledHoveredImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledHoveredImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultIconMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultIconMaterial = { "DefaultIconMaterial", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, DefaultIconMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultIconMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultIconMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ActiveImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ActiveImage = { "ActiveImage", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, ActiveImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ActiveImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ActiveImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequencePlayer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GLTFHotspotActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequencePlayer = { "LevelSequencePlayer", nullptr, (EPropertyFlags)0x0042000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFHotspotActor, LevelSequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequencePlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGLTFHotspotActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SkeletalMeshActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_AnimationSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_HoveredImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ToggledHoveredImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultHoveredImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultToggledHoveredImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_DefaultIconMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_ActiveImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFHotspotActor_Statics::NewProp_LevelSequencePlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGLTFHotspotActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGLTFHotspotActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGLTFHotspotActor_Statics::ClassParams = {
		&AGLTFHotspotActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGLTFHotspotActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGLTFHotspotActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFHotspotActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGLTFHotspotActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGLTFHotspotActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGLTFHotspotActor, 2228148119);
	template<> GLTFEXPORTERRUNTIME_API UClass* StaticClass<AGLTFHotspotActor>()
	{
		return AGLTFHotspotActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGLTFHotspotActor(Z_Construct_UClass_AGLTFHotspotActor, &AGLTFHotspotActor::StaticClass, TEXT("/Script/GLTFExporterRuntime"), TEXT("AGLTFHotspotActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGLTFHotspotActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
