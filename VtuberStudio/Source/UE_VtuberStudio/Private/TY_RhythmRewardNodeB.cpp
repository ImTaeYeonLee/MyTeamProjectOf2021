// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNodeB.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "TY_TestSpawnActor.h"
#include <Kismet/GameplayStatics.h> // ��ƼŬ, ����ȿ��
#include "TY_PC_PlayerPawn.h" // �׽�Ʈ �÷��̾� ����
#include "TY_Test_GameMode.h" // ���Ӹ�� ����(���� ó��)

// Sets default values
ATY_RhythmRewardNodeB::ATY_RhythmRewardNodeB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionProfileName(TEXT("OverlapAll")); // �浹����

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // �浹����

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNodeB::OnBoxBeginOverlap); // �浹�Լ�

	gamePlayer = Cast<ATY_PC_PlayerPawn>(UGameplayStatics::GetActorOfClass(GetWorld(), ATY_PC_PlayerPawn::StaticClass()));
	me = Cast<ATY_RhythmRewardNodeB>(UGameplayStatics::GetActorOfClass(GetWorld(), ATY_RhythmRewardNodeB::StaticClass()));
	gameMode = Cast<ATY_Test_GameMode>(GetOwner());
}

// Called when the game starts or when spawned
void ATY_RhythmRewardNodeB::BeginPlay()
{
	Super::BeginPlay();

	auto Cube = FindComponentByClass<UStaticMeshComponent>();
	auto Material = Cube->GetMaterial(0);

	DynamicMaterial = UMaterialInstanceDynamic::Create(Material, NULL);
	Cube->SetMaterial(0, DynamicMaterial);

	// �¾�� �� ���� ���ϱ�
	int32 ratio = FMath::RandRange(0, 180);
	
	float xratio = FMath::RandRange(-10, 10);
	float yratio = FMath::RandRange(-10, 10);
	float zratio = FMath::RandRange(-10, 10);
	dir = FVector(xratio, yratio, zratio);
	dir.Normalize();
	// �����ֱ�
	SetLifeSpan(7);
	
}

// Called every frame
void ATY_RhythmRewardNodeB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2; // ������ ����. ���� Ŭ���� ������ ������ �������. TimeSeconds ���� �ø�����(���ϱ�) ���� ���ϴ� �ֱⰡ ������.
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);
	
	// �����ڿ��� ���� �������� ��� �̵��ϰ� �ʹ�
	// P = P0 + Vt (�̷� ��ġ = ���� ��ġ + ���� * �ӵ� * �ð�)
	FVector P = GetActorLocation() + dir * speed * DeltaTime; // �¾ �� ������ ���� ��ġ�� ��� �̵�
	// �̷� ��ġ ����
	SetActorLocation(P, false);

	// �ε��� ����� �÷��̾���
	// ���� ���
	// ����Ʈ ���
	// �÷��̾� ���� �÷�����
	// �ڱ� �ڽ� destroy ����
	
}

void ATY_RhythmRewardNodeB::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// �ε��� ����� �÷��̾��̰� �÷��̾ true�� ����
	 if(OtherActor == gamePlayer && gamePlayer->isBoost == true)
	 {
		gamePlayer->boostTime += 2.f;

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);
		this->Destroy(); // �������� ����
	 }	 
	 //�ε��� ����� �÷��̾��̰� false�� ����
	 else if (OtherActor == gamePlayer && gamePlayer->isBoost == false)
	 {
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Boost Mode On!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// ���Ӹ���� ���� �÷��ֱ�
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// �÷��̾� ���͸����� ������ ������
		// 2�� ���� �ƿ�� �Ҵ�.
		GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
		{
			gamePlayer->isBoost = false;			
		}), gamePlayer->boostTime, false);
		gamePlayer->boostTime = 2.f; // �ٽ� �ν�ƮŸ���� �⺻�� 2�ʷ� ����������
		this->Destroy(); // �������� ����
	 }
	// �̵����� �ƴ� ���̶� �ε��� ����
	//if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // ������Ʈ��(Brush Ÿ��)�� �ƴϰ�, �ε��� ������Ʈ�� �̸��� BoxCollider�� �ƴ϶��
	 else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // ������Ʈ��(Brush Ÿ��)�� �ƴϰ�, �ε��� ������Ʈ�� �̸��� BoxCollider�� �ƴ϶��
	 {
		 GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // �ε��� ����� �̸� ���
		 if (OtherActor != this) // ���� �ƴ϶��
		 {
			 this->Destroy(); // �������� ����
		 }
		 else // �ڱ��ڽŰ� �ε�������
		 {
			 return; // �׳� ����
		 }
	 }
	/*
	if (OtherActor == gamePlayer) // �ε��� ����� �÷��̾��� �Ʒ��� ����
	{		
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// ���Ӹ���� ���� �÷��ֱ�
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// �÷��̾� ���͸����� ������ ������
		// 2�� ���� �ƿ�� �Ҵ�.
		float waitTime = 2.0f;
		FTimerHandle _timer;
	GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
	{
		gamePlayer->isBoost = false;
	}), waitTime, false);

		//me->Destroy(); // �������� ���� �ȵǴ��ߤ���ť�ФФФФ���
		if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // ������Ʈ��(Brush Ÿ��)�� �ƴϰ�, �ε��� ������Ʈ�� �̸��� BoxCollider�� �ƴ϶��
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // �ε��� ����� �̸� ���
		}
		this->Destroy(); // �������� ����
	}
	*/
}
