﻿#pragma once

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
	 * BlueprintGeneratedClass BP_LogicWaterValve.BP_LogicWaterValve_C
	 * Size -> 0x0017 (FullSize[0x05A0] - InheritedSize[0x0589])
	 */
	class ABP_LogicWaterValve_C : public ABP_PipeValve_C
	{
	public:
		unsigned char                                              UnknownData_RUH3[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Lgk1;                                                    // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideLogicIn(const class FString& Box, const class FString& Logic);
		void ExecuteUbergraph_BP_LogicWaterValve(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
