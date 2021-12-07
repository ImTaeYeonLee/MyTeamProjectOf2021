// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNodeB.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "TY_TestSpawnActor.h"
#include <Kismet/GameplayStatics.h> // 파티클, 사운드효과
#include "TY_PC_PlayerPawn.h" // 테스트 플레이어 참조
#include "TY_Test_GameMode.h" // 게임모드 참조(점수 처리)

// Sets default values
ATY_RhythmRewardNodeB::ATY_RhythmRewardNodeB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionProfileName(TEXT("OverlapAll")); // 충돌설정

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 충돌설정

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNodeB::OnBoxBeginOverlap); // 충돌함수

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

	// 태어났을 때 방향 정하기
	int32 ratio = FMath::RandRange(0, 180);
	
	float xratio = FMath::RandRange(-10, 10);
	float yratio = FMath::RandRange(-10, 10);
	float zratio = FMath::RandRange(-10, 10);
	dir = FVector(xratio, yratio, zratio);
	dir.Normalize();
	// 생애주기
	SetLifeSpan(7);
	
}

// Called every frame
void ATY_RhythmRewardNodeB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2; // 블렌드할 정도. 값이 클수록 색상이 원색에 가까워짐. TimeSeconds 값을 늘릴수록(곱하기) 색이 변하는 주기가 빨라짐.
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);
	
	// 생성자에서 구한 방향으로 계속 이동하고 싶다
	// P = P0 + Vt (미래 위치 = 현재 위치 + 방향 * 속도 * 시간)
	FVector P = GetActorLocation() + dir * speed * DeltaTime; // 태어날 때 정해진 랜덤 위치로 계속 이동
	// 미래 위치 설정
	SetActorLocation(P, false);

	// 부딪힌 대상이 플레이어라면
	// 사운드 재생
	// 이펙트 재생
	// 플레이어 점수 올려주자
	// 자기 자신 destroy 하자
	
}

void ATY_RhythmRewardNodeB::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 부딪힌 대상이 플레이어이고 플레이어가 true인 상태
	 if(OtherActor == gamePlayer && gamePlayer->isBoost == true)
	 {
		gamePlayer->boostTime += 2.f;

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);
		this->Destroy(); // 리워드노드 삭제
	 }	 
	 //부딪힌 대상이 플레이어이고 false인 상태
	 else if (OtherActor == gamePlayer && gamePlayer->isBoost == false)
	 {
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Boost Mode On!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 게임모드의 점수 올려주기
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 플레이어 머터리얼을 빛나게 해주자
		// 2초 동안 아우라를 켠다.
		GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
		{
			gamePlayer->isBoost = false;			
		}), gamePlayer->boostTime, false);
		gamePlayer->boostTime = 2.f; // 다시 부스트타임을 기본값 2초로 설정해주자
		this->Destroy(); // 리워드노드 삭제
	 }
	// 이도저도 아닌 놈이랑 부딪힌 상태
	//if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 지오메트리(Brush 타입)이 아니고, 부딪힌 컴포넌트의 이름이 BoxCollider가 아니라면
	 else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 지오메트리(Brush 타입)이 아니고, 부딪힌 컴포넌트의 이름이 BoxCollider가 아니라면
	 {
		 GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 부딪힌 대상의 이름 출력
		 if (OtherActor != this) // 내가 아니라면
		 {
			 this->Destroy(); // 리워드노드 삭제
		 }
		 else // 자기자신과 부딪혔으면
		 {
			 return; // 그냥 리턴
		 }
	 }
	/*
	if (OtherActor == gamePlayer) // 부딪힌 대상이 플레이어라면 아래를 실행
	{		
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 폭발 사운드 재생
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 게임모드의 점수 올려주기
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 플레이어 머터리얼을 빛나게 해주자
		// 2초 동안 아우라를 켠다.
		float waitTime = 2.0f;
		FTimerHandle _timer;
	GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
	{
		gamePlayer->isBoost = false;
	}), waitTime, false);

		//me->Destroy(); // 리워드노드 삭제 안되는중ㅋㅋ큐ㅠㅠㅠㅠㅠ힝
		if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 지오메트리(Brush 타입)이 아니고, 부딪힌 컴포넌트의 이름이 BoxCollider가 아니라면
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 부딪힌 대상의 이름 출력
		}
		this->Destroy(); // 리워드노드 삭제
	}
	*/
}
