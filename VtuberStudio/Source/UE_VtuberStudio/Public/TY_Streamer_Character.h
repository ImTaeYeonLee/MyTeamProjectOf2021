// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TY_Streamer_Character.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_Streamer_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATY_Streamer_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMove")
		class UTY_PC_MoveActorComponent* playerMove;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMove")
	//	class UTY_PC_MoveActorExComponent* playerMoveEx;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "PlayerCameraController")
	//	class UTY_PC_CameraWheelActorComponent* playerCameraController;
};
