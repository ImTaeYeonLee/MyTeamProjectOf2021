// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TY_Dancer.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_Dancer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATY_Dancer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FSM")
	class UTY_DancerFSM* dancerFSM;

	UPROPERTY(VisibleAnywhere, Category = "Setting")
	class USkeletalMeshComponent* bodyMesh;

	UPROPERTY(VisibleAnywhere, Category = "Setting")
	class UCapsuleComponent* judgmentCollision;

};
