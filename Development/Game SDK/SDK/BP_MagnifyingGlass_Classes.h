#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_MagnifyingGlass.BP_MagnifyingGlass_C
	 * Size -> 0x001F (FullSize[0x0388] - InheritedSize[0x0369])
	 */
	class ABP_MagnifyingGlass_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_7BMN[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender;                                              // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TraceTimerHandle;                                        // 0x0380(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void DoneRepair();
		void FindDurability(class ABP_ParentItem_C* Item);
		void OverridePickedup();
		void LineTracer();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void ReturnDurability(float DurabilityAmount);
		void ExecuteUbergraph_BP_MagnifyingGlass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
