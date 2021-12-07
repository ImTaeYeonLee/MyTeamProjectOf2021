// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_PC_MoveActorComponent.h"
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_Streamer_Character.h" // 스트리머 플레이어 참조
#include "TY_Client_Character.h" // 클라이언트 플레이어 참조
#include "TY_CameraMan_Pawn.h" // 카메라맨 폰 참조
//#include "CPP_ShootingGameModeBase.h" // 게임 모드 베이스 참조.

// Sets default values for this component's properties
UTY_PC_MoveActorComponent::UTY_PC_MoveActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTY_PC_MoveActorComponent::BeginPlay()
{
	Super::BeginPlay();
	
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
    me = Cast<ATY_PC_PlayerPawn>(GetOwner());
	MyRotate = me->GetActorRotation();
}


// Called every frame
void UTY_PC_MoveActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    //액터의 요, 피치를 회전, 붙어있는 카메라도 따라서 회전됩니다
    {
        FRotator NewRotation = me->GetActorRotation();
        //myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);

        //NewRotation.Pitch += CameraInput.Y * moveSpeed; // Lerp 전 코드
        NewRotation.Yaw = FMath::Lerp(NewRotation.Yaw, NewRotation.Yaw + CameraInput.X, moveSpeed * DeltaTime);// 회전 부드럽게 Lerp 코드
        NewRotation.Pitch = FMath::Lerp(NewRotation.Pitch, NewRotation.Pitch + CameraInput.Y, moveSpeed * DeltaTime);
        me->SetActorRotation(NewRotation);
    }
    
    /*
    //카메라의 피치를 회전하지만, 항상 아래를 보도록 제한시킵니다
    {
        FRotator NewRotation = OurCameraSpringArm->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
        OurCameraSpringArm->SetWorldRotation(NewRotation);
    }
    */

    //"MoveX" 와 "MoveY" 축에 따라 이동을 처리합니다
    {
        if (!MovementInput.IsZero())
        {
            //이동 입력 축 값에 초당 100 유닛 스케일을 적용합니다
            MovementInput = MovementInput.GetSafeNormal() * 100.0f;
            FVector NewLocation = me->GetActorLocation();
           
			NewLocation += me->GetActorForwardVector() * (MovementInput.X * moveSpeed) * DeltaTime;
			NewLocation += me->GetActorRightVector() * (MovementInput.Y * moveSpeed) * DeltaTime;
			NewLocation += me->GetActorUpVector() * (MovementInput.Z * moveSpeed) * DeltaTime;
			me->SetActorLocation(NewLocation);
        }
    }

    //me->playerCamera->FieldOfView = 60.0f;
}

void UTY_PC_MoveActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    PlayerInputComponent->BindAxis("MoveForward", this, &UTY_PC_MoveActorComponent::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &UTY_PC_MoveActorComponent::MoveRight);
    PlayerInputComponent->BindAxis("PC_MoveVertical", this, &UTY_PC_MoveActorComponent::MoveVertical);
    PlayerInputComponent->BindAxis("PC_CameraPitch", this, &UTY_PC_MoveActorComponent::PitchCamera);
    PlayerInputComponent->BindAxis("PC_CameraYaw", this, &UTY_PC_MoveActorComponent::YawCamera);
   
    PlayerInputComponent->BindAction("PC_RotateReset", IE_Pressed, this, &UTY_PC_MoveActorComponent::RotatorReset);
}

void UTY_PC_MoveActorComponent::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);

}

void UTY_PC_MoveActorComponent::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void UTY_PC_MoveActorComponent::MoveVertical(float AxisValue)
{
    MovementInput.Z = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void UTY_PC_MoveActorComponent::PitchCamera(float AxisValue)
{
    CameraInput.Y = FMath::Clamp<float>(AxisValue * moveSpeed, -10.0f, 10.0f); //AxisValue;
}

void UTY_PC_MoveActorComponent::YawCamera(float AxisValue)
{
    CameraInput.X = FMath::Clamp<float>(AxisValue * moveSpeed, -10.0f, 10.0f);
}

void UTY_PC_MoveActorComponent::RotatorReset()
{
    me->SetActorRotation(MyRotate);
}

