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

void FClothCollisionPrim_Sphere::AfterRead()
{
}

void FClothCollisionPrim_Sphere::BeforeDelete()
{
}

void FClothCollisionPrim_SphereConnection::AfterRead()
{
}

void FClothCollisionPrim_SphereConnection::BeforeDelete()
{
}

void FClothCollisionPrim_Convex::AfterRead()
{
}

void FClothCollisionPrim_Convex::BeforeDelete()
{
}

void FClothCollisionData::AfterRead()
{
}

void FClothCollisionData::BeforeDelete()
{
}

void UClothingAssetBase::AfterRead()
{
	UObject::AfterRead();

}

void UClothingAssetBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothingSimulationFactory::AfterRead()
{
	UObject::AfterRead();

}

void UClothingSimulationFactory::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0161FA20
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0161FA00
//		Name   -> Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
//		Flags  -> (Native, Public, BlueprintCallable)
void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	UClothingSimulationInteractor_ClothConfigUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClothingSimulationInteractor::AfterRead()
{
	UObject::AfterRead();

}

void UClothingSimulationInteractor::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
