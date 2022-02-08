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
	 * BlueprintGeneratedClass BP_PressureGaugePipe.BP_PressureGaugePipe_C
	 * Size -> 0x001C (FullSize[0x0580] - InheritedSize[0x0564])
	 */
	class ABP_PressureGaugePipe_C : public ABP_ParentWaterItem_C
	{
	public:
		unsigned char                                              UnknownData_Y3SV[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Needle;                                                  // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     NeedleScene;                                             // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideWaterIn(const class FString& Box, int32_t Water_Quality, float Water_Pressure);
		void UpdatePressure(float NewPressure);
		void ExecuteUbergraph_BP_PressureGaugePipe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
