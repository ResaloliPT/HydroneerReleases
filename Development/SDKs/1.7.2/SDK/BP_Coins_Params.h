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
	 * Function BP_Coins.BP_Coins_C.CheckForCostumeChange
	 */
	struct ABP_Coins_C_CheckForCostumeChange_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.OverrideHighlighted
	 */
	struct ABP_Coins_C_OverrideHighlighted_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.OverrideUnhighlighted
	 */
	struct ABP_Coins_C_OverrideUnhighlighted_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Coins_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_Coins.BP_Coins_C.RemoveCoins
	 */
	struct ABP_Coins_C_RemoveCoins_Params
	{
	public:
		int32_t                                                    AmountToRemove;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Coins.BP_Coins_C.CustomEvent
	 */
	struct ABP_Coins_C_CustomEvent_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.ReceiveBeginPlay
	 */
	struct ABP_Coins_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.PlayCoinSound
	 */
	struct ABP_Coins_C_PlayCoinSound_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.RestackCoins
	 */
	struct ABP_Coins_C_RestackCoins_Params
	{
	public:
		TArray<class ABP_Coins_C*>                                 Coins;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

	};

	/**
	 * Function BP_Coins.BP_Coins_C.CombineCoins
	 */
	struct ABP_Coins_C_CombineCoins_Params
	{
	public:
		class ABP_Coins_C*                                         OtherCoins;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Coins.BP_Coins_C.OverrideLoaded
	 */
	struct ABP_Coins_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.Split
	 */
	struct ABP_Coins_C_Split_Params
	{
	};

	/**
	 * Function BP_Coins.BP_Coins_C.ExecuteUbergraph_BP_Coins
	 */
	struct ABP_Coins_C_ExecuteUbergraph_BP_Coins_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
