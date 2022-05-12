﻿/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");
		
		struct
		{
			class APlayerController*                           PlayerController;
		} params;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	 * 		Flags  -> ()
	 */
	bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	 * 		Flags  -> ()
	 */
	bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEyeTrackerStereoGazeData                   OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");
		
		struct
		{
			struct FEyeTrackerStereoGazeData                   OutGazeData;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEyeTrackerGazeData                         OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");
		
		struct
		{
			struct FEyeTrackerGazeData                         OutGazeData;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEyeTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEyeTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}

}

