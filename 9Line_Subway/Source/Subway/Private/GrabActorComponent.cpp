// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabActorComponent.h"
#include "PickUpActor.h"
#include "MagazineActor.h"
#include "ShotGunActor.h"
#include "VR_Player.h"
#include "DrawDebugHelpers.h"
#include "HandActorComponent.h"
#include "Components/BoxComponent.h"
#include "WeaponPistol.h"
#include "WeaponShotgun.h"
#include "Subway.h"
#include <Kismet/GameplayStatics.h>

// Sets default values for this component's properties
UGrabActorComponent::UGrabActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// �÷��̾ ĳ����
	player = Cast<AVR_Player>(GetOwner());

	player->handComp->targetGripValueRight = 0.0f;

	auto gun = Cast<UChildActorComponent>(GetOwner()->GetDefaultSubobjectByName(TEXT("Gun")));
	pickupActor = Cast<APickUpActor>(gun->GetChildActor());
	// �ӽ� �� ����
	bIsPistol = true;
	bIsShotgun = false;

	gunTarget = UGameplayStatics::GetActorOfClass(GetWorld(), AVR_Player::StaticClass());

	/*pickObject->SetActorHiddenInGame(true);
	magzineActor->SetActorHiddenInGame(true);*/
}


// Called every frame
void UGrabActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsShowing)
	{
		DrawGrabLine();
	}
	//DrawDebugSphere(GetWorld(), player->rightHand->GetComponentLocation(), grabRange, 30, FColor::Green, false, -1, 0, 1);
}

void UGrabActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	PlayerInputComponent->BindAction("RightGrip", IE_Pressed, this, &UGrabActorComponent::GrabAction);
	PlayerInputComponent->BindAction("RightGrip", IE_Released, this, &UGrabActorComponent::ReleaseAction);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &UGrabActorComponent::Fire);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &UGrabActorComponent::Reload);
	PlayerInputComponent->BindAction("ShotgunReload", IE_Pressed, this, &UGrabActorComponent::ShotgunReload);
	PlayerInputComponent->BindAction("LeftGrip", IE_Pressed, this, &UGrabActorComponent::LeftGrabAction);
	PlayerInputComponent->BindAction("LeftGrip", IE_Released, this, &UGrabActorComponent::LeftReleaseAction);

	//PlayerInputComponent->BindAction("RightTrigger", IE_Pressed, this, &UGrabActorComponent::);
	//PlayerInputComponent->BindAction("RightTrigger", IE_Released, this, &UGrabActorComponent::);
}

void UGrabActorComponent::ShowGrabLine()
{
	bIsShowing = true;
}

void UGrabActorComponent::HideGrabLine()
{
	bIsShowing = false;
	grabObject = FHitResult();

}

void UGrabActorComponent::DrawGrabLine()
{
	// PickupActor ���� �浹üũ
	// Shootgunactor ���� �浹üũ
	// �տ� ��� ���ٸ�
	if (pickObject == nullptr && shotgunobject == nullptr)
	{
		FHitResult hitInfo;
		FVector startPos = player->rightHand->GetComponentLocation();// + FVector(0.f, 10.f, 0.f);

		FCollisionObjectQueryParams objParams;
		objParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		objParams.AddObjectTypesToQuery(ECC_PhysicsBody);

		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(player);
		if (GetWorld()->SweepSingleByObjectType(hitInfo, startPos, startPos, FQuat::Identity, objParams, FCollisionShape::MakeSphere(grabRange), queryParams))
		{
			grabObject = hitInfo;
			auto pick = Cast<APickUpActor>(hitInfo.Actor);
			if (pick)
			{
				auto c = Cast<UChildActorComponent>(pickupActor->GetDefaultSubobjectByName(TEXT("Gun")));
				if (c)
				{
					pickObject = Cast<AWeaponBase>(c->GetChildActor());
				}
			}
			shotgunobject = Cast<AShotGunActor>(hitInfo.Actor);
			
			// ������ ��� �ִϸ��̼�
			//player->handComp->targetGripValueRight = 1.0f;
		}
	}
	
}

void UGrabActorComponent::GrabAction()
{
	DrawGrabLine();

	GrabPickObject();
	GrabShotgunObject();
	

}

void UGrabActorComponent::ReleaseAction()
{
	if (pickObject)
	{
		pickObject->SetActorHiddenInGame(true);

		bIsPistol = false;

		auto boxComp = Cast<UBoxComponent>(pickupActor->GetRootComponent());
		boxComp->SetEnableGravity(false);
		// �� �ڸ����� ��������
		pickObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

		pickObject->AttachToComponent(player->gunComp, attachRules);

		boxComp->SetSimulatePhysics(false);

		pickObject->SetActorLocation(player->gunComp->GetComponentLocation());
		player->gun->SetRelativeRotation(FRotator(0, 90.f, 90.0f));
		pickObject->SetActorRelativeRotation(FRotator(0.f, 0.f, 0.f));
		// ������ �Ǵ� �ִϸ��̼�
		player->handComp->targetGripValueRight = 0.0f;

		pickObject = nullptr;
	}

	else if (shotgunobject)
	{
		bIsShotgun = false;

		player->rightHand->SetHiddenInGame(false);
		shotgunobject->boxComp->SetEnableGravity(false);
		// �� �ڸ����� ��������
		shotgunobject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

		shotgunobject->AttachToComponent(player->shotgunComp, attachRules);

		shotgunobject->boxComp->SetSimulatePhysics(false);

		shotgunobject->SetActorLocation(player->shotgunComp->GetComponentLocation());
		player->shotgun->SetRelativeRotation(FRotator(0, 90.f, 90.0f));
		shotgunobject->SetActorRelativeRotation(FRotator(-90.f, 0.f, 0.f));

		// ������ �Ǵ� �ִϸ��̼�
		player->handComp->targetGripValueRight = 0.0f;

		shotgunobject = nullptr;
	}
}

void UGrabActorComponent::Fire()
{
	if (pickObject)
	{
		PRINTLOG(TEXT("ddddddddddd"));
		
		pistol->Fire();

		// ����ȿ��
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(shotHaptic, EControllerHand::Right, 1.f, false);

		// ���⿡ ���� �߰�
		UGameplayStatics::PlaySound2D(GetWorld(), gunSound);
	}

	if (shotgunobject && shotgun)
	{
		PRINTLOG(TEXT("ddddddddddd"));

		shotgun->Fire();

		// ����ȿ��
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(shotHaptic, EControllerHand::Right, 10.f, false);
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(shotHaptic, EControllerHand::Left, 10.f, false);

		// ���⿡ ���� �߰�
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), gunSound, player->GetActorLocation(), FRotator::ZeroRotator, 1.f, 1.f, 0.0f, nullptr, nullptr);
	}
}

void UGrabActorComponent::Reload()
{
	pistol->Reload();
}

void UGrabActorComponent::ShotgunReload()
{
	shotgun->Reload();
}

void UGrabActorComponent::GrabShotgunObject()
{
	if (shotgunobject)
	{
		bIsShotgun = true;
		
		shotgun = Cast<AWeaponShotgun>(shotgunobject->shotgun->GetChildActor());

		if (shotgunobject)
		{
			player->rightHand->SetHiddenInGame(true);
			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			// �տ� ���̱�
			shotgunobject->boxComp->SetSimulatePhysics(false);
			shotgunobject->AttachToComponent(player->rightGunLoc, attachRules, TEXT("GrabPoint"));

			// ������Ʈ�� ������� ��ġ ���
			shotgunobject->boxComp->SetRelativeLocation((shotgunobject->grabOffset));

			shotgunobject->boxComp->SetEnableGravity(false);

			// ������ ��� �ִϸ��̼�
			player->handComp->targetGripValueRight = 0.9f;
		}
	}
}
void UGrabActorComponent::GrabPickObject()
{
	if (pickObject)
	{
		pistol = Cast<AWeaponPistol>(pickupActor->gun->GetChildActor());
		auto boxComp = Cast<UBoxComponent>(pickupActor->GetRootComponent());
		bIsPistol = true;

		pickObject->SetActorHiddenInGame(false);
		//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

		// �տ� ���̱�
		boxComp->SetSimulatePhysics(false);
		pickObject->AttachToComponent(player->rightHand, attachRules, TEXT("GrabPoint"));
		// ������Ʈ�� ������� ��ġ ���
		boxComp->SetRelativeLocation(pickupActor->grabOffset);

		boxComp->SetEnableGravity(false);

		// ������ ��� �ִϸ��̼�
		player->handComp->targetGripValueRight = 0.9f;
	}
}

void UGrabActorComponent::LeftDrawGrabLine()
{

	FHitResult hitInfo;
	FVector startPos = player->leftHand->GetComponentLocation();
	FVector endPos = startPos + player->leftHand->GetForwardVector() * grabDistance;

	FCollisionObjectQueryParams objParams;
	objParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	objParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(player);

	if (GetWorld()->SweepSingleByObjectType(hitInfo, startPos, startPos, FQuat::Identity, objParams, FCollisionShape::MakeSphere(grabRange), queryParams))
	{
		grabObject = hitInfo;

		// ������ ��� �ִϸ��̼�
		//player->handComp->targetGripValueRight = 1.0f;
	}
	else
	{
		grabObject = FHitResult();
	}
	//DrawDebugSphere(GetWorld(), startPos, 15.f, 30, FColor::Green, false, -1, 0, 1);
}



void UGrabActorComponent::LeftGrabAction()
{
	LeftDrawGrabLine();

	
	AActor* grabActor = grabObject.GetActor();

	if (grabActor == nullptr)
	{
		return;
	}
	GrabMagzine(grabActor);
	GrabLeftShotgunObject(grabActor);
	
	
}


void UGrabActorComponent::LeftReleaseAction()
{
	if (magzineActor)
	{
		if(shotgunobject)
		{
			shotgunobject->magComp->SetHiddenInGame(true);
			shotgunobject->gripComp->SetHiddenInGame(false);
		}
		magzineActor->SetActorHiddenInGame(true);
		magzineActor->boxComp->SetEnableGravity(false);
		// �� �ڸ����� ��������
		magzineActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

		magzineActor->AttachToComponent(player->magComp, attachRules);

		magzineActor->boxComp->SetSimulatePhysics(false);

		magzineActor->SetActorLocation(player->magComp->GetComponentLocation());
		player->mag->SetRelativeRotation(FRotator(0, 90.f, 0.0f));
		magzineActor->SetActorRelativeRotation(FRotator(0.f, -90.f, 90.f));
		// ������ �Ǵ� �ִϸ��̼�
		player->handComp->targetGripValueLeft = 0.0f;

		magzineActor = nullptr;
	}

	if (bIsShotgun == true)
	{
		// �� �ڸ����� ��������

		if (shotgunobject == nullptr)
		{
			return;
		}

		shotgunobject->gripComp->SetHiddenInGame(true);
		FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;
		shotgunobject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		shotgunobject->AttachToComponent(player->rightGunLoc, attachRules, TEXT("GrabPoint"));

		// ������ �Ǵ� �ִϸ��̼�
		player->handComp->targetGripValueLeft = 0.0f;
	}
	/*else if (bIsShotgun == false)
	{
		shotgunobject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	}*/
}

void UGrabActorComponent::GrabMagzine(AActor* grabActor)
{
	FString mag = grabActor->GetName();
	if (magzineActor == nullptr)
	{
		if (mag.Contains("MagazineActor"))
		{
			magzineActor = Cast<AMagazineActor>(grabActor);

			/*if (pistol)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, pistol->GetName());
			}*/

			if (magzineActor)
			{
				if(shotgunobject)
				{
					shotgunobject->magComp->SetHiddenInGame(false);
					shotgunobject->gripComp->SetHiddenInGame(true);
				}
				magzineActor->SetActorHiddenInGame(false);
				//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
				FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

				// �տ� ���̱�
				magzineActor->boxComp->SetSimulatePhysics(false);
				magzineActor->AttachToComponent(player->leftHand, attachRules, TEXT("GrabPoint"));
				// ������Ʈ�� ������� ��ġ ���
				magzineActor->boxComp->SetRelativeLocation((magzineActor->grabOffset));

				magzineActor->boxComp->SetEnableGravity(false);

				// �޼� ��� �ִϸ��̼�
				player->handComp->targetGripValueLeft = 0.7f;
			}
		}
	}
}

void UGrabActorComponent::GrabLeftShotgunObject(AActor* grabActor)
{
	if (bIsShotgun == true)
	{
		PRINTLOG(TEXT("ssssssss"));
		
		shotgunobject = Cast<AShotGunActor>(grabActor);
		if (shotgunobject)
		{
			shotgunobject->gripComp->SetHiddenInGame(true);
			player->rightHand->SetHiddenInGame(true);
			//shotgun = Cast<AWeaponShotgun>(shotgunobject->shotgun->GetChildActor());

			//FAttachmentTransformRules attachRules = FAttachmentTransformRules::KeepWorldTransform;
			FAttachmentTransformRules attachRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;

			// �տ� ���̱�
			//shotgunobject->boxComp->SetSimulatePhysics(false);

			// �����տ��� ������.
			shotgunobject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			// �޼տ� ���δ�.
			shotgunobject->AttachToComponent(player->leftGunLoc, attachRules, TEXT("LeftGrabPoint"));

			// ������Ʈ�� ������� ��ġ ���
			shotgunobject->boxComp->SetRelativeLocation(shotgunobject->leftgrabOffset);

			// �޼� ��� �ִϸ��̼�
			player->handComp->targetGripValueLeft = 0.7f;
		}
		else
		{
			auto gun = Cast<AWeaponShotgun>(grabActor);
			if (gun)
			{

			}

		}
	}
}

