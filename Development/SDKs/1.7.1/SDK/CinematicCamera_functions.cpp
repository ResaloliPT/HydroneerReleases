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

void FCameraLookatTrackingSettings::AfterRead()
{
}

void FCameraLookatTrackingSettings::BeforeDelete()
{
}

void FCameraFilmbackSettings::AfterRead()
{
}

void FCameraFilmbackSettings::BeforeDelete()
{
}

void FCameraLensSettings::AfterRead()
{
}

void FCameraLensSettings::BeforeDelete()
{
}

void FNamedLensPreset::AfterRead()
{
}

void FNamedLensPreset::BeforeDelete()
{
}

void FNamedFilmbackPreset::AfterRead()
{
}

void FNamedFilmbackPreset::BeforeDelete()
{
}

void FCameraTrackingFocusSettings::AfterRead()
{
}

void FCameraTrackingFocusSettings::BeforeDelete()
{
}

void FCameraFocusSettings::AfterRead()
{
}

void FCameraFocusSettings::BeforeDelete()
{
}

void ACameraRig_Crane::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TransformComponent, USceneComponent);
	READ_PTR_FULL(CraneYawControl, USceneComponent);
	READ_PTR_FULL(CranePitchControl, USceneComponent);
	READ_PTR_FULL(CraneCameraMount, USceneComponent);
}

void ACameraRig_Crane::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TransformComponent);
	DELE_PTR_FULL(CraneYawControl);
	DELE_PTR_FULL(CranePitchControl);
	DELE_PTR_FULL(CraneCameraMount);
}

void ACameraRig_Rail::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TransformComponent, USceneComponent);
	READ_PTR_FULL(RailSplineComponent, USplineComponent);
	READ_PTR_FULL(RailCameraMount, USceneComponent);
}

void ACameraRig_Rail::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TransformComponent);
	DELE_PTR_FULL(RailSplineComponent);
	DELE_PTR_FULL(RailCameraMount);
}

// Function:
//		Offset -> 0x01577470
//		Name   -> Function CinematicCamera.CineCameraActor.GetCineCameraComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCineCameraComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	ACineCameraActor_GetCineCameraComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ACineCameraActor::AfterRead()
{
	ACameraActor::AfterRead();

}

void ACineCameraActor::BeforeDelete()
{
	ACameraActor::BeforeDelete();

}

// Function:
//		Offset -> 0x01577690
//		Name   -> Function CinematicCamera.CineCameraComponent.SetLensPresetByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	UCineCameraComponent_SetLensPresetByName_Params params {};
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x015775F0
//		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	UCineCameraComponent_SetFilmbackPresetByName_Params params {};
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x015775C0
//		Name   -> Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetVerticalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	UCineCameraComponent_GetVerticalFieldOfView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01577540
//		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetLensPresetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	UCineCameraComponent_GetLensPresetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01577510
//		Name   -> Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	UCineCameraComponent_GetHorizontalFieldOfView_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01577490
//		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	UCineCameraComponent_GetFilmbackPresetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCineCameraComponent::AfterRead()
{
	UCameraComponent::AfterRead();

}

void UCineCameraComponent::BeforeDelete()
{
	UCameraComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
