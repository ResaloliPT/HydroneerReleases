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
	 * 		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.AddZeros
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LogicToOutput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      FullOutput                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDualLogic_C::AddZeros(const class FString& LogicToOutput, class FString* FullOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.AddZeros");
		
		ABP_ParentDualLogic_C_AddZeros_Params params {};
		params.LogicToOutput = LogicToOutput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FullOutput != nullptr)
			*FullOutput = params.FullOutput;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.LogicPassedIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDualLogic_C::LogicPassedIn(const class FString& Box, const class FString& Logic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.LogicPassedIn");
		
		ABP_ParentDualLogic_C_LogicPassedIn_Params params {};
		params.Box = Box;
		params.Logic = Logic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentDualLogic.BP_ParentDualLogic_C.ExecuteUbergraph_BP_ParentDualLogic
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentDualLogic_C::ExecuteUbergraph_BP_ParentDualLogic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentDualLogic.BP_ParentDualLogic_C.ExecuteUbergraph_BP_ParentDualLogic");
		
		ABP_ParentDualLogic_C_ExecuteUbergraph_BP_ParentDualLogic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentDualLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentDualLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentDualLogic.BP_ParentDualLogic_C");
		return ptr;
	}

}


