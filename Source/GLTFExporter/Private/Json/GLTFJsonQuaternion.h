// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Core/GLTFQuaternion.h"
#include "Json/GLTFJsonArray.h"

struct FGLTFJsonQuaternion final : TGLTFQuaternion<float>, IGLTFJsonArray
{
	static const TGLTFQuaternion Identity;

	FGLTFJsonQuaternion(const TGLTFQuaternion& Other)
		: TGLTFQuaternion(Other)
	{
	}

	FGLTFJsonQuaternion& operator=(const TGLTFQuaternion& Other)
	{
		*static_cast<TGLTFQuaternion*>(this) = Other;
		return *this;
	}

	virtual void WriteArray(IGLTFJsonWriter& Writer) const override
	{
		for (int32 i = 0; i < 4; ++i)
		{
			Writer.Write(Components[i]);
		}
	}

	bool IsNearlyEqual(const TGLTFQuaternion& Other, float Tolerance = KINDA_SMALL_NUMBER) const
	{
		return (FMath::Abs(X - Other.X) <= Tolerance && FMath::Abs(Y - Other.Y) <= Tolerance && FMath::Abs(Z - Other.Z) <= Tolerance && FMath::Abs(W - Other.W) <= Tolerance)
			|| (FMath::Abs(X + Other.X) <= Tolerance && FMath::Abs(Y + Other.Y) <= Tolerance && FMath::Abs(Z + Other.Z) <= Tolerance && FMath::Abs(W + Other.W) <= Tolerance);
	}
};
