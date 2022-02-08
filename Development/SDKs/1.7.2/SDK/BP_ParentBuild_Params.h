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
	 * Function BP_ParentBuild.BP_ParentBuild_C.CheckForNeighbours
	 */
	struct ABP_ParentBuild_C_CheckForNeighbours_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.UnderGroundTest
	 */
	struct ABP_ParentBuild_C_UnderGroundTest_Params
	{
	public:
		bool                                                       CanPlace_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ResetAdditionalMaterials
	 */
	struct ABP_ParentBuild_C_ResetAdditionalMaterials_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.SetAdditionalMaterials
	 */
	struct ABP_ParentBuild_C_SetAdditionalMaterials_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.TouchVoxelTest
	 */
	struct ABP_ParentBuild_C_TouchVoxelTest_Params
	{
	public:
		bool                                                       TouchingSomething;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.TouchAnythingTest
	 */
	struct ABP_ParentBuild_C_TouchAnythingTest_Params
	{
	public:
		bool                                                       TouchingSomething;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideClickNoTarget
	 */
	struct ABP_ParentBuild_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ReceiveBeginPlay
	 */
	struct ABP_ParentBuild_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideDroppedItem
	 */
	struct ABP_ParentBuild_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverridePlacedDown
	 */
	struct ABP_ParentBuild_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.BndEvt__CollisionTestBlock_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentBuild_C_BndEvt__CollisionTestBlock_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_ParentBuild.BP_ParentBuild_C.BndEvt__CollisionTestBlock_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentBuild_C_BndEvt__CollisionTestBlock_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.LOCK
	 */
	struct ABP_ParentBuild_C_LOCK_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_ParentBuild_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.Cooldown
	 */
	struct ABP_ParentBuild_C_Cooldown_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverridePickedup
	 */
	struct ABP_ParentBuild_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideStartPlacing
	 */
	struct ABP_ParentBuild_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.FlashingRed
	 */
	struct ABP_ParentBuild_C_FlashingRed_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.FlashRed
	 */
	struct ABP_ParentBuild_C_FlashRed_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideNeighbourChecked
	 */
	struct ABP_ParentBuild_C_OverrideNeighbourChecked_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.OverrideMouseActivated
	 */
	struct ABP_ParentBuild_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.PlacingTimer
	 */
	struct ABP_ParentBuild_C_PlacingTimer_Params
	{
	};

	/**
	 * Function BP_ParentBuild.BP_ParentBuild_C.ExecuteUbergraph_BP_ParentBuild
	 */
	struct ABP_ParentBuild_C_ExecuteUbergraph_BP_ParentBuild_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
