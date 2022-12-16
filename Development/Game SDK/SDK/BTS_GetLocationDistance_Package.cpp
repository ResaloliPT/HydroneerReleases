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
	 * 		Name   -> Function BTS_GetLocationDistance.BTS_GetLocationDistance_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_GetLocationDistance_C::ReceiveTickAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
, 
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_GetLocationDistance.BTS_GetLocationDistance_C.ReceiveTickAI");
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTS_GetLocationDistance.BTS_GetLocationDistance_C.ExecuteUbergraph_BTS_GetLocationDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_GetLocationDistance_C::ExecuteUbergraph_BTS_GetLocationDistance(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_GetLocationDistance.BTS_GetLocationDistance_C.ExecuteUbergraph_BTS_GetLocationDistance");
		
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
	 * 		Name   -> PredefinedFunction UBTS_GetLocationDistance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTS_GetLocationDistance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTS_GetLocationDistance.BTS_GetLocationDistance_C");
		return ptr;
	}


}


