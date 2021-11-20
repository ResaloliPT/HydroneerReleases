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
//		Name   -> Function BP_FlightCap.BP_FlightCap_C.OverrideHatOn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FlightCap_C::OverrideHatOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.OverrideHatOn");

	ABP_FlightCap_C_OverrideHatOn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_FlightCap.BP_FlightCap_C.OverrideHatOff
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FlightCap_C::OverrideHatOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.OverrideHatOff");

	ABP_FlightCap_C_OverrideHatOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_FlightCap.BP_FlightCap_C.ExecuteUbergraph_BP_FlightCap
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FlightCap_C::ExecuteUbergraph_BP_FlightCap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlightCap.BP_FlightCap_C.ExecuteUbergraph_BP_FlightCap");

	ABP_FlightCap_C_ExecuteUbergraph_BP_FlightCap_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FlightCap_C::AfterRead()
{
	ABP_ParentHat_C::AfterRead();

}

void ABP_FlightCap_C::BeforeDelete()
{
	ABP_ParentHat_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
