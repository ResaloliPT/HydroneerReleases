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
	 * BlueprintGeneratedClass BP_CookingPot.BP_CookingPot_C
	 * Size -> 0x007F (FullSize[0x0448] - InheritedSize[0x03C9])
	 */
	class ABP_CookingPot_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_U6N5[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              VegMesh2;                                                // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              VegMesh1;                                                // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              VegMesh0;                                                // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Heat_C*                                        AC_Heat;                                                 // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              LiquidMesh;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Cylinder;                                                // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<struct FS_CookingPotContents>                     SoupContents;                                            // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		bool                                                     HasWater;                                                // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_VVYP[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class UClass*>                                    DebugToppers;                                            // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		void AddToExisting(
class ABP_ParentCutVeg_C* VegToAdd
, 
bool* Added
);

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void SetBroth();

		void RandomiseContents();

		void CanStoreMoreVeg(
class ABP_ParentCutVeg_C* CutVeg
, 
bool* CanStore
);

		void GetRandXY(
float* ReturnValue_X
, 
float* ReturnValue_Y
);

		void RuinSoup();

		void SetVegMesh();

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
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

		void PlayPourAnim();

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

		void NewItemOnFullHeat(
class ABP_ParentCutVeg_C* CutVeg
);

		void ExecuteUbergraph_BP_CookingPot(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
