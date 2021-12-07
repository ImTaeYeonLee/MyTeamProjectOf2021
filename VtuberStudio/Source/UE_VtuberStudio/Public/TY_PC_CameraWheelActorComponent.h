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
	
	// �÷��̾� �Է� ���� �� �ִ� ��� �Լ�
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	// X(Roll) ���� �������� ȸ��
	void CameraTurning(float Axisvalue);

	// ī�޶� �� ��, �� �ƿ�
	void ZoomInWheel(float Axisvalue);
	//void ZoomOutWheel(float Axisvalue);
	
	
	/*
	// ī�޶� ������Ʈ ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class UCameraComponent* playerCamera_pc;

	// ī�޶� ���� �ܾƿ� ����� ����, SpringArm ������Ʈ ����
	UPROPERTY(VisibleAnywhere, Category = "PlayerCamera")
		class USpringArmComponent* playerCameraSpringArm;

	*/

	UPROPERTY()
		FVector cameraTurnInput; // CameraTurning ���� ����� Vector ���� ����

		// ī�޶� ȸ���� �ӵ��� ����, ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting")
		float camSpeed = 300.f;

private:
	// �� ������Ʈ�� ������ ����� ����
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
