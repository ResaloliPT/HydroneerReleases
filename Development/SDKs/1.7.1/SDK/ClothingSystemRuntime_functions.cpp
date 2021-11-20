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

void FClothConstraintSetup::AfterRead()
{
}

void FClothConstraintSetup::BeforeDelete()
{
}

void FClothConfig::AfterRead()
{
}

void FClothConfig::BeforeDelete()
{
}

void FClothVertBoneData::AfterRead()
{
}

void FClothVertBoneData::BeforeDelete()
{
}

void FClothPhysicalMeshData::AfterRead()
{
}

void FClothPhysicalMeshData::BeforeDelete()
{
}

void FClothParameterMask_PhysMesh::AfterRead()
{
}

void FClothParameterMask_PhysMesh::BeforeDelete()
{
}

void FClothLODData::AfterRead()
{
}

void FClothLODData::BeforeDelete()
{
}

void UClothingAssetCustomData::AfterRead()
{
	UObject::AfterRead();

}

void UClothingAssetCustomData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClothingAsset::AfterRead()
{
	UClothingAssetBase::AfterRead();

	READ_PTR_FULL(PhysicsAsset, UPhysicsAsset);
	READ_PTR_FULL(CustomData, UClothingAssetCustomData);
}

void UClothingAsset::BeforeDelete()
{
	UClothingAssetBase::BeforeDelete();

	DELE_PTR_FULL(PhysicsAsset);
	DELE_PTR_FULL(CustomData);
}

void UClothingSimulationFactoryNv::AfterRead()
{
	UClothingSimulationFactory::AfterRead();

}

void UClothingSimulationFactoryNv::BeforeDelete()
{
	UClothingSimulationFactory::BeforeDelete();

}

// Function:
//		Offset -> 0x01E12280
//		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");

	UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params params {};
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E12200
//		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InStiffness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");

	UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params {};
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E12170
//		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride");

	UClothingSimulationInteractorNv_EnableGravityOverride_Params params {};
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01E12150
//		Name   -> Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride");

	UClothingSimulationInteractorNv_DisableGravityOverride_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClothingSimulationInteractorNv::AfterRead()
{
	UClothingSimulationInteractor::AfterRead();

}

void UClothingSimulationInteractorNv::BeforeDelete()
{
	UClothingSimulationInteractor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
