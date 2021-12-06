// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShotGunAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SUBWAY_API UShotGunAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

UPROPERTY(VisibleAnywhere, Category = "test" , BlueprintReadWrite)
bool isShooting = false;
UPROPERTY(VisibleAnywhere, Category = "test", BlueprintReadWrite)
bool isNotShooting = true;
	
};
