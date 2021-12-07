// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_ObjectBase.h"
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_Streamer_Character.h" // 스트리머 플레이어 참조
#include "TY_Client_Character.h" // 클라이언트 플레이어 참조
#include "TY_CameraMan_Pawn.h" // 카메라맨 폰 참조
#include "UE_VtuberStudioCharacter.h"

// Sets default values
ATY_ObjectBase::ATY_ObjectBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//  생성자에서 메쉬 등 기본값 구현
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticMesh")); // 스태티메쉬 정의
	staticMesh->SetupAttachment(RootComponent); // 루트에 붙여준다
	index = 0; // 인덱스값 초기화

}

// Called when the game starts or when spawned
void ATY_ObjectBase::BeginPlay()
{
	Super::BeginPlay();
	
	staticMesh->bRenderCustomDepth = true; // 생성자에서 포스트프로세스 외곽선 사용하기 true로 지정해줘봤음. 그전엔 BeginPlay 에서 지정했음. 잘 돌아갔음. 이번엔 어떨까?!
	staticMesh->SetRenderCustomDepth(false);
	// 플레이어 캐스트(이 클래스가 플레이어의 앞에 Spawn될 것이므로)

	streamerCharacter = Cast<ATY_Streamer_Character>(GetOwner());
	clientCharacter = Cast<ATY_Client_Character>(GetOwner());
	cameraManPawn = Cast<ATY_CameraMan_Pawn>(GetOwner());
	pcPlayerPawn = Cast<ATY_PC_PlayerPawn>(GetOwner());

	if (streamerCharacter) {
		player = Cast<ATY_Streamer_Character>(GetOwner());
	}
	else if (clientCharacter) {
		player = Cast<ATY_Client_Character>(GetOwner());
	}
	else if (cameraManPawn) {
		player = Cast<ATY_CameraMan_Pawn>(GetOwner());
	}
	else if (vtsCharacter) {
		player = Cast<AUE_VtuberStudioCharacter>(GetOwner());
	}
	else {
		player = Cast<ATY_PC_PlayerPawn>(GetOwner());
	}
}

// Called every frame
void ATY_ObjectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATY_ObjectBase::OnClicked()
{
	GetClass();// 모든 위젯 찾아온다. WidgetClass 는 Invectory
	// 배열 사본 만든다
	// Invectory에 Cast한다. 
	// copyWidgetArray = Cast<UInvectory>(GetOwner());
	// AddItem(copyWidgetArray, index)
	this->Destroy();

	//TArray<int32>FoundWidget = GetAllChildActors
}

void ATY_ObjectBase::OnBeginCursorOver()
{
	staticMesh->SetRenderCustomDepth(true); // 외곽선 켜기
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Render Mode!")));

}

void ATY_ObjectBase::OnEndCursorOver()
{
	staticMesh->SetRenderCustomDepth(false); // 외곽선 끄기
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Non Render Mode!")));

}
