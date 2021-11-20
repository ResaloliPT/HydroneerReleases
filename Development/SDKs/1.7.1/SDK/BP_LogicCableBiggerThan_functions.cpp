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
//		Name   -> Function BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C.OverrideLogicPassedIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_LogicCableBiggerThan_C::OverrideLogicPassedIn(const struct FString& Box, const struct FString& Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C.OverrideLogicPassedIn");

	ABP_LogicCableBiggerThan_C_OverrideLogicPassedIn_Params params {};
	params.Box = Box;
	params.Logic = Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C.ExecuteUbergraph_BP_LogicCableBiggerThan
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LogicCableBiggerThan_C::ExecuteUbergraph_BP_LogicCableBiggerThan(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C.ExecuteUbergraph_BP_LogicCableBiggerThan");

	ABP_LogicCableBiggerThan_C_ExecuteUbergraph_BP_LogicCableBiggerThan_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LogicCableBiggerThan_C::AfterRead()
{
	ABP_ParentDualLogic_C::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void ABP_LogicCableBiggerThan_C::BeforeDelete()
{
	ABP_ParentDualLogic_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
