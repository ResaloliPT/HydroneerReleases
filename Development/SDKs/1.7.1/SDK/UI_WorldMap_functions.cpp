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
//		Name   -> Function UI_WorldMap.UI_WorldMap_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_WorldMap_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.Construct");

	UUI_WorldMap_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function UI_WorldMap.UI_WorldMap_C.Loop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_WorldMap_C::Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.Loop");

	UUI_WorldMap_C_Loop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function UI_WorldMap.UI_WorldMap_C.ExecuteUbergraph_UI_WorldMap
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WorldMap_C::ExecuteUbergraph_UI_WorldMap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_WorldMap.UI_WorldMap_C.ExecuteUbergraph_UI_WorldMap");

	UUI_WorldMap_C_ExecuteUbergraph_UI_WorldMap_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_WorldMap_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_33, UImage);
	READ_PTR_FULL(Target, UImage);
	READ_PTR_FULL(Player, ABP_GameCharacter_C);
}

void UUI_WorldMap_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_33);
	DELE_PTR_FULL(Target);
	DELE_PTR_FULL(Player);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
