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
	 * Function BP_Rod.BP_Rod_C.CreateDynamicRodMats
	 */
	struct ABP_Rod_C_CreateDynamicRodMats_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.UserConstructionScript
	 */
	struct ABP_Rod_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.Animation__FinishedFunc
	 */
	struct ABP_Rod_C_Animation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.Animation__UpdateFunc
	 */
	struct ABP_Rod_C_Animation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.OverrideClickNoTarget
	 */
	struct ABP_Rod_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rod.BP_Rod_C.BndEvt__Bobber_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Rod_C_BndEvt__Bobber_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_Rod.BP_Rod_C.Bobbing
	 */
	struct ABP_Rod_C_Bobbing_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.StartFishing
	 */
	struct ABP_Rod_C_StartFishing_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.StopFishing
	 */
	struct ABP_Rod_C_StopFishing_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.SpawnFish
	 */
	struct ABP_Rod_C_SpawnFish_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.OverrideRightClickNoTarget
	 */
	struct ABP_Rod_C_OverrideRightClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rod.BP_Rod_C.OverrideDroppedItem
	 */
	struct ABP_Rod_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_Rod.BP_Rod_C.OverrideMouseActivated
	 */
	struct ABP_Rod_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Rod.BP_Rod_C.ExecuteUbergraph_BP_Rod
	 */
	struct ABP_Rod_C_ExecuteUbergraph_BP_Rod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
