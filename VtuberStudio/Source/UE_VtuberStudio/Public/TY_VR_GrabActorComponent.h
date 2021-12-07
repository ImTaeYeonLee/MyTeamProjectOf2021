// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_VR_GrabActorComponent.generated.h"

UENUM()
enum class EGrabType : uint8
{
	EGT_LineType UMETA(DisplayName ="LineType"),
	EGT_SweepType UMETA(DisplayName = "SweepType"),
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_VR_GrabActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTY_VR_GrabActorComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
	
	UPROPERTY(EditAnywhere, Category = GrabSettings)
	float grabDistance = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GrabSettings)
	EGrabType myGrabType = EGrabType::EGT_LineType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GrabSettings)
	bool bIsShowing = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GrabSettings)
	FVector endPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GrabSettings)
	FVector startPos;

private:
	void ShowGrabLine();
	void HideGrabLine();
	void DrawGrabLine();
	void GrabAction();
	void ReleaseAction();

	class ATY_VR_PickUpActor* pickObject;
	class ATY_PC_PlayerPawn* player;
	FHitResult grabObject;
	
};
