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
//		Name   -> Function BP_DevCam.BP_DevCam_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_DevCam_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DevCam.BP_DevCam_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1");

	ABP_DevCam_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_DevCam.BP_DevCam_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DevCam_C::InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DevCam.BP_DevCam_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3");

	ABP_DevCam_C_InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_DevCam.BP_DevCam_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DevCam_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DevCam.BP_DevCam_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4");

	ABP_DevCam_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4_Params params {};
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_DevCam.BP_DevCam_C.ExecuteUbergraph_BP_DevCam
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DevCam_C::ExecuteUbergraph_BP_DevCam(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DevCam.BP_DevCam_C.ExecuteUbergraph_BP_DevCam");

	ABP_DevCam_C_ExecuteUbergraph_BP_DevCam_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DevCam_C::AfterRead()
{
	ASpectatorPawn::AfterRead();

	READ_PTR_FULL(Camera, UCameraComponent);
}

void ABP_DevCam_C::BeforeDelete()
{
	ASpectatorPawn::BeforeDelete();

	DELE_PTR_FULL(Camera);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
