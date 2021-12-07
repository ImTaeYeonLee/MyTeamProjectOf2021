// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_VR_GrabActorComponent.h"
#include "TY_VR_PickUpActor.h"
#include "TY_PC_PlayerPawn.h" // �׽�Ʈ �÷��̾� ����
#include "DrawDebugHelpers.h"
#include "TY_VR_HandActorComponent.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"

UTY_VR_GrabActorComponent::UTY_VR_GrabActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UTY_VR_GrabActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// �÷��̾� ĳ���ϱ�
	player = Cast<ATY_PC_PlayerPawn>(GetOwner());
}


void UTY_VR_GrabActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsShowing)
	{
		DrawGrabLine();
	}
}

void UTY_VR_GrabActorComponent::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("VR_RightGrip", IE_Pressed, this, &UTY_VR_GrabActorComponent::ShowGrabLine);
	PlayerInputComponent->BindAction("VR_RightGrip", IE_Released, this, &UTY_VR_GrabActorComponent::HideGrabLine);
	PlayerInputComponent->BindAction("VR_RightTrigger", IE_Pressed, this, &UTY_VR_GrabActorComponent::GrabAction);
	PlayerInputComponent->BindAction("VR_RightTrigger", IE_Released, this, &UTY_VR_GrabActorComponent::ReleaseAction);
}

void UTY_VR_GrabActorComponent::ShowGrabLine()
{
	bIsShowing = true;
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("ShowLine")));
	UE_LOG(LogTemp, Warning, TEXT("Call ShowLine"));
}

void UTY_VR_GrabActorComponent::HideGrabLine()
{
	bIsShowing = false;
	grabObject = FHitResult();
}

void UTY_VR_GrabActorComponent::DrawGrabLine()
{
	if (pickObject == nullptr)
	{
		FHitResult hitInfo;
		startPos = player->rightHand->GetComponentLocation();

		// ���� ��ü�� ���� ��ü�� ���ؼ� �浹 üũ
		FCollisionObjectQueryParams objParams;
		objParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		objParams.AddObjectTypesToQuery(ECC_PhysicsBody);

		// �÷��̾� ���ʹ� ����
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(player);

		if (myGrabType == EGrabType::EGT_LineType)
		{
			endPos = startPos + player->rightHand->GetForwardVector() * grabDistance;

			if (GetWorld()->LineTraceSingleByObjectType(hitInfo, startPos, endPos, objParams, queryParams))
			{
				DrawDebugLine(GetWorld(), startPos, hitInfo.ImpactPoint, FColor::Green, false, -1, 0, 2);
				grabObject = hitInfo;
				//player->rightLog->SetText(FText::FromString(hitInfo.GetActor()->GetName()));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, hitInfo.GetComponent()->GetName());
			}
			else
			{
				DrawDebugLine(GetWorld(), startPos, endPos, FColor::Green, false, -1, 0, 2);
				grabObject = FHitResult();
			}
		}
		// ��ü ���·� �˻��ϱ� �� ����� ���Ǿ� �׸���
		else if (myGrabType == EGrabType::EGT_SweepType)
		{
			if (GetWorld()->SweepSingleByObjectType(hitInfo, startPos, startPos, FQuat::Identity, objParams, FCollisionShape::MakeSphere(15.f), queryParams))
			{
				grabObject = hitInfo;
			}
			else
			{
				grabObject = FHitResult();
			}
			DrawDebugSphere(GetWorld(), startPos, 15.f, 30, FColor::Green, false, -1, 0, 1);
		}
	}
}


void UTY_VR_GrabActorComponent::GrabAction()
{
	AActor* grabActor = grabObject.GetActor();

	if (bIsShowing == false || grabActor == nullptr)
	{
		return;
	}

	if (pickObject == nullptr)
	{
		pickObject = Cast<ATY_VR_PickUpActor>(grabActor);

		if (pickObject)
		{
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			// �տ� ���̱�
			pickObject->isAttaching = true;
			//pickObject->pickObjectGravityNPhysics = false;
			//pickObject->boxComp->SetSimulatePhysics(pickObject->pickObjectGravityNPhysics);
			pickObject->boxComp->SetSimulatePhysics(false);
			pickObject->AttachToComponent(player->rightHand, attachRules, TEXT("GrabPoint"));
			pickObject->boxComp->SetRelativeLocation(pickObject->grabOffset);
			//pickObject->boxComp->SetEnableGravity(pickObject->pickObjectGravityNPhysics);
			pickObject->boxComp->SetEnableGravity(false);

			// ���� ��� �ִϸ��̼� �ϱ�
			player->handComp->targetGripValueRight = 1.0f;
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("GrabAction")));

		}
	}
}

void UTY_VR_GrabActorComponent::ReleaseAction()
{
	if (pickObject)
	{
		pickObject->isAttaching = false;
		pickObject->pickObjectGravityNPhysics =true;
		pickObject->boxComp->SetEnableGravity(true);
		pickObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		pickObject->boxComp->SetSimulatePhysics(true);

		player->handComp->targetGripValueRight = 0.0f;

		pickObject = nullptr;
	}
}