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
	 * Function BP_DirtResource.BP_DirtResource_C.ReceiveBeginPlay
	 */
	struct ABP_DirtResource_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.OverrideLoaded
	 */
	struct ABP_DirtResource_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.Split
	 */
	struct ABP_DirtResource_C_Split_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.Cooldown
	 */
	struct ABP_DirtResource_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.UpdateSize
	 */
	struct ABP_DirtResource_C_UpdateSize_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.SetNewDirtScale
	 */
	struct ABP_DirtResource_C_SetNewDirtScale_Params
	{
	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.ReceiveTick
	 */
	struct ABP_DirtResource_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_DirtResource_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_DirtResource.BP_DirtResource_C.ExecuteUbergraph_BP_DirtResource
	 */
	struct ABP_DirtResource_C_ExecuteUbergraph_BP_DirtResource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
