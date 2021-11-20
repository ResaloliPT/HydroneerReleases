// Name: Hydroneer, Version: 1.7.1

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

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_Meatball.BP_Meatball_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Meatball_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Meatball.BP_Meatball_C.ReceiveBeginPlay");

	ABP_Meatball_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_Meatball.BP_Meatball_C.LoopTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Meatball_C::LoopTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Meatball.BP_Meatball_C.LoopTimer");

	ABP_Meatball_C_LoopTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_Meatball.BP_Meatball_C.ExecuteUbergraph_BP_Meatball
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Meatball_C::ExecuteUbergraph_BP_Meatball(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Meatball.BP_Meatball_C.ExecuteUbergraph_BP_Meatball");

	ABP_Meatball_C_ExecuteUbergraph_BP_Meatball_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Meatball_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
	READ_PTR_FULL(VoxelWorld, AVoxelWorld);
}

void ABP_Meatball_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Scene);
	DELE_PTR_FULL(VoxelWorld);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
