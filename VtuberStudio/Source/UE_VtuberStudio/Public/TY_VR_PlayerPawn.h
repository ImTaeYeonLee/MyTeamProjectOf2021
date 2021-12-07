// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TY_VR_PlayerPawn.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_VR_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	ATY_VR_PlayerPawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UCapsuleComponent* capsuleComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UStaticMeshComponent* bodyComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USceneComponent* cameraRoot;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UCameraComponent* playerCam;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* leftController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* rightController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USkeletalMeshComponent* leftHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USkeletalMeshComponent* rightHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UTextRenderComponent* leftLog;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UTextRenderComponent* rightLog;

	//UPROPERTY(EditAnywhere, Category = VideoInteractions)
	//class UWidgetInteractionComponent* widgetPointer;
	
	//UPROPERTY(EditAnywhere, Category = PlayerSettings)
	//class UStaticMeshComponent* gazePointer;


	// 액터 컴포넌트들 추가하기
	UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	class UTY_VR_MoveActorComponent* moveComp;

	UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	class UTY_VR_HandActorComponent* handComp;

	UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	class UTY_VR_GrabActorComponent* grabComp;

	//UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	//class UVRMovieComponent* movieComp;

	//UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	//class UVRGazeComponent* gazeComp;

	//UPROPERTY(VisibleAnywhere, Category = PlayerSettings)
	//class UVRClimbComponent* climbComp;

private:
	void Fire1();
	void Fire2();
	void HorizontalMove(float value);
	void VerticalMove(float value);
	void ResetHMD();

	FRotator hmdRotate;
	FVector hmdLocation;
	bool isHMDEnabled = false;
};
