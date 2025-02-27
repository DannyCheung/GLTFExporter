// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Json/GLTFJsonObject.h"
#include "Json/GLTFJsonEnums.h"
#include "Json/GLTFJsonColor.h"
#include "Json/GLTFJsonTextureTransform.h"

struct FGLTFJsonTextureInfo : IGLTFJsonObject
{
	FGLTFJsonTextureIndex Index;
	int32 TexCoord;

	FGLTFJsonTextureTransform Transform;

	FGLTFJsonTextureInfo()
		: TexCoord(0)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		Writer.Write(TEXT("index"), Index);

		if (TexCoord != 0)
		{
			Writer.Write(TEXT("texCoord"), TexCoord);
		}

		if (!Transform.IsNearlyDefault(Writer.DefaultTolerance))
		{
			Writer.StartExtensions();
			Writer.Write(EGLTFJsonExtension::KHR_TextureTransform, Transform);
			Writer.EndExtensions();
		}
	}
};

struct FGLTFJsonNormalTextureInfo : FGLTFJsonTextureInfo
{
	float Scale;

	FGLTFJsonNormalTextureInfo()
		: Scale(1)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		Writer.Write(TEXT("index"), Index);

		if (TexCoord != 0)
		{
			Writer.Write(TEXT("texCoord"), TexCoord);
		}

		if (!FMath::IsNearlyEqual(Scale, 1, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("scale"), Scale);
		}
	}
};

struct FGLTFJsonOcclusionTextureInfo : FGLTFJsonTextureInfo
{
	float Strength;

	FGLTFJsonOcclusionTextureInfo()
		: Strength(1)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		Writer.Write(TEXT("index"), Index);

		if (TexCoord != 0)
		{
			Writer.Write(TEXT("texCoord"), TexCoord);
		}

		if (!FMath::IsNearlyEqual(Strength, 1, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("strength"), Strength);
		}
	}
};

struct FGLTFJsonPBRMetallicRoughness : IGLTFJsonObject
{
	FGLTFJsonColor4 BaseColorFactor;
	FGLTFJsonTextureInfo BaseColorTexture;

	float MetallicFactor;
	float RoughnessFactor;
	FGLTFJsonTextureInfo MetallicRoughnessTexture;

	FGLTFJsonPBRMetallicRoughness()
		: BaseColorFactor(FGLTFJsonColor4::White)
		, MetallicFactor(1)
		, RoughnessFactor(1)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		if (!BaseColorFactor.IsNearlyEqual(FGLTFJsonColor4::White, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("baseColorFactor"), BaseColorFactor);
		}

		if (BaseColorTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("baseColorTexture"), BaseColorTexture);
		}

		if (!FMath::IsNearlyEqual(MetallicFactor, 1, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("metallicFactor"), MetallicFactor);
		}

		if (!FMath::IsNearlyEqual(RoughnessFactor, 1, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("roughnessFactor"), RoughnessFactor);
		}

		if (MetallicRoughnessTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("metallicRoughnessTexture"), MetallicRoughnessTexture);
		}
	}
};

struct FGLTFJsonClearCoatExtension : IGLTFJsonObject
{
	float ClearCoatFactor;
	FGLTFJsonTextureInfo ClearCoatTexture;

	float ClearCoatRoughnessFactor;
	FGLTFJsonTextureInfo ClearCoatRoughnessTexture;

	FGLTFJsonNormalTextureInfo ClearCoatNormalTexture;

	FGLTFJsonClearCoatExtension()
		: ClearCoatFactor(0)
		, ClearCoatRoughnessFactor(0)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		if (!FMath::IsNearlyEqual(ClearCoatFactor, 0, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("clearcoatFactor"), ClearCoatFactor);
		}

		if (ClearCoatTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("clearcoatTexture"), ClearCoatTexture);
		}

		if (!FMath::IsNearlyEqual(ClearCoatRoughnessFactor, 0, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("clearcoatRoughnessFactor"), ClearCoatRoughnessFactor);
		}

		if (ClearCoatRoughnessTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("clearcoatRoughnessTexture"), ClearCoatRoughnessTexture);
		}

		if (ClearCoatNormalTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("clearcoatNormalTexture"), ClearCoatNormalTexture);
		}
	}
};

struct FGLTFJsonMaterial : IGLTFJsonObject
{
	FString Name;

	EGLTFJsonShadingModel ShadingModel;

	FGLTFJsonPBRMetallicRoughness PBRMetallicRoughness;

	FGLTFJsonNormalTextureInfo NormalTexture;
	FGLTFJsonOcclusionTextureInfo OcclusionTexture;

	FGLTFJsonTextureInfo EmissiveTexture;
	FGLTFJsonColor3 EmissiveFactor;

	EGLTFJsonAlphaMode AlphaMode;
	float AlphaCutoff;

	bool DoubleSided;

	EGLTFJsonBlendMode BlendMode;

	FGLTFJsonClearCoatExtension ClearCoat;

	FGLTFJsonMaterial()
		: ShadingModel(EGLTFJsonShadingModel::Default)
		, EmissiveFactor(FGLTFJsonColor3::Black)
		, AlphaMode(EGLTFJsonAlphaMode::Opaque)
		, AlphaCutoff(0.5f)
		, DoubleSided(false)
		, BlendMode(EGLTFJsonBlendMode::None)
	{
	}

	virtual void WriteObject(IGLTFJsonWriter& Writer) const override
	{
		if (!Name.IsEmpty())
		{
			Writer.Write(TEXT("name"), Name);
		}

		if (ShadingModel != EGLTFJsonShadingModel::None)
		{
			Writer.Write(TEXT("pbrMetallicRoughness"), PBRMetallicRoughness);
		}

		if (NormalTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("normalTexture"), NormalTexture);
		}

		if (OcclusionTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("occlusionTexture"), OcclusionTexture);
		}

		if (EmissiveTexture.Index != INDEX_NONE)
		{
			Writer.Write(TEXT("emissiveTexture"), EmissiveTexture);
		}

		if (!EmissiveFactor.IsNearlyEqual(FGLTFJsonColor3::Black, Writer.DefaultTolerance))
		{
			Writer.Write(TEXT("emissiveFactor"), EmissiveFactor);
		}

		if (AlphaMode != EGLTFJsonAlphaMode::Opaque)
		{
			Writer.Write(TEXT("alphaMode"), AlphaMode);

			if (AlphaMode == EGLTFJsonAlphaMode::Mask && !FMath::IsNearlyEqual(AlphaCutoff, 0.5f, Writer.DefaultTolerance))
			{
				Writer.Write(TEXT("alphaCutoff"), AlphaCutoff);
			}
		}

		if (DoubleSided)
		{
			Writer.Write(TEXT("doubleSided"), DoubleSided);
		}

		if (BlendMode != EGLTFJsonBlendMode::None || ShadingModel == EGLTFJsonShadingModel::Unlit || ShadingModel == EGLTFJsonShadingModel::ClearCoat)
		{
			Writer.StartExtensions();

			if (BlendMode != EGLTFJsonBlendMode::None)
			{
				Writer.StartExtension(EGLTFJsonExtension::EPIC_BlendModes);
				Writer.Write(TEXT("blendMode"), BlendMode);
				Writer.EndExtension();
			}

			if (ShadingModel == EGLTFJsonShadingModel::Unlit)
			{
				Writer.StartExtension(EGLTFJsonExtension::KHR_MaterialsUnlit);
				// Write empty object
				Writer.EndExtension();
			}
			else if (ShadingModel == EGLTFJsonShadingModel::ClearCoat)
			{
				Writer.Write(EGLTFJsonExtension::KHR_MaterialsClearCoat, ClearCoat);
			}

			Writer.EndExtensions();
		}
	}
};
