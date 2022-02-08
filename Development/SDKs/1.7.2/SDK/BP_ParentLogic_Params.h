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
	 * Function BP_ParentLogic.BP_ParentLogic_C.TryPassLogic
	 */
	struct ABP_ParentLogic_C_TryPassLogic_Params
	{
	public:
		class UObject*                                             Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Hit_Box;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Trace_End;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Logic_To_Pass;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.LogicLineTrace
	 */
	struct ABP_ParentLogic_C_LogicLineTrace_Params
	{
	public:
		class USceneComponent*                                     LogicBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Hit_Box;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             Trace_End;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.ClearLegs
	 */
	struct ABP_ParentLogic_C_ClearLegs_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.LegCheck
	 */
	struct ABP_ParentLogic_C_LegCheck_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverridePlacedDown
	 */
	struct ABP_ParentLogic_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideLoaded
	 */
	struct ABP_ParentLogic_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverridePickedup
	 */
	struct ABP_ParentLogic_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideNeighbourChecked
	 */
	struct ABP_ParentLogic_C_OverrideNeighbourChecked_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideLogicPassedIn
	 */
	struct ABP_ParentLogic_C_OverrideLogicPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.LogicPassedIn
	 */
	struct ABP_ParentLogic_C_LogicPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideNewLogic
	 */
	struct ABP_ParentLogic_C_OverrideNewLogic_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.PowerIn
	 */
	struct ABP_ParentLogic_C_PowerIn_Params
	{
	public:
		class ABP_ParentPower_C*                                   Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.EmptyPowerTimer
	 */
	struct ABP_ParentLogic_C_EmptyPowerTimer_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideFirstPower
	 */
	struct ABP_ParentLogic_C_OverrideFirstPower_Params
	{
	public:
		class ABP_ParentPower_C*                                   Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideNoPower
	 */
	struct ABP_ParentLogic_C_OverrideNoPower_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverridePowerIn
	 */
	struct ABP_ParentLogic_C_OverridePowerIn_Params
	{
	public:
		class ABP_ParentPower_C*                                   Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.OverrideMouseActivated
	 */
	struct ABP_ParentLogic_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.StackOverflowPrevention
	 */
	struct ABP_ParentLogic_C_StackOverflowPrevention_Params
	{
	};

	/**
	 * Function BP_ParentLogic.BP_ParentLogic_C.ExecuteUbergraph_BP_ParentLogic
	 */
	struct ABP_ParentLogic_C_ExecuteUbergraph_BP_ParentLogic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
