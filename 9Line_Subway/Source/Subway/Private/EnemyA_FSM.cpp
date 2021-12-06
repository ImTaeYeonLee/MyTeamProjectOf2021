// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyA_FSM.h"
#include "EnemyA.h"
#include "FPSPlayer.h"
#include "VR_Player.h"
#include "EnemyAAnimInstance.h"
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
UEnemyA_FSM::UEnemyA_FSM()
{
	PrimaryComponentTick.bCanEverTick = true;
	bCanDie = true;
	bCanHit = false;

}

// Called when the game starts
void UEnemyA_FSM::BeginPlay()
{
	Super::BeginPlay();

	// EnemyA = me
	me = Cast<AEnemyA>(GetOwner());
	anim = Cast<UEnemyAAnimInstance>(me->GetMesh()->GetAnimInstance());
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
void UEnemyA_FSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (target == nullptr)
	{
		target = Cast<AVR_Player>(UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass()));
	}

	switch (m_state_A)
	{
	case EEnemyAState::Idle:
		IdleState();
		break;
	case EEnemyAState::Move:
		MoveState();
		break;
	case EEnemyAState::Run:
		RunState();
		break;
	case EEnemyAState::Attack:
		AttackState();
		break;
	case EEnemyAState::Damage:
		DamageState();
		break;
	case EEnemyAState::HeadBody:
		HeadBodyState();
		break;
	case EEnemyAState::Die:
		DieState();
		break;
	}
}

void UEnemyA_FSM::IdleState()
{
	// ���¸� Move�� �ٲ۴�.
	currentTime += GetWorld()->DeltaTimeSeconds;

	// �ð��� �������� ���� ����
	if (currentTime > idleDelayTime)
	{
		m_state_A = EEnemyAState::Move;
		// CurrentTime ����
		currentTime = 0;
	}
	// HP = 0, isDie�� False���
	else if (Health == 0 && anim->isDie == false)
	{
		m_state_A = EEnemyAState::Die;
		currentTime = 0;
	}
}

void UEnemyA_FSM::MoveState()
{
	PRINTLOG(TEXT("MOVE"));
	if (target == nullptr)
	{
		return;
	}

	me->GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
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

	//Debug Sphere �ð�ȭ
	//DrawDebugSphere(GetWorld(), me->GetActorLocation(), attackRange, 8, FColor::Red);

	// Timing
	currentTime += GetWorld()->DeltaTimeSeconds;

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
	// �ǰ��� ������ bCAnHit�� true�� ����
	// �ǰ��� ������ RUN state�� �̵�
	if (bCanHit == true && currentTime > RunDelayTime)
	{
		m_state_A = EEnemyAState::Run;
		anim->isMoving = false;
		anim->isRunning = true;
		currentTime = 0;
	}

	// state ���
	// ���� ������ ���������
	if (distance <= attackRange)
	{
		m_state_A = EEnemyAState::Attack;
		anim->isMoving = false;
		anim->isAttacking = true;
		currentTime = attackDelayTime;
	}

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_A = EEnemyAState::Die;
		currentTime = 0;
	}
}

void UEnemyA_FSM::RunState()
{
	PRINTLOG(TEXT("RUN"));
	if (target == nullptr)
	{
		return;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("RUNNING!!")));
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
		anim->isMoving = false;
		anim->isRunning = true;
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
	// ���� ������ ���������

	if (distance < attackRange)
	{
		m_state_A = EEnemyAState::Attack;
		anim->isMoving = false;
		anim->isRunning = false;
		anim->isAttacking = true;
		currentTime = attackDelayTime;
	}

	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_A = EEnemyAState::Die;
		currentTime = 0;
	}
}

void UEnemyA_FSM::AttackState()
{
	PRINTLOG(TEXT("ATTACK"));
	if (ai)
	{
		ai->StopMovement();
		anim->isRunning = false;
		//anim->isAttacking = true;
	}

	//EnemyA ���� ���°� true ���� Player �ǰ� ���� ��ȿ
	me->bCanAttack = true;

	// �ð��� �帥��.
	currentTime += GetWorld()->DeltaTimeSeconds;


	// HP = 0, isDie�� False���
	if (Health == 0 && anim->isDie == false)
	{
		m_state_A = EEnemyAState::Die;
		currentTime = 0;
	}
}

void UEnemyA_FSM::DamageState()
{
	PRINTLOG(TEXT("DAMAGE"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Damaged!!")));
	anim->isRunning = false;
	anim->isDamaging = true;
	
	// Lerp�� knock back ����
	FVector myPos = me->GetActorLocation();
	//knockbackPos �� OnDamageProcess���� ���
	myPos = FMath::Lerp(myPos, knockbackPos, 10 * GetWorld()->DeltaTimeSeconds);
	me->SetActorLocation(myPos);

	/*if (bhit)
	{
		if (isHeadPart == true)
		{
		}
		else if (isHeadPart == false)
		{
		}
	}*/

	//�Ÿ� ����
	float distance = FVector::Dist(myPos, knockbackPos);

	currentTime += GetWorld()->DeltaTimeSeconds;

	//if (anim->isHead ==true && currentTime > 1.3f)
	//{
	//	anim->isAttacking = true;
	//	anim->isHead = false;
	//}
	if (bCanHit == true && currentTime > 1.3f)
	{
		anim->isRunning = true;
		anim->isDamaging = false;
		m_state_A = EEnemyAState::Run;
		currentTime = 0;
	}
	else if (Health == 0 && anim->isDie == false)
	{
		m_state_A = EEnemyAState::Die;
		anim->isDamaging = false;
		anim->isDie = true;
		currentTime = 0;
	}
}
// Head and Body Damage Statement
void UEnemyA_FSM::HeadBodyState()
{
	// Lerp�� knock back ����
	FVector myPos = me->GetActorLocation();
	//knockbackPos �� OnDamageProcess���� ���
	myPos = FMath::Lerp(myPos, knockbackPos, 10 * GetWorld()->DeltaTimeSeconds);
	me->SetActorLocation(myPos);
	
	currentTime += GetWorld()->DeltaTimeSeconds;
	PRINTLOG(TEXT("HeadBody"));
	if (isHeadPart == true)
	{
		PRINTLOG(TEXT("HeadHIT"));
		anim->isHead = true;
		anim->isBody = false;
	}
	else if (isHeadPart == false)
	{
		PRINTLOG(TEXT("BodyHit"));
		anim->isHead = false;
		anim->isBody = true;
	}

	if (isHeadPart == true && currentTime > 1.8f)
	{
		m_state_A = EEnemyAState::Attack;
		anim->isHead = false;
		//anim->isBody = false;
		anim->isAttacking = true;
		currentTime = 0;
	}
	else if (isHeadPart == false && currentTime > 3.f)
	{
		m_state_A = EEnemyAState::Attack;
		//anim->isHead = false;
		anim->isBody = false;
		anim->isAttacking = true;
		currentTime = 0;
	}
}

void UEnemyA_FSM::DieState()
{
	PRINTLOG(TEXT("DIE"));
	me->bCanAttack = false;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Dead!!")));
	anim->isMoving = false;
	anim->isAttacking = false;
	anim->isDie = true;

	if (ai)
	{
		ai->StopMovement();
		anim->isMoving = false;
		anim->isRunning = false;
		anim->isHead = false;
		anim->isBody = false;
	}

	if (bCanDie == true)
	{
		GetWorld()->GetTimerManager().SetTimer(DieTimerHandle, this, &UEnemyA_FSM::Die, 2.5f, false);
		bCanDie = false;
	}
}

void UEnemyA_FSM::OnDamageProcess(float damage, FVector KBDirection, float KBPwr, bool isHead)
{
	if (Health > 0)
	{
		if (bCanHit == false)
		{
			bCanHit = true;
			//Engine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("bCanHit In!!")));
			return;
		}
		this->isHeadPart = isHead;
		this->knockback = KBPwr;

		//���� ���� ������ ��, �ǰ��� ������
		if (m_state_A == EEnemyAState::Attack)
		{
			//bhit�� true�� ����
			bhit = true;
			if (isHead == true)
			{
				PRINTLOG(TEXT("ATTK HEAD"));
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("ATTK MODE : HEADSHOT!!")));
				m_state_A = EEnemyAState::HeadBody;
				anim->isAttacking = false;
				
			}
			else if (isHead == false)
			{
				PRINTLOG(TEXT("ATTK BODY"));
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("ATTK MODE : BODYSHOT!!")));
				m_state_A = EEnemyAState::HeadBody;
				anim->isAttacking = false;
				
			}
		}
		else
		{
			anim->isMoving = false;
			anim->isRunning = false;
			m_state_A = EEnemyAState::Damage;
			currentTime = 0;

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

		Health -= damage;
		if (Health < 0)
		{
			m_state_A = EEnemyAState::Die;
			/*anim->isDamaging = false;
			anim->isDie = true;
			currentTime = 0;*/
			//me->Destroy();
			return;
		}

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("KnockBack!!")));

		// Z ������ 0���� ����
		KBDirection.Z = 0;
		// ������ �ڷ� �˹�
		knockbackPos = me->GetActorLocation() + KBDirection * knockback;
	}
}

void UEnemyA_FSM::Die()
{
	me->Destroy();
}

void UEnemyA_FSM::OnDamageEndEvent()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("INPUT TEST!!")));
	//bhit = false;
	//anim->isAttacking = false;
	//anim->isMoving = true;
	anim->isHead = true;
	anim->isBody = false;
}
