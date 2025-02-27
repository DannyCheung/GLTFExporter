// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef GLTFEXPORTERRUNTIME_GLTFHotspotActor_generated_h
#error "GLTFHotspotActor.generated.h already included, missing '#pragma once' in GLTFHotspotActor.h"
#endif
#define GLTFEXPORTERRUNTIME_GLTFHotspotActor_generated_h

#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_SPARSE_DATA
#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClicked); \
	DECLARE_FUNCTION(execEndCursorOver); \
	DECLARE_FUNCTION(execBeginCursorOver);


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClicked); \
	DECLARE_FUNCTION(execEndCursorOver); \
	DECLARE_FUNCTION(execBeginCursorOver);


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGLTFHotspotActor(); \
	friend struct Z_Construct_UClass_AGLTFHotspotActor_Statics; \
public: \
	DECLARE_CLASS(AGLTFHotspotActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GLTFExporterRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGLTFHotspotActor)


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAGLTFHotspotActor(); \
	friend struct Z_Construct_UClass_AGLTFHotspotActor_Statics; \
public: \
	DECLARE_CLASS(AGLTFHotspotActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GLTFExporterRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGLTFHotspotActor)


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGLTFHotspotActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGLTFHotspotActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGLTFHotspotActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGLTFHotspotActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGLTFHotspotActor(AGLTFHotspotActor&&); \
	NO_API AGLTFHotspotActor(const AGLTFHotspotActor&); \
public:


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGLTFHotspotActor(AGLTFHotspotActor&&); \
	NO_API AGLTFHotspotActor(const AGLTFHotspotActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGLTFHotspotActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGLTFHotspotActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGLTFHotspotActor)


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BillboardComponent() { return STRUCT_OFFSET(AGLTFHotspotActor, BillboardComponent); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AGLTFHotspotActor, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterial() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultImage() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultImage); } \
	FORCEINLINE static uint32 __PPO__DefaultHoveredImage() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultHoveredImage); } \
	FORCEINLINE static uint32 __PPO__DefaultToggledImage() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultToggledImage); } \
	FORCEINLINE static uint32 __PPO__DefaultToggledHoveredImage() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultToggledHoveredImage); } \
	FORCEINLINE static uint32 __PPO__DefaultIconMaterial() { return STRUCT_OFFSET(AGLTFHotspotActor, DefaultIconMaterial); } \
	FORCEINLINE static uint32 __PPO__ActiveImage() { return STRUCT_OFFSET(AGLTFHotspotActor, ActiveImage); } \
	FORCEINLINE static uint32 __PPO__LevelSequencePlayer() { return STRUCT_OFFSET(AGLTFHotspotActor, LevelSequencePlayer); }


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_31_PROLOG
#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_SPARSE_DATA \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_RPC_WRAPPERS \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_INCLASS \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_SPARSE_DATA \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFEXPORTERRUNTIME_API UClass* StaticClass<class AGLTFHotspotActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GLTFExporter_Source_GLTFExporterRuntime_Public_Actors_GLTFHotspotActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
