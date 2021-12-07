// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TY_PC_PlayerPawn.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_PC_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATY_PC_PlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// PC용 액터 컴포넌트들 추가하기
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMove")
		class UTY_PC_MoveActorComponent* playerMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "PlayerCameraController")
		class UTY_PC_CameraWheelActorComponent* playerCameraController;

	// Box
	//UPROPERTY(VisibleAnywhere, Category = "Collision")
	//	class UBoxComponent* boxCollision;
	// StaticMesh
	//UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
	//	class UStaticMeshComponent* bodyMesh;

	// 카메라 컴포넌트 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class UCameraComponent* playerCamera_pc;

	// 카메라 줌인 줌아웃 기능을 위해, SpringArm 컴포넌트 선언
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class USpringArmComponent* playerCameraSpringArm_pc;

	void OnZoom(float Axisvalue);

	float ZoomFactor;
	bool bZoomingIn;

	//----------------------------------------------------
	
	// VR용 액터 컴포넌트들 추가하기
	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UCapsuleComponent* capsuleComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UStaticMeshComponent* bodyComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USceneComponent* cameraRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UCameraComponent* playerCam_vr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USpringArmComponent* playerCameraSpringArm_vr;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UMotionControllerComponent* leftController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UMotionControllerComponent* rightController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USkeletalMeshComponent* leftHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USkeletalMeshComponent* rightHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UTextRenderComponent* leftLog;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UTextRenderComponent* rightLog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UTY_VR_MoveActorComponent* moveComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UTY_VR_HandActorComponent* handComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UTY_VR_GrabActorComponent* grabComp;


	void ResetHMD();

	FRotator hmdRotate;
	FVector hmdLocation;
	bool isHMDEnabled = false;

	//----------------------------------------------------
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		bool isBoost = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		float boostTime = 2.f;
	//----------------------------------------------------
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
	FVector laserEndPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
	FVector laserStartPos;
	*/

private:
	UFUNCTION()
	void BoostOn();

	UFUNCTION()
	void BoostOff();

};
