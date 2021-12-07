// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_DancerFSM.generated.h"

UENUM(BlueprintType)
enum class EDancerState : uint8 // UENUM 열거형으로 상태 선언 
{
	Idle,
	GoToTarget,
	PlayMontage,
	GoToBackstage,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_VTUBERSTUDIO_API UTY_DancerFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTY_DancerFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//bAIMoveTo = true;


	UPROPERTY()
	class ATY_Dancer* me;

	UPROPERTY(EditAnywhere, Category = "Setting")
	class AActor* target;

	// 사용하는 AI Controller를 기억한다
	UPROPERTY(EditAnywhere, Category = "Setting")
	class AAIController* ai;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FSM)
	//	EDancerState m_state;

		//UPROPERTY()
		//class UTY_DancerAnimInstance* anim;

};
