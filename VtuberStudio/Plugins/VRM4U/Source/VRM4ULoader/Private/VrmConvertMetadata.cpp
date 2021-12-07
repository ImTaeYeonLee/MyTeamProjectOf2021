// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#include "VrmConvertMetadata.h"
#include "VrmConvert.h"


#include "VrmAssetListObject.h"
#include "VrmMetaObject.h"
#include "VrmLicenseObject.h"

#include "AssetRegistryModule.h"
#include "UObject/Package.h"
#include "UObject/UObjectGlobals.h"

#include "VrmJson.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/mesh.h>
#include <assimp/postprocess.h>
#include <assimp/pbrmaterial.h>
#include <assimp/vrm/vrmmeta.h>

static UVrmLicenseObject *tmpLicense = nullptr;
UVrmLicenseObject* VRMConverter::GetVRMMeta(const aiScene *mScenePtr) {
	tmpLicense = nullptr;
	VRMConverter::ConvertVrmMeta(nullptr, mScenePtr, nullptr, 0);

	return tmpLicense;
}


bool VRMConverter::ConvertVrmMeta(UVrmAssetListObject *vrmAssetList, const aiScene *mScenePtr, const uint8* pData, size_t dataSize) {

	tmpLicense = nullptr;
	VRM::VRMMetadata *meta = reinterpret_cast<VRM::VRMMetadata*>(mScenePtr->mVRMMeta);

	UVrmMetaObject *m = nullptr;
	UVrmLicenseObject *lic = nullptr;

	{
		UPackage *package = GetTransientPackage();

		if (vrmAssetList) {
			package = vrmAssetList->Package;
		}

		if (package == GetTransientPackage() || vrmAssetList==nullptr) {
			m = VRM4U_NewObject<UVrmMetaObject>(package, NAME_None, EObjectFlags::RF_Public | RF_Transient, NULL);
			lic = VRM4U_NewObject<UVrmLicenseObject>(package, NAME_None, EObjectFlags::RF_Public | RF_Transient, NULL);
		} else {
			m = VRM4U_NewObject<UVrmMetaObject>(package, *(FString(TEXT("VM_")) + vrmAssetList->BaseFileName + TEXT("_VrmMeta")), EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
			lic = VRM4U_NewObject<UVrmLicenseObject>(package, *(FString(TEXT("VL_")) + vrmAssetList->BaseFileName + TEXT("_VrmLicense")), EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
		}

		if (vrmAssetList) {
			vrmAssetList->VrmMetaObject = m;
			vrmAssetList->VrmLicenseObject = lic;
			m->VrmAssetListObject = vrmAssetList;
		} else {
			tmpLicense = lic;
		}
	}

	if (meta == nullptr) {
		return false;
	}

	// bone
	for (auto &a : meta->humanoidBone) {
		m->humanoidBoneTable.Add(UTF8_TO_TCHAR(a.humanBoneName.C_Str())) = UTF8_TO_TCHAR(a.nodeName.C_Str());
	}

	//shape
	m->BlendShapeGroup.SetNum(meta->blensShapeGroupNum);
	for (int i = 0; i < meta->blensShapeGroupNum; ++i) {
		auto &aiGroup = meta->blensShapeGourp[i];

		m->BlendShapeGroup[i].name = UTF8_TO_TCHAR(aiGroup.groupName.C_Str());

		m->BlendShapeGroup[i].BlendShape.SetNum(aiGroup.bindNum);
		for (int b = 0; b < aiGroup.bindNum; ++b) {
			auto& bind = m->BlendShapeGroup[i].BlendShape[b];
			bind.morphTargetName = UTF8_TO_TCHAR(aiGroup.bind[b].blendShapeName.C_Str());
			bind.meshName = UTF8_TO_TCHAR(aiGroup.bind[b].meshName.C_Str());
			bind.nodeName = UTF8_TO_TCHAR(aiGroup.bind[b].nodeName.C_Str());
			bind.weight = aiGroup.bind[b].weight;
			bind.meshID = aiGroup.bind[b].meshID;
			bind.shapeIndex = aiGroup.bind[b].shapeIndex;

			if (VRMConverter::Options::Get().IsStrictMorphTargetNameMode()) {
				bind.morphTargetName = VRMConverter::NormalizeFileName(bind.morphTargetName);
			}
		}
	}
	// tmp shape...
	if (pData) {
		TMap<FString, FString> ParamTable;

		ParamTable.Add("_Color", "mtoon_Color");
		ParamTable.Add("_RimColor", "mtoon_RimColor");
		ParamTable.Add("_EmisionColor", "mtoon_EmissionColor");
		ParamTable.Add("_OutlineColor", "mtoon_OutColor");

		VrmJson j;
		j.init(pData, dataSize);
		auto key = nlohmann::json::json_pointer("/extensions/VRM/blendShapeMaster/blendShapeGroups");
		auto group = j.jsonData[key];
		for (int i = 0; i < m->BlendShapeGroup.Num(); ++i) {
			auto& bind = m->BlendShapeGroup[i];

			auto shape = group[i];
			if (shape.contains("materialValues") == false) {
				continue;
			}
			for (auto mat : shape["materialValues"]) {
				FVrmBlendShapeMaterialList mlist;
				mlist.materialName = mat["materialName"].get<std::string>().c_str();
				mlist.propertyName = mat["propertyName"].get<std::string>().c_str();

				mlist.materialName = vrmAssetList->MaterialNameOrigToAsset[mlist.materialName];
				mlist.propertyName = ParamTable[mlist.propertyName];
				mlist.color = FLinearColor(
					mat["targetValue"][0].get<float>(),
					mat["targetValue"][1].get<float>(),
					mat["targetValue"][2].get<float>(),
					mat["targetValue"][3].get<float>());
				bind.MaterialList.Add(mlist);
			}
		}
	}

	// spring
	m->VRMSpringMeta.SetNum(meta->springNum);
	for (int i = 0; i < meta->springNum; ++i) {
		const auto &vrms = meta->springs[i];

		auto &s = m->VRMSpringMeta[i];
		s.stiffness = vrms.stiffness;
		s.gravityPower = vrms.gravityPower;
		s.gravityDir.Set(vrms.gravityDir[0], vrms.gravityDir[1], vrms.gravityDir[2]);
		s.dragForce = vrms.dragForce;
		s.hitRadius = vrms.hitRadius;

		s.bones.SetNum(vrms.boneNum);
		s.boneNames.SetNum(vrms.boneNum);
		for (int b = 0; b < vrms.boneNum; ++b) {
			s.bones[b] = vrms.bones[b];
			s.boneNames[b] = UTF8_TO_TCHAR(vrms.bones_name[b].C_Str());
		}

		
		s.ColliderIndexArray.SetNum(vrms.colliderGourpNum);
		for (int c = 0; c < vrms.colliderGourpNum; ++c) {
			s.ColliderIndexArray[c] = vrms.colliderGroups[c];
		}
	}

	//collider
	m->VRMColliderMeta.SetNum(meta->colliderGroupNum);
	for (int i = 0; i < meta->colliderGroupNum; ++i) {
		const auto &vrmc = meta->colliderGroups[i];

		auto &c = m->VRMColliderMeta[i];
		c.bone = vrmc.node;
		c.boneName = UTF8_TO_TCHAR(vrmc.node_name.C_Str());

		c.collider.SetNum(vrmc.colliderNum);
		for (int b = 0; b < vrmc.colliderNum; ++b) {
			c.collider[b].offset = FVector(vrmc.colliders[b].offset[0], vrmc.colliders[b].offset[1], vrmc.colliders[b].offset[2]);
			c.collider[b].radius = vrmc.colliders[b].radius;
		}
	}

	// license
	{
		struct TT {
			FString key;
			FString &dst;
		};
		const TT table[] = {
			{TEXT("version"),		lic->version},
			{TEXT("author"),			lic->author},
			{TEXT("contactInformation"),	lic->contactInformation},
			{TEXT("reference"),		lic->reference},
				// texture skip
			{TEXT("title"),			lic->title},
			{TEXT("allowedUserName"),	lic->allowedUserName},
			{TEXT("violentUssageName"),	lic->violentUssageName},
			{TEXT("sexualUssageName"),	lic->sexualUssageName},
			{TEXT("commercialUssageName"),	lic->commercialUssageName},
			{TEXT("otherPermissionUrl"),		lic->otherPermissionUrl},
			{TEXT("licenseName"),			lic->licenseName},
			{TEXT("otherLicenseUrl"),		lic->otherLicenseUrl},
		};
		for (int i = 0; i < meta->license.licensePairNum; ++i) {

			auto &p = meta->license.licensePair[i];

			for (auto &t : table) {
				if (t.key == p.Key.C_Str()) {
					t.dst = UTF8_TO_TCHAR(p.Value.C_Str());
				}
			}
			if (vrmAssetList) {
				if (FString(TEXT("texture")) == p.Key.C_Str()) {
					int t = FCString::Atoi(*FString(p.Value.C_Str()));
					if (t >= 0 && t < vrmAssetList->Textures.Num()) {
						lic->thumbnail = vrmAssetList->Textures[t];
					}
				}
			}
		}
	}



	if (VRMConverter::Options::Get().IsCreateHumanoidRenamedMesh()){
		UPackage* package = GetTransientPackage();

		if (vrmAssetList) {
			package = vrmAssetList->Package;
		}

		//m2 = VRM4U_NewObject<UVrmMetaObject>(package, *(FString(TEXT("VM_")) + vrmAssetList->BaseFileName + TEXT("_VrmMeta")), EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
		{
			TMap<FString, FString> BoneTable;

			UVrmMetaObject* m2 = DuplicateObject<UVrmMetaObject>(m, package, *(FString(TEXT("VM_")) + vrmAssetList->BaseFileName + TEXT("_ue4mannequin_VrmMeta")));
			vrmAssetList->VrmMannequinMetaObject = m2;
			for (auto& a : m2->humanoidBoneTable) {
				auto c = VRMUtil::table_ue4_vrm.FindByPredicate([a](const VRMUtil::VRMBoneTable& data) { return a.Key.ToLower() == data.BoneVRM.ToLower(); });
				if (c) {
					if (a.Value != "") {
						BoneTable.Add(a.Value, c->BoneUE4);
						a.Value = c->BoneUE4;
					}
				}
			}
			for (auto& a : m2->VRMColliderMeta) {
				auto c = BoneTable.Find(a.boneName);
				if (c) {
					if (a.boneName != "") {
						a.boneName = *c;
					}
				}
			}
			for (auto& a : m2->VRMSpringMeta) {
				for (auto& b : a.boneNames) {
					auto c = BoneTable.Find(b);
					//auto c = VRMUtil::table_ue4_vrm.FindByPredicate([b](const VRMUtil::VRMBoneTable& data) { return b.ToLower() == data.BoneVRM.ToLower(); });
					if (c) {
						if (b != "") {
							b = *c;
						}
					}
				}
			}
		}

		{
			TMap<FString, FString> BoneTable;

			UVrmMetaObject* m3 = DuplicateObject<UVrmMetaObject>(m, package, *(FString(TEXT("VM_")) + vrmAssetList->BaseFileName + TEXT("_humanoid_VrmMeta")));
			vrmAssetList->VrmHumanoidMetaObject = m3;
			for (auto& a : m3->humanoidBoneTable) {
				auto c = VRMUtil::table_ue4_vrm.FindByPredicate([a](const VRMUtil::VRMBoneTable& data) { return a.Key.ToLower() == data.BoneVRM.ToLower(); });
				if (c) {
					if (a.Value != "") {
						BoneTable.Add(a.Value, c->BoneUE4);
						a.Value = c->BoneUE4;
					}
				}
			}
			for (auto& a : m3->VRMColliderMeta) {
				auto c = BoneTable.Find(a.boneName);
				if (c) {
					if (a.boneName != "") {
						a.boneName = *c;
					}
				}
			}
			for (auto& a : m3->VRMSpringMeta) {
				for (auto& b : a.boneNames) {
					auto c = BoneTable.Find(b);
					//auto c = VRMUtil::table_ue4_vrm.FindByPredicate([b](const VRMUtil::VRMBoneTable& data) { return b.ToLower() == data.BoneVRM.ToLower(); });
					if (c) {
						if (b != "") {
							b = *c;
						}
					}
				}
			}
		}
	}
	return true;
}



VrmConvertMetadata::VrmConvertMetadata()
{
}

VrmConvertMetadata::~VrmConvertMetadata()
{
}
