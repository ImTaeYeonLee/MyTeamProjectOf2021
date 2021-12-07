// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TY_Test_GameMode.generated.h"

UCLASS(minimalapi)
class ATY_Test_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	virtual void BeginPlay() override;

public:
	ATY_Test_GameMode();

	// ��������
	int32 curScore = 0;
	// �ְ�����
	int32 topScore = 0;

	/*
	void SetCurrentScore(int32 point);
	int32 GetCurrentScore();
	*/

	protected:
	// �������Ʈ �󿡼� ������ �� �ִ� �Ӽ��� �ȴ�.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "WedBrowser", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> WebBrowserWidgetClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;
};



