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
//		Name   -> Function ABP_Excavator.ABP_Excavator_C.ExecuteUbergraph_ABP_Excavator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Excavator_C::ExecuteUbergraph_ABP_Excavator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Excavator.ABP_Excavator_C.ExecuteUbergraph_ABP_Excavator");

	UABP_Excavator_C_ExecuteUbergraph_ABP_Excavator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UABP_Excavator_C::AfterRead()
{
	UVehicleAnimInstance::AfterRead();

}

void UABP_Excavator_C::BeforeDelete()
{
	UVehicleAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
