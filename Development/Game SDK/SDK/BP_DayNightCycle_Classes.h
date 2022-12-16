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
	 * BlueprintGeneratedClass BP_DayNightCycle.BP_DayNightCycle_C
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class ABP_DayNightCycle_C : public AActor
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class USceneComponent*                                   DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ABP_Clouds_C*                                      WorldClouds;                                             // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class ADirectionalLight*                                 Sun;                                                     // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		class UCurveFloat*                                       LightCurve;                                              // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class ABP_Sky_Sphere_C*                                  Sky;                                                     // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		float                                                    Minutes_Per_Day;                                         // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    One_Day;                                                 // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    One_Hour;                                                // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    Hour;                                                    // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    Sun_Angle;                                               // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_R1XW[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ASkyLight*                                         SkyLight;                                                // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		class AExponentialHeightFog*                             ExpoHeightFog;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		bool                                                     Day;                                                     // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_4NFB[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      MainTimer;                                               // 0x0280(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UCurveLinearColor*                                 FogColor;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     Paused;                                                  // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_U100[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FScriptMulticastDelegate                           OnChangeTime;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void ChangeTime(
float Delta
);

		void UnpauseTime();

		void PauseTime();

		void SetDayModePostLoad();

		void SetDayMode();

		void ActorSaved();

		void ReceiveBeginPlay();

		void ActorPreSave();

		void SpeedUpToSunrise(
class ABP_ParentBed_C* Bed
, 
class ABP_GameController_C* Controller
);

		void SunRiseTimerCheck();

		void SetNewRate();

		void Update();

		void ActorLoaded();

		void ExecuteUbergraph_BP_DayNightCycle(
int32_t EntryPoint
);

		void OnChangeTime__DelegateSignature(
float HourDelta
, 
float ActualSecondsDelta
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
