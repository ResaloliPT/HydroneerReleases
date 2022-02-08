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
	 * Function BP_Brush.BP_Brush_C.Animation__FinishedFunc
	 */
	struct ABP_Brush_C_Animation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Brush.BP_Brush_C.Animation__UpdateFunc
	 */
	struct ABP_Brush_C_Animation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Brush.BP_Brush_C.Brushing
	 */
	struct ABP_Brush_C_Brushing_Params
	{
	};

	/**
	 * Function BP_Brush.BP_Brush_C.Reset
	 */
	struct ABP_Brush_C_Reset_Params
	{
	};

	/**
	 * Function BP_Brush.BP_Brush_C.OverrideMouseActivated
	 */
	struct ABP_Brush_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Brush.BP_Brush_C.ExecuteUbergraph_BP_Brush
	 */
	struct ABP_Brush_C_ExecuteUbergraph_BP_Brush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
