// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_Character.h"

// Sets default values
ATY_Character::ATY_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATY_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATY_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

