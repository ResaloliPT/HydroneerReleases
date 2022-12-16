#pragma once

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
	 * BlueprintGeneratedClass BP_ParentBuild.BP_ParentBuild_C
	 * Size -> 0x0048 (FullSize[0x0408] - InheritedSize[0x03C0])
	 */
	class ABP_ParentBuild_C : public ABP_ParentItem_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UDecalComponent*                                   Decal;                                                   // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              SM_Plane5x5;                                             // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              GridGuide;                                               // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     Placing;                                                 // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     CanPlace;                                                // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		E_PlacementType                                          PlacementType;                                           // 0x03E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     PlacedDown;                                              // 0x03E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor


		bool                                                     Locked;                                                  // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_9329[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_HydroVoxelWorld_C*                             VoxelWorld;                                              // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     CanRTYFlip;                                              // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_9R1K[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class ABP_ParentHook_C*>                          Hooks;                                                   // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


	public:

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void RevertMaterials();

		void UpdateGridPlaneLocation();

		void StopPlacingItem();

		void BPI_GetCanHighlight(
bool* CanHighlight
);

		void FindTracePivots(
TArray<struct FVector>* Pivots
);

		void IsSpecificHookable(
bool* CanPlace
);

		void IsHookable(
bool* CanPlace
);

		void IsClipping(
bool* CanPlace
);

		void ItemIsPlacing(
class ABP_GameController_C* Controller
);

		void ItemIsBuilt(
class ABP_GameController_C* Controller
);

		void UnderGroundTest(
bool* CanPlace
);

		void TouchVoxelTest(
bool* TouchingSomething
);

		void TouchAnythingTest(
bool* TouchingSomething
);

		void UserConstructionScript();

		void LMBUpWhileCarrying();

		void RMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* Hit_Actor
, 
const struct FVector& HitLocation
);

		void RMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Instigator
);

		void LMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Insigator
);

		void RMBUpWhileCarrying();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void LockItem(
bool Lock
);

		void OverridePickedup();

		void OverrideStartPlacing();

		void PlacementCheck();

		void ReceiveBeginPlay();

		void AttachPart(
class ABP_ParentHook_C* Hook
);

		void RemovePart(
class ABP_ParentHook_C* Hook
);

		void CancelPlacement();

		void ExecuteUbergraph_BP_ParentBuild(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
