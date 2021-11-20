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
//		Name   -> Function BP_PowerLineDiode.BP_PowerLineDiode_C.OverridePowerPassedIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PowerLineDiode_C::OverridePowerPassedIn(const struct FString& Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerLineDiode.BP_PowerLineDiode_C.OverridePowerPassedIn");

	ABP_PowerLineDiode_C_OverridePowerPassedIn_Params params {};
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_PowerLineDiode.BP_PowerLineDiode_C.ExecuteUbergraph_BP_PowerLineDiode
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PowerLineDiode_C::ExecuteUbergraph_BP_PowerLineDiode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PowerLineDiode.BP_PowerLineDiode_C.ExecuteUbergraph_BP_PowerLineDiode");

	ABP_PowerLineDiode_C_ExecuteUbergraph_BP_PowerLineDiode_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PowerLineDiode_C::AfterRead()
{
	ABP_ParentPower_C::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
}

void ABP_PowerLineDiode_C::BeforeDelete()
{
	ABP_ParentPower_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
