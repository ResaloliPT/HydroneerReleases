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
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PowerlineValve_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PowerlineValve_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.OverrideLogicPassedIn
	 */
	struct ABP_PowerlineValve_C_OverrideLogicPassedIn_Params
	{
	public:
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.OverrideMouseActivated
	 */
	struct ABP_PowerlineValve_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.OverridePowerPassedIn
	 */
	struct ABP_PowerlineValve_C_OverridePowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.TurnValve
	 */
	struct ABP_PowerlineValve_C_TurnValve_Params
	{
	};

	/**
	 * Function BP_PowerlineValve.BP_PowerlineValve_C.ExecuteUbergraph_BP_PowerlineValve
	 */
	struct ABP_PowerlineValve_C_ExecuteUbergraph_BP_PowerlineValve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
