// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.OverrideWaterIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Water_Quality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Water_Pressure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PowerPressureBooster_C::OverrideWaterIn(const struct FString& Box, int Water_Quality, float Water_Pressure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.OverrideWaterIn");

	ABP_PowerPressureBooster_C_OverrideWaterIn_Params params {};
	params.Box = Box;
	params.Water_Quality = Water_Quality;
	params.Water_Pressure = Water_Pressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.PowerIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class ABP_ParentPower_C*                           Power_Source                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PowerPressureBooster_C::PowerIn(const struct FString& Box, class ABP_ParentPower_C* Power_Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.PowerIn");

	ABP_PowerPressureBooster_C_PowerIn_Params params {};
	params.Box = Box;
	params.Power_Source = Power_Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.CustomEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PowerPressureBooster_C::CustomEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.CustomEvent");

	ABP_PowerPressureBooster_C_CustomEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.ExecuteUbergraph_BP_PowerPressureBooster
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PowerPressureBooster_C::ExecuteUbergraph_BP_PowerPressureBooster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerPressureBooster.BP_PowerPressureBooster_C.ExecuteUbergraph_BP_PowerPressureBooster");

	ABP_PowerPressureBooster_C_ExecuteUbergraph_BP_PowerPressureBooster_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PowerPressureBooster_C::AfterRead()
{
	ABP_ParentWaterItem_C::AfterRead();

	READ_PTR_FULL(Pwr1, UBoxComponent);
	READ_PTR_FULL(Power_Source, ABP_ParentPower_C);
}

void ABP_PowerPressureBooster_C::BeforeDelete()
{
	ABP_ParentWaterItem_C::BeforeDelete();

	DELE_PTR_FULL(Pwr1);
	DELE_PTR_FULL(Power_Source);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
