// Copyright Epic Games, Inc. All Rights Reserved.

#include "Builders/GLTFImageBuilder.h"
#include "Builders/GLTFFileUtility.h"
#include "Builders/GLTFImageUtility.h"
#include "Misc/FileHelper.h"

FGLTFImageBuilder::FGLTFImageBuilder(const FString& FilePath, const UGLTFExportOptions* ExportOptions)
	: FGLTFBufferBuilder(FilePath, ExportOptions)
{
}

FGLTFJsonImageIndex FGLTFImageBuilder::AddImage(const TArray<FColor>& Pixels, FIntPoint Size, bool bIgnoreAlpha, EGLTFTextureType Type, const FString& Name)
{
	check(Pixels.Num() == Size.X * Size.Y);
	return AddImage(Pixels.GetData(), Size, bIgnoreAlpha, Type, Name);
}

FGLTFJsonImageIndex FGLTFImageBuilder::AddImage(const FColor* Pixels, int64 ByteLength, FIntPoint Size, bool bIgnoreAlpha, EGLTFTextureType Type, const FString& Name)
{
	check(ByteLength == Size.X * Size.Y * sizeof(FColor));
	return AddImage(Pixels, Size, bIgnoreAlpha, Type, Name);
}

FGLTFJsonImageIndex FGLTFImageBuilder::AddImage(const FColor* Pixels, FIntPoint Size, bool bIgnoreAlpha, EGLTFTextureType Type, const FString& Name)
{
	TArray64<uint8> CompressedData;

	const EGLTFJsonMimeType ImageFormat = GetImageFormat(Pixels, Size, bIgnoreAlpha, Type);
	switch (ImageFormat)
	{
		case EGLTFJsonMimeType::None:
			return FGLTFJsonImageIndex(INDEX_NONE);

		case EGLTFJsonMimeType::PNG:
			FGLTFImageUtility::CompressToPNG(Pixels, Size, CompressedData);
			break;

		case EGLTFJsonMimeType::JPEG:
			FGLTFImageUtility::CompressToJPEG(Pixels, Size, ExportOptions->TextureImageQuality, CompressedData);
			break;

		default:
			checkNoEntry();
			break;
	}

	return AddImage(CompressedData.GetData(), CompressedData.Num(), ImageFormat, Name);
}

FGLTFJsonImageIndex FGLTFImageBuilder::AddImage(const void* CompressedData, int64 CompressedByteLength, EGLTFJsonMimeType MimeType, const FString& Name)
{
	// TODO: should this function be renamed to GetOrAddImage?

	const FGLTFBinaryHashKey HashKey(CompressedData, CompressedByteLength);
	FGLTFJsonImageIndex& ImageIndex = UniqueImageIndices.FindOrAdd(HashKey);

	if (ImageIndex == INDEX_NONE)
	{
		FGLTFJsonImage JsonImage;

		if (bIsGlbFile)
		{
			JsonImage.Name = Name;
			JsonImage.MimeType = MimeType;
			JsonImage.BufferView = AddBufferView(CompressedData, CompressedByteLength);
		}
		else
		{
			JsonImage.Uri = SaveImageToFile(CompressedData, CompressedByteLength, MimeType, Name);
		}

		ImageIndex = FGLTFJsonBuilder::AddImage(JsonImage);
	}

	return ImageIndex;
}

EGLTFJsonMimeType FGLTFImageBuilder::GetImageFormat(const FColor* Pixels, FIntPoint Size, bool bIgnoreAlpha, EGLTFTextureType Type) const
{
	switch (ExportOptions->TextureImageFormat)
	{
		case EGLTFTextureImageFormat::None:
			return EGLTFJsonMimeType::None;

		case EGLTFTextureImageFormat::PNG:
			return EGLTFJsonMimeType::PNG;

		case EGLTFTextureImageFormat::JPEG:
			return
				!EnumHasAllFlags(static_cast<EGLTFTextureType>(ExportOptions->NoLossyImageFormatFor), Type) &&
				(bIgnoreAlpha || FGLTFImageUtility::NoAlphaNeeded(Pixels, Size)) ?
				EGLTFJsonMimeType::JPEG : EGLTFJsonMimeType::PNG;

		default:
			checkNoEntry();
			return EGLTFJsonMimeType::None;
	}
}

FString FGLTFImageBuilder::SaveImageToFile(const void* CompressedData, int64 CompressedByteLength, EGLTFJsonMimeType MimeType, const FString& Name)
{
	const TCHAR* Extension = FGLTFFileUtility::GetFileExtension(MimeType);
	const FString ImageUri = FGLTFFileUtility::GetUniqueFilename(Name, Extension, UniqueImageUris);

	const TArrayView<const uint8> ImageData(static_cast<const uint8*>(CompressedData), CompressedByteLength);
	const FString ImagePath = FPaths::Combine(DirPath, ImageUri);

	if (!FFileHelper::SaveArrayToFile(ImageData, *ImagePath))
	{
		AddErrorMessage(FString::Printf(TEXT("Failed to save image %s to file: %s"), *Name, *ImagePath));
		return TEXT("");
	}

	UniqueImageUris.Add(ImageUri);
	return ImageUri;
}
