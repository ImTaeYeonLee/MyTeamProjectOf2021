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

	// �����ֱ�
	SetLifeSpan(lifeSpan);
}

// Called every frame
void ATY_SoundMeterCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float blend = 0.5f + FMath::Cos(GetWorld()->TimeSeconds)/2;
	DynamicMaterial->SetScalarParameterValue(TEXT("Blend"), blend);

	// ��� ���������� �̵��ϰ� �ʹ�
	// ������ ���� ���ϱ�!
	FVector dir = FVector::RightVector;
	// P = P0 + Vt (�̷� ��ġ = ���� ��ġ + ���� * �ӵ� * �ð�)
	FVector P = GetActorLocation() + dir * speed * DeltaTime;
	// �̷� ��ġ ����
	SetActorLocation(P, true);
}

