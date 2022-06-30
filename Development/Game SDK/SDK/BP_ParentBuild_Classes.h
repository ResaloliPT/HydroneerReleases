﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_ParentBuild.BP_ParentBuild_C
	 * Size -> 0x0048 (FullSize[0x03A8] - InheritedSize[0x0360])
	 */
	class ABP_ParentBuild_C : public ABP_ParentItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UDecalComponent*                                     Decal;                                                   // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Plane5x5;                                             // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GridGuide;                                               // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Placing_;                                                // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanPlace_;                                               // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_PlacementType                                            PlacementType;                                           // 0x0382(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlacedDown_;                                             // 0x0383(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       Locked_;                                                 // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K7KH[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HydroVoxelWorld_C*                               VoxelWorld;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanRTYFlip_;                                             // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XD0H[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_ParentHook_C*>                            Hooks;                                                   // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void UpdateGridPlaneLocation();
		void StopPlacingItem();
		void BPI_GetCanHighlight(bool* CanHighlight_);
		void FindTracePivots(TArray<struct FVector>* Pivots);
		void IsSpecificHookable(bool* CanPlace_);
		void IsHookable(bool* CanPlace_);
		void IsClipping(bool* CanPlace_);
		void ItemIsPlacing(class ABP_GameController_C* Controller);
		void ItemIsBuilt(class ABP_GameController_C* Controller);
		void UnderGroundTest(bool* CanPlace_);
		void TouchVoxelTest(bool* TouchingSomething);
		void TouchAnythingTest(bool* TouchingSomething);
		void UserConstructionScript();
		void LMBUpWhileCarrying();
		void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit_Actor, const struct FVector& HitLocation);
		void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void LockItem();
		void OverridePickedup();
		void OverrideStartPlacing();
		void PlacementCheck();
		void ReceiveBeginPlay();
		void AttachPart(class ABP_ParentHook_C* Hook);
		void RemovePart(class ABP_ParentHook_C* Hook);
		void CancelPlacement();
		void ExecuteUbergraph_BP_ParentBuild(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
