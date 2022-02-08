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
	 * BlueprintGeneratedClass BP_ThatchCorner1.BP_ThatchCorner1_C
	 * Size -> 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
	 */
	class ABP_ThatchCorner1_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void ExecuteUbergraph_BP_ThatchCorner1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
