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
	 * Function BP_PipeValve.BP_PipeValve_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PipeValve_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PipeValve.BP_PipeValve_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PipeValve_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PipeValve.BP_PipeValve_C.OverrideWaterIn
	 */
	struct ABP_PipeValve_C_OverrideWaterIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Water_Quality;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Water_Pressure;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PipeValve.BP_PipeValve_C.OverrideMouseActivated
	 */
	struct ABP_PipeValve_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PipeValve.BP_PipeValve_C.OverrideLoaded
	 */
	struct ABP_PipeValve_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_PipeValve.BP_PipeValve_C.ExecuteUbergraph_BP_PipeValve
	 */
	struct ABP_PipeValve_C_ExecuteUbergraph_BP_PipeValve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
