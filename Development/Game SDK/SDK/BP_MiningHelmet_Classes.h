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
	 * BlueprintGeneratedClass BP_MiningHelmet.BP_MiningHelmet_C
	 * Size -> 0x0031 (FullSize[0x0441] - InheritedSize[0x0410])
	 */
	class ABP_MiningHelmet_C : public ABP_ParentHat_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class URectLightComponent*                               RectLight;                                               // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class URectLightComponent*                               RectLight1;                                              // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		float                                                    Timeline_0_NewTrack_0_D5296FD143D2ED95CD7316B9842BF492;  // 0x0428(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_0__Direction_D5296FD143D2ED95CD7316B9842BF492;  // 0x042C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_5CBJ[0x3];                                   // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_1;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     On;                                                      // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn


	public:

		void UserConstructionScript();

		void Timeline_0__FinishedFunc();

		void Timeline_0__UpdateFunc();

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void OverrideHatOn(
class ABP_GameCharacter_C* Character
);

		void OverrideHatOff(
class ABP_GameCharacter_C* Character
);

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void ExecuteUbergraph_BP_MiningHelmet(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
