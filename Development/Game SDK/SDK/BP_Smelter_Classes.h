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
	 * BlueprintGeneratedClass BP_Smelter.BP_Smelter_C
	 * Size -> 0x0071 (FullSize[0x0479] - InheritedSize[0x0408])
	 */
	class ABP_Smelter_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              SM_BarMould;                                             // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Cylinder;                                                // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              LiquidMesh;                                              // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   Spawnpoint;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Pot;                                                     // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UParticleSystemComponent*                          Fire3;                                                   // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UParticleSystemComponent*                          Fire2;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UParticleSystemComponent*                          Fire1;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAudioComponent*                                   FurnaceFireSound;                                        // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<class UClass*>                                    AllowedItems;                                            // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		E_MetalType                                              CurrentLiquidType;                                       // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_UB5P[0x3];                                   // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    OreContent;                                              // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     CanUse;                                                  // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void CreateBar(
class UClass* Bar
);

		void SetLiquidHeight();

		void SetNewLiquidType(
E_MetalType Type
, 
float OreContent
);

		void FindLiquidClass(
class ABP_ParentResource_C* Resource
, 
E_MetalType* Type
);

		void OverridePickedup();

		void OverrideLoaded();

		void NewItemInPot(
class ABP_ParentResource_C* Item
);

		void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(
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

		void SpawnBar();

		void PlayPourAnim();

		void LMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Insigator
);

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void ExecuteUbergraph_BP_Smelter(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
