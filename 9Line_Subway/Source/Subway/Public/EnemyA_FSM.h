// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyA_FSM.generated.h"

UENUM(BlueprintType)
enum class EEnemyAState : uint8
{
	Idle,
	Move,
	Run,
	Attack,
	Damage,
	HeadBody,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SUBWAY_API UEnemyA_FSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyA_FSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	//me & target & CharacterMovement
	UPROPERTY()
	class AEnemyA* me;

	UPROPERTY(EditAnywhere, Category = Target)
	class AVR_Player* target;
	//class AFPSPlayer* target;

	// Enemy �� ����ϰ� �ִ� AIController ���
	UPROPERTY()
	class AAIController* ai;

	UPROPERTY(EditAnywhere, Category = FSM, BlueprintReadWrite)
	EEnemyAState m_state_A;
	UPROPERTY()
	class UEnemyAAnimInstance* anim;
public:
	//boolean
	bool bhit;
	bool bCanDie;
	bool bCanHit;
	bool isHeadPart = false;

	//�ð�
	UPROPERTY(EditAnywhere, Category = FSM)
	float idleDelayTime = 2;
	UPROPERTY()
	float currentTime = 0;
	UPROPERTY(EditAnywhere, Category = FSM)
	float RunDelayTime = 2;
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 1;

	//����
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 270;

	//Boss Movement
	UPROPERTY(EditAnywhere, Category = EnemyAStats)
	float walkSpeed = 65;
	UPROPERTY(EditAnywhere, Category = EnemyAStats)
	float RunSpeed = 200;

	// health System
	UPROPERTY(EditAnywhere, Category = FSM, BlueprintReadWrite)
	int Health = 20;


	// �ǰ� ���� �� �˹� ��
	UPROPERTY(EditAnywhere, Category = FSM)
	float knockback = 65;

	// �ǰ� ���� �� �˹� ���� ����
	UPROPERTY()
	FVector knockbackPos;

private:
	void IdleState();
	void MoveState();
	void RunState();
	void AttackState();
	void DamageState();
	void HeadBodyState();
	void DieState();

public:
	// �ǰ� �Լ� (������, �˹� ����, �˹� �Ŀ�, �ǰ� ����)
	void OnDamageProcess(float damage, FVector KBDirection, float KBPwr, bool isHead);
	
	void Die();
	FTimerHandle DieTimerHandle;

	UFUNCTION(BlueprintCallable, Category = Notify)
	void OnDamageEndEvent();
	
};
