/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverridePickedup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MagnifyingGlass_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverridePickedup");
		
		ABP_MagnifyingGlass_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.LineTracer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MagnifyingGlass_C::LineTracer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.LineTracer");
		
		ABP_MagnifyingGlass_C_LineTracer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverrideDroppedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MagnifyingGlass_C::OverrideDroppedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.OverrideDroppedItem");
		
		ABP_MagnifyingGlass_C_OverrideDroppedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_MagnifyingGlass_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ReceiveBeginPlay");
		
		ABP_MagnifyingGlass_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ExecuteUbergraph_BP_MagnifyingGlass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagnifyingGlass_C::ExecuteUbergraph_BP_MagnifyingGlass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MagnifyingGlass.BP_MagnifyingGlass_C.ExecuteUbergraph_BP_MagnifyingGlass");
		
		ABP_MagnifyingGlass_C_ExecuteUbergraph_BP_MagnifyingGlass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MagnifyingGlass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MagnifyingGlass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MagnifyingGlass.BP_MagnifyingGlass_C");
		return ptr;
	}

}


