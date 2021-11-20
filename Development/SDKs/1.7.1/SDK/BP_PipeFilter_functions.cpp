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
//		Name   -> Function BP_PipeFilter.BP_PipeFilter_C.OverrideWaterIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Water_Quality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Water_Pressure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PipeFilter_C::OverrideWaterIn(const struct FString& Box, int Water_Quality, float Water_Pressure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PipeFilter.BP_PipeFilter_C.OverrideWaterIn");

	ABP_PipeFilter_C_OverrideWaterIn_Params params {};
	params.Box = Box;
	params.Water_Quality = Water_Quality;
	params.Water_Pressure = Water_Pressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PipeFilter.BP_PipeFilter_C.ExecuteUbergraph_BP_PipeFilter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PipeFilter_C::ExecuteUbergraph_BP_PipeFilter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PipeFilter.BP_PipeFilter_C.ExecuteUbergraph_BP_PipeFilter");

	ABP_PipeFilter_C_ExecuteUbergraph_BP_PipeFilter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PipeFilter_C::AfterRead()
{
	ABP_ParentWaterItemDurability_C::AfterRead();

}

void ABP_PipeFilter_C::BeforeDelete()
{
	ABP_ParentWaterItemDurability_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
