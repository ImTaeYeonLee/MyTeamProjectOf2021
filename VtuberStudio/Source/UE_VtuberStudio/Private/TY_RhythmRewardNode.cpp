// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNode.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include <Kismet/GameplayStatics.h> // ��ƼŬ, ����ȿ��
#include "TY_PC_PlayerPawn.h" // �׽�Ʈ �÷��̾� ����
#include "TY_Test_GameMode.h" // ���Ӹ�� ����(���� ó��)

// Sets default values
ATY_RhythmRewardNode::ATY_RhythmRewardNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionEnabled(ECollisionEnabled::Over); // �浹����

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // �浹����
		
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNode::OnBoxBeginOverlap); // �浹�Լ�
	gamePlayer = Cast<ATY_PC_PlayerPawn>(UGameplayStatics::GetActorOfClass(GetWorld(), ATY_PC_PlayerPawn::StaticClass()));
	me = Cast<ATY_RhythmRewardNode>(UGameplayStatics::GetActorOfClass(GetWorld(), ATY_RhythmRewardNode::StaticClass()));
	//gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode());
	gameMode = Cast<ATY_Test_GameMode>(GetOwner());
}

// Called when the game starts or when spawned
void ATY_RhythmRewardNode::BeginPlay()
{
	Super::BeginPlay();
	
	auto Cube = FindComponentByClass<UStaticMeshComponent>();
	auto Material = Cube->GetMaterial(0);

	DynamicMaterial = UMaterialInstanceDynamic::Create(Material, NULL);
	Cube->SetMaterial(0, DynamicMaterial);

	// �¾�� �� ���� ���ϱ�
	dir = FVector(10,10,0);
	
	// �����ֱ�
	SetLifeSpan(7);
	dir.Normalize();
}

// Called every frame
void ATY_RhythmRewardNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);

	// �����ڿ��� ���� �������� ��� �̵��ϰ� �ʹ�
	// P = P0 + Vt (�̷� ��ġ = ���� ��ġ + ���� * �ӵ� * �ð�)
	FVector P = GetActorLocation() + GetActorRightVector() * speed * DeltaTime; // dir ����� ���������� ������ ������
	// �̷� ��ġ ����
	SetActorLocation(P, true);	
}
/*
void ATY_RhythmRewardNode::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto gamePlayer = Cast<ATY_PC_PlayerPawn>(OtherActor);
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // ���� �ִ� ���Ӹ��?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

	if (gamePlayer) // �ε��� ����� �÷��̾��� �Ʒ��� ����
	{
		// ����Ʈ�� ����׸޽��� ���
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// ����ȿ�� ����
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// ���Ӹ���� ���� �÷��ֱ�
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// �÷��̾� ���͸����� ������ ������

	}
	GetOwner()->Destroy();
}
*/
void ATY_RhythmRewardNode::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor == gamePlayer) // �ε��� ����� �÷��̾��� �Ʒ��� ����
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// ���Ӹ���� ���� �÷��ֱ�
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// �÷��̾� ���͸����� ������ ������
		//me->Destroy(); // �������� ���� �ȵǴ��ߤ���ť�ФФФФ���

	this->Destroy(); // �������� ����
	}
	else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // ������Ʈ��(Brush Ÿ��)�� �ƴϰ�, �ε��� ������Ʈ�� �̸��� BoxCollider�� �ƴ϶��
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // �ε��� ����� �̸� ���
	if (OtherActor != this)
	{
		this->Destroy(); // �������� ����
	}
	else
	{
		return;
	}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Current Score : %d"), gameMode->curScore);
}

/*
void ATY_RhythmRewardNode::OnCollisionEnter(APawn* OtherPawn)
{
	auto gamePlayer = Cast<ATY_PC_PlayerPawn>(GetOwner());
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // ���� �ִ� ���Ӹ��?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));

	if (gamePlayer) // �ε��� ����� �÷��̾��� �Ʒ��� ����
	{
		// ����Ʈ�� ����׸޽��� ���
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// ����ȿ�� ����
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// ���� ���� ���
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// ���Ӹ���� ���� �÷��ֱ�
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// �÷��̾� ���͸����� ������ ������

	}
	else // �÷��̾ �ƴ϶�� �ƹ��͵� ���� ����
	{
		return;
	}
	GetOwner()->Destroy();
}
*/
