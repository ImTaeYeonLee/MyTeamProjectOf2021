// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_PC_CameraWheelActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_PC_CameraWheelActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTY_PC_CameraWheelActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// 플레이어 입력 받을 수 있는 기능 함수
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	// X(Roll) 축을 기준으로 회전
	void CameraTurning(float Axisvalue);

	// 카메라 줌 인, 줌 아웃
	void ZoomInWheel(float Axisvalue);
	//void ZoomOutWheel(float Axisvalue);
	
	
	/*
	// 카메라 컴포넌트 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class UCameraComponent* playerCamera_pc;

	// 카메라 줌인 줌아웃 기능을 위해, SpringArm 컴포넌트 선언
	UPROPERTY(VisibleAnywhere, Category = "PlayerCamera")
		class USpringArmComponent* playerCameraSpringArm;

	*/

	UPROPERTY()
		FVector cameraTurnInput; // CameraTurning 에서 사용할 Vector 변수 선언

		// 카메라 회전할 속도를 선언, 구현
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting")
		float camSpeed = 300.f;

private:
	// 이 컴포넌트를 소유할 대상을 선언
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
};
