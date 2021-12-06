// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyB_FSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyBState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SUBWAY_API UEnemyB_FSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyB_FSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	//me & target & CharacterMovement
	UPROPERTY()
	class AEnemyB* me;

	UPROPERTY(EditAnywhere, Category = Target)
	class AVR_Player* target;
	//class AFPSPlayer* target;

	// Enemy �� ����ϰ� �ִ� AIController ���
	UPROPERTY()
	class AAIController* ai;

	UPROPERTY(EditAnywhere, Category = FSM, BlueprintReadWrite)
	EEnemyBState m_state_B;
	UPROPERTY()
	class UEnemyBAnimInstance* anim;
public:
	//boolean
	bool bhit;
	//bool bIdle = true;
	bool bCanDie;
	bool bCanHit;
	bool isHeadPart = false;

	//�ð�
	UPROPERTY(EditAnywhere, Category = FSM)
	float idleDelayTime = 5;
	UPROPERTY(EditAnywhere, Category = FSM)
	float TransADelayTime = 4;
	UPROPERTY()
	float currentTime = 0;
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 1;

	//����
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 250;

	//Boss Movement
	UPROPERTY(EditAnywhere, Category = EnemyBStats)
	float walkSpeed = 80;
	UPROPERTY(EditAnywhere, Category = EnemyBStats)
	float RunSpeed = 230;

	// health System
	UPROPERTY(EditAnywhere, Category = FSM)
	int Health = 10;

	// �ǰ� ���� �� �˹� ��
	UPROPERTY(EditAnywhere, Category = FSM)
	float knockback = 50;

	// �ǰ� ���� �� �˹� ���� ����
	UPROPERTY()
	FVector knockbackPos;

		bool bPlaySound = true;

private:
	void IdleState();
	void MoveState();
	void AttackState();
	void DamageState();
	void DieState();

public:
	// �ǰ� �Լ� (������, �˹� ����)
	void OnDamageProcess(float damage, FVector KBDirection, float KBPwr, bool isHead);

	void Die();
	FTimerHandle DieTimerHandle;

	UFUNCTION(BlueprintCallable, Category = Notify)
	void OnDamageEndEvent();
		
};
