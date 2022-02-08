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
	 * Function BP_Pickaxe.BP_Pickaxe_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Pickaxe_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Pickaxe_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.DigAnimation__FinishedFunc
	 */
	struct ABP_Pickaxe_C_DigAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.DigAnimation__UpdateFunc
	 */
	struct ABP_Pickaxe_C_DigAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.ReceiveTick
	 */
	struct ABP_Pickaxe_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.OverrideClickNoTarget
	 */
	struct ABP_Pickaxe_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.Animate
	 */
	struct ABP_Pickaxe_C_Animate_Params
	{
	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.OverrideMouseActivated
	 */
	struct ABP_Pickaxe_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pickaxe.BP_Pickaxe_C.ExecuteUbergraph_BP_Pickaxe
	 */
	struct ABP_Pickaxe_C_ExecuteUbergraph_BP_Pickaxe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
