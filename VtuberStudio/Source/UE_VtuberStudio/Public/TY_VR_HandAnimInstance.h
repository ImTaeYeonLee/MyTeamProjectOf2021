// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TY_VR_HandAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE_VTUBERSTUDIO_API UTY_VR_HandAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AnimSettings)
	float gripValue;
};
