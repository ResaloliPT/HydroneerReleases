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
	 * BlueprintGeneratedClass BP_LogicDestroyer.BP_LogicDestroyer_C
	 * Size -> 0x0048 (FullSize[0x0480] - InheritedSize[0x0438])
	 */
	class ABP_LogicDestroyer_C : public ABP_ParentLogic_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              SM_ItemDestroyer_Drum3;                                  // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              SM_ItemDestroyer_Drum2;                                  // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              SM_ItemDestroyer_Drum1;                                  // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              SM_ItemDestroyer_Drum;                                   // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     X_Box;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     DestroyBox;                                              // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      SpinnyTimer;                                             // 0x0470(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   IdleSound;                                               // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void UserConstructionScript();

		void OverrideLoaded();

		void OverridePickedup();

		void OverrideLogicIn(
class USceneComponent* Component
);

		void Spinner();

		void BndEvt__BP_LogicDestroyer_DestroyBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(
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

		void StopSpinning();

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void StartSpinning();

		void ExecuteUbergraph_BP_LogicDestroyer(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
