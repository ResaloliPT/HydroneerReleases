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
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad
	 */
	struct ABP_DayNightCycle_C_SetDayModePostLoad_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode
	 */
	struct ABP_DayNightCycle_C_SetDayMode_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay
	 */
	struct ABP_DayNightCycle_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise
	 */
	struct ABP_DayNightCycle_C_SpeedUpToSunrise_Params
	{
	public:
		class ABP_BuildBed_C*                                      Bed;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck
	 */
	struct ABP_DayNightCycle_C_SunRiseTimerCheck_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate
	 */
	struct ABP_DayNightCycle_C_SetNewRate_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.PostLoad
	 */
	struct ABP_DayNightCycle_C_PostLoad_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.Update
	 */
	struct ABP_DayNightCycle_C_Update_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle
	 */
	struct ABP_DayNightCycle_C_ExecuteUbergraph_BP_DayNightCycle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
