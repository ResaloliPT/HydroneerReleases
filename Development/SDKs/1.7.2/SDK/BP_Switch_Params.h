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
	 * Function BP_Switch.BP_Switch_C.SelectNext
	 */
	struct ABP_Switch_C_SelectNext_Params
	{
	};

	/**
	 * Function BP_Switch.BP_Switch_C.SelectPrevious
	 */
	struct ABP_Switch_C_SelectPrevious_Params
	{
	};

	/**
	 * Function BP_Switch.BP_Switch_C.RegisterSwitch
	 */
	struct ABP_Switch_C_RegisterSwitch_Params
	{
	};

	/**
	 * Function BP_Switch.BP_Switch_C.SetSelection
	 */
	struct ABP_Switch_C_SetSelection_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Switch.BP_Switch_C.ReceiveBeginPlay
	 */
	struct ABP_Switch_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Switch.BP_Switch_C.OnSetNodeVisibility
	 */
	struct ABP_Switch_C_OnSetNodeVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Switch.BP_Switch_C.ExecuteUbergraph_BP_Switch
	 */
	struct ABP_Switch_C_ExecuteUbergraph_BP_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
