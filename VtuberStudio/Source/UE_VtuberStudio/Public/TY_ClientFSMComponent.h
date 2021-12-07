// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_ClientFSMComponent.generated.h"

UENUM(BlueprintType)
enum class EClientFSMState : uint8
{
	Normal,
	Boost,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_ClientFSMComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTY_ClientFSMComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void NormalState();
	void BoostState();

	UPROPERTY(EditAnywhere, Category = State)
	float normalSpeed = 5.f;
	UPROPERTY(EditAnywhere, Category = State)
	float boostSpeed = 50.f;
};
