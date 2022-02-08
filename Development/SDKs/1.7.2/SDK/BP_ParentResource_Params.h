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
	 * Function BP_ParentResource.BP_ParentResource_C.OverrideLoaded
	 */
	struct ABP_ParentResource_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.OverrideDroppedItem
	 */
	struct ABP_ParentResource_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.OverridePickedup
	 */
	struct ABP_ParentResource_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_ParentResource_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.AttractToMagnet
	 */
	struct ABP_ParentResource_C_AttractToMagnet_Params
	{
	public:
		class USceneComponent*                                     MagComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.MagnetTimer
	 */
	struct ABP_ParentResource_C_MagnetTimer_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.StopAttractMagnet
	 */
	struct ABP_ParentResource_C_StopAttractMagnet_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.Cooldown
	 */
	struct ABP_ParentResource_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.ReceiveBeginPlay
	 */
	struct ABP_ParentResource_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.OverrideMouseActivated
	 */
	struct ABP_ParentResource_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentResource.BP_ParentResource_C.ExecuteUbergraph_BP_ParentResource
	 */
	struct ABP_ParentResource_C_ExecuteUbergraph_BP_ParentResource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
