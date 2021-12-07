// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_PC_PlayerPawn.h"
#include "TY_PC_MoveActorComponent.h"
#include "TY_PC_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h> // 줌인 스프링암 사용
//#include <Components/BoxComponent.h>
//#include <Components/StaticMeshComponent.h>
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "TY_VR_MoveActorComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TY_VR_HandActorComponent.h"
#include "TY_VR_GrabActorComponent.h"
#include "Particles/ParticleSystem.h"

// Sets default values
ATY_PC_PlayerPawn::ATY_PC_PlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	capsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PlayerCollider"));
	SetRootComponent(capsuleComp);
	capsuleComp->SetCapsuleHalfHeight(65.0f);
	capsuleComp->SetCapsuleRadius(40.0f);
	capsuleComp->SetCollisionProfileName(TEXT("VR_Player"));
	capsuleComp->SetCollisionProfileName(TEXT("OverlapAll")); // 충돌설정
	
	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetRelativeScale3D(FVector(0.8f, 0.8f, 1.2f));
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 충돌설정

	//cameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	//cameraRoot->SetupAttachment(RootComponent);
	//cameraRoot->SetRelativeLocation(FVector(0, 0, 30.0f));

	playerCameraSpringArm_vr = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmVr"));
	playerCameraSpringArm_vr->SetupAttachment(RootComponent);
	playerCameraSpringArm_vr->SetRelativeLocationAndRotation(FVector(.0f, .0f, 0.f), FRotator(0.f, .0f, .0f));
	playerCameraSpringArm_vr->TargetArmLength = 300.f;

	playerCam_vr = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCameraVR"));
	playerCam_vr->SetupAttachment(playerCameraSpringArm_vr, USpringArmComponent::SocketName);
	playerCam_vr->SetRelativeLocationAndRotation(FVector(.0f, .0f, .0f), FRotator(.0f, .0f, .0f));
	//playerCam_vr->SetupAttachment(cameraRoot);

	
	leftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	leftController->SetupAttachment(RootComponent);
	leftController->MotionSource = "Left";

	rightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	rightController->SetupAttachment(RootComponent);
	rightController->MotionSource = "Right";

	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftController);
	leftHand->SetRelativeRotation(FRotator(0, 0, -90.0f));
	leftHand->SetRelativeScale3D(FVector(1.0f, -1.f, 1.f));

	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightController);
	rightHand->SetRelativeRotation(FRotator(0, 0, 90.0f));
	// 액터 컴포넌트들
	moveComp = CreateDefaultSubobject<UTY_VR_MoveActorComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UTY_VR_HandActorComponent>(TEXT("HandComponent"));
	grabComp = CreateDefaultSubobject<UTY_VR_GrabActorComponent>(TEXT("GrabComponent"));

	
	//-------------------------------------------------------------
	
	playerMove = CreateDefaultSubobject<UTY_PC_MoveActorComponent>(TEXT("playerMove"));
	playerCameraController = CreateDefaultSubobject<UTY_PC_CameraWheelActorComponent>(TEXT("playerCameraController"));

	//-------------------------------------------------------------

	/*
	playerCameraSpringArm_pc = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmPC"));
	playerCameraSpringArm_pc->SetupAttachment(capsuleComp);
	playerCameraSpringArm_pc->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm_pc->TargetArmLength = 100.f;

	playerCamera_pc = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraPC"));
	playerCamera_pc->SetupAttachment(playerCameraSpringArm_pc, USpringArmComponent::SocketName);
	playerCamera_pc->SetRelativeLocationAndRotation(FVector(-50.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));
	*/
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ATY_PC_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	if (ATY_PC_PlayerPawn::isHMDEnabled == true)
	{
	// 헤드 마운트 디스플레이 장치의 초기 위치값을 설정하기
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);

	// HMD 장치의 기준점을 바닥으로 설정하기
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

	// HMD 장치의 위치를 초기화하기
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
	}
	bodyComp->bRenderCustomDepth = true; // 포스트프로세스 외곽선 사용하기
	bodyComp->SetRenderCustomDepth(false); // 태어날 때, 아우라 끄기 (BoostState에서 아우라 사용)
	isBoost = false;
}

// Called every frame
void ATY_PC_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ATY_PC_PlayerPawn::isHMDEnabled == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("VR Mode!")));
	}
	
	//playerCam_vr->FieldOfView = FMath::Lerp<float>(150.0f, 2000.0f, playerCameraSpringArm_vr->TargetArmLength);
	
	/*
	if (isBoost == true)
	{
		BoostOn(); // 부스트 모드 켜기
	}
	else
	{
		BoostOff(); // 부스트 모드 끄기
	}
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Current Boost: %s"), isBoost));
	if(grabComp->bIsShowing == true){
	laserStartPos = grabComp->startPos;
	laserEndPos = grabComp->endPos; // endPos 값을 laserEndPos 값으로 틱마다 할당하기 ㄴㅁㅇㄹㄴㅁㅇㅁㅈㄴ
	}
	*/
}

// Called to bind functionality to input
void ATY_PC_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//-------------------------------------------------------------

	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	grabComp->SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("HMDReset", IE_Pressed, this, &ATY_PC_PlayerPawn::ResetHMD);

	PlayerInputComponent->BindAxis("VR_OnZoom", this, & ATY_PC_PlayerPawn::OnZoom);
	
	//-------------------------------------------------------------

	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerCameraController->SetupPlayerInputComponent(PlayerInputComponent);

}

void ATY_PC_PlayerPawn::OnZoom(float Axis)
{
	// Axis * 20 만큼 스프링암 길이 조절시켜줌
	playerCameraSpringArm_vr->TargetArmLength = playerCameraSpringArm_vr->TargetArmLength + Axis * 20.0f;
	// 범위 고정
	playerCameraSpringArm_vr->TargetArmLength = FMath::Clamp(playerCameraSpringArm_vr->TargetArmLength, 150.0f, 2000.0f);
	UE_LOG(LogTemp, Warning, TEXT("VR taretlength : %f"), playerCameraSpringArm_vr->TargetArmLength);
	//playerCam_vr->FieldOfView = FMath::Lerp<float>(150.0f, 2000.0f, playerCameraSpringArm_vr->TargetArmLength);

}

void ATY_PC_PlayerPawn::ResetHMD()
{
	if (ATY_PC_PlayerPawn::isHMDEnabled == true)
	{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
	}
	else
	{
	return;
	}
}

void ATY_PC_PlayerPawn::BoostOn()
{
	playerMove->moveSpeed = 100.f;
	bodyComp->SetRenderCustomDepth(true); // 아우라 켜기 (BoostState에서 아우라 사용)
}

void ATY_PC_PlayerPawn::BoostOff()
{
	playerMove->moveSpeed = 20.f;
	//boostTime = 2.f;
	bodyComp->SetRenderCustomDepth(false); // 아우라 끄기
}

