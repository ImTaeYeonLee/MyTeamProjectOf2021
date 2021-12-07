// Copyright Epic Games, Inc. All Rights Reserved.

#include "TY_Test_GameMode.h"
#include "TY_Character.h"
#include "UObject/ConstructorHelpers.h"
#include <Kismet/GameplayStatics.h>
#include "TY_PC_PlayerPawn.h" // PC �÷��̾� ����
//#include "TY_Test_HUD.h" //TestHUD ����
#include "Blueprint/UserWidget.h"

void ATY_Test_GameMode::BeginPlay()
{
	// WebBrowserWidget�� ȭ�鿡 ���
	if (WebBrowserWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WebBrowserWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

ATY_Test_GameMode::ATY_Test_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	DefaultPawnClass = ATY_PC_PlayerPawn::StaticClass();
	//PlayerControllerClass = AMain_PC::StaticClass();
	//HUDClass = ATY_Test_HUD::StaticClass();
}
/*
void ATY_Test_GameMode::SetCurrentScore(int32 point)
{
	// ���� ���� ����
	curScore = point;
	// UI �� ǥ���ϰ� �ʹ�.
	// scoreui �� ui widget �� ���� �Ҵ��ϰ� �ʹ�.
	//scoreUI->PrintCurrentScore(curScore);

	// top score �� ���� ������ �ɱ�??
	// ���� ������ �ְ� ������ �Ѿ��
	if (curScore > topScore)
	{
		// ���������� �ְ������� �ȴ�.
		topScore = curScore;
		// topScore ui ����
		//scoreUI->PrintTopScore(topScore);

		//saveData->topScore = topScore;

		// �����͸� �����ؾ� �Ѵ�.
		//UGameplayStatics::SaveGameToSlot(saveData, TEXT("TopScore"), 0);
	}
}

int32 ATY_Test_GameMode::GetCurrentScore()
{
	return curScore;
}
*/