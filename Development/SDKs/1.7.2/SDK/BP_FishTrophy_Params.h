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
	 * Function BP_FishTrophy.BP_FishTrophy_C.SizeItemUp
	 */
	struct ABP_FishTrophy_C_SizeItemUp_Params
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FishTrophy.BP_FishTrophy_C.OverrideStorageLoaded
	 */
	struct ABP_FishTrophy_C_OverrideStorageLoaded_Params
	{
	public:
		struct FS_StoredItem                                       SingleItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FishTrophy.BP_FishTrophy_C.OverrideItemStored
	 */
	struct ABP_FishTrophy_C_OverrideItemStored_Params
	{
	public:
		struct FS_StoredItem                                       Single_Item;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_FishTrophy.BP_FishTrophy_C.ExecuteUbergraph_BP_FishTrophy
	 */
	struct ABP_FishTrophy_C_ExecuteUbergraph_BP_FishTrophy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
