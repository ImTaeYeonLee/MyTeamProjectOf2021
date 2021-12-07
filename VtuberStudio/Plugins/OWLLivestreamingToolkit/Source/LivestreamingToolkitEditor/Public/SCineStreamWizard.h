// Copyright Off World Live Limited, 2020-2021. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

/**
* 
*/
class LIVESTREAMINGTOOLKITEDITOR_API SCineStreamWizard
	: public SCompoundWidget
{
public:

	SLATE_USER_ARGS(SCineStreamWizard)
	{ }
	SLATE_END_ARGS()

public:
	void Construct( const FArguments& InArgs );

private:
	EVisibility GetCreatorPageVisibility() const;
	EVisibility GetDonePageVisibility() const;
	bool IsCreatorPage = true;
	TSharedPtr<STextBlock> StreamNameWarning;
	TSharedPtr<STextBlock> DoneText;
	TSharedPtr<STextBlock> DoneButtonText;
	void OnStreamNameTextChanged(const FText& NewText);
	void OnStreamNameCommitted(const FText& InText, ETextCommit::Type InCommitType);
	bool StreamNameError = false;
	EVisibility GetStreamNameWarningVisibility() const;
	FReply OnCreateButtonClicked();
	FReply OnRestartButtonClicked();
	FText StreamName;

	bool CreateSetup();
	class AOWLCineCamCapture* CreateCameraActor();
	class AOWLSpoutSenderManager* FindOrCreateSenderManager();
};