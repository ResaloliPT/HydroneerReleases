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
	 * Function BP_Excavator.BP_Excavator_C.UserConstructionScript
	 */
	struct ABP_Excavator_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.SlowStop__FinishedFunc
	 */
	struct ABP_Excavator_C_SlowStop__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.SlowStop__UpdateFunc
	 */
	struct ABP_Excavator_C_SlowStop__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Excavator_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Excavator_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.SpinDrum
	 */
	struct ABP_Excavator_C_SpinDrum_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.OverrideRMB
	 */
	struct ABP_Excavator_C_OverrideRMB_Params
	{
	public:
		bool                                                       Down_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.OverrideLMB
	 */
	struct ABP_Excavator_C_OverrideLMB_Params
	{
	public:
		bool                                                       Down_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.OverrideExitVehicle
	 */
	struct ABP_Excavator_C_OverrideExitVehicle_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.ArmTimer
	 */
	struct ABP_Excavator_C_ArmTimer_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Excavator_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Excavator.BP_Excavator_C.CheckDirt
	 */
	struct ABP_Excavator_C_CheckDirt_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.AddDirt
	 */
	struct ABP_Excavator_C_AddDirt_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.PostLoad
	 */
	struct ABP_Excavator_C_PostLoad_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.OverrideActionKey
	 */
	struct ABP_Excavator_C_OverrideActionKey_Params
	{
	public:
		bool                                                       Down_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.SpitDirt
	 */
	struct ABP_Excavator_C_SpitDirt_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.RemoveDirt
	 */
	struct ABP_Excavator_C_RemoveDirt_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.OverrideEnterVehicle
	 */
	struct ABP_Excavator_C_OverrideEnterVehicle_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.FlickCollision
	 */
	struct ABP_Excavator_C_FlickCollision_Params
	{
	};

	/**
	 * Function BP_Excavator.BP_Excavator_C.ExecuteUbergraph_BP_Excavator
	 */
	struct ABP_Excavator_C_ExecuteUbergraph_BP_Excavator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
