// Copyright Epic Games, Inc. All Rights Reserved.

#include "Converters/GLTFMeshConverters.h"
#include "Converters/GLTFMeshUtility.h"
#include "Converters/GLTFMaterialUtility.h"
#include "Builders/GLTFConvertBuilder.h"
#include "Tasks/GLTFMeshTasks.h"

void FGLTFStaticMeshConverter::Sanitize(const UStaticMesh*& StaticMesh, const UStaticMeshComponent*& StaticMeshComponent, FGLTFMaterialArray& Materials, int32& LODIndex)
{
	if (StaticMeshComponent != nullptr)
	{
		FGLTFMaterialUtility::ResolveOverrides(Materials, StaticMeshComponent->GetMaterials());
	}
	else
	{
		FGLTFMaterialUtility::ResolveOverrides(Materials, StaticMesh->StaticMaterials);
	}

	if (LODIndex < 0)
	{
		LODIndex = FGLTFMeshUtility::GetLOD(StaticMesh, StaticMeshComponent, Builder.ExportOptions->DefaultLevelOfDetail);
	}
	else
	{
		LODIndex = FMath::Min(LODIndex, FGLTFMeshUtility::GetMaximumLOD(StaticMesh));
	}

	if (StaticMeshComponent != nullptr)
	{
		// Only use the component if it's needed for baking, since we would
		// otherwise export a copy of this mesh for each mesh-component.
		if (Builder.ExportOptions->BakeMaterialInputs != EGLTFMaterialBakeMode::UseMeshData ||
			!FGLTFMaterialUtility::NeedsMeshData(Materials)) // TODO: if this expensive, cache the results for each material
		{
			StaticMeshComponent = nullptr;
		}
	}
}

FGLTFJsonMeshIndex FGLTFStaticMeshConverter::Convert(const UStaticMesh* StaticMesh,  const UStaticMeshComponent* StaticMeshComponent, FGLTFMaterialArray Materials, int32 LODIndex)
{
	const FGLTFJsonMeshIndex MeshIndex = Builder.AddMesh();
	Builder.SetupTask<FGLTFStaticMeshTask>(Builder, MeshSectionConverter, StaticMesh, StaticMeshComponent, Materials, LODIndex, MeshIndex);
	return MeshIndex;
}

void FGLTFSkeletalMeshConverter::Sanitize(const USkeletalMesh*& SkeletalMesh, const USkeletalMeshComponent*& SkeletalMeshComponent, FGLTFMaterialArray& Materials, int32& LODIndex)
{
	if (SkeletalMeshComponent != nullptr)
	{
		FGLTFMaterialUtility::ResolveOverrides(Materials, SkeletalMeshComponent->GetMaterials());
	}
	else
	{
		FGLTFMaterialUtility::ResolveOverrides(Materials, SkeletalMesh->Materials);
	}

	if (LODIndex < 0)
	{
		LODIndex = FGLTFMeshUtility::GetLOD(SkeletalMesh, SkeletalMeshComponent, Builder.ExportOptions->DefaultLevelOfDetail);
	}
	else
	{
		LODIndex = FMath::Min(LODIndex, FGLTFMeshUtility::GetMaximumLOD(SkeletalMesh));
	}

	if (SkeletalMeshComponent != nullptr)
	{
		// Only use the component if it's needed for baking, since we would
		// otherwise export a copy of this mesh for each mesh-component.
		if (Builder.ExportOptions->BakeMaterialInputs != EGLTFMaterialBakeMode::UseMeshData ||
			!FGLTFMaterialUtility::NeedsMeshData(Materials)) // TODO: if this expensive, cache the results for each material
		{
			SkeletalMeshComponent = nullptr;
		}
	}
}

FGLTFJsonMeshIndex FGLTFSkeletalMeshConverter::Convert(const USkeletalMesh* SkeletalMesh, const USkeletalMeshComponent* SkeletalMeshComponent, FGLTFMaterialArray Materials, int32 LODIndex)
{
	const FGLTFJsonMeshIndex MeshIndex = Builder.AddMesh();
	Builder.SetupTask<FGLTFSkeletalMeshTask>(Builder, MeshSectionConverter, SkeletalMesh, SkeletalMeshComponent, Materials, LODIndex, MeshIndex);
	return MeshIndex;
}
