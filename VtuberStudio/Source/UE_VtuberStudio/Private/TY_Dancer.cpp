// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_Dancer.h"
#include "TY_DancerFSM.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
// ���� Loc Actor ����

// Sets default values
ATY_Dancer::ATY_Dancer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	dancerFSM = CreateDefaultSubobject<UTY_DancerFSM>(TEXT("dancerFSM"));
		bodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("bodyMesh"));
		judgmentCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsuleCollision"));

		// BodyMesh �����ڿ��� ����������
		ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));

		// �ε忡 �����ϸ�, �� �����͸� bodyMesh���� ������ �Ҵ�
		if (tempMesh.Succeeded())
		{
			// ������
			GetMesh()->SetSkeletalMesh(tempMesh.Object);
		}
		/*
		// �� �迡 �޽� �������� �ִ�BP�� �Ҵ�����θ���
		ConstructorHelpers::FClassFinder<UAnimInstance> tempAnim(TEXT("AnimBlueprint'/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP'"));

		if (tempAnim.Succeeded())
		{
			GetMesh()->SetAnimClass(tempAnim.Class);
		}
		*/
		AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void ATY_Dancer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_Dancer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATY_Dancer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

