// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TY_SoundMeterCube.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UE_VTUBERSTUDIO_API ATY_SoundMeterCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATY_SoundMeterCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UMaterialInstanceDynamic* DynamicMaterial;

	UPROPERTY(EditAnywhere, Category = "Setting")
	float speed = 1000;
	
	UPROPERTY(EditAnywhere, Category = "Setting")
	float lifeSpan = 3.8f;
};
