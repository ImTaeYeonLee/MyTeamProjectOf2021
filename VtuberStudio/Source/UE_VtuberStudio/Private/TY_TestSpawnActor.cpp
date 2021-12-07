// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_TestSpawnActor.h"
#include "TY_RhythmRewardNode.h"
#include "TY_RhythmRewardNodeB.h"

	FActorSpawnParameters param;
// Sets default values
ATY_TestSpawnActor::ATY_TestSpawnActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

// Called when the game starts or when spawned
void ATY_TestSpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_TestSpawnActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATY_TestSpawnActor::CircleShot1()
{
	for(int i = 0 ; i < 360 ; i += 60)
	{
	auto node1 = GetWorld()->SpawnActor<ATY_RhythmRewardNode>(nodeFactory1, GetTransform(), param);

	if (node1)
	{
		node1->SetActorLocation(GetActorLocation());
		node1->SetActorRotation(FRotator(0,0,i));
	}
	}
}

void ATY_TestSpawnActor::CircleShot2()
{
	for (int i = 0; i < 260; i += 26)
	{
		auto node2 = GetWorld()->SpawnActor<ATY_RhythmRewardNode>(nodeFactory2, GetTransform(), param);

		if (node2)
		{
			node2->SetActorLocation(GetActorLocation());
			node2->SetActorRotation(FRotator(0, 0, i));
		}
	}
}

void ATY_TestSpawnActor::CircleShot3()
{
	for (int i = 0; i < 260; i += 13)
	{
		auto node3 = GetWorld()->SpawnActor<ATY_RhythmRewardNode>(nodeFactory3, GetTransform(), param);

		if (node3)
		{
			node3->SetActorLocation(GetActorLocation());
			node3->SetActorRotation(FRotator(0, 0, i));
		}
	}
}

void ATY_TestSpawnActor::CicleShotGoto()
{
	
}

void ATY_TestSpawnActor::ShapeAwake()
{

}

void ATY_TestSpawnActor::ShapeInit()
{
}

void ATY_TestSpawnActor::ShapeShot()
{
}

void ATY_TestSpawnActor::Spin()
{
	for (int i = 0; i < 360; i += 120)
	{
		auto node = GetWorld()->SpawnActor<ATY_RhythmRewardNodeB>(nodeFactoryB, GetTransform(), param);

		if (node)
		{
			node->SetActorLocation(GetActorLocation());
			node->SetActorRotation(FRotator(0, 0, i));
		}
	}
	AddActorWorldRotation(FRotator(0,10,0),false);
}

void ATY_TestSpawnActor::TargetGoto()
{
}

void ATY_TestSpawnActor::HeartShot()
{

}

