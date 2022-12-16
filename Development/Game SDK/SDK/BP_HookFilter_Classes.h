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
	 * BlueprintGeneratedClass BP_HookFilter.BP_HookFilter_C
	 * Size -> 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
	 */
	class ABP_HookFilter_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Durability_C*                                  AC_Durability;                                           // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void ReturnDurability(
float DurabilityAmount
);

		void TryRepair(
class ABP_ParentItem_C* RepairingTool
);

		void DoneRepair();

		void FindDurability(
class ABP_ParentItem_C* Item
);

		void ExecuteUbergraph_BP_HookFilter(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
