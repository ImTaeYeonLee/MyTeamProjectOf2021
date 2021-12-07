// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_PC_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h>
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_Streamer_Character.h" // 스트리머 플레이어 참조
#include "TY_Client_Character.h" // 클라이언트 플레이어 참조
#include "TY_CameraMan_Pawn.h" // 카메라맨 폰 참조

// Sets default values for this component's properties
UTY_PC_CameraWheelActorComponent::UTY_PC_CameraWheelActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	/*
	// 카메라컴포넌트를 플레이어에게로 이동
	
	playerCamera_pc = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraPC"));
	playerCamera_pc->SetupAttachment(playerCameraSpringArm, USpringArmComponent::SocketName);
	playerCamera_pc->SetRelativeLocationAndRotation(FVector(-50.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	playerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	playerCameraSpringArm->SetupAttachment(playerCamera_pc);
	playerCameraSpringArm->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm->TargetArmLength = 300.f;
	//playerCameraSpringArm->bEnableCameraLag = true;
	//playerCameraSpringArm->CameraLagSpeed = 3.0f;

	*/
}


// Called when the game starts
void UTY_PC_CameraWheelActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// 이 컴포넌트를 소유할 대상을 정의
	// 이 액터 컴포넌트를 사용할 주체를 정의
	/*
	streamerCharacter = Cast<ATY_Streamer_Character>(GetOwner());
	clientCharacter = Cast<ATY_Client_Character>(GetOwner());
	cameraManPawn = Cast<ATY_CameraMan_Pawn>(GetOwner());
	pcPlayerPawn = Cast<ATY_PC_PlayerPawn>(GetOwner());
	if (streamerCharacter) {
		me = Cast<ATY_Streamer_Character>(GetOwner());
	}
	else if (clientCharacter) {
		me = Cast<ATY_Client_Character>(GetOwner());
	}
	else if (cameraManPawn) {
		me = Cast<ATY_CameraMan_Pawn>(GetOwner());
	}
	else {
		me = Cast<ATY_PC_PlayerPawn>(GetOwner());
	}
	*/
	pcPlayerPawn = Cast<ATY_PC_PlayerPawn>(GetOwner());
	me = Cast<ATY_PC_PlayerPawn>(GetOwner());

}


// Called every frame
void UTY_PC_CameraWheelActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (me)
	{
		//FRotator NewRotation = me->playerCamera_pc->GetComponentRotation();
		//NewRotation.Roll += cameraTurnInput.X * camSpeed * DeltaTime;
		//me->playerCamera_pc->AddLocalRotation(NewRotation);

		if (!cameraTurnInput.IsZero())
		{
			cameraTurnInput = cameraTurnInput.GetSafeNormal() * 100.0f;
		}
	}
}

void UTY_PC_CameraWheelActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(TEXT("PC_CameraTurning"), this, &UTY_PC_CameraWheelActorComponent::CameraTurning);

	PlayerInputComponent->BindAxis(TEXT("PC_ZoomInWheel"), this, &UTY_PC_CameraWheelActorComponent::ZoomInWheel);
}

void UTY_PC_CameraWheelActorComponent::CameraTurning(float Axisvalue)
{
	cameraTurnInput.X = Axisvalue;
}

void UTY_PC_CameraWheelActorComponent::ZoomInWheel(float Axisvalue)
{
	// 회전 부드럽게 Lerp 코드
	//me->playerCameraSpringArm_pc->TargetArmLength = FMath::Lerp(me->playerCameraSpringArm_pc->TargetArmLength, me->playerCameraSpringArm_pc->TargetArmLength + Axisvalue, 200.0f * GetWorld()->DeltaTimeSeconds);
	// Lerp 없는 코드
	//me->playerCameraSpringArm_pc->TargetArmLength = me->playerCameraSpringArm_pc->TargetArmLength + Axisvalue * 20.0f;
	//me->playerCameraSpringArm_pc->TargetArmLength = FMath::Clamp(me->playerCameraSpringArm_pc->TargetArmLength, 30.0f, 3000.0f);;

	//UE_LOG(LogTemp, Warning, TEXT("PC taretlength : %f"), me->playerCameraSpringArm_pc->TargetArmLength);
}