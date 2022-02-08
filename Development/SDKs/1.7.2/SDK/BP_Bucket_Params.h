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
	 * Function BP_Bucket.BP_Bucket_C.Animation__FinishedFunc
	 */
	struct ABP_Bucket_C_Animation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Animation__UpdateFunc
	 */
	struct ABP_Bucket_C_Animation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Animation__DropResources__EventFunc
	 */
	struct ABP_Bucket_C_Animation__DropResources__EventFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Bucket_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Bucket_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_1__SpawnDirt__EventFunc
	 */
	struct ABP_Bucket_C_Timeline_1__SpawnDirt__EventFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_2__FinishedFunc
	 */
	struct ABP_Bucket_C_Timeline_2__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_2__UpdateFunc
	 */
	struct ABP_Bucket_C_Timeline_2__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Timeline_2__SpawnDirt__EventFunc
	 */
	struct ABP_Bucket_C_Timeline_2__SpawnDirt__EventFunc_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Bucket_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Bucket.BP_Bucket_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Bucket_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.AddDirt
	 */
	struct ABP_Bucket_C_AddDirt_Params
	{
	public:
		int32_t                                                    DirtQuality;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DirtLoads;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.EmptyDirt
	 */
	struct ABP_Bucket_C_EmptyDirt_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.Empty Water
	 */
	struct ABP_Bucket_C_Empty_Water_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.OverrideInWater
	 */
	struct ABP_Bucket_C_OverrideInWater_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.OverrideClickNoTarget
	 */
	struct ABP_Bucket_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.EmptyDirtNoAnim
	 */
	struct ABP_Bucket_C_EmptyDirtNoAnim_Params
	{
	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.OverrideMouseActivated
	 */
	struct ABP_Bucket_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Bucket.BP_Bucket_C.ExecuteUbergraph_BP_Bucket
	 */
	struct ABP_Bucket_C_ExecuteUbergraph_BP_Bucket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
