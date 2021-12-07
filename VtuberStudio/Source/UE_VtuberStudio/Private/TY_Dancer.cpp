// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_Dancer.h"
#include "TY_DancerFSM.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
// 이후 Loc Actor 참조

// Sets default values
ATY_Dancer::ATY_Dancer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	dancerFSM = CreateDefaultSubobject<UTY_DancerFSM>(TEXT("dancerFSM"));
		bodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("bodyMesh"));
		judgmentCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("capsuleCollision"));

		// BodyMesh 생성자에서 지정해주장
		ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));

		// 로드에 성공하면, 이 데이터를 bodyMesh에게 데이터 할당
		if (tempMesh.Succeeded())
		{
			// 데이터
			GetMesh()->SetSkeletalMesh(tempMesh.Object);
		}
		/*
		// 한 김에 메쉬 해줬으니 애님BP도 할당해줘부리자
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

