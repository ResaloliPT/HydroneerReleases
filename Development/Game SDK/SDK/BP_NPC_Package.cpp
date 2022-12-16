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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_NPC_C::ComponentsToSave(
TArray<class UActorComponent*>* Components
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.Handle Request Note Destroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::Handle_Request_Note_Destroyed(
class AActor* DestroyedActor
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Handle Request Note Destroyed");
		
		struct
		{
			class AActor*                                      DestroyedActor;
		} params;
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SetRequestNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TaskNote_C*                              RequestNote                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::SetRequestNote(
class ABP_TaskNote_C* RequestNote
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetRequestNote");
		
		struct
		{
			class ABP_TaskNote_C*                              RequestNote;
		} params;
		params.RequestNote = RequestNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.DestroyRequestNote
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::DestroyRequestNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.DestroyRequestNote");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ToggleRequestCancelTimerPause
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ToggleRequestCancelTimerPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToggleRequestCancelTimerPause");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.StopRequestCancelTimer
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::StopRequestCancelTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StopRequestCancelTimer");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.CancelRequest
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::CancelRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CancelRequest");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.InitRequestCancelTimer
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::InitRequestCancelTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitRequestCancelTimer");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.Hrrm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlayerVoicePitch                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::Hrrm(
float PlayerVoicePitch
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Hrrm");
		
		struct
		{
			float                                              PlayerVoicePitch;
		} params;
		params.PlayerVoicePitch = PlayerVoicePitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.RollVoiceline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPData_VoiceLines_C*                         VoiceLines                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		E_VoiceContext                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  VoiceLine                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::RollVoiceline(
class UPData_VoiceLines_C* VoiceLines
, 
E_VoiceContext Context
, 
class USoundBase** VoiceLine
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RollVoiceline");
		
		struct
		{
			class UPData_VoiceLines_C*                         VoiceLines;
			E_VoiceContext                                     Context;
			class USoundBase*                                  VoiceLine;
		} params;
		params.VoiceLines = VoiceLines;
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.PlayDefaultVoiceline
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::PlayDefaultVoiceline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.PlayDefaultVoiceline");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.EditorConstruct
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::EditorConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EditorConstruct");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.NewNPC_ID
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::NewNPC_ID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.NewNPC_ID");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.InitNPC_ID
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::InitNPC_ID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitNPC_ID");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.HandleOptimizationTimer
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::HandleOptimizationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.HandleOptimizationTimer");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.InitOptimizationTimer
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::InitOptimizationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitOptimizationTimer");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.CanPlayIdleSound
	 * 		Flags  -> ()
	 */
	bool ABP_NPC_C::CanPlayIdleSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CanPlayIdleSound");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SoundFadeOut
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::SoundFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SoundFadeOut");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::PlaySound(
class USoundBase* Sound
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.PlaySound");
		
		struct
		{
			class USoundBase*                                  Sound;
		} params;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.UpdateNodes
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::UpdateNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UpdateNodes");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ClearNodes
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ClearNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ClearNodes");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.FindRequestNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TaskNote_C*                              RequestNote                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::FindRequestNote(
class ABP_TaskNote_C** RequestNote
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.FindRequestNote");
		
		struct
		{
			class ABP_TaskNote_C*                              RequestNote;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestNote != nullptr)
			*RequestNote = params.RequestNote;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SetLookAtActor
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::SetLookAtActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetLookAtActor");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ToggleRequestNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NPC_C::ToggleRequestNotice(
bool Visible
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToggleRequestNotice");
		
		struct
		{
			bool                                               Visible;
		} params;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ToggleRequestBubble
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ToggleRequestBubble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToggleRequestBubble");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.InitBehavior
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::InitBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.InitBehavior");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.CombineMatchingResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_ResourceClassAndWeight>           Contents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FS_ResourceClassAndWeight>           CombinedContents                                           (Parm, OutParm)
	 */
	void ABP_NPC_C::CombineMatchingResources(
TArray<struct FS_ResourceClassAndWeight>* Contents
, 
TArray<struct FS_ResourceClassAndWeight>* CombinedContents
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CombineMatchingResources");
		
		struct
		{
			TArray<struct FS_ResourceClassAndWeight>           Contents;
			TArray<struct FS_ResourceClassAndWeight>           CombinedContents;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Contents != nullptr)
			*Contents = params.Contents;
		if (CombinedContents != nullptr)
			*CombinedContents = params.CombinedContents;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.CombineMatchingContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_NPC_RequestContents>             Contents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_NPC_RequestContents>             CombinedContents                                           (Parm, OutParm)
	 */
	void ABP_NPC_C::CombineMatchingContents(
TArray<struct FST_NPC_RequestContents>* Contents
, 
TArray<struct FST_NPC_RequestContents>* CombinedContents
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.CombineMatchingContents");
		
		struct
		{
			TArray<struct FST_NPC_RequestContents>             Contents;
			TArray<struct FST_NPC_RequestContents>             CombinedContents;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Contents != nullptr)
			*Contents = params.Contents;
		if (CombinedContents != nullptr)
			*CombinedContents = params.CombinedContents;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ConsumeSoup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SoupBowl_C*                              Soup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::ConsumeSoup(
class ABP_SoupBowl_C* Soup
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ConsumeSoup");
		
		struct
		{
			class ABP_SoupBowl_C*                              Soup;
		} params;
		params.Soup = Soup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.DebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DebugName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::DebugText(
const class FName& DebugName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.DebugText");
		
		struct
		{
			class FName                                        DebugName;
		} params;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ClearRequest
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ClearRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ClearRequest");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SetRewardAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::SetRewardAmount(
class ABP_ParentItem_C* Reward
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetRewardAmount");
		
		struct
		{
			class ABP_ParentItem_C*                            Reward;
		} params;
		params.Reward = Reward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.PickUpItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CaneBeTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NPC_C::PickUpItem(
class ABP_ParentItem_C* Item
, 
bool CaneBeTaken
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.PickUpItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			bool                                               CaneBeTaken;
		} params;
		params.Item = Item;
		params.CaneBeTaken = CaneBeTaken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SpawnReward
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::SpawnReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SpawnReward");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ConsumeItem
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ConsumeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ConsumeItem");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.DropItem
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::DropItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.DropItem");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ToggleDropDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        ValidMeshIfTrue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::ToggleDropDecal(
class UStaticMeshComponent* ValidMeshIfTrue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ToggleDropDecal");
		
		struct
		{
			class UStaticMeshComponent*                        ValidMeshIfTrue;
		} params;
		params.ValidMeshIfTrue = ValidMeshIfTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.Has Valid Request?
	 * 		Flags  -> ()
	 */
	bool ABP_NPC_C::Has_Valid_Request()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.Has Valid Request?");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.MaterialsToContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_ResourceClassAndWeight>           CraftedMaterials                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_NPC_RequestContents>             RequestContents                                            (Parm, OutParm)
	 */
	void ABP_NPC_C::MaterialsToContents(
TArray<struct FS_ResourceClassAndWeight>* CraftedMaterials
, 
TArray<struct FST_NPC_RequestContents>* RequestContents
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.MaterialsToContents");
		
		struct
		{
			TArray<struct FS_ResourceClassAndWeight>           CraftedMaterials;
			TArray<struct FST_NPC_RequestContents>             RequestContents;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CraftedMaterials != nullptr)
			*CraftedMaterials = params.CraftedMaterials;
		if (RequestContents != nullptr)
			*RequestContents = params.RequestContents;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.EvalReceivedContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_ResourceClassAndWeight>           Contents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NPC_C::EvalReceivedContent(
TArray<struct FS_ResourceClassAndWeight>* Contents
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EvalReceivedContent");
		
		struct
		{
			TArray<struct FS_ResourceClassAndWeight>           Contents;
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Contents != nullptr)
			*Contents = params.Contents;
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.EvalReceivedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NPC_C::EvalReceivedItem(
class ABP_ParentItem_C* Item
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.EvalReceivedItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			bool                                               Result;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ReceiveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ReceivedFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NPC_C::ReceiveItem(
class ABP_ParentItem_C* Item
, 
class AActor* ReceivedFrom
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			class AActor*                                      ReceivedFrom;
			bool                                               Result;
		} params;
		params.Item = Item;
		params.ReceivedFrom = ReceivedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.SetRequestContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_NPC_Request                             RequestIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FST_NPC_Request                             Request                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::SetRequestContents(
const struct FST_NPC_Request& RequestIn
, 
struct FST_NPC_Request* Request
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.SetRequestContents");
		
		struct
		{
			struct FST_NPC_Request                             RequestIn;
			struct FST_NPC_Request                             Request;
		} params;
		params.RequestIn = RequestIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Request != nullptr)
			*Request = params.Request;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.RollRequest
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::RollRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RollRequest");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.RollNewRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequestDifficulty                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::RollNewRequest(
int32_t RequestDifficulty
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RollNewRequest");
		
		struct
		{
			int32_t                                            RequestDifficulty;
		} params;
		params.RequestDifficulty = RequestDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyEnd_731509EF45769C0577121694BD873863
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyEnd_731509EF45769C0577121694BD873863(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyEnd_731509EF45769C0577121694BD873863");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyBegin_731509EF45769C0577121694BD873863
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyBegin_731509EF45769C0577121694BD873863(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyBegin_731509EF45769C0577121694BD873863");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnInterrupted_731509EF45769C0577121694BD873863
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnInterrupted_731509EF45769C0577121694BD873863(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnInterrupted_731509EF45769C0577121694BD873863");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnBlendOut_731509EF45769C0577121694BD873863
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnBlendOut_731509EF45769C0577121694BD873863(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBlendOut_731509EF45769C0577121694BD873863");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnCompleted_731509EF45769C0577121694BD873863
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnCompleted_731509EF45769C0577121694BD873863(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCompleted_731509EF45769C0577121694BD873863");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyEnd_25A083C14E323A971D60D5963C246BF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyEnd_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyEnd_25A083C14E323A971D60D5963C246BF2");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyBegin_25A083C14E323A971D60D5963C246BF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyBegin_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyBegin_25A083C14E323A971D60D5963C246BF2");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnInterrupted_25A083C14E323A971D60D5963C246BF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnInterrupted_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnInterrupted_25A083C14E323A971D60D5963C246BF2");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnBlendOut_25A083C14E323A971D60D5963C246BF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnBlendOut_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBlendOut_25A083C14E323A971D60D5963C246BF2");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnCompleted_25A083C14E323A971D60D5963C246BF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnCompleted_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCompleted_25A083C14E323A971D60D5963C246BF2");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnCompleted_364C0FBF4337767BB253D08BC93C2C0B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnCompleted_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCompleted_364C0FBF4337767BB253D08BC93C2C0B");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyEnd_D85A57774BFE590EA2BB32BD2AAAAD28
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyEnd_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyEnd_D85A57774BFE590EA2BB32BD2AAAAD28");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnNotifyBegin_D85A57774BFE590EA2BB32BD2AAAAD28
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnNotifyBegin_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnNotifyBegin_D85A57774BFE590EA2BB32BD2AAAAD28");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnInterrupted_D85A57774BFE590EA2BB32BD2AAAAD28
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnInterrupted_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnInterrupted_D85A57774BFE590EA2BB32BD2AAAAD28");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnBlendOut_D85A57774BFE590EA2BB32BD2AAAAD28
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnBlendOut_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnBlendOut_D85A57774BFE590EA2BB32BD2AAAAD28");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnCompleted_D85A57774BFE590EA2BB32BD2AAAAD28
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnCompleted_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCompleted_D85A57774BFE590EA2BB32BD2AAAAD28");
		
		struct
		{
			class FName                                        NotifyName;
		} params;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnCompleted_D09AF30142853F731559FC9526B33E50
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::OnCompleted_D09AF30142853F731559FC9526B33E50()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnCompleted_D09AF30142853F731559FC9526B33E50");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ItemStored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::ItemStored(
class ABP_ParentItem_C* Item
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ItemStored");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.RejectItem
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::RejectItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RejectItem");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.AcceptItem
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::AcceptItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.AcceptItem");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.StoredItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            ItemPickedUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StoredItemPickedUp");
		
		struct
		{
			class ABP_ParentItem_C*                            ItemPickedUp;
		} params;
		params.ItemPickedUp = ItemPickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.UseItem
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::UseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.UseItem");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.StartTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::StartTask(
class UAnimMontage* Montage
, 
float MaxDuration
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.StartTask");
		
		struct
		{
			class UAnimMontage*                                Montage;
			float                                              MaxDuration;
		} params;
		params.Montage = Montage;
		params.MaxDuration = MaxDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.TaskTimeout
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::TaskTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.TaskTimeout");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NPC_C::BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
			bool                                               bFromSweep;
			struct FHitResult                                  SweepResult;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
		} params;
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NPC_C::BndEvt__BP_NPC_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(
class UPrimitiveComponent* HitComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
		
		struct
		{
			class UPrimitiveComponent*                         HitComponent;
			class AActor*                                      OtherActor;
			class UPrimitiveComponent*                         OtherComp;
			struct FVector                                     NormalImpulse;
			struct FHitResult                                  Hit;
		} params;
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.IdleSoundTimerEnd
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::IdleSoundTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.IdleSoundTimerEnd");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.IdleSoundCooldown
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::IdleSoundCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.IdleSoundCooldown");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.RequestNoteClear
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::RequestNoteClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.RequestNoteClear");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAudioComponentPlayState                           PlayState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature(
EAudioComponentPlayState PlayState
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature");
		
		struct
		{
			EAudioComponentPlayState                           PlayState;
		} params;
		params.PlayState = PlayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::ReceiveTick(
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::ExecuteUbergraph_BP_NPC(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnRequestLookAt__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnRequestLookAt__DelegateSignature(
class AActor* Actor
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnRequestLookAt__DelegateSignature");
		
		struct
		{
			class AActor*                                      Actor;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnRequestComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::OnRequestComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnRequestComplete__DelegateSignature");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnRequestInit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::OnRequestInit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnRequestInit__DelegateSignature");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnRequestProcessEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::OnRequestProcessEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnRequestProcessEnd__DelegateSignature");
		
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
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnRequestProcessStart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_C::OnRequestProcessStart__DelegateSignature(
class AActor* Target
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnRequestProcessStart__DelegateSignature");
		
		struct
		{
			class AActor*                                      Target;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC.BP_NPC_C.OnTaskComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_NPC_C::OnTaskComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC.BP_NPC_C.OnTaskComplete__DelegateSignature");
		
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
	 * 		Name   -> PredefinedFunction ABP_NPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC.BP_NPC_C");
		return ptr;
	}


}


