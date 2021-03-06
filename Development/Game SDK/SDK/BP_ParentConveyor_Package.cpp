/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.GetHookedParentPressure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            HookedParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::GetHookedParentPressure(class ABP_ParentItem_C* HookedParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.GetHookedParentPressure");
		
		struct
		{
			class ABP_ParentItem_C*                            HookedParent;
		} params;
		params.HookedParent = HookedParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ConveyActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ItemsToMove                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              CharactersToMove                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DeltaLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::ConveyActors(TArray<class AActor*>* ItemsToMove, TArray<class AActor*>* CharactersToMove, const struct FVector& DeltaLocation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ConveyActors");
		
		struct
		{
			TArray<class AActor*>                              ItemsToMove;
			TArray<class AActor*>                              CharactersToMove;
			struct FVector                                     DeltaLocation;
			float                                              DeltaTime;
		} params;
		params.DeltaLocation = DeltaLocation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsToMove != nullptr)
			*ItemsToMove = params.ItemsToMove;
		if (CharactersToMove != nullptr)
			*CharactersToMove = params.CharactersToMove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ExitBelt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_ParentItem_C*>                    MovingItems                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABP_GameCharacter_C*>                 MovingCharacters                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UBoxComponent*                               ConveyorBox                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BeltEmpty_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentConveyor_C::ExitBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*> MovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, class UBoxComponent* ConveyorBox, bool* BeltEmpty_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ExitBelt");
		
		struct
		{
			class AActor*                                      Actor;
			TArray<class ABP_ParentItem_C*>                    MovingItems;
			TArray<class ABP_GameCharacter_C*>                 MovingCharacters;
			class UBoxComponent*                               ConveyorBox;
			bool                                               BeltEmpty_;
		} params;
		params.Actor = Actor;
		params.MovingItems = MovingItems;
		params.MovingCharacters = MovingCharacters;
		params.ConveyorBox = ConveyorBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BeltEmpty_ != nullptr)
			*BeltEmpty_ = params.BeltEmpty_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.EnterBelt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_ParentItem_C*>                    MovingItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABP_GameCharacter_C*>                 MovingCharacters                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UBoxComponent*                               ConveyorBox                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentConveyor_C::EnterBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*>* MovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, class UBoxComponent* ConveyorBox, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.EnterBelt");
		
		struct
		{
			class AActor*                                      Actor;
			TArray<class ABP_ParentItem_C*>                    MovingItems;
			TArray<class ABP_GameCharacter_C*>                 MovingCharacters;
			class UBoxComponent*                               ConveyorBox;
			bool                                               Result;
		} params;
		params.Actor = Actor;
		params.MovingCharacters = MovingCharacters;
		params.ConveyorBox = ConveyorBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MovingItems != nullptr)
			*MovingItems = params.MovingItems;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.FindBeltSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DeltaLocationToAdd                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::FindBeltSpeed(class USceneComponent* Component, struct FVector* DeltaLocationToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.FindBeltSpeed");
		
		struct
		{
			class USceneComponent*                             Component;
			struct FVector                                     DeltaLocationToAdd;
		} params;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeltaLocationToAdd != nullptr)
			*DeltaLocationToAdd = params.DeltaLocationToAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.CanMoveItem?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_ParentItem_C*>                    CurrentlyMovingItems                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABP_GameCharacter_C*>                 MovingCharacters                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CanMove_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_ParentResource_C*                        ResourceRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::CanMoveItem_(class AActor* Actor, TArray<class ABP_ParentItem_C*>* CurrentlyMovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, bool* CanMove_, class ABP_ParentResource_C** ResourceRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.CanMoveItem?");
		
		struct
		{
			class AActor*                                      Actor;
			TArray<class ABP_ParentItem_C*>                    CurrentlyMovingItems;
			TArray<class ABP_GameCharacter_C*>                 MovingCharacters;
			bool                                               CanMove_;
			class ABP_ParentResource_C*                        ResourceRef;
		} params;
		params.Actor = Actor;
		params.MovingCharacters = MovingCharacters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlyMovingItems != nullptr)
			*CurrentlyMovingItems = params.CurrentlyMovingItems;
		if (CanMove_ != nullptr)
			*CanMove_ = params.CanMove_;
		if (ResourceRef != nullptr)
			*ResourceRef = params.ResourceRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.HookFunctionality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            HookedTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentConveyor_C::HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.HookFunctionality");
		
		struct
		{
			class ABP_ParentItem_C*                            HookedTo;
			class USceneComponent*                             Component;
			bool                                               CanPass_;
		} params;
		params.HookedTo = HookedTo;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPass_ != nullptr)
			*CanPass_ = params.CanPass_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ChangeBeltSpeed
	 * 		Flags  -> ()
	 */
	void ABP_ParentConveyor_C::ChangeBeltSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ChangeBeltSpeed");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentConveyor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::ItemPickedUp(class ABP_GameCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ItemPickedUp");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideParentNoWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentConveyor_C::OverrideParentNoWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideParentNoWater");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ShovelOnToConveyor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::ShovelOnToConveyor(int32_t Quality, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ShovelOnToConveyor");
		
		struct
		{
			int32_t                                            Quality;
			float                                              Size;
		} params;
		params.Quality = Quality;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ItemExitConveyor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ForwardVec                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::ItemExitConveyor(class ABP_ParentItem_C* Item, const struct FVector& ForwardVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ItemExitConveyor");
		
		struct
		{
			class ABP_ParentItem_C*                            Item;
			struct FVector                                     ForwardVec;
		} params;
		params.Item = Item;
		params.ForwardVec = ForwardVec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.OverridePlacedDown");
		
		struct
		{
			class ABP_GameCharacter_C*                         Character;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideDroppedItem");
		
		struct
		{
			class ABP_GameCharacter_C*                         Character;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideHookCheckRot
	 * 		Flags  -> ()
	 */
	void ABP_ParentConveyor_C::OverrideHookCheckRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideHookCheckRot");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideStartPlacing
	 * 		Flags  -> ()
	 */
	void ABP_ParentConveyor_C::OverrideStartPlacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.OverrideStartPlacing");
		
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
	 * 		Name   -> Function BP_ParentConveyor.BP_ParentConveyor_C.ExecuteUbergraph_BP_ParentConveyor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentConveyor_C::ExecuteUbergraph_BP_ParentConveyor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentConveyor.BP_ParentConveyor_C.ExecuteUbergraph_BP_ParentConveyor");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentConveyor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentConveyor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentConveyor.BP_ParentConveyor_C");
		return ptr;
	}

}


