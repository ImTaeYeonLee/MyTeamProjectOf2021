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
	// 3D �ؽ�Ʈ ������Ʈ�� �ո� ���� ���̱�
	leftLog = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Left Log"));
	leftLog->SetupAttachment(leftController);
	// �۾� ũ��
	leftLog->SetWorldSize(20);
	// �۾� ����(��� ����)
	leftLog->SetHorizontalAlignment(EHTA_Center);
	leftLog->SetVerticalAlignment(EVRTA_TextCenter);
	// �۾� ����
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
	// ���� ������Ʈ��
	moveComp = CreateDefaultSubobject<UTY_VR_MoveActorComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UTY_VR_HandActorComponent>(TEXT("HandComponent"));
	grabComp = CreateDefaultSubobject<UTY_VR_GrabActorComponent>(TEXT("GrabComponent"));
	//movieComp = CreateDefaultSubobject<UVRMovieComponent>(TEXT("MovieComponent"));
	//gazeComp = CreateDefaultSubobject<UVRGazeComponent>(TEXT("GazeComponent"));
	//climbComp = CreateDefaultSubobject<UVRClimbComponent>(TEXT("ClimbComponent"));

	// �÷��̾� ��Ʈ�ѷ� ����
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void ATY_VR_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// ��� ����Ʈ ���÷��� ��ġ�� �ʱ� ��ġ���� �����ϱ�
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);

	// HMD ��ġ�� �������� �ٴ����� �����ϱ�
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

	// HMD ��ġ�� ��ġ�� �ʱ�ȭ�ϱ�
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

	// �Է� ���� �� ���� ������Ʈ���� �����ϱ�
	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	grabComp->SetupPlayerInputComponent(PlayerInputComponent);
	//movieComp->SetupPlayerInputComponent(PlayerInputComponent);
	//climbComp->SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("HMDReset", IE_Pressed, this, &ATY_VR_PlayerPawn::ResetHMD);

	// �׼� ���ε�
	//PlayerInputComponent->BindAction("RightTrigger", IE_Pressed, this, &AVR_Player::Fire1);
	//PlayerInputComponent->BindAction("RightGrip", IE_Pressed, this, &AVR_Player::Fire2);

	// ���ý� ���ε�
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
	// thumbstick�� y�� ��
	FString stickValue = FString::Printf(TEXT("\r\ny: %f"), value);
	// �޼� �α׿� ���� �ִ� �۾�
	//FText curText = leftLog->Text;
	// ���� ���̿� �� ����
	FText interMission = FText::FromString(", ");
	// ���� ��ġ��
	//FText resultText = FText::Join(interMission, curText, FText::FromString(stickValue));

	//leftLog->SetText(resultText);
}

void ATY_VR_PlayerPawn::ResetHMD()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}