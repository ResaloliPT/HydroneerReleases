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
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.CheckForSpace
	 */
	struct ABP_PoweredDAVID_C_CheckForSpace_Params
	{
	public:
		bool                                                       CanPumpOutDirt_;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.TurnOn
	 */
	struct ABP_PoweredDAVID_C_TurnOn_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.SpawnDirt
	 */
	struct ABP_PoweredDAVID_C_SpawnDirt_Params
	{
	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.SpinnyTimer
	 */
	struct ABP_PoweredDAVID_C_SpinnyTimer_Params
	{
	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.OverridePowerPassedIn
	 */
	struct ABP_PoweredDAVID_C_OverridePowerPassedIn_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.OverrideNoPower
	 */
	struct ABP_PoweredDAVID_C_OverrideNoPower_Params
	{
	};

	/**
	 * Function BP_PoweredDAVID.BP_PoweredDAVID_C.ExecuteUbergraph_BP_PoweredDAVID
	 */
	struct ABP_PoweredDAVID_C_ExecuteUbergraph_BP_PoweredDAVID_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
