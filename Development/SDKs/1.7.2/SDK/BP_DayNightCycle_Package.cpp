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
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::SetDayModePostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad");
		
		ABP_DayNightCycle_C_SetDayModePostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::SetDayMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode");
		
		ABP_DayNightCycle_C_SetDayMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay");
		
		ABP_DayNightCycle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_BuildBed_C*                              Bed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DayNightCycle_C::SpeedUpToSunrise(class ABP_BuildBed_C* Bed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise");
		
		ABP_DayNightCycle_C_SpeedUpToSunrise_Params params {};
		params.Bed = Bed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::SunRiseTimerCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck");
		
		ABP_DayNightCycle_C_SunRiseTimerCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::SetNewRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate");
		
		ABP_DayNightCycle_C_SetNewRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.PostLoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::PostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.PostLoad");
		
		ABP_DayNightCycle_C_PostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DayNightCycle_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.Update");
		
		ABP_DayNightCycle_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DayNightCycle_C::ExecuteUbergraph_BP_DayNightCycle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle");
		
		ABP_DayNightCycle_C_ExecuteUbergraph_BP_DayNightCycle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DayNightCycle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DayNightCycle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DayNightCycle.BP_DayNightCycle_C");
		return ptr;
	}

}


