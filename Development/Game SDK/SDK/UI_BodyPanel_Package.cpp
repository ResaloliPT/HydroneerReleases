/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.UpdateSelectionVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BodyPanel_C::UpdateSelectionVisual(
const class FName& SelectedOption
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.UpdateSelectionVisual");
		
		struct
		{
			class FName                                        SelectedOption;
		} params;
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BodyID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BodyPanel_C::Update(
class UWidget* Widget
, 
const class FName& BodyID
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.Update");
		
		struct
		{
			class UWidget*                                     Widget;
			class FName                                        BodyID;
		} params;
		params.Widget = Widget;
		params.BodyID = BodyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                BodyOptions                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BodyPanel_C::Init(
TArray<class FName>* BodyOptions
, 
const class FName& SelectedOption
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.Init");
		
		struct
		{
			TArray<class FName>                                BodyOptions;
			class FName                                        SelectedOption;
		} params;
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyOptions != nullptr)
			*BodyOptions = params.BodyOptions;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BodyPanel_C::PreConstruct(
bool IsDesignTime
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.PreConstruct");
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.ExecuteUbergraph_UI_BodyPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BodyPanel_C::ExecuteUbergraph_UI_BodyPanel(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.ExecuteUbergraph_UI_BodyPanel");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BodyPanel.UI_BodyPanel_C.OnUpdateBody__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BodyID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BodyPanel_C::OnUpdateBody__DelegateSignature(
const class FName& BodyID
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BodyPanel.UI_BodyPanel_C.OnUpdateBody__DelegateSignature");
		
		struct
		{
			class FName                                        BodyID;
		} params;
		params.BodyID = BodyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BodyPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BodyPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BodyPanel.UI_BodyPanel_C");
		return ptr;
	}


}


