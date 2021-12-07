// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_Streamer_Character.h"
#include "TY_PC_MoveActorComponent.h"
//#include "TY_PC_MoveActorExComponent.h"
#include "TY_PC_CameraWheelActorComponent.h"

// Sets default values
ATY_Streamer_Character::ATY_Streamer_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerMove = CreateDefaultSubobject<UTY_PC_MoveActorComponent>(TEXT("playerMove"));
	//playerMoveEx = CreateDefaultSubobject<UTY_PC_MoveActorExComponent>(TEXT("playerMoveEx"));
	//playerCameraController = CreateDefaultSubobject<UTY_PC_CameraWheelActorComponent>(TEXT("playerCameraController"));

	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void ATY_Streamer_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_Streamer_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATY_Streamer_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	//playerMoveEx->SetupPlayerInputComponent(PlayerInputComponent);
	//playerCameraController->SetupPlayerInputComponent(PlayerInputComponent);
}

