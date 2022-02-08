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
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.PlaySoundJump
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::PlaySoundJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.PlaySoundJump");
		
		ABP_GameCharacter_C_PlaySoundJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FootstepWood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWood");
		
		ABP_GameCharacter_C_FootstepWood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FootstepDirt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepDirt");
		
		ABP_GameCharacter_C_FootstepDirt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FootstepWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepWater");
		
		ABP_GameCharacter_C_FootstepWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__FinishedFunc");
		
		ABP_GameCharacter_C_ExplosionTimeLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GameCharacter_C::ExplosionTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionTimeLine__UpdateFunc");
		
		ABP_GameCharacter_C_ExplosionTimeLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__FinishedFunc");
		
		ABP_GameCharacter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Timeline_0__UpdateFunc");
		
		ABP_GameCharacter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_20
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_20(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_20");
		
		ABP_GameCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_20_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_19
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_19");
		
		ABP_GameCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_18
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_18");
		
		ABP_GameCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_17
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Crouch_K2Node_InputActionEvent_17");
		
		ABP_GameCharacter_C_InpActEvt_Crouch_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerForward_K2Node_InputActionEvent_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerForward_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerForward_K2Node_InputActionEvent_16");
		
		ABP_GameCharacter_C_InpActEvt_PlayerForward_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerForward_K2Node_InputActionEvent_15
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerForward_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerForward_K2Node_InputActionEvent_15");
		
		ABP_GameCharacter_C_InpActEvt_PlayerForward_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerBackward_K2Node_InputActionEvent_14
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerBackward_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerBackward_K2Node_InputActionEvent_14");
		
		ABP_GameCharacter_C_InpActEvt_PlayerBackward_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerBackward_K2Node_InputActionEvent_13
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerBackward_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerBackward_K2Node_InputActionEvent_13");
		
		ABP_GameCharacter_C_InpActEvt_PlayerBackward_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerLeft_K2Node_InputActionEvent_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerLeft_K2Node_InputActionEvent_12");
		
		ABP_GameCharacter_C_InpActEvt_PlayerLeft_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerLeft_K2Node_InputActionEvent_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerLeft_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerLeft_K2Node_InputActionEvent_11");
		
		ABP_GameCharacter_C_InpActEvt_PlayerLeft_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerRight_K2Node_InputActionEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerRight_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerRight_K2Node_InputActionEvent_10");
		
		ABP_GameCharacter_C_InpActEvt_PlayerRight_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerRight_K2Node_InputActionEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_PlayerRight_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_PlayerRight_K2Node_InputActionEvent_9");
		
		ABP_GameCharacter_C_InpActEvt_PlayerRight_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_8");
		
		ABP_GameCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_7");
		
		ABP_GameCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKSprint_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKSprint_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKSprint_K2Node_InputActionEvent_6");
		
		ABP_GameCharacter_C_InpActEvt_CKSprint_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKSprint_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKSprint_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKSprint_K2Node_InputActionEvent_5");
		
		ABP_GameCharacter_C_InpActEvt_CKSprint_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKJump_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKJump_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKJump_K2Node_InputActionEvent_4");
		
		ABP_GameCharacter_C_InpActEvt_CKJump_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKJump_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKJump_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKJump_K2Node_InputActionEvent_3");
		
		ABP_GameCharacter_C_InpActEvt_CKJump_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKCrouch_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKCrouch_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKCrouch_K2Node_InputActionEvent_2");
		
		ABP_GameCharacter_C_InpActEvt_CKCrouch_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKCrouch_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpActEvt_CKCrouch_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpActEvt_CKCrouch_K2Node_InputActionEvent_1");
		
		ABP_GameCharacter_C_InpActEvt_CKCrouch_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3");
		
		ABP_GameCharacter_C_InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4");
		
		ABP_GameCharacter_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ReceiveBeginPlay");
		
		ABP_GameCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FootstepTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepTimer");
		
		ABP_GameCharacter_C_FootstepTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Forward
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Forward");
		
		ABP_GameCharacter_C_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Backwards
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Backwards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Backwards");
		
		ABP_GameCharacter_C_Backwards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Left");
		
		ABP_GameCharacter_C_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.Right");
		
		ABP_GameCharacter_C_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FootstepTimer2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FootstepTimer2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FootstepTimer2");
		
		ABP_GameCharacter_C_FootstepTimer2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExplosionVignette
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::ExplosionVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExplosionVignette");
		
		ABP_GameCharacter_C_ExplosionVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::NukeVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.NukeVignette");
		
		ABP_GameCharacter_C_NukeVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameCharacter_C::FlyingHatVertTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.FlyingHatVertTimer");
		
		ABP_GameCharacter_C_FlyingHatVertTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_GameCharacter.BP_GameCharacter_C.ExecuteUbergraph_BP_GameCharacter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameCharacter_C::ExecuteUbergraph_BP_GameCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameCharacter.BP_GameCharacter_C.ExecuteUbergraph_BP_GameCharacter");
		
		ABP_GameCharacter_C_ExecuteUbergraph_BP_GameCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_GameCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameCharacter.BP_GameCharacter_C");
		return ptr;
	}

}


