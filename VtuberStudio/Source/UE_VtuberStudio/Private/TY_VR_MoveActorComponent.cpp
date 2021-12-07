// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_VR_MoveActorComponent.h"
#include "TY_PC_PlayerPawn.h" // �׽�Ʈ �÷��̾� ����
#include "MotionControllerComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "TY_VR_HandActorComponent.h"

UTY_VR_MoveActorComponent::UTY_VR_MoveActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UTY_VR_MoveActorComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<ATY_PC_PlayerPawn>(GetOwner());
}


void UTY_VR_MoveActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("VR_RightThumbstick_X", this, &UTY_VR_MoveActorComponent::MoveHorizontal);
	PlayerInputComponent->BindAxis("VR_RightThumbstick_Y", this, &UTY_VR_MoveActorComponent::MoveVertical);
	PlayerInputComponent->BindAxis("VR_LeftThumbstick_X", this, &UTY_VR_MoveActorComponent::RotateHorizontal);
	PlayerInputComponent->BindAction("VR_LeftGrip", IE_Pressed, this, &UTY_VR_MoveActorComponent::ShowLine);
	PlayerInputComponent->BindAction("VR_LeftGrip", IE_Released, this, &UTY_VR_MoveActorComponent::HideLine);
	//PlayerInputComponent->BindAction("LeftTrigger", IE_Pressed, this, &UMoveActorComponent::ShootBall);
	PlayerInputComponent->BindAction("VR_LeftTrigger", IE_Pressed, this, &UTY_VR_MoveActorComponent::TeleportMySelf);
}

void UTY_VR_MoveActorComponent::MoveHorizontal(float value)
{
	if(player == nullptr)
	{
		return;
	}

	FVector dir = player->GetActorRightVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UTY_VR_MoveActorComponent::MoveVertical(float value)
{
	if (player == nullptr)
	{
		return;
	}

	FVector dir = player->GetActorForwardVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UTY_VR_MoveActorComponent::RotateHorizontal(float value)
{
	if (player == nullptr)
	{
		return;
	}

	FRotator rot = FRotator(0, value* rotateSpeed* GetWorld()->DeltaTimeSeconds, 0);
	player->AddActorLocalRotation(rot);
}

void UTY_VR_MoveActorComponent::DrawTrajectory()
{
	// 1. �� �ʵ��� �ùķ��̼� �� ���ΰ�? 5��
	float simulationTime = 5.0f;

	// 2. �� ���� ��ȹ���� ������ ������ ���ΰ�? 50��
	float interval = 50.0f;
	float timeSegment = simulationTime / interval;

	// 3. �ùķ��̼� ��� ���� ���� ����
	TArray<FVector> linePosition;

	FVector starPos = player->leftController->GetComponentLocation();
	FVector shootDirection = simulDirection * shootPower;

	// �߻� ������ ���� ��ǥ���� �޼� ��� ��Ʈ�ѷ��� �������� �ϴ� ���� ��ǥ�� ȯ���Ѵ�.
	shootDirection = player->leftController->GetComponentTransform().TransformVectorNoScale(shootDirection);


	for (int i = 0; i < interval; i++)
	{
		float realTime = timeSegment * i;

		float xPos = shootDirection.X * realTime;
		float yPos = shootDirection.Y * realTime;
		float zPos = shootDirection.Z * realTime - 980.0f * realTime * realTime * 0.5f;

		FVector predictPosition = starPos + FVector(xPos, yPos,zPos);

		// ���� ��ġ ~ ���� ���� ���̿� ������ �ִ����� �˻��Ѵ�.
		// ����, ������ �ִٸ� �� �ε��� ������ �迭�� �߰��ϰ� �ݺ����� �����Ų��.
		if (i > 0)
		{
			FHitResult hitInfo;
			FCollisionObjectQueryParams objParams;
			objParams.AddObjectTypesToQuery(ECC_WorldStatic);

			FCollisionQueryParams params;
			params.AddIgnoredActor(player);

			// ���� Ʈ���̽� �߻�!
			if (GetWorld()->LineTraceSingleByObjectType(hitInfo, linePosition[i - 1], predictPosition, objParams, params))
			{
				linePosition.Add(hitInfo.ImpactPoint);
				//player->leftLog->SetText(FText::FromString(hitInfo.GetActor()->GetName()));
				teleportLocation = hitInfo.ImpactPoint;
				teleportLocation.Z += player->capsuleComp->GetScaledCapsuleHalfHeight();
				break;
			}
		}

		// ���� ������ �迭�� �߰��Ѵ�.
		linePosition.Add(predictPosition);

		

	}

	// ���� �迭�� ���� ���� �׸���
	for (int i = 0; i < linePosition.Num() - 1; i++)
	{
		DrawDebugLine(GetWorld(), linePosition[i], linePosition[i+1], FColor::Red, false, -1, 0, 2.0f);
	}
}

void UTY_VR_MoveActorComponent::ShowLine()
{
	bIsShowingLine = true;

	// ���� ��� �ִϸ��̼��� �����Ѵ�.
	player->handComp->targetGripValueLeft = 1.0f;
}

void UTY_VR_MoveActorComponent::HideLine()
{
	bIsShowingLine = false;

	// ���� ��� �ִϸ��̼��� �����Ѵ�.
    player->handComp->targetGripValueLeft = 0;
}

void UTY_VR_MoveActorComponent::TeleportMySelf()
{
	// ���� �׸� ��ư�� ������ ������ �׸��� �ִ� ��Ȳ�̶��...
	if (bIsShowingLine)
	{
		// ī�޶� ���̵� �� -> ���̵� �ƿ���Ų��.
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraFade(0, 1, 0.5f, FLinearColor::Black);

		// ī�޶� ���̵尡 ������ ������ ���缭 �̵��Ѵ�.
		if (teleportLocation != FVector::ZeroVector)
		{
			player->GetWorldTimerManager().SetTimer(teleportTimer, this, &UTY_VR_MoveActorComponent::MoveTeleportLocation, 0.5f, false);
		}
	}
}

void UTY_VR_MoveActorComponent::MoveTeleportLocation()
{
	player->SetActorLocation(teleportLocation, false);
}
