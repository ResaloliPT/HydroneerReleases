#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.OverrideWaterIn
struct ABP_PowerPressureBooster_C_OverrideWaterIn_Params
{
	struct FString                                     Box;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Water_Quality;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Water_Pressure;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.PowerIn
struct ABP_PowerPressureBooster_C_PowerIn_Params
{
	struct FString                                     Box;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_ParentPower_C*                           Power_Source;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.CustomEvent
struct ABP_PowerPressureBooster_C_CustomEvent_Params
{
};

// Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.ExecuteUbergraph_BP_PowerPressureBooster
struct ABP_PowerPressureBooster_C_ExecuteUbergraph_BP_PowerPressureBooster_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
