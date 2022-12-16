﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------

	/**
	 * BlueprintGeneratedClass BP_Anvil.BP_Anvil_C
	 * Size -> 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
	 */
	class ABP_Anvil_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              StaticMesh1_1;                                           // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   WeaponSpawn;                                             // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     AnvilFace;                                               // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		E_AnvilType                                              AnvilType;                                               // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_FPBI[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class ABP_ParentResource_C*>                      Resources;                                               // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


	public:

		void FindRotationForCraftedItem(
class UClass* Class
, 
struct FRotator* Rot
);

		void TryCraftItem(
E_AnvilType Item_To_Craft
);

		void HammerHit();

		void BndEvt__AnvilFace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
);

		void BndEvt__AnvilFace_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void OverridePickedup();

		void LMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Insigator
);

		void RMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Instigator
);

		void ExecuteUbergraph_BP_Anvil(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
