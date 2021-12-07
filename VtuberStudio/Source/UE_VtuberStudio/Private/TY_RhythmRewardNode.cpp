// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNode.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include <Kismet/GameplayStatics.h> // 파티클, 사운드효과
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_Test_GameMode.h" // 게임모드 참조(점수 처리)

// Sets default values
ATY_RhythmRewardNode::ATY_RhythmRewardNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionEnabled(ECollisionEnabled::Over); // 충돌설정

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 충돌설정
		
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNode::OnBoxBeginOverlap); // 충돌함수
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

	// 태어났을 때 방향 정하기
	dir = FVector(10,10,0);
	
	// 생애주기
	SetLifeSpan(7);
	dir.Normalize();
}

// Called every frame
void ATY_RhythmRewardNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);

	// 생성자에서 구한 방향으로 계속 이동하고 싶다
	// P = P0 + Vt (미래 위치 = 현재 위치 + 방향 * 속도 * 시간)
	FVector P = GetActorLocation() + GetActorRightVector() * speed * DeltaTime; // dir 지우고 오른쪽으로 가도록 설정함
	// 미래 위치 설정
	SetActorLocation(P, true);	
}
/*
void ATY_RhythmRewardNode::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto gamePlayer = Cast<ATY_PC_PlayerPawn>(OtherActor);
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // 권한 있는 게임모드?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

	if (gamePlayer) // 부딪힌 대상이 플레이어라면 아래를 실행
	{
		// 뷰포트에 디버그메시지 출력
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// 폭발효과 생성
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 게임모드의 점수 올려주기
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// 플레이어 머터리얼을 빛나게 해주자

	}
	GetOwner()->Destroy();
}
*/
void ATY_RhythmRewardNode::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor == gamePlayer) // 부딪힌 대상이 플레이어라면 아래를 실행
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 게임모드의 점수 올려주기
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 플레이어 머터리얼을 빛나게 해주자
		//me->Destroy(); // 리워드노드 삭제 안되는중ㅋㅋ큐ㅠㅠㅠㅠㅠ힝

	this->Destroy(); // 리워드노드 삭제
	}
	else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 지오메트리(Brush 타입)이 아니고, 부딪힌 컴포넌트의 이름이 BoxCollider가 아니라면
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 부딪힌 대상의 이름 출력
	if (OtherActor != this)
	{
		this->Destroy(); // 리워드노드 삭제
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
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // 권한 있는 게임모드?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));

	if (gamePlayer) // 부딪힌 대상이 플레이어라면 아래를 실행
	{
		// 뷰포트에 디버그메시지 출력
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// 폭발효과 생성
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 게임모드의 점수 올려주기
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// 플레이어 머터리얼을 빛나게 해주자

	}
	else // 플레이어가 아니라면 아무것도 하지 말자
	{
		return;
	}
	GetOwner()->Destroy();
}
*/
