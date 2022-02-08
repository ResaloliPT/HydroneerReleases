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
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.Timeline_0__FinishedFunc
	 */
	struct ABP_LogicCableValve_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.Timeline_0__UpdateFunc
	 */
	struct ABP_LogicCableValve_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.OverrideMouseActivated
	 */
	struct ABP_LogicCableValve_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.LogicPassedIn
	 */
	struct ABP_LogicCableValve_C_LogicPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.TurnValve
	 */
	struct ABP_LogicCableValve_C_TurnValve_Params
	{
	};

	/**
	 * Function BP_LogicCableValve.BP_LogicCableValve_C.ExecuteUbergraph_BP_LogicCableValve
	 */
	struct ABP_LogicCableValve_C_ExecuteUbergraph_BP_LogicCableValve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
