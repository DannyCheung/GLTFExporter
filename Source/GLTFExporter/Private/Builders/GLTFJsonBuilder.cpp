// Copyright Epic Games, Inc. All Rights Reserved.

#include "Builders/GLTFJsonBuilder.h"
#include "GLTFExporterModule.h"
#include "Interfaces/IPluginManager.h"
#include "Runtime/Launch/Resources/Version.h"

FGLTFJsonBuilder::FGLTFJsonBuilder(const FString& FilePath, const UGLTFExportOptions* ExportOptions)
	: FGLTFTaskBuilder(FilePath, ExportOptions)
	, DefaultScene(JsonRoot.DefaultScene)
{
	JsonRoot.Asset.Generator = GetGeneratorString();
}

void FGLTFJsonBuilder::WriteJson(FArchive& Archive)
{
	JsonRoot.WriteJson(Archive, !bIsGlbFile, ExportOptions->bSkipNearDefaultValues ? KINDA_SMALL_NUMBER : 0);
}

TSet<EGLTFJsonExtension> FGLTFJsonBuilder::GetCustomExtensionsUsed() const
{
	TSet<EGLTFJsonExtension> CustomExtensions;

	for (EGLTFJsonExtension Extension : JsonRoot.Extensions.Used)
	{
		if (IsCustomExtension(Extension))
		{
			CustomExtensions.Add(Extension);
		}
	}

	return CustomExtensions;
}

void FGLTFJsonBuilder::AddExtension(EGLTFJsonExtension Extension, bool bIsRequired)
{
	JsonRoot.Extensions.Used.Add(Extension);
	if (bIsRequired)
	{
		JsonRoot.Extensions.Required.Add(Extension);
	}
}

FGLTFJsonAccessorIndex FGLTFJsonBuilder::AddAccessor(const FGLTFJsonAccessor& JsonAccessor)
{
	return FGLTFJsonAccessorIndex(JsonRoot.Accessors.Add(MakeUnique<FGLTFJsonAccessor>(JsonAccessor)));
}

FGLTFJsonAnimationIndex FGLTFJsonBuilder::AddAnimation(const FGLTFJsonAnimation& JsonAnimation)
{
	return FGLTFJsonAnimationIndex(JsonRoot.Animations.Add(MakeUnique<FGLTFJsonAnimation>(JsonAnimation)));
}

FGLTFJsonBufferIndex FGLTFJsonBuilder::AddBuffer(const FGLTFJsonBuffer& JsonBuffer)
{
	return FGLTFJsonBufferIndex(JsonRoot.Buffers.Add(MakeUnique<FGLTFJsonBuffer>(JsonBuffer)));
}

FGLTFJsonBufferViewIndex FGLTFJsonBuilder::AddBufferView(const FGLTFJsonBufferView& JsonBufferView)
{
	return FGLTFJsonBufferViewIndex(JsonRoot.BufferViews.Add(MakeUnique<FGLTFJsonBufferView>(JsonBufferView)));
}

FGLTFJsonCameraIndex FGLTFJsonBuilder::AddCamera(const FGLTFJsonCamera& JsonCamera)
{
	return FGLTFJsonCameraIndex(JsonRoot.Cameras.Add(MakeUnique<FGLTFJsonCamera>(JsonCamera)));
}

FGLTFJsonImageIndex FGLTFJsonBuilder::AddImage(const FGLTFJsonImage& JsonImage)
{
	return FGLTFJsonImageIndex(JsonRoot.Images.Add(MakeUnique<FGLTFJsonImage>(JsonImage)));
}

FGLTFJsonMaterialIndex FGLTFJsonBuilder::AddMaterial(const FGLTFJsonMaterial& JsonMaterial)
{
	return FGLTFJsonMaterialIndex(JsonRoot.Materials.Add(MakeUnique<FGLTFJsonMaterial>(JsonMaterial)));
}

FGLTFJsonMeshIndex FGLTFJsonBuilder::AddMesh(const FGLTFJsonMesh& JsonMesh)
{
	return FGLTFJsonMeshIndex(JsonRoot.Meshes.Add(MakeUnique<FGLTFJsonMesh>(JsonMesh)));
}

FGLTFJsonNodeIndex FGLTFJsonBuilder::AddNode(const FGLTFJsonNode& JsonNode)
{
	return FGLTFJsonNodeIndex(JsonRoot.Nodes.Add(MakeUnique<FGLTFJsonNode>(JsonNode)));
}

FGLTFJsonSamplerIndex FGLTFJsonBuilder::AddSampler(const FGLTFJsonSampler& JsonSampler)
{
	return FGLTFJsonSamplerIndex(JsonRoot.Samplers.Add(MakeUnique<FGLTFJsonSampler>(JsonSampler)));
}

FGLTFJsonSceneIndex FGLTFJsonBuilder::AddScene(const FGLTFJsonScene& JsonScene)
{
	return FGLTFJsonSceneIndex(JsonRoot.Scenes.Add(MakeUnique<FGLTFJsonScene>(JsonScene)));
}

FGLTFJsonSkinIndex FGLTFJsonBuilder::AddSkin(const FGLTFJsonSkin& JsonSkin)
{
	return FGLTFJsonSkinIndex(JsonRoot.Skins.Add(MakeUnique<FGLTFJsonSkin>(JsonSkin)));
}

FGLTFJsonTextureIndex FGLTFJsonBuilder::AddTexture(const FGLTFJsonTexture& JsonTexture)
{
	return FGLTFJsonTextureIndex(JsonRoot.Textures.Add(MakeUnique<FGLTFJsonTexture>(JsonTexture)));
}

FGLTFJsonBackdropIndex FGLTFJsonBuilder::AddBackdrop(const FGLTFJsonBackdrop& JsonBackdrop)
{
	return FGLTFJsonBackdropIndex(JsonRoot.Backdrops.Add(MakeUnique<FGLTFJsonBackdrop>(JsonBackdrop)));
}

FGLTFJsonHotspotIndex FGLTFJsonBuilder::AddHotspot(const FGLTFJsonHotspot& JsonHotspot)
{
	return FGLTFJsonHotspotIndex(JsonRoot.Hotspots.Add(MakeUnique<FGLTFJsonHotspot>(JsonHotspot)));
}

FGLTFJsonLightIndex FGLTFJsonBuilder::AddLight(const FGLTFJsonLight& JsonLight)
{
	return FGLTFJsonLightIndex(JsonRoot.Lights.Add(MakeUnique<FGLTFJsonLight>(JsonLight)));
}

FGLTFJsonLightMapIndex FGLTFJsonBuilder::AddLightMap(const FGLTFJsonLightMap& JsonLightMap)
{
	return FGLTFJsonLightMapIndex(JsonRoot.LightMaps.Add(MakeUnique<FGLTFJsonLightMap>(JsonLightMap)));
}

FGLTFJsonSkySphereIndex FGLTFJsonBuilder::AddSkySphere(const FGLTFJsonSkySphere& JsonSkySphere)
{
	return FGLTFJsonSkySphereIndex(JsonRoot.SkySpheres.Add(MakeUnique<FGLTFJsonSkySphere>(JsonSkySphere)));
}

FGLTFJsonLevelVariantSetsIndex FGLTFJsonBuilder::AddLevelVariantSets(const FGLTFJsonLevelVariantSets& JsonLevelVariantSets)
{
	return FGLTFJsonLevelVariantSetsIndex(JsonRoot.LevelVariantSets.Add(MakeUnique<FGLTFJsonLevelVariantSets>(JsonLevelVariantSets)));
}

FGLTFJsonNodeIndex FGLTFJsonBuilder::AddChildNode(FGLTFJsonNodeIndex ParentIndex, const FGLTFJsonNode& JsonNode)
{
	const FGLTFJsonNodeIndex ChildIndex = AddNode(JsonNode);

	if (ParentIndex != INDEX_NONE)
	{
		GetNode(ParentIndex).Children.Add(ChildIndex);
	}

	return ChildIndex;
}

FGLTFJsonNodeIndex FGLTFJsonBuilder::AddChildComponentNode(FGLTFJsonNodeIndex ParentIndex, const FGLTFJsonNode& JsonNode)
{
	const FGLTFJsonNodeIndex ChildIndex = AddChildNode(ParentIndex, JsonNode);

	if (ParentIndex != INDEX_NONE)
	{
		GetNode(ParentIndex).ComponentNode = ChildIndex;
	}

	return ChildIndex;
}

FGLTFJsonAccessor& FGLTFJsonBuilder::GetAccessor(FGLTFJsonAccessorIndex AccessorIndex)
{
	return *JsonRoot.Accessors[AccessorIndex];
}

FGLTFJsonAnimation& FGLTFJsonBuilder::GetAnimation(FGLTFJsonAnimationIndex AnimationIndex)
{
	return *JsonRoot.Animations[AnimationIndex];
}

FGLTFJsonBuffer& FGLTFJsonBuilder::GetBuffer(FGLTFJsonBufferIndex BufferIndex)
{
	return *JsonRoot.Buffers[BufferIndex];
}

FGLTFJsonBufferView& FGLTFJsonBuilder::GetBufferView(FGLTFJsonBufferViewIndex BufferViewIndex)
{
	return *JsonRoot.BufferViews[BufferViewIndex];
}

FGLTFJsonCamera& FGLTFJsonBuilder::GetCamera(FGLTFJsonCameraIndex CameraIndex)
{
	return *JsonRoot.Cameras[CameraIndex];
}

FGLTFJsonImage& FGLTFJsonBuilder::GetImage(FGLTFJsonImageIndex ImageIndex)
{
	return *JsonRoot.Images[ImageIndex];
}

FGLTFJsonMaterial& FGLTFJsonBuilder::GetMaterial(FGLTFJsonMaterialIndex MaterialIndex)
{
	return *JsonRoot.Materials[MaterialIndex];
}

FGLTFJsonMesh& FGLTFJsonBuilder::GetMesh(FGLTFJsonMeshIndex MeshIndex)
{
	return *JsonRoot.Meshes[MeshIndex];
}

FGLTFJsonNode& FGLTFJsonBuilder::GetNode(FGLTFJsonNodeIndex NodeIndex)
{
	return *JsonRoot.Nodes[NodeIndex];
}

FGLTFJsonSampler& FGLTFJsonBuilder::GetSampler(FGLTFJsonSamplerIndex SamplerIndex)
{
	return *JsonRoot.Samplers[SamplerIndex];
}

FGLTFJsonScene& FGLTFJsonBuilder::GetScene(FGLTFJsonSceneIndex SceneIndex)
{
	return *JsonRoot.Scenes[SceneIndex];
}

FGLTFJsonSkin& FGLTFJsonBuilder::GetSkin(FGLTFJsonSkinIndex SkinIndex)
{
	return *JsonRoot.Skins[SkinIndex];
}

FGLTFJsonTexture& FGLTFJsonBuilder::GetTexture(FGLTFJsonTextureIndex TextureIndex)
{
	return *JsonRoot.Textures[TextureIndex];
}

FGLTFJsonBackdrop& FGLTFJsonBuilder::GetBackdrop(FGLTFJsonBackdropIndex BackdropIndex)
{
	return *JsonRoot.Backdrops[BackdropIndex];
}

FGLTFJsonHotspot& FGLTFJsonBuilder::GetHotspot(FGLTFJsonHotspotIndex HotspotIndex)
{
	return *JsonRoot.Hotspots[HotspotIndex];
}

FGLTFJsonLight& FGLTFJsonBuilder::GetLight(FGLTFJsonLightIndex LightIndex)
{
	return *JsonRoot.Lights[LightIndex];
}

FGLTFJsonLightMap& FGLTFJsonBuilder::GetLightMap(FGLTFJsonLightMapIndex LightMapIndex)
{
	return *JsonRoot.LightMaps[LightMapIndex];
}

FGLTFJsonSkySphere& FGLTFJsonBuilder::GetSkySphere(FGLTFJsonSkySphereIndex SkySphereIndex)
{
	return *JsonRoot.SkySpheres[SkySphereIndex];
}

FGLTFJsonLevelVariantSets& FGLTFJsonBuilder::GetLevelVariantSets(FGLTFJsonLevelVariantSetsIndex LevelVariantSetsIndex)
{
	return *JsonRoot.LevelVariantSets[LevelVariantSetsIndex];
}

FGLTFJsonNodeIndex FGLTFJsonBuilder::GetComponentNodeIndex(FGLTFJsonNodeIndex NodeIndex)
{
	if (NodeIndex == INDEX_NONE)
	{
		return FGLTFJsonNodeIndex(INDEX_NONE);
	}

	const FGLTFJsonNode& Node = GetNode(NodeIndex);
	return Node.ComponentNode != INDEX_NONE ? Node.ComponentNode : NodeIndex;
}

FString FGLTFJsonBuilder::GetGeneratorString() const
{
	const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(GLTFEXPORTER_MODULE_NAME);
	const FPluginDescriptor& PluginDescriptor = Plugin->GetDescriptor();

	return ExportOptions->bIncludeGeneratorVersion
		? TEXT(EPIC_PRODUCT_NAME) TEXT(" ") ENGINE_VERSION_STRING TEXT(" ") + PluginDescriptor.FriendlyName + TEXT(" ") + PluginDescriptor.VersionName
		: TEXT(EPIC_PRODUCT_NAME) TEXT(" ") + PluginDescriptor.FriendlyName;
}

bool FGLTFJsonBuilder::IsCustomExtension(EGLTFJsonExtension Extension)
{
	const TCHAR CustomPrefix[] = TEXT("EPIC_");

	const TCHAR* ExtensionString = FGLTFJsonUtility::GetValue(Extension);
	return FCString::Strncmp(ExtensionString, CustomPrefix, GetNum(CustomPrefix) - 1) == 0;
}
