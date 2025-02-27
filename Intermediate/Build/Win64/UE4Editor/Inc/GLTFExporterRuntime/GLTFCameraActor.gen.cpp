// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporterRuntime/Public/Actors/GLTFCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFCameraActor() {}
// Cross Module References
	GLTFEXPORTERRUNTIME_API UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode();
	UPackage* Z_Construct_UPackage__Script_GLTFExporterRuntime();
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_AGLTFCameraActor_NoRegister();
	GLTFEXPORTERRUNTIME_API UClass* Z_Construct_UClass_AGLTFCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EGLTFCameraControlMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode, Z_Construct_UPackage__Script_GLTFExporterRuntime(), TEXT("EGLTFCameraControlMode"));
		}
		return Singleton;
	}
	template<> GLTFEXPORTERRUNTIME_API UEnum* StaticEnum<EGLTFCameraControlMode>()
	{
		return EGLTFCameraControlMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGLTFCameraControlMode(EGLTFCameraControlMode_StaticEnum, TEXT("/Script/GLTFExporterRuntime"), TEXT("EGLTFCameraControlMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode_Hash() { return 1944790130U; }
	UEnum* Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GLTFExporterRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGLTFCameraControlMode"), 0, Get_Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGLTFCameraControlMode::FreeLook", (int64)EGLTFCameraControlMode::FreeLook },
				{ "EGLTFCameraControlMode::Orbital", (int64)EGLTFCameraControlMode::Orbital },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FreeLook.Name", "EGLTFCameraControlMode::FreeLook" },
				{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
				{ "Orbital.Name", "EGLTFCameraControlMode::Orbital" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
				nullptr,
				"EGLTFCameraControlMode",
				"EGLTFCameraControlMode",
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
	DEFINE_FUNCTION(AGLTFCameraActor::execOnMouseWheelAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseWheelAxis(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLTFCameraActor::execOnMouseY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseY(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGLTFCameraActor::execOnMouseX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseX(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void AGLTFCameraActor::StaticRegisterNativesAGLTFCameraActor()
	{
		UClass* Class = AGLTFCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMouseWheelAxis", &AGLTFCameraActor::execOnMouseWheelAxis },
			{ "OnMouseX", &AGLTFCameraActor::execOnMouseX },
			{ "OnMouseY", &AGLTFCameraActor::execOnMouseY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics
	{
		struct GLTFCameraActor_eventOnMouseWheelAxis_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFCameraActor_eventOnMouseWheelAxis_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFCameraActor, nullptr, "OnMouseWheelAxis", nullptr, nullptr, sizeof(GLTFCameraActor_eventOnMouseWheelAxis_Parms), Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics
	{
		struct GLTFCameraActor_eventOnMouseX_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFCameraActor_eventOnMouseX_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFCameraActor, nullptr, "OnMouseX", nullptr, nullptr, sizeof(GLTFCameraActor_eventOnMouseX_Parms), Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFCameraActor_OnMouseX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFCameraActor_OnMouseX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics
	{
		struct GLTFCameraActor_eventOnMouseY_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLTFCameraActor_eventOnMouseY_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGLTFCameraActor, nullptr, "OnMouseY", nullptr, nullptr, sizeof(GLTFCameraActor_eventOnMouseY_Parms), Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGLTFCameraActor_OnMouseY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGLTFCameraActor_OnMouseY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGLTFCameraActor_NoRegister()
	{
		return AGLTFCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AGLTFCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAngleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAngleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAngleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAngleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAngleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawAngleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAngleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawAngleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DollyDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DollyDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DollySensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DollySensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInertia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInertia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGLTFCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporterRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGLTFCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGLTFCameraActor_OnMouseWheelAxis, "OnMouseWheelAxis" }, // 1820462224
		{ &Z_Construct_UFunction_AGLTFCameraActor_OnMouseX, "OnMouseX" }, // 622108187
		{ &Z_Construct_UFunction_AGLTFCameraActor_OnMouseY, "OnMouseY" }, // 3471320390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GLTF-compatible camera that will carry over settings and simulate the behavior in the resulting viewer.\n * Supports two modes:\n * - FreeLook: Allows the user to rotate the camera without modifying its position.\n * - Orbital: Focuses one actor in the scene and orbits it through mouse control.\n */" },
		{ "DisplayName", "GLTF Camera" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Actors/GLTFCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GLTF-compatible camera that will carry over settings and simulate the behavior in the resulting viewer.\nSupports two modes:\n- FreeLook: Allows the user to rotate the camera without modifying its position.\n- Orbital: Focuses one actor in the scene and orbits it through mouse control." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Camera mode */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Camera mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, Mode), Z_Construct_UEnum_GLTFExporterRuntime_EGLTFCameraControlMode, METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Actor which the camera will focus on and subsequently orbit when using Orbital mode. */" },
		{ "EditCondition", "Mode == EGLTFCameraControlMode::Orbital" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Actor which the camera will focus on and subsequently orbit when using Orbital mode." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMin_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Minimum pitch angle (in degrees) for the camera. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Minimum pitch angle (in degrees) for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMin = { "PitchAngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, PitchAngleMin), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMax_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Maximum pitch angle (in degrees) for the camera. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Maximum pitch angle (in degrees) for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMax = { "PitchAngleMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, PitchAngleMax), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMin_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Minimum yaw angle (in degrees) for the camera. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Minimum yaw angle (in degrees) for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMin = { "YawAngleMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, YawAngleMin), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMax_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Maximum yaw angle (in degrees) for the camera. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Maximum yaw angle (in degrees) for the camera." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMax = { "YawAngleMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, YawAngleMax), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMin_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Closest distance the camera can approach the focused actor. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Closest distance the camera can approach the focused actor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMin = { "DistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, DistanceMin), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMax_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Farthest distance the camera can recede from the focused actor. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Farthest distance the camera can recede from the focused actor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMax = { "DistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, DistanceMax), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollyDuration_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Duration (in seconds) that it takes the camera to complete a change in distance. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Duration (in seconds) that it takes the camera to complete a change in distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollyDuration = { "DollyDuration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, DollyDuration), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollyDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollyDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollySensitivity_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Size of the dolly movement relative to user input. The higher the value, the faster it moves. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Size of the dolly movement relative to user input. The higher the value, the faster it moves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollySensitivity = { "DollySensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, DollySensitivity), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollySensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollySensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationInertia_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Deceleration that occurs after rotational movement. The higher the value, the longer it takes to settle. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Deceleration that occurs after rotational movement. The higher the value, the longer it takes to settle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationInertia = { "RotationInertia", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, RotationInertia), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationInertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationInertia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationSensitivity_MetaData[] = {
		{ "Category", "GLTF Camera Actor" },
		{ "Comment", "/* Size of the rotational movement relative to user input. The higher the value, the faster it moves. */" },
		{ "ModuleRelativePath", "Public/Actors/GLTFCameraActor.h" },
		{ "ToolTip", "Size of the rotational movement relative to user input. The higher the value, the faster it moves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationSensitivity = { "RotationSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGLTFCameraActor, RotationSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGLTFCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_PitchAngleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_YawAngleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollyDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_DollySensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationInertia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGLTFCameraActor_Statics::NewProp_RotationSensitivity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGLTFCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGLTFCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGLTFCameraActor_Statics::ClassParams = {
		&AGLTFCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGLTFCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGLTFCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGLTFCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGLTFCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGLTFCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGLTFCameraActor, 3412352622);
	template<> GLTFEXPORTERRUNTIME_API UClass* StaticClass<AGLTFCameraActor>()
	{
		return AGLTFCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGLTFCameraActor(Z_Construct_UClass_AGLTFCameraActor, &AGLTFCameraActor::StaticClass, TEXT("/Script/GLTFExporterRuntime"), TEXT("AGLTFCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGLTFCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
