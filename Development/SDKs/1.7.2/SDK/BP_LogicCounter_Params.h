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
	 * Function BP_LogicCounter.BP_LogicCounter_C.OverrideLoaded
	 */
	struct ABP_LogicCounter_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicCounter.BP_LogicCounter_C.OverridePlacedDown
	 */
	struct ABP_LogicCounter_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_LogicCounter.BP_LogicCounter_C.OverrideStartPlacing
	 */
	struct ABP_LogicCounter_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_LogicCounter.BP_LogicCounter_C.OverrideDroppedItem
	 */
	struct ABP_LogicCounter_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_LogicCounter.BP_LogicCounter_C.BndEvt__CHECKER_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicCounter_C_BndEvt__CHECKER_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicCounter.BP_LogicCounter_C.OverrideNewLogic
	 */
	struct ABP_LogicCounter_C_OverrideNewLogic_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicCounter.BP_LogicCounter_C.ExecuteUbergraph_BP_LogicCounter
	 */
	struct ABP_LogicCounter_C_ExecuteUbergraph_BP_LogicCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
