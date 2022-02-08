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
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.UserConstructionScript
	 */
	struct ABP_ConveyerSplitter_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_ConveyerSplitter_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_ConveyerSplitter_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverrideMouseActivated
	 */
	struct ABP_ConveyerSplitter_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.BndEvt__CHECKER_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ConveyerSplitter_C_BndEvt__CHECKER_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.SetNewTestClass
	 */
	struct ABP_ConveyerSplitter_C_SetNewTestClass_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverrideLoaded
	 */
	struct ABP_ConveyerSplitter_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverrideWaterIn
	 */
	struct ABP_ConveyerSplitter_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.SetPitchRotation
	 */
	struct ABP_ConveyerSplitter_C_SetPitchRotation_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.SetPositionAfterLoad
	 */
	struct ABP_ConveyerSplitter_C_SetPositionAfterLoad_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverrideNoWater
	 */
	struct ABP_ConveyerSplitter_C_OverrideNoWater_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverrideFirstWater
	 */
	struct ABP_ConveyerSplitter_C_OverrideFirstWater_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.ConveyorBoxOverlapEntry
	 */
	struct ABP_ConveyerSplitter_C_ConveyorBoxOverlapEntry_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReTrigger_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.ConveyorBoxOverlapExit
	 */
	struct ABP_ConveyerSplitter_C_ConveyorBoxOverlapExit_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReTrigger_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.ConveyorBoxOverlapSplit
	 */
	struct ABP_ConveyerSplitter_C_ConveyorBoxOverlapSplit_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReTrigger_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.OverridePlacedDown
	 */
	struct ABP_ConveyerSplitter_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_ConveyerSplitter.BP_ConveyerSplitter_C.ExecuteUbergraph_BP_ConveyerSplitter
	 */
	struct ABP_ConveyerSplitter_C_ExecuteUbergraph_BP_ConveyerSplitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
