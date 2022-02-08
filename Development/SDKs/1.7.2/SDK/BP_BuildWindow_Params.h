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
	 * Function BP_BuildWindow.BP_BuildWindow_C.OverridePlacedDown
	 */
	struct ABP_BuildWindow_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_BuildWindow.BP_BuildWindow_C.OverrideDroppedItem
	 */
	struct ABP_BuildWindow_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_BuildWindow.BP_BuildWindow_C.OverridePickedup
	 */
	struct ABP_BuildWindow_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_BuildWindow.BP_BuildWindow_C.OverrideMouseActivated
	 */
	struct ABP_BuildWindow_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BuildWindow.BP_BuildWindow_C.ExecuteUbergraph_BP_BuildWindow
	 */
	struct ABP_BuildWindow_C_ExecuteUbergraph_BP_BuildWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
