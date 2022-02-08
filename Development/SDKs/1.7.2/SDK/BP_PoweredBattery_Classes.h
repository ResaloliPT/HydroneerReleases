#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
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
	 * BlueprintGeneratedClass BP_PoweredBattery.BP_PoweredBattery_C
	 * Size -> 0x0026 (FullSize[0x05A8] - InheritedSize[0x0582])
	 */
	class ABP_PoweredBattery_C : public ABP_ParentPower_C
	{
	public:
		unsigned char                                              UnknownData_3ZK9[0x6];                                   // 0x0582(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Power;                                                   // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P5E0[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        OutputTimerHandle;                                       // 0x0598(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     HumSound;                                                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetVisPowerLevel();
		void OverrideLoaded();
		void OverridePickedup();
		void OverrideDroppedItem();
		void OverridePowerPassedIn(const class FString& Box);
		void SapPower(int32_t Amount);
		void AddPower(int32_t Amount);
		void OverridePlacedDown();
		void OutputTimer();
		void ExecuteUbergraph_BP_PoweredBattery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
