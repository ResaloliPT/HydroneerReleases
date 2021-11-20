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
//		Name   -> Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.OverrideWaterIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Water_Quality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Water_Pressure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PressureGaugePipe_C::OverrideWaterIn(const struct FString& Box, int Water_Quality, float Water_Pressure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.OverrideWaterIn");

	ABP_PressureGaugePipe_C_OverrideWaterIn_Params params {};
	params.Box = Box;
	params.Water_Quality = Water_Quality;
	params.Water_Pressure = Water_Pressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.UpdatePressure
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewPressure                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PressureGaugePipe_C::UpdatePressure(float NewPressure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.UpdatePressure");

	ABP_PressureGaugePipe_C_UpdatePressure_Params params {};
	params.NewPressure = NewPressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.ExecuteUbergraph_BP_PressureGaugePipe
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PressureGaugePipe_C::ExecuteUbergraph_BP_PressureGaugePipe(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PressureGaugePipe.BP_PressureGaugePipe_C.ExecuteUbergraph_BP_PressureGaugePipe");

	ABP_PressureGaugePipe_C_ExecuteUbergraph_BP_PressureGaugePipe_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PressureGaugePipe_C::AfterRead()
{
	ABP_ParentWaterItem_C::AfterRead();

	READ_PTR_FULL(Needle, UStaticMeshComponent);
	READ_PTR_FULL(NeedleScene, USceneComponent);
}

void ABP_PressureGaugePipe_C::BeforeDelete()
{
	ABP_ParentWaterItem_C::BeforeDelete();

	DELE_PTR_FULL(Needle);
	DELE_PTR_FULL(NeedleScene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
