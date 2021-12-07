// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "RenderTargetPreview/Asset/FinalOutputPreview.h"
#include "LivestreamingToolkitEditor.h"

class FAssetTypeActions_OWLRenderTargetPreview : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_OWLRenderTargertPreview", "Final Output Preview"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 248, 228); }
	virtual UClass* GetSupportedClass() const override { return UFinalOutputPreview::StaticClass(); }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override
	{
		EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

		for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
		{
			auto FinalOutputPreview = Cast<UFinalOutputPreview>(*ObjIt);
			if (FinalOutputPreview != nullptr)
			{
				FLivestreamingToolkitEditorModule* LivestramingToolkitEditor = &FModuleManager::LoadModuleChecked<FLivestreamingToolkitEditorModule>("LivestreamingToolkitEditor");
				LivestramingToolkitEditor->CreateFinalOutputPreviewEditor(Mode, EditWithinLevelEditor, FinalOutputPreview);
			}
		}
	}
};