// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss_FSM.h"
#include "Boss.h"
#include "FPSPlayer.h"
#include "VR_Player.h"
#include "BossAnimInstance.h"
#include "Subway.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "NavigationInvokerComponent.h"

// Sets default values for this component's properties
UBoss_FSM::UBoss_FSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bCanDie = true;
}


// Called when the game starts
void UBoss_FSM::BeginPlay()
{
	Super::BeginPlay();
	// EnemyB = me
	me = Cast<ABoss>(GetOwner());
	anim = Cast<UBossAnimInstance>(me->GetMesh()->GetAnimInstance());
	ai = Cast<AAIController>(me->GetController());
}


// Called every frame
void UBoss_FSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (target == nullptr)
	{
		target = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	}

	switch (m_state_Boss)
	{
	case EBossState::Idle:
		IdleState();
		break;
	case EBossState::Trans:
		TransState();
		break;
	case EBossState::Taunt:
		TauntState();
		break;
	case EBossState::Move:
		MoveState();
		break;
	case EBossState::Attack:
		AttackState();
		break;
	case EBossState::Damage:
		DamageState();
		break;
	/*case EBossState::HeadBodyArm:
		HeadBodyArmState();
		break*/;
	case EBossState::Die:
		DieState();
		break;
	}
}

void UBoss_FSM::IdleState()
{
	if (target == nullptr)
	{
		return;
	}

	currentTime += GetWorld()->DeltaTimeSeconds;

	// �ð��� �������� ���� ����
	if (currentTime > idleDelayTime)
	{
		m_state_Boss = EBossState::Trans;
		anim->isTrans = true;
		// CurrentTime ����
		currentTime = 0;
	}
}

void UBoss_FSM::TransState()
{
	if (target == nullptr)
	{
		return;
	}

	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > TransDelayTime)
	{
		anim->isTrans = false;
		anim->isTaunt = true;
		m_state_Boss = EBossState::Taunt;
		// CurrentTime ����
		currentTime = TauntDelayTime;
	}
}

void UBoss_FSM::TauntState()
{
	if (target == nullptr)
	{
		return;
	}

	currentTime += GetWorld()->DeltaTimeSeconds;
	// 	������ �ʿ�
	FVector dir = target->GetActorLocation() - me->GetActorLocation();
	dir.Normalize();
	// Ÿ�� �������� ȸ���Ѵ�.		
	FRotator targetRot = dir.ToOrientationRotator();
	FRotator myRot = me->GetActorRotation();
	//ȸ�� �ε巴��
	myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);
	me->SetActorRotation(myRot);

	//if (currentTime > 5.7f)
	if (currentTime > 5.7f)
	{
		anim->isTaunt = false;
		anim->isMoving = true;
		m_state_Boss = EBossState::Move;
		// CurrentTime ����
		currentTime = 0;
	}
}

void UBoss_FSM::MoveState()
{
	PRINTLOG(TEXT("MOVE"));
	if (target == nullptr)
	{
		return;
	}

	me->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	// Target�� Player �������� �̵�
	// 	������ �ʿ�
	FVector dir = target->GetActorLocation() - me->GetActorLocation();
	// �ѻ����� �Ÿ�
	float distance = dir.Size();
	dir.Normalize();

	if (ai)
	{
		ai->MoveToActor(target);
		anim->isMoving = true;
		anim->isAttacking = false;
	}

	// character movement�� ����ؼ� ���󰡰� �����
	//me->AddMovementInput(dir, true);

	// Ÿ�� �������� ȸ���Ѵ�.		
	FRotator targetRot = dir.ToOrientationRotator();
	FRotator myRot = me->GetActorRotation();

	//ȸ�� �ε巴��
	myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);
	//me->SetActorRotation(myRot);

	//Debug Sphere �ð�ȭ
	//DrawDebugSphere(GetWorld(), me->GetActorLocation(), attackRange, 8, FColor::Red);

	// �ӵ��� ���� ��, AnimInstance Bool ����
	/*
	if (anim->isMoving == false)
	{
		//�ӵ� ���ϱ�
		float velocity = me->GetVelocity().Size();
		if (velocity > 0.1f)
		{
			anim->isMoving = true;
		}
	}*/

	//DrawDebugSphere(GetWorld(), me->GetActorLocation(), attackRange, 16, FColor::Red);

	// state ���
	// ���� ������ ���������
	if (distance < attackRange)
	{
		m_state_Boss = EBossState::Attack;
		currentTime = attackDelayTime;
		//currentTime = attackDelayTime;
	}	

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_Boss = EBossState::Die;
		currentTime = 0;
	}
}

void UBoss_FSM::AttackState()
{
	PRINTLOG(TEXT("ATTACK"));
	me->bCanAttack = true;

	// �ð��� �帥��.
	currentTime += GetWorld()->DeltaTimeSeconds;

	if (ai)
	{
		ai->StopMovement();
		//anim->isMoving = false;
		//anim->isAttacking = true;
	}
	for (int i = 0; i < 11; i++)
	{
		int32 ratio = FMath::RandRange(1, 3);
		if (ratio == 1)
		{
			anim->isMoving = false;
			anim->isAttkOne = true;
			anim->isAttkTwo = false;
			anim->isAttkThree = false;
			currentTime = 0;
		}
		else if (ratio == 2)
		{
			anim->isMoving = false;
			anim->isAttkTwo = false;
			anim->isAttkTwo = true;
			anim->isAttkThree = false;
			currentTime = 0;
		}
		else if (ratio == 3)
		{
			anim->isMoving = false;
			anim->isAttkThree = false;
			anim->isAttkTwo = false;
			anim->isAttkThree = true;
			currentTime = 0;
		}
	}

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_Boss = EBossState::Die;
		currentTime = 0;
	}
}

void UBoss_FSM::DamageState()
{
	PRINTLOG(TEXT("DAMAGE"));

	anim->isMoving = false;
	anim->isAttacking = false;
	//anim->isDamage = true;
	
	// Lerp �� �̿��Ͽ� knock back ����
	FVector myPos = me->GetActorLocation();
	//knockbackPos �� OnDamageProcess���� ���
	myPos = FMath::Lerp(myPos, knockbackPos, 10 * GetWorld()->DeltaTimeSeconds);
	me->SetActorLocation(myPos);

	//�Ÿ� ����
	float distance = FVector::Dist(myPos, knockbackPos);

	currentTime += GetWorld()->DeltaTimeSeconds;
	
	//Head ��Ʈ
	if (isHeadPart == true)
	{
		PRINTLOG(TEXT("HeadHIT"));
		anim->isHead = true;
		anim->isBody = false;
		anim->isAttkOne = false;
		anim->isAttkTwo = false;
		anim->isAttkThree = false;
	}
	else if (isHeadPart == false)
	{
		PRINTLOG(TEXT("BodyHit"));
		anim->isHead = false;
		anim->isBody = true;
		anim->isAttkOne = false;
		anim->isAttkTwo = false;
		anim->isAttkThree = false;
	}

	// Arm ��Ʈ
	//if (isArmPart == true)
	//{
	//	PRINTLOG(TEXT("RtArm Hit"));
	//	//anim->isHead = false;
	//	//anim->isBody = false;
	//	anim->isRtArm = true;
	//	anim->isLtArm = false;
	//}
	//else if (isArmPart == false)
	//{
	//	PRINTLOG(TEXT("LtArm Hit"));
	//	//anim->isHead = false;
	//	//anim->isBody = false;
	//	anim->isRtArm = false;
	//	anim->isLtArm = true;
	//}

	if (bhit == true && currentTime > 1.3f)
	{
		PRINTLOG(TEXT("MOVE STATE CHANGE!!!"));
		bhit = false;
		//anim->isDamage = false;
		anim->isHead = false;
		anim->isBody = false;
		anim->isMoving = true;
		m_state_Boss = EBossState::Move;
		currentTime = 0;
	}

	// HP = 0, isDie�� False���
	else if (Health == 0 && anim->isDie == false)
	{
		m_state_Boss = EBossState::Die;
		currentTime = 0;
	}
}

/*
void UBoss_FSM::HeadBodyArmState()
{

}
*/
void UBoss_FSM::DieState()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Dead!!")));
	anim->isMoving = false;
	anim->isAttacking = false;
	anim->isDie = true;

	if (bCanDie == true)
	{
		GetWorld()->GetTimerManager().SetTimer(DieTimerHandle, this, &UBoss_FSM::Die, 4.5f, false);

		bCanDie = false;
	}
}

void UBoss_FSM::OnDamageProcess(float damage, FVector KBDirection, float KBPwr, bool isHead)
{
	if (Health > 0)
	{
		//FSM�� Knockback ���� KBPwr ����ȭ
		this->knockback = KBPwr;
		//isHeadPart�� isHead ���� ����
		this->isHeadPart = isHead;
		//this->isArmPart = isArm;
		// Z ������ 0���� ����
		KBDirection.Z = 0;
		// ������ �ڷ� �˹�
		knockbackPos = me->GetActorLocation() + KBDirection * knockback;
		currentTime = 0;

		// �ǰݽ� bhit�� ���� Damage > Move ���Ǻ� �ϼ�
		bhit = true;

		m_state_Boss = EBossState::Damage;

		//Boss �� AttackMode���
		if (m_state_Boss == EBossState::Attack)
		{
			bhit = true;
			m_state_Boss = EBossState::Damage;
			anim->isAttacking = false;
		}
		else
		{
			anim->isMoving = false;
			m_state_Boss = EBossState::Damage;
		}
		// ������ ó��
		Health -= damage;
		if (Health < 0)
		{
			m_state_Boss = EBossState::Die;
			//me->Destroy();
			return;
		}
	}
}

void UBoss_FSM::Die()
{
	//gameEnd = true;
	me->Destroy();
}

