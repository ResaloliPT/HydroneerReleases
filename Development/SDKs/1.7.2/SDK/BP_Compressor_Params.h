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
	 * Function BP_Compressor.BP_Compressor_C.TrySpawnCompGem
	 */
	struct ABP_Compressor_C_TrySpawnCompGem_Params
	{
	public:
		float                                                      TotalSize;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Type;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.RemoveDust
	 */
	struct ABP_Compressor_C_RemoveDust_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.LidAnimation__FinishedFunc
	 */
	struct ABP_Compressor_C_LidAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.LidAnimation__UpdateFunc
	 */
	struct ABP_Compressor_C_LidAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.LeverAnimation__FinishedFunc
	 */
	struct ABP_Compressor_C_LeverAnimation__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.LeverAnimation__UpdateFunc
	 */
	struct ABP_Compressor_C_LeverAnimation__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.LeverAnimation__StartLid__EventFunc
	 */
	struct ABP_Compressor_C_LeverAnimation__StartLid__EventFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Compressor_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Compressor_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Compressor_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Compressor_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.Timeline_1__StartLid__EventFunc
	 */
	struct ABP_Compressor_C_Timeline_1__StartLid__EventFunc_Params
	{
	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.OverrideMouseActivated
	 */
	struct ABP_Compressor_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Compressor_C_BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_Compressor.BP_Compressor_C.BndEvt__StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Compressor_C_BndEvt__StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Compressor.BP_Compressor_C.ExecuteUbergraph_BP_Compressor
	 */
	struct ABP_Compressor_C_ExecuteUbergraph_BP_Compressor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
