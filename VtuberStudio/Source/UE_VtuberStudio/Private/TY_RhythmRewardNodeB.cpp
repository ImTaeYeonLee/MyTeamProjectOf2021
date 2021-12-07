// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNodeB.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "TY_TestSpawnActor.h"
#include <Kismet/GameplayStatics.h> // 督銅適, 紫錘球反引
#include "TY_PC_PlayerPawn.h" // 砺什闘 巴傾戚嬢 凧繕
#include "TY_Test_GameMode.h" // 惟績乞球 凧繕(繊呪 坦軒)

// Sets default values
ATY_RhythmRewardNodeB::ATY_RhythmRewardNodeB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionProfileName(TEXT("OverlapAll")); // 中宜竺舛

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 中宜竺舛

	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNodeB::OnBoxBeginOverlap); // 中宜敗呪

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

	// 殿嬢概聖 凶 号狽 舛馬奄
	int32 ratio = FMath::RandRange(0, 180);
	
	float xratio = FMath::RandRange(-10, 10);
	float yratio = FMath::RandRange(-10, 10);
	float zratio = FMath::RandRange(-10, 10);
	dir = FVector(xratio, yratio, zratio);
	dir.Normalize();
	// 持蕉爽奄
	SetLifeSpan(7);
	
}

// Called every frame
void ATY_RhythmRewardNodeB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2; // 鷺兄球拝 舛亀. 葵戚 適呪系 事雌戚 据事拭 亜猿趨像. TimeSeconds 葵聖 潅険呪系(咽馬奄) 事戚 痕馬澗 爽奄亜 察虞像.
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);
	
	// 持失切拭辞 姥廃 号狽生稽 域紗 戚疑馬壱 粛陥
	// P = P0 + Vt (耕掘 是帖 = 薄仙 是帖 + 号狽 * 紗亀 * 獣娃)
	FVector P = GetActorLocation() + dir * speed * DeltaTime; // 殿嬢劾 凶 舛背遭 沓棋 是帖稽 域紗 戚疑
	// 耕掘 是帖 竺舛
	SetActorLocation(P, false);

	// 採禦微 企雌戚 巴傾戚嬢虞檎
	// 紫錘球 仙持
	// 戚薙闘 仙持
	// 巴傾戚嬢 繊呪 臣形爽切
	// 切奄 切重 destroy 馬切
	
}

void ATY_RhythmRewardNodeB::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 採禦微 企雌戚 巴傾戚嬢戚壱 巴傾戚嬢亜 true昔 雌殿
	 if(OtherActor == gamePlayer && gamePlayer->isBoost == true)
	 {
		gamePlayer->boostTime += 2.f;

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);
		this->Destroy(); // 軒趨球葛球 肢薦
	 }	 
	 //採禦微 企雌戚 巴傾戚嬢戚壱 false昔 雌殿
	 else if (OtherActor == gamePlayer && gamePlayer->isBoost == false)
	 {
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Boost Mode On!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 惟績乞球税 繊呪 臣形爽奄
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 巴傾戚嬢 袴斗軒杖聖 笹蟹惟 背爽切
		// 2段 疑照 焼酔虞研 漬陥.
		GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
		{
			gamePlayer->isBoost = false;			
		}), gamePlayer->boostTime, false);
		gamePlayer->boostTime = 2.f; // 陥獣 採什闘展績聖 奄沙葵 2段稽 竺舛背爽切
		this->Destroy(); // 軒趨球葛球 肢薦
	 }
	// 戚亀煽亀 焼観 叶戚櫛 採禦微 雌殿
	//if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 走神五闘軒(Brush 展脊)戚 焼艦壱, 採禦微 陳匂獲闘税 戚硯戚 BoxCollider亜 焼艦虞檎
	 else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 走神五闘軒(Brush 展脊)戚 焼艦壱, 採禦微 陳匂獲闘税 戚硯戚 BoxCollider亜 焼艦虞檎
	 {
		 GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 採禦微 企雌税 戚硯 窒径
		 if (OtherActor != this) // 鎧亜 焼艦虞檎
		 {
			 this->Destroy(); // 軒趨球葛球 肢薦
		 }
		 else // 切奄切重引 採禦縛生檎
		 {
			 return; // 益撹 軒渡
		 }
	 }
	/*
	if (OtherActor == gamePlayer) // 採禦微 企雌戚 巴傾戚嬢虞檎 焼掘研 叔楳
	{		
		gamePlayer->isBoost = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 惟績乞球税 繊呪 臣形爽奄
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 巴傾戚嬢 袴斗軒杖聖 笹蟹惟 背爽切
		// 2段 疑照 焼酔虞研 漬陥.
		float waitTime = 2.0f;
		FTimerHandle _timer;
	GetWorld()->GetTimerManager().SetTimer(_timer, FTimerDelegate::CreateLambda([&]()
	{
		gamePlayer->isBoost = false;
	}), waitTime, false);

		//me->Destroy(); // 軒趨球葛球 肢薦 照鞠澗掻せせ泥ばばばばば美
		if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 走神五闘軒(Brush 展脊)戚 焼艦壱, 採禦微 陳匂獲闘税 戚硯戚 BoxCollider亜 焼艦虞檎
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 採禦微 企雌税 戚硯 窒径
		}
		this->Destroy(); // 軒趨球葛球 肢薦
	}
	*/
}
