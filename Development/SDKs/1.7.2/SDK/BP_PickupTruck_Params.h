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
	 * Function BP_PickupTruck.BP_PickupTruck_C.UserConstructionScript
	 */
	struct ABP_PickupTruck_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_PickupTruck.BP_PickupTruck_C.Timeline_1__FinishedFunc
	 */
	struct ABP_PickupTruck_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PickupTruck.BP_PickupTruck_C.Timeline_1__UpdateFunc
	 */
	struct ABP_PickupTruck_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PickupTruck.BP_PickupTruck_C.BndEvt__StorageSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_PickupTruck_C_BndEvt__StorageSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_PickupTruck.BP_PickupTruck_C.OverrideEnterVehicle
	 */
	struct ABP_PickupTruck_C_OverrideEnterVehicle_Params
	{
	};

	/**
	 * Function BP_PickupTruck.BP_PickupTruck_C.OverrideExitVehicle
	 */
	struct ABP_PickupTruck_C_OverrideExitVehicle_Params
	{
	};

	/**
	 * Function BP_PickupTruck.BP_PickupTruck_C.ExecuteUbergraph_BP_PickupTruck
	 */
	struct ABP_PickupTruck_C_ExecuteUbergraph_BP_PickupTruck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
