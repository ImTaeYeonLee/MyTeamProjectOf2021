// Copyright Epic Games, Inc. All Rights Reserved.

#include "TY_Test_GameMode.h"
#include "TY_Character.h"
#include "UObject/ConstructorHelpers.h"
#include <Kismet/GameplayStatics.h>
#include "TY_PC_PlayerPawn.h" // PC 플레이어 참조
//#include "TY_Test_HUD.h" //TestHUD 참조
#include "Blueprint/UserWidget.h"

void ATY_Test_GameMode::BeginPlay()
{
	// WebBrowserWidget을 화면에 출력
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
	// 현재 접수 세팅
	curScore = point;
	// UI 에 표시하고 싶다.
	// scoreui 의 ui widget 에 값을 할당하고 싶다.
	//scoreUI->PrintCurrentScore(curScore);

	// top score 는 언제 갱신이 될까??
	// 현재 점수가 최고 점수를 넘어서면
	if (curScore > topScore)
	{
		// 현재점수가 최고점수가 된다.
		topScore = curScore;
		// topScore ui 갱신
		//scoreUI->PrintTopScore(topScore);

		//saveData->topScore = topScore;

		// 데이터를 저장해야 한다.
		//UGameplayStatics::SaveGameToSlot(saveData, TEXT("TopScore"), 0);
	}
}

int32 ATY_Test_GameMode::GetCurrentScore()
{
	return curScore;
}
*/