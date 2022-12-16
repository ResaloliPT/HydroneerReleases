﻿#pragma once

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
	 * BlueprintGeneratedClass BP_HydroTruck_MK2.BP_HydroTruck_MK2_C
	 * Size -> 0x0009 (FullSize[0x07B1] - InheritedSize[0x07A8])
	 */
	class ABP_HydroTruck_MK2_C : public ABP_HydroTruck_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x07A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		E_PaintTruck                                             Paint;                                                   // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


	public:

		void UserConstructionScript();

		void ActorLoaded();

		void ExecuteUbergraph_BP_HydroTruck_MK2(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
