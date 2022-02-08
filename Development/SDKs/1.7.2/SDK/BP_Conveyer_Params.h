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
	 * Function BP_Conveyer.BP_Conveyer_C.UserConstructionScript
	 */
	struct ABP_Conveyer_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Conveyer_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Conveyer_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverrideWaterIn
	 */
	struct ABP_Conveyer_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.ReceiveBeginPlay
	 */
	struct ABP_Conveyer_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.BndEvt__ConveyerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Conveyer_C_BndEvt__ConveyerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Conveyer.BP_Conveyer_C.BndEvt__ConveyerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Conveyer_C_BndEvt__ConveyerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.ConvyerLoop
	 */
	struct ABP_Conveyer_C_ConvyerLoop_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverrideMouseActivated
	 */
	struct ABP_Conveyer_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverrideLoaded
	 */
	struct ABP_Conveyer_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverrideNoWater
	 */
	struct ABP_Conveyer_C_OverrideNoWater_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverrideFirstWater
	 */
	struct ABP_Conveyer_C_OverrideFirstWater_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.ConveyorBoxOverlap
	 */
	struct ABP_Conveyer_C_ConveyorBoxOverlap_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReTrigger_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.OverridePlacedDown
	 */
	struct ABP_Conveyer_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_Conveyer.BP_Conveyer_C.ExecuteUbergraph_BP_Conveyer
	 */
	struct ABP_Conveyer_C_ExecuteUbergraph_BP_Conveyer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
