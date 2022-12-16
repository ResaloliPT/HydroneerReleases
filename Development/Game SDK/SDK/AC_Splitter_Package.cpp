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
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitSeedBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentSeedBag_C*                         SeedBag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitSeedBag(
class ABP_ParentSeedBag_C* SeedBag
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitSeedBag");
		
		struct
		{
			class ABP_ParentSeedBag_C*                         SeedBag;
		} params;
		params.SeedBag = SeedBag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitCutVeg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentCutVeg_C*                          CutVeg                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitCutVeg(
class ABP_ParentCutVeg_C* CutVeg
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitCutVeg");
		
		struct
		{
			class ABP_ParentCutVeg_C*                          CutVeg;
		} params;
		params.CutVeg = CutVeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitTokens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FarmGuildToken_C*                        Tokens                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitTokens(
class ABP_FarmGuildToken_C* Tokens
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitTokens");
		
		struct
		{
			class ABP_FarmGuildToken_C*                        Tokens;
		} params;
		params.Tokens = Tokens;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitDirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DirtResource_C*                          Dirt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitDirt(
class ABP_DirtResource_C* Dirt
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitDirt");
		
		struct
		{
			class ABP_DirtResource_C*                          Dirt;
		} params;
		params.Dirt = Dirt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitCoins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Coin_C*                                  Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitCoins(
class ABP_Coin_C* Coins
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitCoins");
		
		struct
		{
			class ABP_Coin_C*                                  Coins;
		} params;
		params.Coins = Coins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.SplitBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentBar_C*                             Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Splitter_C::SplitBar(
class ABP_ParentBar_C* Bar
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.SplitBar");
		
		struct
		{
			class ABP_ParentBar_C*                             Bar;
		} params;
		params.Bar = Bar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Splitter.AC_Splitter_C.TrySplitItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Splitted                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAC_Splitter_C::TrySplitItem(
class ABP_ParentItem_C* Item
, 
bool* Splitted
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Splitter.AC_Splitter_C.TrySplitItem");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			bool                                               Splitted;
		} params;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Splitted != nullptr)
			*Splitted = params.Splitted;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAC_Splitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Splitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_Splitter.AC_Splitter_C");
		return ptr;
	}


}


