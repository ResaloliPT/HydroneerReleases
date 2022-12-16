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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.DestroyRequest
	 * 		Flags  -> ()
	 */
	void ABP_TaskNote_C::DestroyRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.DestroyRequest");
		
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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ToggleSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TaskNote_C::ToggleSave(
bool Save
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ToggleSave");
		
		struct
		{
			bool                                               Save;
		} params;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.InitRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_NPC_Request                             RequestData                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        NPC_ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NPC_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TaskNote_C::InitRequest(
const struct FST_NPC_Request& RequestData
, 
const class FName& NPC_ID
, 
const class FName& NPC_Name
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.InitRequest");
		
		struct
		{
			struct FST_NPC_Request                             RequestData;
			class FName                                        NPC_ID;
			class FName                                        NPC_Name;
		} params;
		params.RequestData = RequestData;
		params.NPC_ID = NPC_ID;
		params.NPC_Name = NPC_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.OnCompleted_5929EB464363BF53FC91A1A6517F2BF2
	 * 		Flags  -> ()
	 */
	void ABP_TaskNote_C::OnCompleted_5929EB464363BF53FC91A1A6517F2BF2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.OnCompleted_5929EB464363BF53FC91A1A6517F2BF2");
		
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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TaskNote_C::ItemPickedUp(
class ABP_GameCharacter_C* Player
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ItemPickedUp");
		
		struct
		{
			class ABP_GameCharacter_C*                         Player;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ItemDropped
	 * 		Flags  -> ()
	 */
	void ABP_TaskNote_C::ItemDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ItemDropped");
		
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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_TaskNote_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TaskNote_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_TaskNote.BP_TaskNote_C.ExecuteUbergraph_BP_TaskNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TaskNote_C::ExecuteUbergraph_BP_TaskNote(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TaskNote.BP_TaskNote_C.ExecuteUbergraph_BP_TaskNote");
		
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
	 * 		Name   -> PredefinedFunction ABP_TaskNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TaskNote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TaskNote.BP_TaskNote_C");
		return ptr;
	}


}


