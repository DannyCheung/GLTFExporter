// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Builders/GLTFJsonBuilder.h"
#include "Serialization/BufferArchive.h"

class FGLTFBufferBuilder : public FGLTFJsonBuilder
{
protected:

	FGLTFBufferBuilder(const FString& FilePath, const UGLTFExportOptions* ExportOptions);
	~FGLTFBufferBuilder();

	const FBufferArchive* GetBufferData() const;

public:

	FGLTFJsonBufferViewIndex AddBufferView(const void* RawData, uint64 ByteLength, EGLTFJsonBufferTarget BufferTarget = EGLTFJsonBufferTarget::None, uint8 DataAlignment = 4);

	template <class ElementType>
	FGLTFJsonBufferViewIndex AddBufferView(const TArray<ElementType>& Array, EGLTFJsonBufferTarget BufferTarget = EGLTFJsonBufferTarget::None, uint8 DataAlignment = 4)
	{
		return AddBufferView(Array.GetData(), Array.Num() * sizeof(ElementType), BufferTarget, DataAlignment);
	}

private:

	bool InitializeBuffer();

	FGLTFJsonBufferIndex BufferIndex;
	TUniquePtr<FArchive> BufferArchive;
};
