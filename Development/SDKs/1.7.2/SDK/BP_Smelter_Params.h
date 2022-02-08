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
	 * Function BP_Smelter.BP_Smelter_C.CreateBar
	 */
	struct ABP_Smelter_C_CreateBar_Params
	{
	public:
		class UClass*                                              Bar;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.SetLiquidHeight
	 */
	struct ABP_Smelter_C_SetLiquidHeight_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.SetNewLiquidType
	 */
	struct ABP_Smelter_C_SetNewLiquidType_Params
	{
	public:
		E_MoltenType_E_MoltenType                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OreContent;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.FindLiquidClass
	 */
	struct ABP_Smelter_C_FindLiquidClass_Params
	{
	public:
		class ABP_ParentResource_C*                                Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_MoltenType_E_MoltenType                                  Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Smelter_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Smelter_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.OverridePickedup
	 */
	struct ABP_Smelter_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.OverrideLoaded
	 */
	struct ABP_Smelter_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.OverrideMouseActivated
	 */
	struct ABP_Smelter_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.OverridePlacedDown
	 */
	struct ABP_Smelter_C_OverridePlacedDown_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.NewItemInPot
	 */
	struct ABP_Smelter_C_NewItemInPot_Params
	{
	public:
		class ABP_ParentResource_C*                                Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Smelter_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Smelter.BP_Smelter_C.SpawnBar
	 */
	struct ABP_Smelter_C_SpawnBar_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.PlayPourAnim
	 */
	struct ABP_Smelter_C_PlayPourAnim_Params
	{
	};

	/**
	 * Function BP_Smelter.BP_Smelter_C.ExecuteUbergraph_BP_Smelter
	 */
	struct ABP_Smelter_C_ExecuteUbergraph_BP_Smelter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
