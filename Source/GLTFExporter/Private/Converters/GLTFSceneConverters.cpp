// Copyright Epic Games, Inc. All Rights Reserved.

#include "Converters/GLTFSceneConverters.h"
#include "Builders/GLTFContainerBuilder.h"
#include "Converters/GLTFConverterUtility.h"
#include "Converters/GLTFActorUtility.h"
#include "LevelVariantSetsActor.h"

FGLTFJsonSceneIndex FGLTFSceneConverter::Convert(const UWorld* World)
{
	FGLTFJsonScene Scene;
	World->GetName(Scene.Name);

	for (int32 Index = 0; Index < World->GetNumLevels(); ++Index)
	{
		ULevel* Level = World->GetLevel(Index);
		if (Level == nullptr)
		{
			continue;
		}

		// TODO: export Level->Model ?

		for (const AActor* Actor : Level->Actors)
		{
			if (Actor == Level->GetDefaultBrush())
			{
				continue; // TODO: can we safely assume no other actor is ever attached to the default brush?
			}

			if (World->HasDefaultPhysicsVolume() && Actor == World->GetDefaultPhysicsVolume())
			{
				continue; // TODO: can we safely assume no other actor is ever attached to the default physics volume?
			}

			// TODO: should a LevelVariantSet be exported even if not selected for export?
			if (const ALevelVariantSetsActor *LevelVariantSetsActor = Cast<ALevelVariantSetsActor>(Actor))
			{
				if (Builder.ExportOptions->bExportVariantSets)
				{
					if (const ULevelVariantSets* LevelVariantSets = const_cast<ALevelVariantSetsActor*>(LevelVariantSetsActor)->GetLevelVariantSets(true))
					{
						const FGLTFJsonLevelVariantSetsIndex LevelVariantSetsIndex = Builder.GetOrAddLevelVariantSets(LevelVariantSets);
						if (LevelVariantSetsIndex != INDEX_NONE)
						{
							Scene.LevelVariantSets.Add(LevelVariantSetsIndex);
						}
					}
				}
			}

			const FGLTFJsonNodeIndex NodeIndex = Builder.GetOrAddNode(Actor);
			if (NodeIndex != INDEX_NONE && FGLTFActorUtility::IsRootActor(Actor, Builder.bSelectedActorsOnly))
			{
				// TODO: to avoid having to add irrelevant actors/components let GLTFComponentConverter decide and add root nodes to scene.
				// This change may require node converters to support cyclic calls.
				Scene.Nodes.Add(NodeIndex);
			}
		}
	}

	return Builder.AddScene(Scene);
}
