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
	 * Function BP_Crucible.BP_Crucible_C.FindTestClass
	 */
	struct ABP_Crucible_C_FindTestClass_Params
	{
	public:
		E_MoltenType_E_MoltenType                                  CurrentMoltenType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_ParentResource_C*>                        Class;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    BarOut;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.UserConstructionScript
	 */
	struct ABP_Crucible_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.Timeline_4__FinishedFunc
	 */
	struct ABP_Crucible_C_Timeline_4__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.Timeline_4__UpdateFunc
	 */
	struct ABP_Crucible_C_Timeline_4__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Crucible_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Crucible.BP_Crucible_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Crucible_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.StartHeat
	 */
	struct ABP_Crucible_C_StartHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.StopHeat
	 */
	struct ABP_Crucible_C_StopHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.IncreaseHeat
	 */
	struct ABP_Crucible_C_IncreaseHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.DecreaseHeat
	 */
	struct ABP_Crucible_C_DecreaseHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.SpawnBar
	 */
	struct ABP_Crucible_C_SpawnBar_Params
	{
	public:
		class ABP_Mould_C*                                         Mould;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.Reset
	 */
	struct ABP_Crucible_C_Reset_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.FullHeat
	 */
	struct ABP_Crucible_C_FullHeat_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.RemoveFromContainList
	 */
	struct ABP_Crucible_C_RemoveFromContainList_Params
	{
	public:
		class ABP_ParentResource_C*                                Resource_Item;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OverrideInWater
	 */
	struct ABP_Crucible_C_OverrideInWater_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OverrideMouseActivated
	 */
	struct ABP_Crucible_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.AddToStored
	 */
	struct ABP_Crucible_C_AddToStored_Params
	{
	public:
		class ABP_ParentResource_C*                                NewItem;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.ReceiveTick
	 */
	struct ABP_Crucible_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OverrideClickNoTarget
	 */
	struct ABP_Crucible_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.PlayPourAnim
	 */
	struct ABP_Crucible_C_PlayPourAnim_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.OverrideLoaded
	 */
	struct ABP_Crucible_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.SetLiquidHeight
	 */
	struct ABP_Crucible_C_SetLiquidHeight_Params
	{
	};

	/**
	 * Function BP_Crucible.BP_Crucible_C.ExecuteUbergraph_BP_Crucible
	 */
	struct ABP_Crucible_C_ExecuteUbergraph_BP_Crucible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
