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
//		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.AddZeros
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     LogicToOutput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     FullOutput                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_ParentDualLogic_C::AddZeros(const struct FString& LogicToOutput, struct FString* FullOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.AddZeros");

	ABP_ParentDualLogic_C_AddZeros_Params params {};
	params.LogicToOutput = LogicToOutput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FullOutput != nullptr)
		*FullOutput = params.FullOutput;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.LogicPassedIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_ParentDualLogic_C::LogicPassedIn(const struct FString& Box, const struct FString& Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.LogicPassedIn");

	ABP_ParentDualLogic_C_LogicPassedIn_Params params {};
	params.Box = Box;
	params.Logic = Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.ExecuteUbergraph_BP_ParentDualLogic
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ParentDualLogic_C::ExecuteUbergraph_BP_ParentDualLogic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.ExecuteUbergraph_BP_ParentDualLogic");

	ABP_ParentDualLogic_C_ExecuteUbergraph_BP_ParentDualLogic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ParentDualLogic_C::AfterRead()
{
	ABP_ParentLogic_C::AfterRead();

}

void ABP_ParentDualLogic_C::BeforeDelete()
{
	ABP_ParentLogic_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
