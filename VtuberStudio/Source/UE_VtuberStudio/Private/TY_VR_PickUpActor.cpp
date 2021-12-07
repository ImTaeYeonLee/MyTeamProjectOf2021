// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_VR_PickUpActor.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ATY_VR_PickUpActor::ATY_VR_PickUpActor()
{
	PrimaryActorTick.bCanEverTick = false;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);
	// ���� ���� ������
	boxComp->SetSimulatePhysics(true);
	boxComp->SetEnableGravity(true);
	boxComp->SetCollisionProfileName(TEXT("PickUp"));

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComp->SetupAttachment(boxComp);

	/*
	firstComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//SetRootComponent(firstComp); // ?????dhodksewho �־ȵǴµ� ��ƨ��µ� ��������;��������������;��ä�����;��;�����;��;�̤�����;����;����;��;����
	RootComponent = firstComp;
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	//SetRootComponent(boxComp);
	// ���� ���� ������
	boxComp->SetSimulatePhysics(true);
	boxComp->SetEnableGravity(true);
	boxComp->SetCollisionProfileName(TEXT("PickUp"));
	boxComp->SetupAttachment(RootComponent);

	meshComp01 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component01"));
	meshComp02 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component02"));
	//meshComp->SetupAttachment(boxComp);
	*/
}

void ATY_VR_PickUpActor::BeginPlay()
{
	Super::BeginPlay();
	meshComp->SetRenderCustomDepth(true);
	meshComp->SetCustomDepthStencilValue(2);
	/*
	meshComp02->SetRenderCustomDepth(true);
	meshComp02->SetCustomDepthStencilValue(2);	
	*/
	isAttaching = false;
	pickObjectGravityNPhysics = false; // �߷� ������
}

//void APickUpActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

