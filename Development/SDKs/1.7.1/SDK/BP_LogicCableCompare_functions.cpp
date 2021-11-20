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
//		Name   -> Function BP_LogicCableCompare.BP_LogicCableCompare_C.OverrideLogicPassedIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_LogicCableCompare_C::OverrideLogicPassedIn(const struct FString& Box, const struct FString& Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicCableCompare.BP_LogicCableCompare_C.OverrideLogicPassedIn");

	ABP_LogicCableCompare_C_OverrideLogicPassedIn_Params params {};
	params.Box = Box;
	params.Logic = Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_LogicCableCompare.BP_LogicCableCompare_C.ExecuteUbergraph_BP_LogicCableCompare
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LogicCableCompare_C::ExecuteUbergraph_BP_LogicCableCompare(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicCableCompare.BP_LogicCableCompare_C.ExecuteUbergraph_BP_LogicCableCompare");

	ABP_LogicCableCompare_C_ExecuteUbergraph_BP_LogicCableCompare_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LogicCableCompare_C::AfterRead()
{
	ABP_ParentDualLogic_C::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void ABP_LogicCableCompare_C::BeforeDelete()
{
	ABP_ParentDualLogic_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
