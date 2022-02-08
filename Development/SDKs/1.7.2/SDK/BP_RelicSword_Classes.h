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
	 * BlueprintGeneratedClass BP_RelicSword.BP_RelicSword_C
	 * Size -> 0x0008 (FullSize[0x0488] - InheritedSize[0x0480])
	 */
	class ABP_RelicSword_C : public ABP_RelicParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideDroppedItem();
		void ExecuteUbergraph_BP_RelicSword(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
