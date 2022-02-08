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
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePlacedDown
	 */
	struct ABP_LogicWeightReader_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePickedup
	 */
	struct ABP_LogicWeightReader_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLoaded
	 */
	struct ABP_LogicWeightReader_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.ReceiveEndPlay
	 */
	struct ABP_LogicWeightReader_C_ReceiveEndPlay_Params
	{
	public:
		Engine_EEndPlayReason                                      EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.BndEvt__WeightDetectBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicWeightReader_C_BndEvt__WeightDetectBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideStartPlacing
	 */
	struct ABP_LogicWeightReader_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideDroppedItem
	 */
	struct ABP_LogicWeightReader_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideNewLogic
	 */
	struct ABP_LogicWeightReader_C_OverrideNewLogic_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.ExecuteUbergraph_BP_LogicWeightReader
	 */
	struct ABP_LogicWeightReader_C_ExecuteUbergraph_BP_LogicWeightReader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
