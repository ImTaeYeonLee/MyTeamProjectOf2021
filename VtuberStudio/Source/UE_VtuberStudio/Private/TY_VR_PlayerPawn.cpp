// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_VR_PlayerPawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
//#include "Components/TextRenderComponent.h"
#include "TY_VR_MoveActorComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TY_VR_HandActorComponent.h"
#include "TY_VR_GrabActorComponent.h"
//#include "VRMovieComponent.h"
//#include "Components/WidgetInteractionComponent.h"
//#include "VRGazeComponent.h"
//#include "VRClimbComponent.h"

ATY_VR_PlayerPawn::ATY_VR_PlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	capsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollider"));
	SetRootComponent(capsuleComp);
	capsuleComp->SetCapsuleHalfHeight(65.0f);
	capsuleComp->SetCapsuleRadius(40.0f);
	capsuleComp->SetCollisionProfileName(TEXT("VR_Player"));

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetRelativeScale3D(FVector(0.8f, 0.8f, 1.2f));

	cameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	cameraRoot->SetupAttachment(RootComponent);
	cameraRoot->SetRelativeLocation(FVector(0, 0, 30.0f));

	playerCam = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	playerCam->SetupAttachment(cameraRoot);

	//gazePointer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gaze Pointer"));
	//gazePointer->SetupAttachment(playerCam);
	//gazePointer->SetRelativeLocation(playerCam->GetForwardVector() * 200);
	//gazePointer->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	leftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	leftController->SetupAttachment(cameraRoot);
	leftController->MotionSource = "Left";

	rightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	rightController->SetupAttachment(cameraRoot);
	rightController->MotionSource = "Right";

	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftController);
	leftHand->SetRelativeRotation(FRotator(0, 0, -90.0f));
	leftHand->SetRelativeScale3D(FVector(1.0f, -1.f, 1.f));

	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightController);
	rightHand->SetRelativeRotation(FRotator(0, 0, 90.0f));

	//widgetPointer = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("Widget Pointer"));
	//widgetPointer->SetupAttachment(rightController);
	/*
	// 3D 텍스트 컴포넌트를 손목 위에 붙이기
	leftLog = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Left Log"));
	leftLog->SetupAttachment(leftController);
	// 글씨 크기
	leftLog->SetWorldSize(20);
	// 글씨 정렬(가운데 정렬)
	leftLog->SetHorizontalAlignment(EHTA_Center);
	leftLog->SetVerticalAlignment(EVRTA_TextCenter);
	// 글씨 색상
	leftLog->SetTextRenderColor(FColor::Yellow);
	leftLog->SetRelativeRotation(FRotator(0, 180.0f, 0));
	leftLog->SetRelativeLocation(FVector(0, 0, 40.f));

	rightLog = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Right Log"));
	rightLog->SetupAttachment(rightController);
	rightLog->SetWorldSize(20);
	rightLog->SetHorizontalAlignment(EHTA_Center);
	rightLog->SetVerticalAlignment(EVRTA_TextCenter);
	rightLog->SetTextRenderColor(FColor::Yellow);
	rightLog->SetRelativeRotation(FRotator(0, 180.0f, 0));
	rightLog->SetRelativeLocation(FVector(0, 0, 40.f));
	*/
	// 액터 컴포넌트들
	moveComp = CreateDefaultSubobject<UTY_VR_MoveActorComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UTY_VR_HandActorComponent>(TEXT("HandComponent"));
	grabComp = CreateDefaultSubobject<UTY_VR_GrabActorComponent>(TEXT("GrabComponent"));
	//movieComp = CreateDefaultSubobject<UVRMovieComponent>(TEXT("MovieComponent"));
	//gazeComp = CreateDefaultSubobject<UVRGazeComponent>(TEXT("GazeComponent"));
	//climbComp = CreateDefaultSubobject<UVRClimbComponent>(TEXT("ClimbComponent"));

	// 플레이어 컨트롤러 빙의
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ATY_VR_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// 헤드 마운트 디스플레이 장치의 초기 위치값을 설정하기
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);

	// HMD 장치의 기준점을 바닥으로 설정하기
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

	// HMD 장치의 위치를 초기화하기
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATY_VR_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ATY_VR_PlayerPawn::isHMDEnabled == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("OMG HMD OUT!")));

	}

}

void ATY_VR_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 입력 값을 각 액터 컴포넌트에게 전달하기
	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	grabComp->SetupPlayerInputComponent(PlayerInputComponent);
	//movieComp->SetupPlayerInputComponent(PlayerInputComponent);
	//climbComp->SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("HMDReset", IE_Pressed, this, &ATY_VR_PlayerPawn::ResetHMD);

	// 액션 바인딩
	//PlayerInputComponent->BindAction("RightTrigger", IE_Pressed, this, &AVR_Player::Fire1);
	//PlayerInputComponent->BindAction("RightGrip", IE_Pressed, this, &AVR_Player::Fire2);

	// 엑시스 바인딩
	PlayerInputComponent->BindAxis("LeftThumbstick_X", this, &ATY_VR_PlayerPawn::HorizontalMove);
	PlayerInputComponent->BindAxis("LeftThumbstick_Y", this, &ATY_VR_PlayerPawn::VerticalMove);
}

void ATY_VR_PlayerPawn::Fire1()
{
	//rightLog->SetText(FText::FromString("Trigger R"));
}

void ATY_VR_PlayerPawn::Fire2()
{
	//rightLog->SetText(FText::FromString("Grip!!"));
}

void ATY_VR_PlayerPawn::HorizontalMove(float value)
{
	FString stickValue = FString::Printf(TEXT("x: %f"), value);
	//leftLog->SetText(FText::FromString(stickValue));
}

void ATY_VR_PlayerPawn::VerticalMove(float value)
{
	// thumbstick의 y축 값
	FString stickValue = FString::Printf(TEXT("\r\ny: %f"), value);
	// 왼손 로그에 원래 있던 글씨
	//FText curText = leftLog->Text;
	// 글자 사이에 들어갈 문자
	FText interMission = FText::FromString(", ");
	// 글자 합치기
	//FText resultText = FText::Join(interMission, curText, FText::FromString(stickValue));

	//leftLog->SetText(resultText);
}

void ATY_VR_PlayerPawn::ResetHMD()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}