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
	 * Function BP_PaintBrush.BP_PaintBrush_C.Animation__FinishedFunc
	 */
	struct ABP_PaintBrush_C_Animation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.Animation__UpdateFunc
	 */
	struct ABP_PaintBrush_C_Animation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PaintBrush_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PaintBrush_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.Reset
	 */
	struct ABP_PaintBrush_C_Reset_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.SetNewColor
	 */
	struct ABP_PaintBrush_C_SetNewColor_Params
	{
	public:
		E_PaintColor_E_PaintColor                                  Color;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.OverrideMouseActivated
	 */
	struct ABP_PaintBrush_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.OverrideClickNoTarget
	 */
	struct ABP_PaintBrush_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.DippingAnimation
	 */
	struct ABP_PaintBrush_C_DippingAnimation_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.Reset2
	 */
	struct ABP_PaintBrush_C_Reset2_Params
	{
	};

	/**
	 * Function BP_PaintBrush.BP_PaintBrush_C.ExecuteUbergraph_BP_PaintBrush
	 */
	struct ABP_PaintBrush_C_ExecuteUbergraph_BP_PaintBrush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
