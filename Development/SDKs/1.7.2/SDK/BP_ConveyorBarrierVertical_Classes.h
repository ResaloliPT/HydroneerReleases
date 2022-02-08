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
	 * BlueprintGeneratedClass BP_ConveyorBarrierVertical.BP_ConveyorBarrierVertical_C
	 * Size -> 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
	 */
	class ABP_ConveyorBarrierVertical_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void ExecuteUbergraph_BP_ConveyorBarrierVertical(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
