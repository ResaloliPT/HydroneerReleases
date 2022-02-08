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
	 * Function BP_RodTrader.BP_RodTrader_C.ChangeMeshes
	 */
	struct ABP_RodTrader_C_ChangeMeshes_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ChangeTargetFish
	 */
	struct ABP_RodTrader_C_ChangeTargetFish_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.DoWeHaveFish?
	 */
	struct ABP_RodTrader_C_DoWeHaveFish__Params
	{
	public:
		bool                                                       HaveFish_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.CalculateFishPrice
	 */
	struct ABP_RodTrader_C_CalculateFishPrice_Params
	{
	public:
		class ABP_CaughtFish_C*                                    Fish;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Cost;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Timeline_0__FinishedFunc
	 */
	struct ABP_RodTrader_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Timeline_0__UpdateFunc
	 */
	struct ABP_RodTrader_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.OverrideMouseClicked
	 */
	struct ABP_RodTrader_C_OverrideMouseClicked_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ButtonSound
	 */
	struct ABP_RodTrader_C_ButtonSound_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ReleaseTheRod
	 */
	struct ABP_RodTrader_C_ReleaseTheRod_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.SpawnRod
	 */
	struct ABP_RodTrader_C_SpawnRod_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.Animate
	 */
	struct ABP_RodTrader_C_Animate_Params
	{
	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.LoadRodTrader
	 */
	struct ABP_RodTrader_C_LoadRodTrader_Params
	{
	public:
		E_FishType_E_FishType                                      TargetFish;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_RodTrader.BP_RodTrader_C.ExecuteUbergraph_BP_RodTrader
	 */
	struct ABP_RodTrader_C_ExecuteUbergraph_BP_RodTrader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
