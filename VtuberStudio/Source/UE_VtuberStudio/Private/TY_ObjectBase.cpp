// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_ObjectBase.h"
#include "TY_PC_PlayerPawn.h" // �׽�Ʈ �÷��̾� ����
#include "TY_Streamer_Character.h" // ��Ʈ���� �÷��̾� ����
#include "TY_Client_Character.h" // Ŭ���̾�Ʈ �÷��̾� ����
#include "TY_CameraMan_Pawn.h" // ī�޶�� �� ����
#include "UE_VtuberStudioCharacter.h"

// Sets default values
ATY_ObjectBase::ATY_ObjectBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//  �����ڿ��� �޽� �� �⺻�� ����
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticMesh")); // ����Ƽ�޽� ����
	staticMesh->SetupAttachment(RootComponent); // ��Ʈ�� �ٿ��ش�
	index = 0; // �ε����� �ʱ�ȭ

}

// Called when the game starts or when spawned
void ATY_ObjectBase::BeginPlay()
{
	Super::BeginPlay();
	
	staticMesh->bRenderCustomDepth = true; // �����ڿ��� ����Ʈ���μ��� �ܰ��� ����ϱ� true�� �����������. ������ BeginPlay ���� ��������. �� ���ư���. �̹��� ���?!
	staticMesh->SetRenderCustomDepth(false);
	// �÷��̾� ĳ��Ʈ(�� Ŭ������ �÷��̾��� �տ� Spawn�� ���̹Ƿ�)

	streamerCharacter = Cast<ATY_Streamer_Character>(GetOwner());
	clientCharacter = Cast<ATY_Client_Character>(GetOwner());
	cameraManPawn = Cast<ATY_CameraMan_Pawn>(GetOwner());
	pcPlayerPawn = Cast<ATY_PC_PlayerPawn>(GetOwner());

	if (streamerCharacter) {
		player = Cast<ATY_Streamer_Character>(GetOwner());
	}
	else if (clientCharacter) {
		player = Cast<ATY_Client_Character>(GetOwner());
	}
	else if (cameraManPawn) {
		player = Cast<ATY_CameraMan_Pawn>(GetOwner());
	}
	else if (vtsCharacter) {
		player = Cast<AUE_VtuberStudioCharacter>(GetOwner());
	}
	else {
		player = Cast<ATY_PC_PlayerPawn>(GetOwner());
	}
}

// Called every frame
void ATY_ObjectBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATY_ObjectBase::OnClicked()
{
	GetClass();// ��� ���� ã�ƿ´�. WidgetClass �� Invectory
	// �迭 �纻 �����
	// Invectory�� Cast�Ѵ�. 
	// copyWidgetArray = Cast<UInvectory>(GetOwner());
	// AddItem(copyWidgetArray, index)
	this->Destroy();

	//TArray<int32>FoundWidget = GetAllChildActors
}

void ATY_ObjectBase::OnBeginCursorOver()
{
	staticMesh->SetRenderCustomDepth(true); // �ܰ��� �ѱ�
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Render Mode!")));

}

void ATY_ObjectBase::OnEndCursorOver()
{
	staticMesh->SetRenderCustomDepth(false); // �ܰ��� ����
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Non Render Mode!")));

}
