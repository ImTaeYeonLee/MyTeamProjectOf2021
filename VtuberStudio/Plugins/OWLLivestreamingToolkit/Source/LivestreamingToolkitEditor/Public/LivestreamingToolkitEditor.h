// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"

#include "SCineStreamWizard.h"
#include "Widgets/SWidget.h"
#include "Framework/Commands/UICommandList.h"
#include "Editor/LevelEditor/Private/SLevelEditor.h"
#include "Modules/ModuleManager.h"
#include "Toolkits/AssetEditorToolkit.h"

class FToolBarBuilder;
class FMenuBuilder;

class FFinalOutputPreviewEditor;
class UFinalOutputPreview;

class IAssetTools;
class IAssetTypeActions;

extern const FName FinalOutputPreviewEditorAppIdentifier = FName(TEXT("FinalOutputPreviewEditorApp"));


class FLivestreamingToolkitEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	TSharedRef<FFinalOutputPreviewEditor> CreateFinalOutputPreviewEditor(
		const EToolkitMode::Type Mode, 
		const TSharedPtr< IToolkitHost >& InitToolkitHost, 
		UFinalOutputPreview* FinalOutputPreview);

	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	
	/** This function will be bound to Command. */
	void CreateOWLPreviewButtonClicked();
	void UseCineStreamSetupWizardButtonClicked();
	void LogInButtonClicked();
	void LogOutButtonClicked();
	void OnEditorViewportRendering();
	bool IsEditorViewportRenderingEnabled();
	void OnRuntimeViewportRendering();
	bool IsRuntimeViewportRenderingEnabled();
	void PluginVersionButtonClicked();
	void KnowledgeCentreButtonClicked();
	void VisitWebsiteButtonClicked();
	void VisitDiscordButtonClicked();
	void VideoTutorialsButtonClicked();
	
private:

	void RegisterMenus();
	bool IsLogInButtonVisible();
	bool IsLogOutButtonVisible();
	bool IsEditorViewportRenderingButtonEnabled();
	bool IsRuntimeViewportRenderingButtonEnabled();

	TSharedRef<SDockTab> MakeCineStreamWizardTab( const FSpawnTabArgs& );
	TSharedRef<SWidget> GetCineStreamWizard(const TSharedRef<SDockTab>& InParentTab);

	void Load();
	void Save();

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	TSharedRef<SWidget> FillComboButton(TSharedPtr<class FUICommandList> Commands);
	FDelegateHandle OnUpgradeAvailableHandle;
	void OnUpgradeAvailable(FString NewVersion, FString DownloadURL);
	void OnNewUpdateDownloadNowClicked(FString DownloadURL);
	void OnNewUpdateRemindMeLaterClicked();
	void OnNewUpdateSkipVersionClicked();
	
	/** Notification popup that new plugins are available */
	TWeakPtr<SNotificationItem> NewPluginsNotification;

	FString AvailableVersionHash = "";
	bool SkipVersion = false;

	/** Holds the cine stream wizard singleton. */
	TWeakPtr<SCineStreamWizard> CineStreamWizardPtr;
};