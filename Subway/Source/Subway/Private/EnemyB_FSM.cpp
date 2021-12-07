// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyB_FSM.h"
#include "EnemyB.h"
#include "FPSPlayer.h"
#include "VR_Player.h"
#include "EnemyBAnimInstance.h"
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
#include "Components/AudioComponent.h"

// Sets default values for this component's properties
UEnemyB_FSM::UEnemyB_FSM()
{
	PrimaryComponentTick.bCanEverTick = true;
	bCanDie = true;
}


// Called when the game starts
void UEnemyB_FSM::BeginPlay()
{
	Super::BeginPlay();
	// EnemyB = me
	me = Cast<AEnemyB>(GetOwner());
	anim = Cast<UEnemyBAnimInstance>(me->GetMesh()->GetAnimInstance());
	// AIController �Ҵ�
	ai = Cast<AAIController>(me->GetController());
	//target ã��
	/*
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AVR_Player::StaticClass(), actors);
	for (auto tgt : actors)
	{
		target = Cast<AVR_Player>(tgt);
		break;
	}*/
	
}


// Called every frame
void UEnemyB_FSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (target == nullptr)
	{
		target = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	}

	switch (m_state_B)
	{
	case EEnemyBState::Idle:
		IdleState();
		break;
	case EEnemyBState::Move:
		MoveState();
		break;
	case EEnemyBState::Attack:
		AttackState();
		break;
	case EEnemyBState::Damage:
		DamageState();
		break;
	case EEnemyBState::Die:
		DieState();
		break;
	}
}

void UEnemyB_FSM::IdleState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;

	// �ð��� �������� ���� ����
	if (currentTime > idleDelayTime)
	{
		m_state_B = EEnemyBState::Move;
		// CurrentTime ����
		currentTime = 0;
	}
	// HP = 0, isDie�� False���
	else if (Health == 0 && anim->isDie == false)
	{
		m_state_B = EEnemyBState::Die;
		currentTime = 0;
	}
}

void UEnemyB_FSM::MoveState()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Move STATE!!")));
	if (target == nullptr)
	{
		return;
	}
	PRINTLOG(TEXT("Move"));
	me->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	// Target�� Player �������� �̵�
	// 	������ �ʿ�
	FVector dir = target->GetActorLocation() - me->GetActorLocation();
	// �ѻ����� �Ÿ�
	float distance = dir.Size();
	dir.Normalize();

	//AIController�� �̿��ؼ� �̵�
	if (ai)
	{
		ai->MoveToActor(target);
		anim->isMoving = true;
	}

	// character movement�� ����ؼ� ���󰡰� �����
	//me->AddMovementInput(dir, true);

	// Ÿ�� �������� ȸ���Ѵ�.		
	FRotator targetRot = dir.ToOrientationRotator();
	FRotator myRot = me->GetActorRotation();

	//ȸ�� �ε巴��
	myRot = FMath::Lerp(myRot, targetRot, 5 * GetWorld()->DeltaTimeSeconds);
	//me->SetActorRotation(myRot);


	// �ӵ��� ���� ��, AnimInstance Bool ����

	//if (anim->isMoving == false)
	//{
	//	//�ӵ� ���ϱ�
	//	float velocity = me->GetVelocity().Size();
	//	if (velocity > 0.1f)
	//	{
	//		anim->isMoving = true;
	//	}
	//}

	// state ���
	// ���� ������ ���������
	if (distance <= attackRange)
	{
		m_state_B = EEnemyBState::Attack;
		anim->isMoving = false;
		anim->isAttacking = true;
		currentTime = attackDelayTime;
	}

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_B = EEnemyBState::Die;
		currentTime = 0;
	}
}

void UEnemyB_FSM::AttackState()
{
	PRINTLOG(TEXT("ATTACK"));
	if (ai)
	{
		ai->StopMovement();
		anim->isMoving = false;
		//anim->isAttacking = true;
	}

	//EnemyB ���� ���°� true ���� Player �ǰ� ���� ��ȿ
	me->bCanAttack = true;
	// �ð��� �帥��.
	currentTime += GetWorld()->DeltaTimeSeconds;

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_B = EEnemyBState::Die;
		currentTime = 0;
	}
}

void UEnemyB_FSM::DamageState()
{
	PRINTLOG(TEXT("DAMAGE"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("DAMAGE STATE!!")));
	anim->isMoving = false;
	//anim->isDamaging = true;

	// Lerp �� �̿��Ͽ� knock back ����
	FVector myPos = me->GetActorLocation();
	//knockbackPos �� OnDamageProcess���� ���
	myPos = FMath::Lerp(myPos, knockbackPos, 10 * GetWorld()->DeltaTimeSeconds);
	me->SetActorLocation(myPos);

	//�Ÿ� ����
	float distance = FVector::Dist(myPos, knockbackPos);

	currentTime += GetWorld()->DeltaTimeSeconds;

	/*if (bhit)
	{
		if (isHeadPart == true)
		{
		}
		else if (isHeadPart == false)
		{
		}
	}*/
	//Move ����
	if (currentTime > 1.5f)
	{
		anim->isMoving = true;
		anim->isHead = false;
		anim->isBody = false;
		m_state_B = EEnemyBState::Move;
		currentTime = 0;
	}
	// HP = 0, isDie�� False���
	else if (Health == 0 && anim->isDie == false)
	{
		m_state_B = EEnemyBState::Die;
		currentTime = 0;
	}

	// ���� ��ġ�� ������ �Ÿ��� ���� ������ Attack���� ���� ����
	/*if (distance < 95.f)
	{
		myPos = knockbackPos;
		m_state_B = EEnemyBState::Attack;
		anim->isDamaging = false;
		anim->isAttacking = true;
		currentTime = 0;
	}*/

}


void UEnemyB_FSM::DieState()
{
	PRINTLOG(TEXT("DIE"));
	me->bCanAttack = false;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Dead!!")));
	//anim->isTransA = false;
	anim->isMoving = false;
	anim->isAttacking = false;
	anim->isDie = true;

	if (ai)
	{
		ai->StopMovement();
		anim->isMoving = false;
		//anim->isAttacking = false;
	}
	

	if (bCanDie == true)
	{
		GetWorld()->GetTimerManager().SetTimer(DieTimerHandle, this, &UEnemyB_FSM::Die, 2.5f, false);
		bCanDie = false;
	}
}

void UEnemyB_FSM::OnDamageProcess(float damage, FVector KBDirection, float KBPwr, bool isHead)
{
	if (Health > 0)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("KnockBack!!")));

		//isHeadPart�� isHead ���� ����
		this->isHeadPart = isHead;
		this->knockback = KBPwr;

		// Z ������ 0���� ����
		KBDirection.Z = 0;
		// ������ �ڷ� �˹�
		knockbackPos = me->GetActorLocation() + KBDirection * knockback;
		currentTime = 0;
		//���� ���� ������ ��, �ǰ��� ������
		if (m_state_B == EEnemyBState::Attack)
		{
			//bhit�� true�� ����
			bhit = true;
			//bIdle = false;
			m_state_B = EEnemyBState::Damage;
			anim->isAttacking = false;
			anim->isMoving = false;

			anim->isHead = isHead;
			anim->isBody = false;
			//if (isHead == true)
			//{
			//	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("ATTK MODE : HEADSHOT!!")));
			//	anim->isAttacking = false;
			//	anim->isHead = true;
			//	anim->isBody = false;
			//}
			//else if (isHead == false)
			//{
			//	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ATTK MODE : BODYSHOT!!")));
			//	anim->isAttacking = false;
			//	anim->isHead = false;
			//	anim->isBody = true;
			//}
		}
		//attack ���°� �ƴ϶��
		else
		{
			anim->isMoving = false;
			//bhit = false;
			//bIdle = true;
			m_state_B = EEnemyBState::Damage;
			// Head �Ǵ� Body �� ���� ���º�ȭ
			if (isHead == true)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("DMG MODE : HEADSHOT!!")));
				anim->isHead = true;
				anim->isBody = false;
			}
			else if (isHead == false)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("DMG MODE : BODYSHOT!!")));
				anim->isHead = false;
				anim->isBody = true;
			}
		}

		// ������ ó��
		Health -= damage;
		if (Health < 0)
		{
			m_state_B = EEnemyBState::Die;
			//me->Destroy();
			return;
		}
	}
}

void UEnemyB_FSM::Die()
{
	me->Destroy();
}

void UEnemyB_FSM::OnDamageEndEvent()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("INPUT TEST!!")));
	bhit = false;
	//anim->isAttacking = true;
	//anim->isMoving = true;
	anim->isHead = false;
	anim->isBody = false;
}


