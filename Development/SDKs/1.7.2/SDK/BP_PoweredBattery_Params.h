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
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.SetVisPowerLevel
	 */
	struct ABP_PoweredBattery_C_SetVisPowerLevel_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OverrideLoaded
	 */
	struct ABP_PoweredBattery_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OverridePickedup
	 */
	struct ABP_PoweredBattery_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OverrideDroppedItem
	 */
	struct ABP_PoweredBattery_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OverridePowerPassedIn
	 */
	struct ABP_PoweredBattery_C_OverridePowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.SapPower
	 */
	struct ABP_PoweredBattery_C_SapPower_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.AddPower
	 */
	struct ABP_PoweredBattery_C_AddPower_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OverridePlacedDown
	 */
	struct ABP_PoweredBattery_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.OutputTimer
	 */
	struct ABP_PoweredBattery_C_OutputTimer_Params
	{
	};

	/**
	 * Function BP_PoweredBattery.BP_PoweredBattery_C.ExecuteUbergraph_BP_PoweredBattery
	 */
	struct ABP_PoweredBattery_C_ExecuteUbergraph_BP_PoweredBattery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
