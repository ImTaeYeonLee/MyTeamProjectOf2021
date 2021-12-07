// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.


/*

// VRMSpringBone.cs
MIT License

Copyright (c) 2018 DWANGO Co., Ltd. for UniVRM
Copyright (c) 2018 ousttrue for UniGLTF, UniHumanoid
Copyright (c) 2018 Masataka SUMI for MToon

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "AnimNode_VrmSpringBone.h"
#include "AnimationRuntime.h"
#include "Animation/AnimInstanceProxy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"

#include "VrmMetaObject.h"
#include "VrmUtil.h"

#include <algorithm>
/////////////////////////////////////////////////////
// FAnimNode_ModifyBone

namespace {
	int32 GetDirectChildBonesLocal(FReferenceSkeleton &refs, int32 ParentBoneIndex, TArray<int32> & Children)
	{
		Children.Reset();

		const int32 NumBones = refs.GetNum();
		for (int32 ChildIndex = ParentBoneIndex + 1; ChildIndex < NumBones; ChildIndex++)
		{
			if (ParentBoneIndex == refs.GetParentIndex(ChildIndex))
			{
				Children.Add(ChildIndex);
			}
		}

		return Children.Num();
	}

}


namespace VRMSpring {

	class VRMSpring;
	class VRMSpringColliderGroup;

	class VRMSpringManager {
	public:

		bool bInit = false;
		USkeletalMesh *skeletalMesh = nullptr;

		void init(const UVrmMetaObject *meta, FComponentSpacePoseContext& Output);
		void update(const FAnimNode_VrmSpringBone *animNode, float DeltaTime, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);
		void reset();

		TArray<VRMSpring> spring;
		TArray<VRMSpringColliderGroup> colliderGroup;
	};

	class VRMSpringCollider {
	public:
		FVector offset = FVector::ZeroVector;
		float radius = 0.f;
	};
	class VRMSpringColliderGroup {
	public:
		int node = 0;
		FName node_name;

		TArray<VRMSpringCollider> colliders;
	};

	class VRMSprintData {
	public:
		int boneIndex = -1;
		FName boneName;
		FVector m_currentTail = FVector::ZeroVector;
		FVector m_prevTail = FVector::ZeroVector;
		FTransform m_transform = FTransform::Identity;
		FVector m_boneAxis = FVector::ForwardVector;
		float m_length = 1.f;

		FQuat m_resultQuat = FQuat::Identity;
	};

	class VRMSpring {
	public:
		float stiffness = 0.f;
		float gravityPower = 0.f;
		FVector gravityDir = { 0,0,0 };
		float dragForce = 0.f;
		float hitRadius = 0.f;

		//int boneNum = 0;
		//int *bones;
		//FString bones_name;

		//int colliderGourpNum = 0;
		//int* colliderGroups = nullptr;
		TArray<int> ColliderGroupIndexArray;


		TArray< TArray<VRMSprintData> > SpringDataChain;
		TArray<VRMSprintData> RootSpringData;

		USkeletalMesh *skeletalMesh = nullptr;
		~VRMSpring() {
			skeletalMesh = nullptr;
		}

		void Update(const FAnimNode_VrmSpringBone *animNode, float DeltaTime, FTransform center,
			//float stiffnessForce, float dragForce, FVector external,
			//int colliders,
			const TArray<VRMSpringColliderGroup> &colliderGroup,
			FComponentSpacePoseContext& Output);
	};

	void VRMSpring::Update(const FAnimNode_VrmSpringBone *animNode, float DeltaTime, FTransform center,
		const TArray<VRMSpringColliderGroup> &colliderGroup,
		FComponentSpacePoseContext& Output) {

		if (skeletalMesh == nullptr) {
			return;
		}

		const auto RefSkeleton = Output.AnimInstanceProxy->GetSkeleton()->GetReferenceSkeleton();
		const auto &RefSkeletonTransform = Output.Pose.GetPose().GetBoneContainer().GetRefPoseArray();

		const FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
		center = ComponentTransform.Inverse();

		//
		// x10 adjust?
		FVector ue4grav(-gravityDir.X, gravityDir.Z, gravityDir.Y);

		const int MAX_LOOP = FMath::Max(1, animNode->loopc);
		for (int i = 0; i < MAX_LOOP; ++i) {
			//const float stiffnessForce = stiffness * DeltaTime * 10.f * animNode->stiffnessScale + animNode->stiffinessAdd;
			//FVector external = center.TransformVector(ue4grav) * (gravityPower * DeltaTime) * animNode->gravityScale + center.TransformVector(animNode->gravityAdd) * DeltaTime;
			//external *= 100.f; // to unreal scale

			float CurrentDeltaTime = DeltaTime / (float)MAX_LOOP;

			const float stiffnessForce = stiffness * CurrentDeltaTime * 10.f * animNode->stiffnessScale + animNode->stiffnessAdd;
			FVector external = center.TransformVector(ue4grav) * (gravityPower * CurrentDeltaTime) * animNode->gravityScale + center.TransformVector(animNode->gravityAdd) * CurrentDeltaTime;
			external *= 100.f; // to unreal scale

			FVector external_noAdd = center.TransformVector(ue4grav) * (gravityPower * CurrentDeltaTime) * animNode->gravityScale;
			external_noAdd *= 100.f; // to unreal scale


			const auto WorldContext = Output.AnimInstanceProxy->GetSkelMeshComponent();

			for (int springCount = 0; springCount < SpringDataChain.Num(); ++springCount) {

				auto &ChainRoot = SpringDataChain[springCount];
				FTransform currentTransform = FTransform::Identity;

				bool bSkipGravAdd = false;

				for (int chainCount = 0; chainCount < ChainRoot.Num(); ++chainCount) {

					auto &sData = ChainRoot[chainCount];

					FVector currentTail = center.TransformPosition(sData.m_currentTail);
					FVector prevTail = center.TransformPosition(sData.m_prevTail);

					int myBoneIndex = RefSkeleton.FindBoneIndex(sData.boneName);
					if (myBoneIndex < 0) {
						continue;
					}

					if (animNode->NoWindBoneNameList.Contains(sData.boneName)) {
						bSkipGravAdd = true;
					}


					int myParentBoneIndex = RefSkeleton.GetParentIndex(myBoneIndex);

					//currentTransform = FTransform::Identity;
					FQuat ParentRotation = FQuat::Identity;
					if (chainCount == 0) {
						FCompactPoseBoneIndex uu = Output.Pose.GetPose().GetBoneContainer().GetCompactPoseIndexFromSkeletonIndex(myBoneIndex);
						//FCompactPoseBoneIndex uu(myBoneIndex);

						if (Output.Pose.GetPose().IsValidIndex(uu) == false) {
							continue;
						}

						FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(uu);
						ParentRotation = NewBoneTM.GetRotation();

						currentTransform = NewBoneTM;
					} else {
						auto c = RefSkeletonTransform[sData.boneIndex];
						auto t = c * currentTransform;

						ParentRotation = t.GetRotation();
						currentTransform = t;
					}
					FQuat m_localRotation = FQuat::Identity;


					// verlet積分で次の位置を計算
					FVector nextTail = currentTail
						+ (currentTail - prevTail) * (1.0f - dragForce) // 前フレームの移動を継続する(減衰もあるよ)
						+ ParentRotation * m_localRotation * sData.m_boneAxis * stiffnessForce // 親の回転による子ボーンの移動目標
						;
					if (bSkipGravAdd) {
						nextTail += external_noAdd; // 外力による移動量
					} else {
						nextTail += external; // 外力による移動量
					}
						

					// 長さをboneLengthに強制
					//nextTail = sData.m_transform.GetLocation() + (nextTail - sData.m_transform.GetLocation()).GetSafeNormal() * sData.m_length;
					nextTail = currentTransform.GetLocation() + (nextTail - currentTransform.GetLocation()).GetSafeNormal() * sData.m_length;

					// Collisionで移動

					// vrm <-> physics collision
					if (animNode->bIgnorePhysicsCollision == false) {
						FVector Start = center.InverseTransformPosition(nextTail);
						FVector End = Start + FVector(0.001f);
						//* WorldContextObject
						float Radius = hitRadius * 100.f;
						ETraceTypeQuery TraceChannel = ETraceTypeQuery::TraceTypeQuery1;
						bool bTraceComplex = false;

						TArray<AActor*> ActorsToIgnore;
						EDrawDebugTrace::Type DrawDebugType = EDrawDebugTrace::None;
						TArray<FHitResult> OutHits;
						bool bIgnoreSelf = true;
						FLinearColor TraceColor;
						FLinearColor TraceHitColor;
						float DrawTime = 0.f;

						bool b = UKismetSystemLibrary::SphereTraceMulti(WorldContext, Start, End, hitRadius * 100.f,
							TraceChannel, false, ActorsToIgnore,
							DrawDebugType,
							OutHits, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime);
						if (b) {
							for (auto hit : OutHits) {
								{
									//WorldContext->GetOwner
									//hit.BoneName

								}
								float r = hitRadius * 100.f + hit.Distance;
								auto normal = hit.Normal;
								auto posFromCollider = nextTail + normal * (r);
								// 長さをboneLengthに強制
								nextTail = currentTransform.GetLocation() + (posFromCollider - currentTransform.GetLocation()).GetSafeNormal() * sData.m_length;
							}
						}
					}

					// vrm <-> vrm collision
					if (animNode->bIgnoreVRMCollision == false) {
						for (auto ind : ColliderGroupIndexArray) {
							if (ind >= colliderGroup.Num()) {
								continue;
							}
							const auto &cg = colliderGroup[ind];

							int ii = RefSkeleton.FindBoneIndex(cg.node_name);
							if (ii < 0) {
								continue;
							}

							FCompactPoseBoneIndex uu = Output.Pose.GetPose().GetBoneContainer().GetCompactPoseIndexFromSkeletonIndex(ii);
							//FCompactPoseBoneIndex uu(ii);
							if (uu == INDEX_NONE) {
								continue;
							}
							FTransform collisionBoneTrans = Output.Pose.GetComponentSpaceTransform(uu);

							for (auto c : cg.colliders) {


								float r = (hitRadius + c.radius) * 100.f;
								//FVector v = collisionBoneTrans.TransformPosition(c.offset*100);
								auto offs = c.offset;
								offs.Set(-offs.X, offs.Z, offs.Y);
								offs *= 100;
								FVector v = collisionBoneTrans.TransformPosition(offs);

								if ((v - nextTail).SizeSquared() > r * r) {
									continue;
								}

								// ヒット。Colliderの半径方向に押し出す
								auto normal = (nextTail - v).GetSafeNormal();
								auto posFromCollider = v + normal * (r);
								// 長さをboneLengthに強制
								nextTail = currentTransform.GetLocation() + (posFromCollider - currentTransform.GetLocation()).GetSafeNormal() * sData.m_length;
							}
						}
					}

					sData.m_prevTail = center.InverseTransformPosition(currentTail);
					sData.m_currentTail = center.InverseTransformPosition(nextTail);

					FQuat rotation = ParentRotation * m_localRotation;

					sData.m_resultQuat = FQuat::FindBetween((rotation * sData.m_boneAxis).GetSafeNormal(),
						(nextTail - currentTransform.GetLocation()).GetSafeNormal()) * rotation;

					currentTransform.SetRotation(sData.m_resultQuat);
				}
			}// chain loop
		}// delta time loop
	}

	void VRMSpringManager::reset() {
		spring.Empty();
		bInit = false;
	}
	void VRMSpringManager::init(const UVrmMetaObject *meta, FComponentSpacePoseContext& Output) {
		if (meta == nullptr) return;
		if (bInit) return;

		skeletalMesh = Output.AnimInstanceProxy->GetSkelMeshComponent()->SkeletalMesh;
		//skeletalMesh = meta->SkeletalMesh;
		const FReferenceSkeleton &RefSkeleton = VRMGetRefSkeleton(skeletalMesh);
		const auto &RefSkeletonTransform = Output.Pose.GetPose().GetBoneContainer().GetRefPoseArray();

		spring.SetNum(meta->VRMSpringMeta.Num());

		for (int i = 0; i < spring.Num(); ++i) {
			auto &s = spring[i];
			const auto &metaS = meta->VRMSpringMeta[i];

			s.skeletalMesh = skeletalMesh;// meta->SkeletalMesh;

			s.stiffness = metaS.stiffness;
			s.gravityPower = metaS.gravityPower;
			s.gravityDir = metaS.gravityDir;
			s.dragForce = metaS.dragForce;
			s.hitRadius = metaS.hitRadius;

			s.RootSpringData.SetNum(metaS.bones.Num());
			for (int scount = 0; scount < s.RootSpringData.Num(); ++scount) {
				s.RootSpringData[scount].boneName = *metaS.boneNames[scount];
				s.RootSpringData[scount].boneIndex = RefSkeleton.FindBoneIndex(*metaS.boneNames[scount]);
			}
			// TODO add child

			s.SpringDataChain.SetNum(metaS.bones.Num());
			for (int scount = 0; scount < s.RootSpringData.Num(); ++scount) {
				auto &chain = s.SpringDataChain[scount];

				//root
				{
					auto index = VRMGetRefSkeleton(skeletalMesh).FindBoneIndex(*metaS.boneNames[scount]);
					if (index == INDEX_NONE) {
						continue;
					}

					auto &sData = chain.AddDefaulted_GetRef();
					sData.boneName = *metaS.boneNames[scount];
					sData.boneIndex = index;

					TArray<int32> Children;
					GetDirectChildBonesLocal(VRMGetRefSkeleton(skeletalMesh), sData.boneIndex, Children);
					if (Children.Num() > 0) {
						sData.m_boneAxis = RefSkeletonTransform[Children[0]].GetLocation();
					} else {
						sData.m_boneAxis = RefSkeletonTransform[sData.boneIndex].GetLocation() * 0.7f;
					}
				}

				// child
				if (1) {
					for (int chainCount = 0; chainCount < 100; ++chainCount) {
						bool bLast = false;
						TArray<int32> Children;

						GetDirectChildBonesLocal(VRMGetRefSkeleton(skeletalMesh), chain[chainCount].boneIndex, Children);
						if (Children.Num() <= 0) {
							break;
						}

						auto &sData = chain.AddDefaulted_GetRef();

						sData.boneIndex = Children[0];
						sData.boneName = *RefSkeleton.GetBoneName(sData.boneIndex).ToString();

						GetDirectChildBonesLocal(VRMGetRefSkeleton(skeletalMesh), sData.boneIndex, Children);
						if (Children.Num() > 0) {
							sData.m_boneAxis = RefSkeletonTransform[Children[0]].GetLocation();
						}
						else {
							sData.m_boneAxis = RefSkeletonTransform[sData.boneIndex].GetLocation() * 0.7f;
						}
					}
				}
			}
	
			
			s.ColliderGroupIndexArray.SetNum(metaS.ColliderIndexArray.Num());
			for (int c = 0; c < s.ColliderGroupIndexArray.Num(); ++c) {
				s.ColliderGroupIndexArray[c] = metaS.ColliderIndexArray[c];
			}

		}

		// init default transform
		const FTransform center = Output.AnimInstanceProxy->GetComponentTransform();
		for (auto &s : spring) {
			for (auto &root : s.SpringDataChain) {
				for (auto &sData : root) {
					sData.m_length = sData.m_boneAxis.Size();

					
					//FCompactPoseBoneIndex uu(RefSkeleton.GetParentIndex(sData.boneIndex));
					//FTransform t = Output.Pose.GetComponentSpaceTransform(uu);
					//sData.m_transform = RefSkeletonTransform[(sData.boneIndex)] * t * center;
					//t = RefSkeletonTransform[(sData.boneIndex)] * t;

					//auto t = Output.Pose.GetPose().GetBones();
					//auto t2 = Output.Pose.GetPose().GetBoneContainer().GetRefPoseArray//GetRefPoseCompactArray

					if (sData.boneIndex >= Output.Pose.GetPose().GetBoneContainer().GetSkeletonToPoseBoneIndexArray().Num()) {
						continue;
					}

					FCompactPoseBoneIndex uu = Output.Pose.GetPose().GetBoneContainer().GetCompactPoseIndexFromSkeletonIndex(sData.boneIndex);
					//FCompactPoseBoneIndex uu(sData.boneIndex);

					if (Output.Pose.GetPose().IsValidIndex(uu) == false) {
						continue;
					}
					sData.m_transform = Output.Pose.GetComponentSpaceTransform(uu) * center;
					FTransform t = Output.Pose.GetComponentSpaceTransform(uu);

					sData.m_currentTail = sData.m_prevTail = t.TransformPosition(sData.m_boneAxis);
				}
			}
		}

		// collider
		colliderGroup.SetNum(meta->VRMColliderMeta.Num());
		for (int i=0; i<colliderGroup.Num(); ++i){
			auto &cg = colliderGroup[i];
			const auto &cmeta = meta->VRMColliderMeta[i];

			cg.node = cmeta.bone;
			cg.node_name = *cmeta.boneName;

			cg.colliders.SetNum(cmeta.collider.Num());
			for (int c = 0; c < cg.colliders.Num(); ++c) {
				cg.colliders[c].offset = cmeta.collider[c].offset;
				cg.colliders[c].radius = cmeta.collider[c].radius;
			}

			TArray<VRMSpringCollider> colliders;
		}


		bInit = true;
	}
	void VRMSpringManager::update(const FAnimNode_VrmSpringBone *animNode, float DeltaTime, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) {
		for (int i = 0; i < spring.Num(); ++i) {
			FTransform c;
			//c = Output.AnimInstanceProxy->GetComponentTransform();
			c = Output.AnimInstanceProxy->GetActorTransform();
			
			spring[i].Update(animNode, DeltaTime, c, colliderGroup, Output);
		}
	}
}

FAnimNode_VrmSpringBone::FAnimNode_VrmSpringBone()
{
}

//void FAnimNode_VrmSpringBone::Update_AnyThread(const FAnimationUpdateContext& Context) {
//	Super::Update_AnyThread(Context);
//	//Context.GetDeltaTime();
//}

bool FAnimNode_VrmSpringBone::IsSprintInit() const {
	if (SpringManager.Get()) {
		return SpringManager->bInit;
	}
	return false;
}
void FAnimNode_VrmSpringBone::Initialize_AnyThread(const FAnimationInitializeContext& Context) {
	Super::Initialize_AnyThread(Context);
	if (SpringManager.Get()) {
		SpringManager.Get()->reset();
	} else {
		SpringManager = MakeShareable(new VRMSpring::VRMSpringManager());
	}
	if (VrmMetaObject) {
	}
}
void FAnimNode_VrmSpringBone::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) {
	Super::CacheBones_AnyThread(Context);
}

#if	UE_VERSION_OLDER_THAN(4,20,0)
#else
void FAnimNode_VrmSpringBone::ResetDynamics(ETeleportType InTeleportType) {
	Super::ResetDynamics(InTeleportType);
	if (SpringManager.Get()){
		bool bReset = true;
		if (InTeleportType == ETeleportType::TeleportPhysics) {
			if (bIgnorePhysicsResetOnTeleport) {
				bReset = false;
			}
		}
		if (bReset) {
			SpringManager.Get()->reset();
		}
	}
}
#endif

void FAnimNode_VrmSpringBone::UpdateInternal(const FAnimationUpdateContext& Context){
	Super::UpdateInternal(Context);

	CurrentDeltaTime = Context.GetDeltaTime();
}


void FAnimNode_VrmSpringBone::GatherDebugData(FNodeDebugData& DebugData)
{
	FString DebugLine = DebugData.GetNodeName(this);

	DebugLine += "(";
	AddDebugNodeData(DebugLine);
	//DebugLine += FString::Printf(TEXT(" Target: %s)"), *BoneToModify.BoneName.ToString());
	//DebugLine += FString::Printf(TEXT(" Target: %s)"), *BoneNameToModify.ToString());
	DebugData.AddDebugItem(DebugLine);

	ComponentPose.GatherDebugData(DebugData);
}

void FAnimNode_VrmSpringBone::EvaluateComponentPose_AnyThread(FComponentSpacePoseContext& Output) {
	if (bCallByAnimInstance) {
		ActualAlpha = 1.f;
	/*
		EvaluateComponentSpaceInternal(Output);

		BoneTransformsSpring.Reset(BoneTransformsSpring.Num());
		EvaluateSkeletalControl_AnyThread(Output, BoneTransformsSpring);

		if (BoneTransformsSpring.Num() > 0)
		{
			ActualAlpha = 1.f;
			const float BlendWeight = FMath::Clamp<float>(ActualAlpha, 0.f, 1.f);
			Output.Pose.LocalBlendCSBoneTransforms(BoneTransformsSpring, BlendWeight);
		}
	*/
	}
	else {
		Super::EvaluateComponentPose_AnyThread(Output);
	}
}

void FAnimNode_VrmSpringBone::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	check(OutBoneTransforms.Num() == 0);

	const auto RefSkeleton = Output.AnimInstanceProxy->GetSkeleton()->GetReferenceSkeleton();
	const FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();

	//dstRefSkeleton.GetParentIndex

	//auto BoneSpace = EBoneControlSpace::BCS_ParentBoneSpace;
	auto BoneSpace = EBoneControlSpace::BCS_WorldSpace;
	{

		if (VrmMetaObject == nullptr) {
			return;
		}
		if (VRMGetSkeleton(VrmMetaObject->SkeletalMesh) != Output.AnimInstanceProxy->GetSkeleton()) {
			//skip for renamed bone
			//return;
		}
		if (Output.Pose.GetPose().GetNumBones() <= 0) {
			return;
		}

		const auto &RefSkeletonTransform = Output.Pose.GetPose().GetBoneContainer().GetRefPoseArray();

		{
			if (SpringManager.Get() == nullptr) {
				return;
			}
			if (SpringManager->bInit == false) {
				SpringManager->init(VrmMetaObject, Output);
				return;
			}

			SpringManager->update(this, CurrentDeltaTime, Output, OutBoneTransforms);

			for (auto &springRoot : SpringManager->spring) {
				for (auto &sChain : springRoot.SpringDataChain) {
					int BoneChain = 0;

					FTransform CurrentTransForm = FTransform::Identity;
					for (auto &sData : sChain) {


						//FCompactPoseBoneIndex uu = Output.Pose.GetPose().GetBoneContainer().GetCompactPoseIndexFromSkeletonIndex(sData.boneIndex);
						FCompactPoseBoneIndex uu(sData.boneIndex);

						if (Output.Pose.GetPose().IsValidIndex(uu) == false) {
							continue;
						}

						FTransform NewBoneTM;

						if (BoneChain == 0) {
							NewBoneTM = Output.Pose.GetComponentSpaceTransform(uu);
							NewBoneTM.SetRotation(sData.m_resultQuat);

							CurrentTransForm = NewBoneTM;
						}else{

							NewBoneTM = CurrentTransForm;
							
							auto c = RefSkeletonTransform[sData.boneIndex];
							NewBoneTM = c * NewBoneTM;
							NewBoneTM.SetRotation(sData.m_resultQuat);


							//const FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
							//NewBoneTM.SetLocation(ComponentTransform.TransformPosition(sData.m_currentTail));

							CurrentTransForm = NewBoneTM;
						}

						FBoneTransform a(uu, NewBoneTM);

						bool bFirst = true;
						for (auto &t : OutBoneTransforms) {
							if (t.BoneIndex == a.BoneIndex) {
								bFirst = false;
								break;
							}
						}

						if (bFirst) {
							OutBoneTransforms.Add(a);
						}
						BoneChain++;
					}
				}

			}
			OutBoneTransforms.Sort(FCompareBoneTransformIndex());

		}
		/*
		{
			static VRMSpring spring[2];

			spring[0].boneName = "J_Bip_L_Thumb1";
			spring[1].boneName = "J_Bip_L_Thumb2";
			//spring[2].boneName = "J_Bip_L_Thumb3";

			for (auto &s : spring) {
				s.skeletalMesh = Output.AnimInstanceProxy->GetSkelMeshComponent()->SkeletalMesh;
			}

			for (auto &s : spring) {
				FTransform center = ComponentTransform;
				float stiffnessForce = 0.5;
				float dragForce = 0;
				FVector external(0, 0, -1);
				int colliders = 0;
				FQuat q;

				const auto dstIndex = RefSkeleton.FindBoneIndex(*s.boneName);
				if (dstIndex < 0) {
					continue;
				}

				
				s.Update(center, stiffnessForce, dragForce, external,
					colliders, Output, q);

				FCompactPoseBoneIndex CompactPoseBoneToModify(dstIndex);

				FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(CompactPoseBoneToModify);

				NewBoneTM.SetRotation(q);

				FBoneTransform a(CompactPoseBoneToModify, NewBoneTM);
				OutBoneTransforms.Add(a);
				//break;
			}
		}
		*/


		//const auto& dstRefTrans = dstRefSkeletonTransform[dstIndex];

		//FCompactPoseBoneIndex CompactPoseBoneToModify(dstIndex);

		//auto a = srcCurrentTrans;
		//FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(CompactPoseBoneToModify);
		//FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, Output.Pose, NewBoneTM, CompactPoseBoneToModify, BoneSpace);


		//VRMSpring 
	}
	{
	}
}

bool FAnimNode_VrmSpringBone::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) 
{
	// if both bones are valid
	//return (BoneToModify.IsValidToEvaluate(RequiredBones));
	return true;
}

void FAnimNode_VrmSpringBone::InitializeBoneReferences(const FBoneContainer& RequiredBones) 
{
	//BoneToModify.Initialize(RequiredBones);
}

void FAnimNode_VrmSpringBone::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{
#if WITH_EDITOR

	if (VrmMetaObject == nullptr || PreviewSkelMeshComp == nullptr || !bEnableDebugDraw) {
		return;
	}
	if (PreviewSkelMeshComp->GetWorld() == nullptr) {
		return;
	}

	for (const auto &colMeta : VrmMetaObject->VRMColliderMeta) {
		FTransform t = PreviewSkelMeshComp->GetSocketTransform(*colMeta.boneName);

		for (const auto &col : colMeta.collider) {
			float r = (col.radius) * 100.f;
			//FVector v = collisionBoneTrans.TransformPosition(c.offset*100);
			auto offs = col.offset;
			offs.Set(-offs.X, offs.Z, offs.Y);
			offs *= 100;
			FVector v = t.TransformPosition(offs);
			DrawDebugSphere(PreviewSkelMeshComp->GetWorld(), v, r, 8, FColor::Green, true, 0.1f);
		}
	}

	{
		struct SData{
			int32 bone = 0;
			float radius = 0.f;

			bool operator==(const SData& a) const {
				return (bone == a.bone && radius == a.radius);
			}
		};

		TArray<SData> dataList;
		TArray<int32> boneList;

		for (const auto spr : VrmMetaObject->VRMSpringMeta) {
			for (const auto boneName : spr.boneNames) {
				int32_t boneIndex = PreviewSkelMeshComp->GetBoneIndex(*boneName);
				boneList.AddUnique(boneIndex);

				{
					SData s;
					s.bone = boneIndex;
					s.radius = spr.hitRadius;

					dataList.AddUnique(s);
				}

				for (int i = 0; i < boneList.Num(); ++i) {
					TArray<int32> c;
					GetDirectChildBonesLocal(VRMGetRefSkeleton(PreviewSkelMeshComp->SkeletalMesh), boneList[i], c);
					if (c.Num()) {
						for (const auto cc : c) {
							boneList.AddUnique(cc);

							SData s;
							s.bone = cc;
							s.radius = spr.hitRadius;
							dataList.AddUnique(s);
						}
					}
				}
			}
		}
		static int flip = 0;
		flip = (flip + 1) % 100;
		for (int i = 0; i < dataList.Num(); ++i) {
			const auto &name = PreviewSkelMeshComp->GetBoneName(dataList[i].bone);

			FTransform t = PreviewSkelMeshComp->GetSocketTransform(name);
			float r = dataList[i].radius * 100.f;
			FVector v = t.GetLocation();

			if ((flip%5) == 0) {
				DrawDebugSphere(PreviewSkelMeshComp->GetWorld(), v, r, 8, FColor::Red, true);
			}
		}
		/*
		for (int i = 0; i < boneList.Num(); ++i) {
			const auto& name = PreviewSkelMeshComp->GetBoneName(boneList[i]);

			FTransform t = PreviewSkelMeshComp->GetSocketTransform(name);
			float r = spr.hitRadius * 100.f;
			FVector v = t.GetLocation();

			DrawDebugSphere(PreviewSkelMeshComp->GetWorld(), v, r, 8, FColor::Red, true, 0.1f);
		}
		*/
	}



	if (bEnableDebugDraw && PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		FVector const CSEffectorLocation = FVector(0, 0, 0);//CachedEffectorCSTransform.GetLocation();

		FVector const Precision = FVector(1);//CachedEffectorCSTransform.GetLocation();

		FTransform CachedEffectorCSTransform;

		// Show end effector position.
		DrawDebugBox(PreviewSkelMeshComp->GetWorld(), CSEffectorLocation, FVector(Precision), FColor::Green, true, 0.1f);
		DrawDebugCoordinateSystem(PreviewSkelMeshComp->GetWorld(), CSEffectorLocation, CachedEffectorCSTransform.GetRotation().Rotator(), 5.f, true, 0.1f);
	}
#endif
}
