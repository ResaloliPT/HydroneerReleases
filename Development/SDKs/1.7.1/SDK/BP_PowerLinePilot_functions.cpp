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
//		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideFirstPower
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PowerLinePilot_C::OverrideFirstPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideFirstPower");

	ABP_PowerLinePilot_C_OverrideFirstPower_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideNoPower
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_PowerLinePilot_C::OverrideNoPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.OverrideNoPower");

	ABP_PowerLinePilot_C_OverrideNoPower_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerLinePilot.BP_PowerLinePilot_C.ExecuteUbergraph_BP_PowerLinePilot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PowerLinePilot_C::ExecuteUbergraph_BP_PowerLinePilot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerLinePilot.BP_PowerLinePilot_C.ExecuteUbergraph_BP_PowerLinePilot");

	ABP_PowerLinePilot_C_ExecuteUbergraph_BP_PowerLinePilot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PowerLinePilot_C::AfterRead()
{
	ABP_ParentPower_C::AfterRead();

}

void ABP_PowerLinePilot_C::BeforeDelete()
{
	ABP_ParentPower_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
