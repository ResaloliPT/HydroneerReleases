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
	 * Function BP_Saw.BP_Saw_C.SawObject
	 */
	struct ABP_Saw_C_SawObject_Params
	{
	public:
		class ABP_ParentResource_C*                                Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Saw.BP_Saw_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Saw_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Saw.BP_Saw_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Saw_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Saw.BP_Saw_C.OverrideClickNoTarget
	 */
	struct ABP_Saw_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Saw.BP_Saw_C.Animate
	 */
	struct ABP_Saw_C_Animate_Params
	{
	};

	/**
	 * Function BP_Saw.BP_Saw_C.ExecuteUbergraph_BP_Saw
	 */
	struct ABP_Saw_C_ExecuteUbergraph_BP_Saw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
