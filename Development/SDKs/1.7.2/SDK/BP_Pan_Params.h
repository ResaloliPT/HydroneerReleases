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
	 * Function BP_Pan.BP_Pan_C.WakeUpObject
	 */
	struct ABP_Pan_C_WakeUpObject_Params
	{
	public:
		class ABP_ParentResource_C*                                InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.GenerateGems
	 */
	struct ABP_Pan_C_GenerateGems_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Pan_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Pan_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.Timeline_0__DropResources__EventFunc
	 */
	struct ABP_Pan_C_Timeline_0__DropResources__EventFunc_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.AddDirt
	 */
	struct ABP_Pan_C_AddDirt_Params
	{
	public:
		int32_t                                                    DirtQualityAverage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DirtLoads;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.ScrubDown
	 */
	struct ABP_Pan_C_ScrubDown_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.OverrideInWater
	 */
	struct ABP_Pan_C_OverrideInWater_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.OverrideClickNoTarget
	 */
	struct ABP_Pan_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.AddWater
	 */
	struct ABP_Pan_C_AddWater_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Pan_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Pan.BP_Pan_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Pan_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.OverrideMouseActivated
	 */
	struct ABP_Pan_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Pan.BP_Pan_C.EmptyWater
	 */
	struct ABP_Pan_C_EmptyWater_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.PlayAnimation
	 */
	struct ABP_Pan_C_PlayAnimation_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.DevTest
	 */
	struct ABP_Pan_C_DevTest_Params
	{
	};

	/**
	 * Function BP_Pan.BP_Pan_C.ExecuteUbergraph_BP_Pan
	 */
	struct ABP_Pan_C_ExecuteUbergraph_BP_Pan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
