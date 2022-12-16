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
	 * BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
	 * Size -> 0x0030 (FullSize[0x03F9] - InheritedSize[0x03C9])
	 */
	class ABP_Lantern_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_HPKE[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UPointLightComponent*                              PointLight;                                              // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		float                                                    Timeline_1_NewTrack_0_00491F854B0649577EAED7B7FFAF6AED;  // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_1__Direction_00491F854B0649577EAED7B7FFAF6AED;  // 0x03E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_4UNJ[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_2;                                              // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     On;                                                      // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn


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

		void CreateProxyItem();

		void UserConstructionScript();

		void Timeline_1__FinishedFunc();

		void Timeline_1__UpdateFunc();

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void OverrideLoaded();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void ToggleLight(
bool TurnOn
);

		void ExecuteUbergraph_BP_Lantern(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
