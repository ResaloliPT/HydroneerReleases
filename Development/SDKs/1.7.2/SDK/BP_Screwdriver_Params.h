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
	 * Function BP_Screwdriver.BP_Screwdriver_C.DigAnimation__FinishedFunc
	 */
	struct ABP_Screwdriver_C_DigAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Screwdriver.BP_Screwdriver_C.DigAnimation__UpdateFunc
	 */
	struct ABP_Screwdriver_C_DigAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Screwdriver.BP_Screwdriver_C.Reset
	 */
	struct ABP_Screwdriver_C_Reset_Params
	{
	};

	/**
	 * Function BP_Screwdriver.BP_Screwdriver_C.OverrideClickNoTarget
	 */
	struct ABP_Screwdriver_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Screwdriver.BP_Screwdriver_C.ExecuteUbergraph_BP_Screwdriver
	 */
	struct ABP_Screwdriver_C_ExecuteUbergraph_BP_Screwdriver_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
