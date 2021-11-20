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
//		Name   -> Function UI_CoinAmount.UI_CoinAmount_C.SetText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_CoinAmount_C::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CoinAmount.UI_CoinAmount_C.SetText");

	UUI_CoinAmount_C_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function UI_CoinAmount.UI_CoinAmount_C.ExecuteUbergraph_UI_CoinAmount
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CoinAmount_C::ExecuteUbergraph_UI_CoinAmount(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_CoinAmount.UI_CoinAmount_C.ExecuteUbergraph_UI_CoinAmount");

	UUI_CoinAmount_C_ExecuteUbergraph_UI_CoinAmount_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CoinAmount_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Text, UTextBlock);
}

void UUI_CoinAmount_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Text);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
