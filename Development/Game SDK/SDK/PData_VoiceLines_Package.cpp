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
	 * 		Name   -> Function PData_VoiceLines.PData_VoiceLines_C.RollVoiceline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_VoiceLine>                        VoiceLines                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class USoundBase*                                  VoiceLine                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPData_VoiceLines_C::RollVoiceline(
TArray<struct FS_VoiceLine>* VoiceLines
, 
class USoundBase** VoiceLine
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PData_VoiceLines.PData_VoiceLines_C.RollVoiceline");
		
		struct
		{
			TArray<struct FS_VoiceLine>                        VoiceLines;
			class USoundBase*                                  VoiceLine;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoiceLines != nullptr)
			*VoiceLines = params.VoiceLines;
		if (VoiceLine != nullptr)
			*VoiceLine = params.VoiceLine;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PData_VoiceLines.PData_VoiceLines_C.GetVoiceLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_VoiceContext                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  VoiceLine                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPData_VoiceLines_C::GetVoiceLine(
E_VoiceContext Context
, 
class USoundBase** VoiceLine
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PData_VoiceLines.PData_VoiceLines_C.GetVoiceLine");
		
		struct
		{
			E_VoiceContext                                     Context;
			class USoundBase*                                  VoiceLine;
		} params;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoiceLine != nullptr)
			*VoiceLine = params.VoiceLine;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPData_VoiceLines_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPData_VoiceLines_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PData_VoiceLines.PData_VoiceLines_C");
		return ptr;
	}


}


