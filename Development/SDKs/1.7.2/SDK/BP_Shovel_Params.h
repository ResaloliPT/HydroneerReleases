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
	 * Function BP_Shovel.BP_Shovel_C.DigAnimation__FinishedFunc
	 */
	struct ABP_Shovel_C_DigAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.DigAnimation__UpdateFunc
	 */
	struct ABP_Shovel_C_DigAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.ThrowOutAnimation__FinishedFunc
	 */
	struct ABP_Shovel_C_ThrowOutAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.ThrowOutAnimation__UpdateFunc
	 */
	struct ABP_Shovel_C_ThrowOutAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Shovel_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Shovel_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.SetDirt
	 */
	struct ABP_Shovel_C_SetDirt_Params
	{
	public:
		bool                                                       SetDirt_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quality;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.OverrideClickNoTarget
	 */
	struct ABP_Shovel_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.OverrideMouseActivated
	 */
	struct ABP_Shovel_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Shovel.BP_Shovel_C.ExecuteUbergraph_BP_Shovel
	 */
	struct ABP_Shovel_C_ExecuteUbergraph_BP_Shovel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
