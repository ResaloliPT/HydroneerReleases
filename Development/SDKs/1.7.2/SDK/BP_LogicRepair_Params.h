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
	 * Function BP_LogicRepair.BP_LogicRepair_C.Timeline_0__FinishedFunc
	 */
	struct ABP_LogicRepair_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.Timeline_0__UpdateFunc
	 */
	struct ABP_LogicRepair_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.LogicPassedIn
	 */
	struct ABP_LogicRepair_C_LogicPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.UpdateSpannersLoadedText
	 */
	struct ABP_LogicRepair_C_UpdateSpannersLoadedText_Params
	{
	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.OverrideLoaded
	 */
	struct ABP_LogicRepair_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicRepair_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicRepair.BP_LogicRepair_C.Animate
	 */
	struct ABP_LogicRepair_C_Animate_Params
	{
	};

	/**
	 * Function BP_LogicRepair.BP_LogicRepair_C.ExecuteUbergraph_BP_LogicRepair
	 */
	struct ABP_LogicRepair_C_ExecuteUbergraph_BP_LogicRepair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
