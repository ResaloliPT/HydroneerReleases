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
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.FindTheRod
	 */
	struct ABP_ParentBuildStorage_C_FindTheRod_Params
	{
	public:
		class UStaticMesh*                                         SM;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_Rod_E_Rod                                                Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.FindTheFishy
	 */
	struct ABP_ParentBuildStorage_C_FindTheFishy_Params
	{
	public:
		class UStaticMesh*                                         SM;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_FishType_E_FishType                                      Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.FindEmptySpot
	 */
	struct ABP_ParentBuildStorage_C_FindEmptySpot_Params
	{
	public:
		int32_t                                                    Free_Slot;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.New Storage Item
	 */
	struct ABP_ParentBuildStorage_C_New_Storage_Item_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.RemoveItem
	 */
	struct ABP_ParentBuildStorage_C_RemoveItem_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.SpawnItemToPlayer
	 */
	struct ABP_ParentBuildStorage_C_SpawnItemToPlayer_Params
	{
	public:
		struct FS_StoredItem                                       StoredItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.OverrideLoaded
	 */
	struct ABP_ParentBuildStorage_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.OverrideMouseActivated
	 */
	struct ABP_ParentBuildStorage_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.LoadStorage
	 */
	struct ABP_ParentBuildStorage_C_LoadStorage_Params
	{
	public:
		struct FS_StoredItem                                       StoredItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Item;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.OverrideItemStored
	 */
	struct ABP_ParentBuildStorage_C_OverrideItemStored_Params
	{
	public:
		struct FS_StoredItem                                       Single_Item;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.OverrideItemWithdrawn
	 */
	struct ABP_ParentBuildStorage_C_OverrideItemWithdrawn_Params
	{
	public:
		struct FS_StoredItem                                       Single_Item;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.OverrideStorageLoaded
	 */
	struct ABP_ParentBuildStorage_C_OverrideStorageLoaded_Params
	{
	public:
		struct FS_StoredItem                                       SingleItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildStorage.BP_ParentBuildStorage_C.ExecuteUbergraph_BP_ParentBuildStorage
	 */
	struct ABP_ParentBuildStorage_C_ExecuteUbergraph_BP_ParentBuildStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
