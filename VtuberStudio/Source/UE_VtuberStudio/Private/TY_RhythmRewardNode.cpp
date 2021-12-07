// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_RhythmRewardNode.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include <Kismet/GameplayStatics.h> // 督銅適, 紫錘球反引
#include "TY_PC_PlayerPawn.h" // 砺什闘 巴傾戚嬢 凧繕
#include "TY_Test_GameMode.h" // 惟績乞球 凧繕(繊呪 坦軒)

// Sets default values
ATY_RhythmRewardNode::ATY_RhythmRewardNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	SetRootComponent(boxComp);
	//boxComp->SetCollisionEnabled(ECollisionEnabled::Over); // 中宜竺舛

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 中宜竺舛
		
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATY_RhythmRewardNode::OnBoxBeginOverlap); // 中宜敗呪
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

	// 殿嬢概聖 凶 号狽 舛馬奄
	dir = FVector(10,10,0);
	
	// 持蕉爽奄
	SetLifeSpan(7);
	dir.Normalize();
}

// Called every frame
void ATY_RhythmRewardNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds) / 2;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);

	// 持失切拭辞 姥廃 号狽生稽 域紗 戚疑馬壱 粛陥
	// P = P0 + Vt (耕掘 是帖 = 薄仙 是帖 + 号狽 * 紗亀 * 獣娃)
	FVector P = GetActorLocation() + GetActorRightVector() * speed * DeltaTime; // dir 走酔壱 神献楕生稽 亜亀系 竺舛敗
	// 耕掘 是帖 竺舛
	SetActorLocation(P, true);	
}
/*
void ATY_RhythmRewardNode::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto gamePlayer = Cast<ATY_PC_PlayerPawn>(OtherActor);
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // 映廃 赤澗 惟績乞球?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Overlap!")));

	if (gamePlayer) // 採禦微 企雌戚 巴傾戚嬢虞檎 焼掘研 叔楳
	{
		// 坂匂闘拭 巨獄益五獣走 窒径
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// 賑降反引 持失
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 惟績乞球税 繊呪 臣形爽奄
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// 巴傾戚嬢 袴斗軒杖聖 笹蟹惟 背爽切

	}
	GetOwner()->Destroy();
}
*/
void ATY_RhythmRewardNode::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor == gamePlayer) // 採禦微 企雌戚 巴傾戚嬢虞檎 焼掘研 叔楳
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Overlap!")));

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, this->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 惟績乞球税 繊呪 臣形爽奄
		//gameMode->SetCurrentScore(gameMode->GetCurrentScore() + score);

		// 巴傾戚嬢 袴斗軒杖聖 笹蟹惟 背爽切
		//me->Destroy(); // 軒趨球葛球 肢薦 照鞠澗掻せせ泥ばばばばば美

	this->Destroy(); // 軒趨球葛球 肢薦
	}
	else if (OverlappedComp->GetAttachmentRootActor() != NULL && OverlappedComp->GetName() != "BoxCollider") // 走神五闘軒(Brush 展脊)戚 焼艦壱, 採禦微 陳匂獲闘税 戚硯戚 BoxCollider亜 焼艦虞檎
	{	
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, OverlappedComp->GetName()); // 採禦微 企雌税 戚硯 窒径
	if (OtherActor != this)
	{
		this->Destroy(); // 軒趨球葛球 肢薦
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
	auto gameMode = Cast<ATY_Test_GameMode>(GetWorld()->GetAuthGameMode()); // 映廃 赤澗 惟績乞球?

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));

	if (gamePlayer) // 採禦微 企雌戚 巴傾戚嬢虞檎 焼掘研 叔楳
	{
		// 坂匂闘拭 巨獄益五獣走 窒径
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Collision!")));
		// 賑降反引 持失
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetOwner()->GetActorTransform());

		// 賑降 紫錘球 仙持
		UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

		// 惟績乞球税 繊呪 臣形爽奄
		// gameMode->SetCurrentScore(gameMode->GetCurrentScore() + 1);

		// 巴傾戚嬢 袴斗軒杖聖 笹蟹惟 背爽切

	}
	else // 巴傾戚嬢亜 焼艦虞檎 焼巷依亀 馬走 源切
	{
		return;
	}
	GetOwner()->Destroy();
}
*/
