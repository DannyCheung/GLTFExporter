// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Json/GLTFJsonRoot.h"
#include "Builders/GLTFTaskBuilder.h"

class FGLTFJsonBuilder : public FGLTFTaskBuilder
{
protected:

	FGLTFJsonBuilder(const FString& FilePath, const UGLTFExportOptions* ExportOptions);

	void WriteJson(FArchive& Archive);

	TSet<EGLTFJsonExtension> GetCustomExtensionsUsed() const;

public:

	FGLTFJsonSceneIndex& DefaultScene;

	void AddExtension(EGLTFJsonExtension Extension, bool bIsRequired = false);

	FGLTFJsonAccessorIndex AddAccessor(const FGLTFJsonAccessor& JsonAccessor = {});
	FGLTFJsonAnimationIndex AddAnimation(const FGLTFJsonAnimation& JsonAnimation = {});
	FGLTFJsonBufferIndex AddBuffer(const FGLTFJsonBuffer& JsonBuffer = {});
	FGLTFJsonBufferViewIndex AddBufferView(const FGLTFJsonBufferView& JsonBufferView = {});
	FGLTFJsonCameraIndex AddCamera(const FGLTFJsonCamera& JsonCamera = {});
	FGLTFJsonImageIndex AddImage(const FGLTFJsonImage& JsonImage = {});
	FGLTFJsonMaterialIndex AddMaterial(const FGLTFJsonMaterial& JsonMaterial = {});
	FGLTFJsonMeshIndex AddMesh(const FGLTFJsonMesh& JsonMesh = {});
	FGLTFJsonNodeIndex AddNode(const FGLTFJsonNode& JsonNode = {});
	FGLTFJsonSamplerIndex AddSampler(const FGLTFJsonSampler& JsonSampler = {});
	FGLTFJsonSceneIndex AddScene(const FGLTFJsonScene& JsonScene = {});
	FGLTFJsonSkinIndex AddSkin(const FGLTFJsonSkin& JsonSkin = {});
	FGLTFJsonTextureIndex AddTexture(const FGLTFJsonTexture& JsonTexture = {});
	FGLTFJsonBackdropIndex AddBackdrop(const FGLTFJsonBackdrop& JsonBackdrop = {});
	FGLTFJsonHotspotIndex AddHotspot(const FGLTFJsonHotspot& JsonHotspot = {});
	FGLTFJsonLightIndex AddLight(const FGLTFJsonLight& JsonLight = {});
	FGLTFJsonLightMapIndex AddLightMap(const FGLTFJsonLightMap& JsonLightMap = {});
	FGLTFJsonSkySphereIndex AddSkySphere(const FGLTFJsonSkySphere& JsonSkySphere = {});
	FGLTFJsonLevelVariantSetsIndex AddLevelVariantSets(const FGLTFJsonLevelVariantSets& JsonLevelVariantSets = {});

	FGLTFJsonNodeIndex AddChildNode(FGLTFJsonNodeIndex ParentNodeIndex, const FGLTFJsonNode& JsonNode = {});
	FGLTFJsonNodeIndex AddChildComponentNode(FGLTFJsonNodeIndex ParentNodeIndex, const FGLTFJsonNode& JsonNode = {});

	FGLTFJsonAccessor& GetAccessor(FGLTFJsonAccessorIndex AccessorIndex);
	FGLTFJsonAnimation& GetAnimation(FGLTFJsonAnimationIndex AnimationIndex);
	FGLTFJsonBuffer& GetBuffer(FGLTFJsonBufferIndex BufferIndex);
	FGLTFJsonBufferView& GetBufferView(FGLTFJsonBufferViewIndex BufferViewIndex);
	FGLTFJsonCamera& GetCamera(FGLTFJsonCameraIndex CameraIndex);
	FGLTFJsonImage& GetImage(FGLTFJsonImageIndex ImageIndex);
	FGLTFJsonMaterial& GetMaterial(FGLTFJsonMaterialIndex MaterialIndex);
	FGLTFJsonMesh& GetMesh(FGLTFJsonMeshIndex MeshIndex);
	FGLTFJsonNode& GetNode(FGLTFJsonNodeIndex NodeIndex);
	FGLTFJsonSampler& GetSampler(FGLTFJsonSamplerIndex SamplerIndex);
	FGLTFJsonScene& GetScene(FGLTFJsonSceneIndex SceneIndex);
	FGLTFJsonSkin& GetSkin(FGLTFJsonSkinIndex SkinIndex);
	FGLTFJsonTexture& GetTexture(FGLTFJsonTextureIndex TextureIndex);
	FGLTFJsonBackdrop& GetBackdrop(FGLTFJsonBackdropIndex BackdropIndex);
	FGLTFJsonHotspot& GetHotspot(FGLTFJsonHotspotIndex HotspotIndex);
	FGLTFJsonLight& GetLight(FGLTFJsonLightIndex LightIndex);
	FGLTFJsonLightMap& GetLightMap(FGLTFJsonLightMapIndex LightMapIndex);
	FGLTFJsonSkySphere& GetSkySphere(FGLTFJsonSkySphereIndex SkySphereIndex);
	FGLTFJsonLevelVariantSets& GetLevelVariantSets(FGLTFJsonLevelVariantSetsIndex LevelVariantSetsIndex);

	FGLTFJsonNodeIndex GetComponentNodeIndex(FGLTFJsonNodeIndex NodeIndex);

private:

	FString GetGeneratorString() const;

	static bool IsCustomExtension(EGLTFJsonExtension Extension);

	FGLTFJsonRoot JsonRoot;
};
