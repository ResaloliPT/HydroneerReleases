﻿/**
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
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_MoltenType_E_MoltenType                          InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::SetNewLiquidType(E_MoltenType_E_MoltenType InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.SetNewLiquidType");
		
		ABP_LogicSmelter_C_SetNewLiquidType_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_MoltenType_E_MoltenType                          Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::FindLiquidClass(class ABP_ParentResource_C* NewParam, E_MoltenType_E_MoltenType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.FindLiquidClass");
		
		ABP_LogicSmelter_C_FindLiquidClass_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::SetLiquidHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.SetLiquidHeight");
		
		ABP_LogicSmelter_C_SetLiquidHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__FinishedFunc");
		
		ABP_LogicSmelter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__UpdateFunc");
		
		ABP_LogicSmelter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::Timeline_0__Create_Bar__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_0__Create Bar__EventFunc");
		
		ABP_LogicSmelter_C_Timeline_0__Create_Bar__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__FinishedFunc");
		
		ABP_LogicSmelter_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.Timeline_1__UpdateFunc");
		
		ABP_LogicSmelter_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_LogicSmelter_C::BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_LogicSmelter_C_BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_ParentResource_C*                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::NewItemInPot(class ABP_ParentResource_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.NewItemInPot");
		
		ABP_LogicSmelter_C_NewItemInPot_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideLoaded");
		
		ABP_LogicSmelter_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePickedup");
		
		ABP_LogicSmelter_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNewLogic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      New_Logic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::OverrideNewLogic(const class FString& Box, const class FString& New_Logic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNewLogic");
		
		ABP_LogicSmelter_C_OverrideNewLogic_Params params {};
		params.Box = Box;
		params.New_Logic = New_Logic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Open_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::RotateDoors(bool Open_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.RotateDoors");
		
		ABP_LogicSmelter_C_RotateDoors_Params params {};
		params.Open_ = Open_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::CreateBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.CreateBar");
		
		ABP_LogicSmelter_C_CreateBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Up_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::TipBar(bool Up_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.TipBar");
		
		ABP_LogicSmelter_C_TipBar_Params params {};
		params.Up_ = Up_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNoPower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::OverrideNoPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.OverrideNoPower");
		
		ABP_LogicSmelter_C_OverrideNoPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::PourParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.PourParticles");
		
		ABP_LogicSmelter_C_PourParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicSmelter_C::ToggleFlame(bool On_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.ToggleFlame");
		
		ABP_LogicSmelter_C_ToggleFlame_Params params {};
		params.On_ = On_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.SpawnRealBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::SpawnRealBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.SpawnRealBar");
		
		ABP_LogicSmelter_C_SpawnRealBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePowerIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_ParentPower_C*                           Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::OverridePowerIn(class ABP_ParentPower_C* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.OverridePowerIn");
		
		ABP_LogicSmelter_C_OverridePowerIn_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.EmptyPowerTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_LogicSmelter_C::EmptyPowerTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.EmptyPowerTimer");
		
		ABP_LogicSmelter_C_EmptyPowerTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicSmelter_C::ExecuteUbergraph_BP_LogicSmelter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicSmelter.BP_LogicSmelter_C.ExecuteUbergraph_BP_LogicSmelter");
		
		ABP_LogicSmelter_C_ExecuteUbergraph_BP_LogicSmelter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicSmelter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicSmelter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicSmelter.BP_LogicSmelter_C");
		return ptr;
	}

}


