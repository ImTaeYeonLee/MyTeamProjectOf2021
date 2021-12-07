// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VrmMetaObject.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMSpringMeta{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float stiffness = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float gravityPower = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVector gravityDir = { 0,-1,0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float dragForce = 0.4f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float hitRadius = 0.f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	//int boneNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> bones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FString> boneNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<int> ColliderIndexArray;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMSpringColliderData {
	GENERATED_BODY()
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FVector offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	float radius = 0.f;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVRMColliderMeta {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int bone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString boneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMSpringColliderData> collider;
};


// BlendShape
USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShape{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString morphTargetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString nodeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString meshName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int meshID=0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int shapeIndex=0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	int weight=100;
};

// BlendShape
USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShapeMaterialList {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FString materialName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FString propertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
		FLinearColor color;
};

USTRUCT(Blueprintable, BlueprintType)
struct VRM4U_API FVrmBlendShapeGroup {
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShape> BlendShape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShapeMaterialList> MaterialList;
};

//struct VRM4U_API FBVrmlendShapeGroup {
//	TArray<FVrmBlendShape> 
//};

UCLASS(Blueprintable, BlueprintType)
class VRM4U_API UVrmMetaObject : public UObject
{
	GENERATED_BODY()
	
public:
	// humanoid name -> model name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TMap<FString, FString> humanoidBoneTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVrmBlendShapeGroup> BlendShapeGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMSpringMeta> VRMSpringMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	TArray<FVRMColliderMeta> VRMColliderMeta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	class USkeletalMesh *SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)
	class UVrmAssetListObject *VrmAssetListObject;
};
