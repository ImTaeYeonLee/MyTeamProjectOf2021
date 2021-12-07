// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_Client_Character.h"

// Sets default values
ATY_Client_Character::ATY_Client_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATY_Client_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_Client_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATY_Client_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

