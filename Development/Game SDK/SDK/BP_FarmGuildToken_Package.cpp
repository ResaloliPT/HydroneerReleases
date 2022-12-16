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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::CreateProxyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.CreateProxyItem");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.CombineCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FarmGuildToken_C*                        OtherCoins                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FarmGuildToken_C::CombineCoins(
class ABP_FarmGuildToken_C* OtherCoins
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.CombineCoins");
		
		struct
		{
			class ABP_FarmGuildToken_C*                        OtherCoins;
		} params;
		params.OtherCoins = OtherCoins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.CheckForCostumeChange
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::CheckForCostumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.CheckForCostumeChange");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.RemoveCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FarmGuildToken_C::RemoveCoins(
int32_t AmountToRemove
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.RemoveCoins");
		
		struct
		{
			int32_t                                            AmountToRemove;
		} params;
		params.AmountToRemove = AmountToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.PlayCoinSound
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::PlayCoinSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.PlayCoinSound");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.RestackCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_FarmGuildToken_C*>                Coins                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_FarmGuildToken_C::RestackCoins(
TArray<class ABP_FarmGuildToken_C*> Coins
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.RestackCoins");
		
		struct
		{
			TArray<class ABP_FarmGuildToken_C*>                Coins;
		} params;
		params.Coins = Coins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideLoaded");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideHighlighted
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::OverrideHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideHighlighted");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideUnhighlighted
	 * 		Flags  -> ()
	 */
	void ABP_FarmGuildToken_C::OverrideUnhighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideUnhighlighted");
		
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
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FarmGuildToken_C::OverrideHit(
class AActor* OtherActor
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.OverrideHit");
		
		struct
		{
			class AActor*                                      OtherActor;
		} params;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FarmGuildToken.BP_FarmGuildToken_C.ExecuteUbergraph_BP_FarmGuildToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FarmGuildToken_C::ExecuteUbergraph_BP_FarmGuildToken(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FarmGuildToken.BP_FarmGuildToken_C.ExecuteUbergraph_BP_FarmGuildToken");
		
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
	 * 		Name   -> PredefinedFunction ABP_FarmGuildToken_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FarmGuildToken_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FarmGuildToken.BP_FarmGuildToken_C");
		return ptr;
	}


}


