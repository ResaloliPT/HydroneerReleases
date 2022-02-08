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
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.CastLineDown
	 */
	struct ABP_GoliathDrill_C_CastLineDown_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitDirt_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.UserConstructionScript
	 */
	struct ABP_GoliathDrill_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.Timeline_0__FinishedFunc
	 */
	struct ABP_GoliathDrill_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.Timeline_0__UpdateFunc
	 */
	struct ABP_GoliathDrill_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.Timeline_1__FinishedFunc
	 */
	struct ABP_GoliathDrill_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.Timeline_1__UpdateFunc
	 */
	struct ABP_GoliathDrill_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.OverrideWaterIn
	 */
	struct ABP_GoliathDrill_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.OverrideMouseActivated
	 */
	struct ABP_GoliathDrill_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.LightAndSpinMachine
	 */
	struct ABP_GoliathDrill_C_LightAndSpinMachine_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.SpinTimer
	 */
	struct ABP_GoliathDrill_C_SpinTimer_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.SpawnDirtNug
	 */
	struct ABP_GoliathDrill_C_SpawnDirtNug_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.SetDrillDepth
	 */
	struct ABP_GoliathDrill_C_SetDrillDepth_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.OverridePickedup
	 */
	struct ABP_GoliathDrill_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.OverrideNoWater
	 */
	struct ABP_GoliathDrill_C_OverrideNoWater_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.OverrideLoaded
	 */
	struct ABP_GoliathDrill_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_GoliathDrill.BP_GoliathDrill_C.ExecuteUbergraph_BP_GoliathDrill
	 */
	struct ABP_GoliathDrill_C_ExecuteUbergraph_BP_GoliathDrill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
