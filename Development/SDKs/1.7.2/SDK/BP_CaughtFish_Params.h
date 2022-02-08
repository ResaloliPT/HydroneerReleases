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
	 * Function BP_CaughtFish.BP_CaughtFish_C.UserConstructionScript
	 */
	struct ABP_CaughtFish_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_CaughtFish_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.CustomEvent
	 */
	struct ABP_CaughtFish_C_CustomEvent_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.OverrideLoaded
	 */
	struct ABP_CaughtFish_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.StartHeat
	 */
	struct ABP_CaughtFish_C_StartHeat_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.StopHeat
	 */
	struct ABP_CaughtFish_C_StopHeat_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.IncreaseHeat
	 */
	struct ABP_CaughtFish_C_IncreaseHeat_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.ExecuteUbergraph_BP_CaughtFish
	 */
	struct ABP_CaughtFish_C_ExecuteUbergraph_BP_CaughtFish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
