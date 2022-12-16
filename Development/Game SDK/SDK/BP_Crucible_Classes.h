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
	 * BlueprintGeneratedClass BP_Crucible.BP_Crucible_C
	 * Size -> 0x0067 (FullSize[0x0430] - InheritedSize[0x03C9])
	 */
	class ABP_Crucible_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_ZEYO[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Heat_C*                                        AC_Heat;                                                 // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              LiquidMesh;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Cylinder;                                                // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    TotalOreContentSize;                                     // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_T16Y[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UClass*                                            TestClass;                                               // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		E_MetalType                                              CurrentLiquidType;                                       // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_W4TR[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class UClass*>                                    AllowedResources;                                        // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void LoopResourcesForTargets(
class UClass* Ore
, 
class UClass* Bar
, 
TArray<class ABP_ParentResource_C*>* Items
);

		void FindTestClass(
E_MetalType CurrentMoltenType
, 
TArray<class ABP_ParentResource_C*>* Class
, 
int32_t* BarOut
);

		void UserConstructionScript();

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void SpawnBar(
class ABP_Mould_C* Mould
);

		void PlayPourAnim();

		void UpdateVisuals();

		void HeatUpdated(
float Heat
);

		void FullHeat();

		void InFire(
bool SlowBurn
);

		void OutOfFire();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ActorLoaded();

		void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature();

		void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature();

		void OverridePickedupPreCarry();

		void ExecuteUbergraph_BP_Crucible(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
