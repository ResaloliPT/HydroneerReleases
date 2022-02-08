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
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.WaterLineTrace
	 */
	struct ABP_ParentWaterItem_C_WaterLineTrace_Params
	{
	public:
		class USceneComponent*                                     Box;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Hit_Component;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEnd;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.CheckWaterHit
	 */
	struct ABP_ParentWaterItem_C_CheckWaterHit_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEnd;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.WaterIn
	 */
	struct ABP_ParentWaterItem_C_WaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    WaterQuality;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaterPressure;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverrideWaterIn
	 */
	struct ABP_ParentWaterItem_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.CountDownToEmpty
	 */
	struct ABP_ParentWaterItem_C_CountDownToEmpty_Params
	{
	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverrideNoWater
	 */
	struct ABP_ParentWaterItem_C_OverrideNoWater_Params
	{
	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.StackOverflowPrevention
	 */
	struct ABP_ParentWaterItem_C_StackOverflowPrevention_Params
	{
	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverrideFirstWater
	 */
	struct ABP_ParentWaterItem_C_OverrideFirstWater_Params
	{
	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverridePickedup
	 */
	struct ABP_ParentWaterItem_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverrideLogicIn
	 */
	struct ABP_ParentWaterItem_C_OverrideLogicIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Logic;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.OverrideMouseActivated
	 */
	struct ABP_ParentWaterItem_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentWaterItem.BP_ParentWaterItem_C.ExecuteUbergraph_BP_ParentWaterItem
	 */
	struct ABP_ParentWaterItem_C_ExecuteUbergraph_BP_ParentWaterItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
