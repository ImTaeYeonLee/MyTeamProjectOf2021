// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_PC_MoveActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_PC_MoveActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTY_PC_MoveActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// 플레이어 입력 받을 수 있는 기능
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
	
	FVector MovementInput;
	FVector2D CameraInput;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	float moveSpeed = 50.f;
	
	//

	//Input functions
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void MoveVertical(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);
	void RotatorReset(); // 방향 리셋

	// 이 액터 컴포넌트를 사용할 주체를 담을 변수를 선언
	UPROPERTY()
		class ATY_Streamer_Character* streamerCharacter;
	UPROPERTY()
		class ATY_Client_Character* clientCharacter;
	UPROPERTY()
		class ATY_CameraMan_Pawn* cameraManPawn;
	UPROPERTY()
		class ATY_PC_PlayerPawn* pcPlayerPawn;
	UPROPERTY()
		class ATY_PC_PlayerPawn* me;
	FRotator MyRotate;
};
