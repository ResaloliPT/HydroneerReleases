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
//		Name   -> Function BP_LogicWaterValve.BP_LogicWaterValve_C.OverrideLogicIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_LogicWaterValve_C::OverrideLogicIn(const struct FString& Box, const struct FString& Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicWaterValve.BP_LogicWaterValve_C.OverrideLogicIn");

	ABP_LogicWaterValve_C_OverrideLogicIn_Params params {};
	params.Box = Box;
	params.Logic = Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_LogicWaterValve.BP_LogicWaterValve_C.ExecuteUbergraph_BP_LogicWaterValve
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LogicWaterValve_C::ExecuteUbergraph_BP_LogicWaterValve(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicWaterValve.BP_LogicWaterValve_C.ExecuteUbergraph_BP_LogicWaterValve");

	ABP_LogicWaterValve_C_ExecuteUbergraph_BP_LogicWaterValve_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LogicWaterValve_C::AfterRead()
{
	ABP_PipeValve_C::AfterRead();

	READ_PTR_FULL(Lgk1, UBoxComponent);
}

void ABP_LogicWaterValve_C::BeforeDelete()
{
	ABP_PipeValve_C::BeforeDelete();

	DELE_PTR_FULL(Lgk1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
