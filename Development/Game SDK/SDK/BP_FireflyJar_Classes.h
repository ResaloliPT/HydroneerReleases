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
	 * BlueprintGeneratedClass BP_FireflyJar.BP_FireflyJar_C
	 * Size -> 0x0040 (FullSize[0x0409] - InheritedSize[0x03C9])
	 */
	class ABP_FireflyJar_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_3VVS[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UNiagaraComponent*                                 Particles;                                               // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UPointLightComponent*                              PointLight;                                              // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		float                                                    Timeline_1_NewTrack_2_B89785ED4BA71D7F05CB3A80FE1B098D;  // 0x03F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_1__Direction_B89785ED4BA71D7F05CB3A80FE1B098D;  // 0x03F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_NYVX[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_2;                                              // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     On;                                                      // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn


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

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void OverrideLoaded();

		void ToggleLight(
bool TurnOn
, 
bool PlayAnim
);

		void ExecuteUbergraph_BP_FireflyJar(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
