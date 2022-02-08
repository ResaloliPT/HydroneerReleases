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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.OpenCloseDoor__FinishedFunc
	 */
	struct ABP_BuildSafe_C_OpenCloseDoor__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.OpenCloseDoor__UpdateFunc
	 */
	struct ABP_BuildSafe_C_OpenCloseDoor__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.OverrideMouseActivated
	 */
	struct ABP_BuildSafe_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.ClickDoor
	 */
	struct ABP_BuildSafe_C_ClickDoor_Params
	{
	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.OverrideStorageLoaded
	 */
	struct ABP_BuildSafe_C_OverrideStorageLoaded_Params
	{
	public:
		struct FS_StoredItem                                       SingleItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.OverrideItemStored
	 */
	struct ABP_BuildSafe_C_OverrideItemStored_Params
	{
	public:
		struct FS_StoredItem                                       Single_Item;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BuildSafe.BP_BuildSafe_C.ExecuteUbergraph_BP_BuildSafe
	 */
	struct ABP_BuildSafe_C_ExecuteUbergraph_BP_BuildSafe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
