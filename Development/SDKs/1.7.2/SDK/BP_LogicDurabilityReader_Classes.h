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
	 * BlueprintGeneratedClass BP_LogicDurabilityReader.BP_LogicDurabilityReader_C
	 * Size -> 0x001C (FullSize[0x05B0] - InheritedSize[0x0594])
	 */
	class ABP_LogicDurabilityReader_C : public ABP_ParentLogic_C
	{
	public:
		unsigned char                                              UnknownData_ZD59[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Lazer;                                                   // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ReadTimer;                                               // 0x05A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OverridePlacedDown();
		void OverridePickedup();
		void OverrideLoaded();
		void ReadTime();
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_LogicDurabilityReader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
