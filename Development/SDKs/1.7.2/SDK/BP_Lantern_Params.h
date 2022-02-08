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
	 * Function BP_Lantern.BP_Lantern_C.UserConstructionScript
	 */
	struct ABP_Lantern_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Lantern_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Lantern_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.OverrideClickNoTarget
	 */
	struct ABP_Lantern_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.OverrideLoaded
	 */
	struct ABP_Lantern_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.OverrideInWater
	 */
	struct ABP_Lantern_C_OverrideInWater_Params
	{
	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.OverrideMouseActivated
	 */
	struct ABP_Lantern_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
	 */
	struct ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
