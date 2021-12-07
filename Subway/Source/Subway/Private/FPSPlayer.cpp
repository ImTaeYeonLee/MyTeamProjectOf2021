// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSPlayer.h"
#include <Camera/CameraComponent.h>
#include <Components/CapsuleComponent.h>
#include <Components/SkeletalMeshComponent.h>
#include "WeaponBase.h"
#include "PlayerMove.h"

// Sets default values
AFPSPlayer::AFPSPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	// ī�޶�������Ʈ �߰�
	fpsCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
	fpsCamera->SetupAttachment(GetCapsuleComponent());
	fpsCamera->SetRelativeLocation(FVector(-30, 0, 60));

	bodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(fpsCamera);

	// playerMove
	playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("PlayerMove"));

	// bodyMesh �� SkeletalMesh ������ �Ҵ��ϱ�
	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("SkeletalMesh'/Game/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms'"));

	// �ε尡 �����ϸ�
	if (tempMesh.Succeeded())
	{
		// ������ �Ҵ�
		bodyMesh->SetSkeletalMesh(tempMesh.Object);
	}

	//AutoPossessPlayer = EAutoReceiveInput::Player0;

	//WeaponIndex = 0;
}

// Called when the game starts or when spawned
void AFPSPlayer::BeginPlay()
{
	Super::BeginPlay();
	// ���� �� ���Ͽ� ���� ����
	// Ŀ��Ʈ���� ���� ������ ������ �������̽�Ÿ���� ��Ÿ�ÿ���Ŭ������ ��������
	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(StartingWeaponClass);
	if (CurrentWeapon)
	{
		UE_LOG(LogTemp, Warning, TEXT("SPAWNED AND ATTEMPTED TO ATTACH WEAPON TO HAND"));
		CurrentWeapon->AttachToComponent(bodyMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("RightGripPoint"));
		//WeaponArray.Add(CurrentWeapon);
	}
}

// Called every frame
void AFPSPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// �� �߻�
	OnInputDelegate.Broadcast(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AFPSPlayer::OnFire);
	// ������
	PlayerInputComponent->BindAction(TEXT("Reload"), IE_Pressed, this, &AFPSPlayer::Reload);
}

void AFPSPlayer::OnFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->Fire();
		//TArray<int32> CurrentAmmo = CurrentWeapon->GetCurrentAmmo();
		//OnAmmoChanged.Broadcast(CurrentAmmo[0], CurrentAmmo[1]);
	}
}

void AFPSPlayer::Reload()
{
	// ����ϴ� ������ źâ�� ���� �� ���¶��
	if (CurrentWeapon->CurrentMagazineAmmo == CurrentWeapon->MagazineMaxAmmo)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString(TEXT("No reload required!!!")));
	}
	else
	{
		CurrentWeapon->Reload();
	}
}

void AFPSPlayer::OnDamageProcess()
{
	if (PlayerHP > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("TEST HIT!!")));
		/*PlayerHP--;
		if (PlayerHP <=0)
		{
			this->Destroy();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("DEADDD!!")));
		}*/
	}
}