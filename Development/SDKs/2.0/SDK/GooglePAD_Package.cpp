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
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	 * 		Flags  -> ()
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");
		
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
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");
		
		struct
		{
			class FString                                      Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");
		
		struct
		{
			TArray<class FString>                              AssetPacks;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");
		
		struct
		{
			TArray<class FString>                              AssetPacks;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGooglePADFunctionLibrary::ReleaseDownloadState(int32_t State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");
		
		struct
		{
			int32_t                                            State;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32_t Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");
		
		struct
		{
			int32_t                                            Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32_t State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");
		
		struct
		{
			int32_t                                            State;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32_t Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");
		
		struct
		{
			int32_t                                            Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGooglePADCellularDataConfirmStatus                Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");
		
		struct
		{
			EGooglePADCellularDataConfirmStatus                Status;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Status != nullptr)
			*Status = params.Status;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32_t State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");
		
		struct
		{
			int32_t                                            State;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Name, int32_t* State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            State;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::GetBytesDownloaded(int32_t State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");
		
		struct
		{
			int32_t                                            State;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGooglePADFunctionLibrary::GetAssetsPath(int32_t Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");
		
		struct
		{
			int32_t                                            Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Name, int32_t* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            Location;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");
		
		struct
		{
			TArray<class FString>                              AssetPacks;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGooglePADFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGooglePADFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		return ptr;
	}

}

