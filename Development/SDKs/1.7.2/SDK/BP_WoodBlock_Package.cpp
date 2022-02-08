﻿/**
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
	 * 		Name   -> Function BP_WoodBlock.BP_WoodBlock_C.OverrideMouseActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WoodBlock_C::OverrideMouseActivated(class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WoodBlock.BP_WoodBlock_C.OverrideMouseActivated");
		
		ABP_WoodBlock_C_OverrideMouseActivated_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_WoodBlock.BP_WoodBlock_C.ExecuteUbergraph_BP_WoodBlock
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WoodBlock_C::ExecuteUbergraph_BP_WoodBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WoodBlock.BP_WoodBlock_C.ExecuteUbergraph_BP_WoodBlock");
		
		ABP_WoodBlock_C_ExecuteUbergraph_BP_WoodBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_WoodBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WoodBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodBlock.BP_WoodBlock_C");
		return ptr;
	}

}


