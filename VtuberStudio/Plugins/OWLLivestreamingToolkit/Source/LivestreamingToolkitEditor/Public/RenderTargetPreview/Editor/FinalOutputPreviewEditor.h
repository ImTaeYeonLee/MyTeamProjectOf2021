// Copyright Off World Live Limited, 2020-2021 with the exception of code taken from Unreal Engine source explicitly marked as Copyright Epic Games


#pragma once

#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "Editor/PropertyEditor/Public/PropertyEditorDelegates.h"
#include "RenderTargetPreview/Editor/FinalOutputPreviewEditor.h"
#include "IDetailsView.h"
#include "TextureEditorSettings.h"

/**
 * This class is a hybrid copy of UE4's ITextureEditorToolkit and TextureEditorToolkit
 * which can be found in TextureEditor editor module.
 *
 * It omits any functionality dealing with volume textures, mips and levels.
 * It also avoids creating quick info panel, or extending a default asset toolbar.
 * It works with UFinalOutputPreview object rather than the UTexture2D object.
 * It also avoids undo, redo interface as we are not actually editing any objects here.
 * It also avoids dealing with re-importing textures and handling any compression settings.
 * IT slightly shifts the default tab layout to make it kinder on the eye.
 *
 * We copy parts of the implementation of TextureEditor as it is important for us to
 * keep the style/ functionality the user is accustomed to from texture editor
 * while restricting the irrelevant functionality (which cannot be done by extending editor classes).
 */

class SDockableTab;
class UFinalOutputPreview;
class SFinalOutputPreviewEditorViewport;

class LIVESTREAMINGTOOLKITEDITOR_API FFinalOutputPreviewEditor : public FAssetEditorToolkit
{
public: 

	FFinalOutputPreviewEditor();
	virtual ~FFinalOutputPreviewEditor() override;

	// Begin Epic Source: original file: UnrealEngine/Engine/Source/Editor/TextureEditor/Private/TextureEditorToolkit.h -  Copyright Epic Games, Inc. All Rights Reserved. 
public:
	void InitFinalOutputPreviewEditor(
		const EToolkitMode::Type Mode,
		const TSharedPtr<class IToolkitHost>& InitToolkitHost,
		UFinalOutputPreview* FinalOutputPreview);

public:

	/** Begin FAssetEditorToolkit interface */
	virtual FString GetDocumentationLink() const override;
    virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
    virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;

public:
	void CalculateTextureDimensions(uint32& Width, uint32& Height) const;
	ESimpleElementBlendMode GetColourChannelBlendMode() const;
	UTexture* GetTexture() const;
	bool HasValidTextureResource() const;
	double GetCustomZoomLevel() const;
	void SetCustomZoomLevel(double ZoomValue);
	void CalcInitialSizes();
	void SetZoomMode(const ETextureEditorZoomMode ZoomMode);
	ETextureEditorZoomMode GetZoomMode() const;
	double CalculateDisplayedZoomLevel() const;
	void OffsetZoom(double OffsetValue, bool bSnapToStepSize = true);
	void ZoomIn();
	void ZoomOut();

public:
	/** Begin IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	// End Epic Source: UnrealEngine/Engine/Source/Editor/TextureEditor/Private/TextureEditorToolkit.h 

	virtual FText GetToolkitToolTipText() const override;
	virtual bool IsPrimaryEditor() const override { return true; }
	UFinalOutputPreview* GetFinalOutputPreview();
	void SetFinalOutputPreview(UFinalOutputPreview* InFinalOutputPreview);

	// Begin Epic Source: original file: UnrealEngine/Engine/Source/Editor/TextureEditor/Public/Interfaces/ITextureEditorToolkit.h -  Copyright Epic Games, Inc. All Rights Reserved. 
public:
	bool IsCurrentZoomMode(ETextureEditorZoomMode InZoomMode) const;
	// End Epic Source: UnrealEngine/Engine/Source/Editor/TextureEditor/Public/Interfaces/ITextureEditorToolkit.h

	// Begin Epic Source: original file: UnrealEngine/Engine/Source/Editor/TextureEditor/Private/TextureEditorToolkit.h -  Copyright Epic Games, Inc. All Rights Reserved. 
private:
	void BindCommands();
	TSharedRef<SWidget> BuildTexturePropertiesWidget();
	void CreateInternalWidgets();

private:

	void HandleAlphaChannelActionExecute();
	bool HandleAlphaChannelActionIsChecked() const;
	bool HandleAlphaChannelActionCanExecute() const;
	void HandleBlueChannelActionExecute();
	bool HandleBlueChannelActionIsChecked() const;
	void HandleCheckeredBackgroundActionExecute(ETextureEditorBackgrounds Background);
	bool HandleCheckeredBackgroundActionIsChecked(ETextureEditorBackgrounds Background);
	void HandleFitToViewportActionExecute();
	void HandleFillToViewportActionExecute();
	bool IsFitToViewport() const;
	bool IsFillToViewport() const;
	void HandleZoomToNaturalActionExecute();
	void HandleGreenChannelActionExecute();
	bool HandleGreenChannelActionIsChecked() const;

	void HandleRedChannelActionExecute();
	bool HandleRedChannelActionIsChecked() const;

	void HandleDesaturationChannelActionExecute();
	bool HandleDesaturationChannelActionIsChecked() const;
	void HandleSettingsActionExecute();

	TSharedRef<SDockTab> HandleTabSpawnerSpawnProperties(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> HandleTabSpawnerSpawnViewport(const FSpawnTabArgs& Args);

	void HandleTextureBorderActionExecute();
	bool HandleTextureBorderActionIsChecked() const;

private:

	UFinalOutputPreview* FinalOutputPreview;
	TMap<FName, TWeakPtr<SDockableTab>> SpawnedToolPanels;
	TSharedPtr<SFinalOutputPreviewEditorViewport> TextureViewport;
	TSharedPtr<SVerticalBox> TextureProperties;
	TSharedPtr<class IDetailsView> TexturePropertiesWidget;

	bool bIsRedChannel;
	bool bIsGreenChannel;
	bool bIsBlueChannel;
	bool bIsAlphaChannel;
	bool bIsDesaturation;

	uint32 PreviewEffectiveTextureWidth;
	uint32 PreviewEffectiveTextureHeight;

	double Zoom;
	ETextureEditorZoomMode ZoomMode;

private:
	static const FName PropertiesTabId;
	static const FName ViewportTabId;		
	// End Epic Source: UnrealEngine/Engine/Source/Editor/TextureEditor/Private/TextureEditorToolkit.h
};