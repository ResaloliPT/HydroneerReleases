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
	 * BlueprintGeneratedClass BP_Pan.BP_Pan_C
	 * Size -> 0x004B (FullSize[0x0414] - InheritedSize[0x03C9])
	 */
	class ABP_Pan_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_Q3YJ[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Cylinder;                                                // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WaterMesh;                                               // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              DirtMesh;                                                // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     HasWater;                                                // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_T7PN[0x3];                                   // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		int32_t                                                  DirtQualityAverage;                                      // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  DirtLoads;                                               // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void SetAttachedMeshCollisionProfile(
class UStaticMeshComponent* Mesh
, 
const class FName& CollisionProfile
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

		void GetRandXY(
float* ReturnValue_X
, 
float* ReturnValue_Y
);

		void OverlappedDirtParticle(
class ABP_DirtResource_C* Dirt
);

		void GenerateGems();

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void HasNoWater();

		void HasWater();

		void AddDirt(
int32_t DirtQualityAverage
, 
int32_t DirtLoads
);

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

		void EmptyWater();

		void DevTest();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void WaterParticleHit();

		void EmptyDirt();

		void Scrubbed();

		void BndEvt__BP_Pan_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void TipOut();

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature();

		void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature();

		void OverridePickedupPreCarry();

		void ExecuteUbergraph_BP_Pan(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
