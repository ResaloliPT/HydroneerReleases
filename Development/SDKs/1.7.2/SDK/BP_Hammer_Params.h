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
	 * Function BP_Hammer.BP_Hammer_C.DigAnimation__FinishedFunc
	 */
	struct ABP_Hammer_C_DigAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Hammer.BP_Hammer_C.DigAnimation__UpdateFunc
	 */
	struct ABP_Hammer_C_DigAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Hammer.BP_Hammer_C.Reset
	 */
	struct ABP_Hammer_C_Reset_Params
	{
	};

	/**
	 * Function BP_Hammer.BP_Hammer_C.Swing
	 */
	struct ABP_Hammer_C_Swing_Params
	{
	public:
		class ABP_Anvil_C*                                         Anvil;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Hammer.BP_Hammer_C.OverrideMouseActivated
	 */
	struct ABP_Hammer_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Hammer.BP_Hammer_C.ExecuteUbergraph_BP_Hammer
	 */
	struct ABP_Hammer_C_ExecuteUbergraph_BP_Hammer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
