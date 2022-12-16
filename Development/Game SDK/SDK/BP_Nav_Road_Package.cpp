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
	 * 		Name   -> Function BP_Nav_Road.BP_Nav_Road_C.ClearVolumes
	 * 		Flags  -> ()
	 */
	void ABP_Nav_Road_C::ClearVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Nav_Road.BP_Nav_Road_C.ClearVolumes");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Nav_Road.BP_Nav_Road_C.GenerateVolumes
	 * 		Flags  -> ()
	 */
	void ABP_Nav_Road_C::GenerateVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Nav_Road.BP_Nav_Road_C.GenerateVolumes");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Nav_Road.BP_Nav_Road_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Nav_Road_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Nav_Road.BP_Nav_Road_C.UserConstructionScript");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Nav_Road_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Nav_Road_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Nav_Road.BP_Nav_Road_C");
		return ptr;
	}


}


