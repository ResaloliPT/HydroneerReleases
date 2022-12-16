#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * BlueprintGeneratedClass BP_LogicDualEquals.BP_LogicDualEquals_C
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class ABP_LogicDualEquals_C : public ABP_ParentDualLogic_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient


	public:

		void OverrideLogicIn(
class USceneComponent* Component
);

		void ExecuteUbergraph_BP_LogicDualEquals(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
