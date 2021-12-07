// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_ClientFSMComponent.h"
#include "TY_PC_MoveActorComponent.h"

// Sets default values for this component's properties
UTY_ClientFSMComponent::UTY_ClientFSMComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTY_ClientFSMComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTY_ClientFSMComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

