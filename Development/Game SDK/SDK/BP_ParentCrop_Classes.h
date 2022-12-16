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
	 * BlueprintGeneratedClass BP_ParentCrop.BP_ParentCrop_C
	 * Size -> 0x00F8 (FullSize[0x0318] - InheritedSize[0x0220])
	 */
	class ABP_ParentCrop_C : public AActor
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              CropVisual;                                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     PlacedDown;                                              // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_74UA[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UMaterialInterface*                                OriginalMat;                                             // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UClass*                                            VegToSpawn;                                              // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UClass*                                            SeedBag;                                                 // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  TimesToWater;                                            // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    GrowthRemaining;                                         // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    GrowthTotal;                                             // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    WaterTime;                                               // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    WaterTimeRemaining;                                      // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    LightValue;                                              // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    LightThreshold;                                          // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_RG53[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      GrowthTimer;                                             // 0x0278(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      GrowthCheckTimer;                                        // 0x0280(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      WaterTimer;                                              // 0x0288(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UNiagaraSystem*                                    DestroyParticle;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<int32_t>                                          HighlightArray;                                          // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		bool                                                     AboveGroundCrop;                                         // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_2XHQ[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ADirectionalLight*                                 Sun;                                                     // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TMap<class AActor*, float>                               Lights;                                                  // 0x02B8(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		int32_t                                                  VegSpawnCount;                                           // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_5AES[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_DayNightCycle_C*                               DayNight;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void CanGrow(
bool* Result
);

		void HandleTimeChange(
float HourDelta
, 
float ActualSecondsDelta
);

		void SetDayNightRef();

		void CheckHasSunlight(
bool* HasSunlight
);

		void UpdateLight(
class AActor* Light
, 
float LightValue
);

		void GrowPlant(
float Growth
);

		void TryAttachToFoundation(
TArray<class AActor*>* Foundations
);

		void FindAttachedCrops();

		void SetDefaultCollision();

		float GetWaterRatio();

		float GetGrowthRatio();

		void DestroyCrop();

		void ResetWaterTimeRemaining();

		void CalcWaterTime();

		void WaterTimerComplete();

		void InitWaterTimer();

		void GrowthCheck();

		void InitGrowthCheckTimer();

		void GrowthTimerComplete();

		void InitGrowthTimer();

		void LoadedFindFoundation();

		void BPI_GetHighlightArray(
TArray<int32_t>* HighlightArray
);

		void BPI_SetHighlightArray(
TArray<int32_t>* HighlightArray
, 
bool* Result
);

		void BPI_GetCanHighlight(
bool* CanHighlight
);

		void UserConstructionScript();

		void OnCompleted_9EE516934F983A203E512EBE8969D80F();

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void ActorSaved();

		void PlacedDown();

		void ActorLoaded();

		void SpawnVeg();

		void ActorPreSave();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void ReceiveTick(
float DeltaSeconds
);

		void ReceiveBeginPlay();

		void ExecuteUbergraph_BP_ParentCrop(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
