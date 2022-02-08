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
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.SpawnScrap
	 */
	struct ABP_LogicExplosives_C_SpawnScrap_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.CreateHoles
	 */
	struct ABP_LogicExplosives_C_CreateHoles_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.OverrideLogicPassedIn
	 */
	struct ABP_LogicExplosives_C_OverrideLogicPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.OverrideLoaded
	 */
	struct ABP_LogicExplosives_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.OverridePlacedDown
	 */
	struct ABP_LogicExplosives_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.CheckOverlaps
	 */
	struct ABP_LogicExplosives_C_CheckOverlaps_Params
	{
	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.LoopForItems
	 */
	struct ABP_LogicExplosives_C_LoopForItems_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.OverrideDroppedItem
	 */
	struct ABP_LogicExplosives_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_LogicExplosives.BP_LogicExplosives_C.ExecuteUbergraph_BP_LogicExplosives
	 */
	struct ABP_LogicExplosives_C_ExecuteUbergraph_BP_LogicExplosives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
