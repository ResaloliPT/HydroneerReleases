﻿// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FNamedInterface::AfterRead()
{
	READ_PTR_FULL(InterfaceObject, UObject);
}

void FNamedInterface::BeforeDelete()
{
	DELE_PTR_FULL(InterfaceObject);
}

void FNamedInterfaceDef::AfterRead()
{
}

void FNamedInterfaceDef::BeforeDelete()
{
}

void FInAppPurchaseProductInfo::AfterRead()
{
}

void FInAppPurchaseProductInfo::BeforeDelete()
{
}

void FInAppPurchaseRestoreInfo::AfterRead()
{
}

void FInAppPurchaseRestoreInfo::BeforeDelete()
{
}

void FInAppPurchaseProductRequest::AfterRead()
{
}

void FInAppPurchaseProductRequest::BeforeDelete()
{
}

void UNamedInterfaces::AfterRead()
{
	UObject::AfterRead();

}

void UNamedInterfaces::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     Match                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDidBecomeActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedMatchInterface::OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn");

	UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params {};
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     Match                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedMatchInterface::OnMatchEnded(const struct FString& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded");

	UTurnBasedMatchInterface_OnMatchEnded_Params params {};
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTurnBasedMatchInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTurnBasedMatchInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
