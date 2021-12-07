// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TY_ObjectBase.generated.h"

UCLASS()
class UE_VTUBERSTUDIO_API ATY_ObjectBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATY_ObjectBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
		UStaticMeshComponent* staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
		int index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
		TArray<int32> mesh;

	UPROPERTY()
		class ATY_Streamer_Character* streamerCharacter;
	UPROPERTY()
		class ATY_Client_Character* clientCharacter;
	UPROPERTY()
		class ATY_CameraMan_Pawn* cameraManPawn;
	UPROPERTY()
		class ATY_PC_PlayerPawn* pcPlayerPawn;
		UPROPERTY()
		class AUE_VtuberStudioCharacter* vtsCharacter;
	UPROPERTY()
		class AActor* player;

	UPROPERTY()
		bool holdLoc;

	UPROPERTY()
		float ScaleMuituply;

	// 인덱스에 따라서 오브젝트 이름 정의
	FString ObjectName(int8 objectIndex);

	UPROPERTY()
		bool isDrawOutline;

	UFUNCTION()
		virtual void OnClicked();

	UFUNCTION()
		virtual void OnBeginCursorOver();	

	UFUNCTION()
		virtual void OnEndCursorOver();

};
