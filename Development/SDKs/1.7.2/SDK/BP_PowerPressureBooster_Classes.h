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
	 * BlueprintGeneratedClass BP_PowerPressureBooster.BP_PowerPressureBooster_C
	 * Size -> 0x0024 (FullSize[0x0588] - InheritedSize[0x0564])
	 */
	class ABP_PowerPressureBooster_C : public ABP_ParentWaterItem_C
	{
	public:
		unsigned char                                              UnknownData_F70S[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Pwr1;                                                    // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Powered_;                                                // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VNLA[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentPower_C*                                   Power_Source;                                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideWaterIn(const class FString& Box, int32_t Water_Quality, float Water_Pressure);
		void PowerIn(const class FString& Box, class ABP_ParentPower_C* Power_Source);
		void CustomEvent();
		void ExecuteUbergraph_BP_PowerPressureBooster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
