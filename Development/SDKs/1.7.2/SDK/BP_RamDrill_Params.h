﻿#pragma once

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
	 * Function BP_RamDrill.BP_RamDrill_C.CastLineDown
	 */
	struct ABP_RamDrill_C_CastLineDown_Params
	{
	public:
		bool                                                       HitDirt_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.Animation__FinishedFunc
	 */
	struct ABP_RamDrill_C_Animation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.Animation__UpdateFunc
	 */
	struct ABP_RamDrill_C_Animation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.Timeline_0__FinishedFunc
	 */
	struct ABP_RamDrill_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.Timeline_0__UpdateFunc
	 */
	struct ABP_RamDrill_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.OverrideWaterIn
	 */
	struct ABP_RamDrill_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.Cooldown
	 */
	struct ABP_RamDrill_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.OverrideMouseActivated
	 */
	struct ABP_RamDrill_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.OverrideLoaded
	 */
	struct ABP_RamDrill_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_RamDrill.BP_RamDrill_C.ExecuteUbergraph_BP_RamDrill
	 */
	struct ABP_RamDrill_C_ExecuteUbergraph_BP_RamDrill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif