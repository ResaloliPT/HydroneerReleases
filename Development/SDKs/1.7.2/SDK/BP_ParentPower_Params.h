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
	 * Function BP_ParentPower.BP_ParentPower_C.PowerTraceLine
	 */
	struct ABP_ParentPower_C_PowerTraceLine_Params
	{
	public:
		class USceneComponent*                                     Box;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Hit_Box;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             End_Trace;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.TryPassPower
	 */
	struct ABP_ParentPower_C_TryPassPower_Params
	{
	public:
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Hit_Box;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Trace_End;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ParentPower_C*                                   PowerSource;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.ClearLegs
	 */
	struct ABP_ParentPower_C_ClearLegs_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.LegCheck
	 */
	struct ABP_ParentPower_C_LegCheck_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverridePlacedDown
	 */
	struct ABP_ParentPower_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideLoaded
	 */
	struct ABP_ParentPower_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverridePickedup
	 */
	struct ABP_ParentPower_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideNeighbourChecked
	 */
	struct ABP_ParentPower_C_OverrideNeighbourChecked_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.EmptyPowerTimer
	 */
	struct ABP_ParentPower_C_EmptyPowerTimer_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverridePowerPassedIn
	 */
	struct ABP_ParentPower_C_OverridePowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideNoPower
	 */
	struct ABP_ParentPower_C_OverrideNoPower_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideFirstPower
	 */
	struct ABP_ParentPower_C_OverrideFirstPower_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideLogicPassedIn
	 */
	struct ABP_ParentPower_C_OverrideLogicPassedIn_Params
	{
	public:
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.PowerPassedIn
	 */
	struct ABP_ParentPower_C_PowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ABP_ParentPower_C*                                   Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.SapPower
	 */
	struct ABP_ParentPower_C_SapPower_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.OverrideMouseActivated
	 */
	struct ABP_ParentPower_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.StackOverflowPrevention
	 */
	struct ABP_ParentPower_C_StackOverflowPrevention_Params
	{
	};

	/**
	 * Function BP_ParentPower.BP_ParentPower_C.ExecuteUbergraph_BP_ParentPower
	 */
	struct ABP_ParentPower_C_ExecuteUbergraph_BP_ParentPower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
