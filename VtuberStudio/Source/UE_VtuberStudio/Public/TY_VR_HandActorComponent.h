// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_VR_HandActorComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_VR_HandActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTY_VR_HandActorComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	class UTY_VR_HandAnimInstance* l_handAnim;
	class UTY_VR_HandAnimInstance* r_handAnim;
	class ATY_PC_PlayerPawn* player;

	float targetGripValueLeft = 0;
	float targetGripValueRight = 0;

	UPROPERTY(EditAnywhere, Category = HandAnimSettings)
	float gripSpeed = 50.f;
};
