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
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType
	 */
	struct ABP_LogicSmelter_C_SetNewLiquidType_Params
	{
	public:
		E_MoltenType_E_MoltenType                                  InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass
	 */
	struct ABP_LogicSmelter_C_FindLiquidClass_Params
	{
	public:
		class ABP_ParentResource_C*                                NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_MoltenType_E_MoltenType                                  Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight
	 */
	struct ABP_LogicSmelter_C_SetLiquidHeight_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_0__Create_Bar__EventFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc
	 */
	struct ABP_LogicSmelter_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicSmelter_C_BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot
	 */
	struct ABP_LogicSmelter_C_NewItemInPot_Params
	{
	public:
		class ABP_ParentResource_C*                                Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded
	 */
	struct ABP_LogicSmelter_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup
	 */
	struct ABP_LogicSmelter_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNewLogic
	 */
	struct ABP_LogicSmelter_C_OverrideNewLogic_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors
	 */
	struct ABP_LogicSmelter_C_RotateDoors_Params
	{
	public:
		bool                                                       Open_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar
	 */
	struct ABP_LogicSmelter_C_CreateBar_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar
	 */
	struct ABP_LogicSmelter_C_TipBar_Params
	{
	public:
		bool                                                       Up_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNoPower
	 */
	struct ABP_LogicSmelter_C_OverrideNoPower_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles
	 */
	struct ABP_LogicSmelter_C_PourParticles_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame
	 */
	struct ABP_LogicSmelter_C_ToggleFlame_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.SpawnRealBar
	 */
	struct ABP_LogicSmelter_C_SpawnRealBar_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePowerIn
	 */
	struct ABP_LogicSmelter_C_OverridePowerIn_Params
	{
	public:
		class ABP_ParentPower_C*                                   Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.EmptyPowerTimer
	 */
	struct ABP_LogicSmelter_C_EmptyPowerTimer_Params
	{
	};

	/**
	 * Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter
	 */
	struct ABP_LogicSmelter_C_ExecuteUbergraph_BP_LogicSmelter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
