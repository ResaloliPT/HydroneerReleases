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
	 * BlueprintGeneratedClass BP_WorldMap.BP_WorldMap_C
	 * Size -> 0x0017 (FullSize[0x03E0] - InheritedSize[0x03C9])
	 */
	class ABP_WorldMap_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_J37T[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UWidgetComponent*                                  Widget;                                                  // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


	public:

		void OverridePickedup();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void ExecuteUbergraph_BP_WorldMap(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
