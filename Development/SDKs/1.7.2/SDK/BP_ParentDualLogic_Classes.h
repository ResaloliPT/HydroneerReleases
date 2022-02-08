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
	 * BlueprintGeneratedClass BP_ParentDualLogic.BP_ParentDualLogic_C
	 * Size -> 0x001C (FullSize[0x05B0] - InheritedSize[0x0594])
	 */
	class ABP_ParentDualLogic_C : public ABP_ParentLogic_C
	{
	public:
		unsigned char                                              UnknownData_DXG1[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              LogicB;                                                  // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void AddZeros(const class FString& LogicToOutput, class FString* FullOutput);
		void LogicPassedIn(const class FString& Box, const class FString& Logic);
		void ExecuteUbergraph_BP_ParentDualLogic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
