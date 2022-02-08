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
	 * BlueprintGeneratedClass BP_PipeFilter.BP_PipeFilter_C
	 * Size -> 0x000C (FullSize[0x0590] - InheritedSize[0x0584])
	 */
	class ABP_PipeFilter_C : public ABP_ParentWaterItemDurability_C
	{
	public:
		unsigned char                                              UnknownData_Z74X[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideWaterIn(const class FString& Box, int32_t Water_Quality, float Water_Pressure);
		void ExecuteUbergraph_BP_PipeFilter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
