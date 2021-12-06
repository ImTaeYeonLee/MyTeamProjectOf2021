// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"
#include "Boss_FSM.h"
#include "Engine/Engine.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "Animation/AnimInstance.h"
#include "FPSPlayer.h"
#include "VR_Player.h"
#include "Components/BoxComponent.h"


// Sets default values
ABoss::ABoss()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	BossFSM = CreateDefaultSubobject<UBoss_FSM>(TEXT("BossFSM"));
	
	//CollisionComponent Attachment
	HeadCollision = CreateDefaultSubobject<USphereComponent>(TEXT("HeadCollision"));
	HeadCollision->SetupAttachment(GetMesh(), "HeadTarget");

	BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BodyCollision->SetupAttachment(GetMesh(), "Spine1");

	RtArmCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RtArmCollision"));
	RtArmCollision->SetupAttachment(GetMesh(), "RtArmTarget");

	LtArmCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LtArmCollision"));
	LtArmCollision->SetupAttachment(GetMesh(), "LtArmTarget");

	// BossMesh ���̱�
	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("SkeletalMesh'/Game/Model/NewBoss/NewBoss_Ch30_nonPBR.NewBoss_Ch30_nonPBR'"));
	
	// Skeletal Mesh Load �����ϸ�, ������ �Ҵ�
	if (tempMesh.Succeeded())
	{
		// ������
		GetMesh()->SetSkeletalMesh(tempMesh.Object);
	}
	
	//Anime BP �Ҵ�
	ConstructorHelpers::FClassFinder<UAnimInstance>tempAnim(TEXT("AnimBlueprint'/Game/Animation/ABP_NewBoss.ABP_NewBoss_C'"));
	
	if (tempAnim.Succeeded())
	{
		// ������
		GetMesh()->SetAnimClass(tempAnim.Class);
	}

	//Health System
	bCanBeDamaged = true;
	//bCanOverlap = true;
	bCanAttack = false;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (BossFSM->Health <= 0)
	{
		gameEnd = true;
	}
}

// Called to bind functionality to input
void ABoss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

