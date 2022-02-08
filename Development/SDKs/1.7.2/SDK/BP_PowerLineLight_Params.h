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
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.UserConstructionScript
	 */
	struct ABP_PowerLineLight_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PowerLineLight_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PowerLineLight_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.Timeline_1__FinishedFunc
	 */
	struct ABP_PowerLineLight_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.Timeline_1__UpdateFunc
	 */
	struct ABP_PowerLineLight_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.OverrideLogicPassedIn
	 */
	struct ABP_PowerLineLight_C_OverrideLogicPassedIn_Params
	{
	public:
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.OverrideFirstPower
	 */
	struct ABP_PowerLineLight_C_OverrideFirstPower_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.OverrideNoPower
	 */
	struct ABP_PowerLineLight_C_OverrideNoPower_Params
	{
	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.RaiseBrightness
	 */
	struct ABP_PowerLineLight_C_RaiseBrightness_Params
	{
	public:
		bool                                                       Up_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.ChangeColor
	 */
	struct ABP_PowerLineLight_C_ChangeColor_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.OverridePowerPassedIn
	 */
	struct ABP_PowerLineLight_C_OverridePowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PowerLineLight.BP_PowerLineLight_C.ExecuteUbergraph_BP_PowerLineLight
	 */
	struct ABP_PowerLineLight_C_ExecuteUbergraph_BP_PowerLineLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
