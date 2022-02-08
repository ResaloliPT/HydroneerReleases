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
	 * BlueprintGeneratedClass BP_ParentLogicSymbol.BP_ParentLogicSymbol_C
	 * Size -> 0x0015 (FullSize[0x05A9] - InheritedSize[0x0594])
	 */
	class ABP_ParentLogicSymbol_C : public ABP_ParentLogic_C
	{
	public:
		unsigned char                                              UnknownData_7RPJ[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Symbol;                                                  // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		E_LogicButtonSymbols_E_LogicButtonSymbols                  CurrentSymbol;                                           // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSymbol();
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void OverrideLoaded();
		void OverrideRightClickIsTarget(class UPrimitiveComponent* Component);
		void ExecuteUbergraph_BP_ParentLogicSymbol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
