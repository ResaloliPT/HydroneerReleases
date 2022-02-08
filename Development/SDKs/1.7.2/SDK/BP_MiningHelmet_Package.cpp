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
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.UserConstructionScript");
		
		ABP_MiningHelmet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__FinishedFunc");
		
		ABP_MiningHelmet_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__UpdateFunc");
		
		ABP_MiningHelmet_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideInWater
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::OverrideInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideInWater");
		
		ABP_MiningHelmet_C_OverrideInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.LightOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::LightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.LightOn");
		
		ABP_MiningHelmet_C_LightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.LightOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::LightOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.LightOff");
		
		ABP_MiningHelmet_C_LightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::OverrideHatOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOn");
		
		ABP_MiningHelmet_C_OverrideHatOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MiningHelmet_C::OverrideHatOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOff");
		
		ABP_MiningHelmet_C_OverrideHatOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.ExecuteUbergraph_BP_MiningHelmet
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiningHelmet_C::ExecuteUbergraph_BP_MiningHelmet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.ExecuteUbergraph_BP_MiningHelmet");
		
		ABP_MiningHelmet_C_ExecuteUbergraph_BP_MiningHelmet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MiningHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MiningHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiningHelmet.BP_MiningHelmet_C");
		return ptr;
	}

}


