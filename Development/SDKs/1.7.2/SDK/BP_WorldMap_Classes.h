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
	 * BlueprintGeneratedClass BP_WorldMap.BP_WorldMap_C
	 * Size -> 0x0010 (FullSize[0x04A0] - InheritedSize[0x0490])
	 */
	class ABP_WorldMap_C : public ABP_ParentTool_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void ExecuteUbergraph_BP_WorldMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
