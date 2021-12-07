// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_SoundMeterCube.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"

// Sets default values
ATY_SoundMeterCube::ATY_SoundMeterCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto me = Cast<ATY_SoundMeterCube>(GetOwner());

}

// Called when the game starts or when spawned
void ATY_SoundMeterCube::BeginPlay()
{
	Super::BeginPlay();
	
	auto Cube = FindComponentByClass<UStaticMeshComponent>();
	auto Material = Cube->GetMaterial(0);

	DynamicMaterial = UMaterialInstanceDynamic::Create(Material, NULL);
	Cube->SetMaterial(0, DynamicMaterial);

	// 생애주기
	SetLifeSpan(lifeSpan);
}

// Called every frame
void ATY_SoundMeterCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds)/2;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);

	// 계속 오른쪽으로 이동하고 싶다
	// 오른쪽 방향 구하기!
	FVector dir = FVector::RightVector;
	// P = P0 + Vt (미래 위치 = 현재 위치 + 방향 * 속도 * 시간)
	FVector P = GetActorLocation() + dir * speed * DeltaTime;
	// 미래 위치 설정
	SetActorLocation(P, true);
}

