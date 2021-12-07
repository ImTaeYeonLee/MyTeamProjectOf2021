// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_VR_MoveActorComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_VR_MoveActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTY_VR_MoveActorComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		// 라인을 그릴지 말지 결정
		if (bIsShowingLine)
		{
			DrawTrajectory();
		}
	}
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float moveSpeed = 500;

	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float rotateSpeed = 200.f;

	UPROPERTY(EditAnywhere, Category = MoveSettings)
	FVector simulDirection = FVector(100, 0, 100);

	UPROPERTY(EditAnywhere, Category = MoveSettings)
	float shootPower = 10.f;

private:
	void MoveHorizontal(float value);
	void MoveVertical(float value);
	void RotateHorizontal(float value);
	void DrawTrajectory();
	void ShowLine();
	void HideLine();
	void TeleportMySelf();
	void MoveTeleportLocation();

	class ATY_PC_PlayerPawn* player;

	bool bIsShowingLine = false;
	FVector teleportLocation;

	FTimerHandle teleportTimer;
};
