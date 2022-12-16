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
	 * BlueprintGeneratedClass BP_ParentHarvester.BP_ParentHarvester_C
	 * Size -> 0x0080 (FullSize[0x04C0] - InheritedSize[0x0440])
	 */
	class ABP_ParentHarvester_C : public ABP_ParentPipe_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UStaticMeshComponent*                              Drum2;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Drum1;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   SpawnLocation;                                           // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     Harvesting;                                              // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   SparksLocation;                                          // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     IntakeBox;                                               // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Durability_C*                                  AC_Durability;                                           // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      SpinTimerHandle;                                         // 0x0488(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   HarvesterSound;                                          // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  MaxDrillingDepth;                                        // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_HJT6[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class USoundBase*                                        Harvesting_Sound;                                        // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class USoundBase*                                        Crushing_Sound;                                          // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UParticleSystemComponent*                          HarvestingDirtCloud;                                     // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UNiagaraComponent*                                 HarvestingParticles;                                     // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void CheckForBlockingResources();

		void CalcPressureBoost(
float Weight
, 
int32_t* DirtLoads
);

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void OnCompleted_F7B2E75E4468FB2AFF0507BF1AEBE14B();

		void DoneRepair();

		void ReturnDurability(
float DurabilityAmount
);

		void TryRepair(
class ABP_ParentItem_C* RepairingTool
);

		void FindDurability(
class ABP_ParentItem_C* Item
);

		void OverrideWaterIn(
class USceneComponent* Component
, 
float RootPressure
);

		void OverrideEmptyWaterPipe();

		void OverridePickedup();

		void ToggleHarvester(
bool On
);

		void SpinTimer();

		void BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void RefreshHarvestingCollision();

		void ActorLoaded();

		void ExecuteUbergraph_BP_ParentHarvester(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
