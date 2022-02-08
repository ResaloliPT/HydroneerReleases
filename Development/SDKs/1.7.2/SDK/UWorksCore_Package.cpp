/**
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1F10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreAppList::GetNumInstalledApps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetNumInstalledApps");
		
		UUWorksInterfaceCoreAppList_GetNumInstalledApps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1E20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    AppIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxAppIDs                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreAppList::GetInstalledApps(TArray<int32_t>* AppIDs, int32_t MaxAppIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetInstalledApps");
		
		UUWorksInterfaceCoreAppList_GetInstalledApps_Params params {};
		params.MaxAppIDs = MaxAppIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppIDs != nullptr)
			*AppIDs = params.AppIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1CF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreAppList::GetAppName(int32_t AppID, class FString* Name, int32_t NameMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppName");
		
		UUWorksInterfaceCoreAppList_GetAppName_Params params {};
		params.AppID = AppID;
		params.NameMaxLength = NameMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1CC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreAppList* UUWorksInterfaceCoreAppList::STATIC_GetAppList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppList");
		
		UUWorksInterfaceCoreAppList_GetAppList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1B90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Directory                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DirectoryMaxLength                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreAppList::GetAppInstallDir(int32_t AppID, class FString* Directory, int32_t DirectoryMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppInstallDir");
		
		UUWorksInterfaceCoreAppList_GetAppInstallDir_Params params {};
		params.AppID = AppID;
		params.DirectoryMaxLength = DirectoryMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Directory != nullptr)
			*Directory = params.Directory;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F1B00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreAppList::GetAppBuildId(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreAppList.GetAppBuildId");
		
		UUWorksInterfaceCoreAppList_GetAppBuildId_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreAppList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreAppList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreAppList");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3480
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreApps::UninstallDLC(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.UninstallDLC");
		
		UUWorksInterfaceCoreApps_UninstallDLC_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F33F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bMissingFilesOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::MarkContentCorrupt(bool bMissingFilesOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.MarkContentCorrupt");
		
		UUWorksInterfaceCoreApps_MarkContentCorrupt_Params params {};
		params.bMissingFilesOnly = bMissingFilesOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3370
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreApps::InstallDLC(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.InstallDLC");
		
		UUWorksInterfaceCoreApps_InstallDLC_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3240
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreApps::GetLaunchQueryParam(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetLaunchQueryParam");
		
		UUWorksInterfaceCoreApps_GetLaunchQueryParam_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3110
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Depots                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxDepots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreApps::GetInstalledDepots(int32_t AppID, TArray<int32_t>* Depots, int32_t MaxDepots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetInstalledDepots");
		
		UUWorksInterfaceCoreApps_GetInstalledDepots_Params params {};
		params.AppID = AppID;
		params.MaxDepots = MaxDepots;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Depots != nullptr)
			*Depots = params.Depots;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2FC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreApps::GetFileDetailsMinimal(const class FScriptDelegate& Completed, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetailsMinimal");
		
		UUWorksInterfaceCoreApps_GetFileDetailsMinimal_Params params {};
		params.Completed = Completed;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2F90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreGetFileDetails* UUWorksInterfaceCoreApps::GetFileDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetFileDetails");
		
		UUWorksInterfaceCoreApps_GetFileDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2F00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreApps::GetEarliestPurchaseUnixTime(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetEarliestPurchaseUnixTime");
		
		UUWorksInterfaceCoreApps_GetEarliestPurchaseUnixTime_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2DE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bytesTotal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::GetDlcDownloadProgress(int32_t AppID, int32_t* BytesDownloaded, int32_t* bytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDlcDownloadProgress");
		
		UUWorksInterfaceCoreApps_GetDlcDownloadProgress_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesDownloaded != nullptr)
			*BytesDownloaded = params.BytesDownloaded;
		if (bytesTotal != nullptr)
			*bytesTotal = params.bytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2DB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreApps::GetDLCCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetDLCCount");
		
		UUWorksInterfaceCoreApps_GetDLCCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2D30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUWorksInterfaceCoreApps::GetCurrentGameLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentGameLanguage");
		
		UUWorksInterfaceCoreApps_GetCurrentGameLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2C40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::GetCurrentBetaName(class FString* Name, int32_t NameMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetCurrentBetaName");
		
		UUWorksInterfaceCoreApps_GetCurrentBetaName_Params params {};
		params.NameMaxLength = NameMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2BC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUWorksInterfaceCoreApps::GetAvailableGameLanguages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAvailableGameLanguages");
		
		UUWorksInterfaceCoreApps_GetAvailableGameLanguages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2B90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetApps
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreApps* UUWorksInterfaceCoreApps::STATIC_GetApps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetApps");
		
		UUWorksInterfaceCoreApps_GetApps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2B50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreApps::GetAppOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppOwner");
		
		UUWorksInterfaceCoreApps_GetAppOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2A20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PathMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreApps::GetAppInstallDir(int32_t AppID, class FString* Path, int32_t PathMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppInstallDir");
		
		UUWorksInterfaceCoreApps_GetAppInstallDir_Params params {};
		params.AppID = AppID;
		params.PathMaxLength = PathMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Path != nullptr)
			*Path = params.Path;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F29F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreApps::GetAppBuildId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.GetAppBuildId");
		
		UUWorksInterfaceCoreApps_GetAppBuildId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F29C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreApps::BIsVACBanned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsVACBanned");
		
		UUWorksInterfaceCoreApps_BIsVACBanned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2990
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreApps::BIsSubscribedFromFreeWeekend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedFromFreeWeekend");
		
		UUWorksInterfaceCoreApps_BIsSubscribedFromFreeWeekend_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2900
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::BIsSubscribedApp(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribedApp");
		
		UUWorksInterfaceCoreApps_BIsSubscribedApp_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F28D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreApps::BIsSubscribed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsSubscribed");
		
		UUWorksInterfaceCoreApps_BIsSubscribed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F28A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreApps::BIsLowViolence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsLowViolence");
		
		UUWorksInterfaceCoreApps_BIsLowViolence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2810
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::BIsDlcInstalled(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsDlcInstalled");
		
		UUWorksInterfaceCoreApps_BIsDlcInstalled_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F27E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreApps::BIsCybercafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsCybercafe");
		
		UUWorksInterfaceCoreApps_BIsCybercafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2750
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::BIsAppInstalled(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BIsAppInstalled");
		
		UUWorksInterfaceCoreApps_BIsAppInstalled_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F2560
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            DLC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAvailable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NameMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreApps::BGetDLCDataByIndex(int32_t DLC, int32_t* AppID, bool* bAvailable, class FString* Name, int32_t NameMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreApps.BGetDLCDataByIndex");
		
		UUWorksInterfaceCoreApps_BGetDLCDataByIndex_Params params {};
		params.DLC = DLC;
		params.NameMaxLength = NameMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppID != nullptr)
			*AppID = params.AppID;
		if (bAvailable != nullptr)
			*bAvailable = params.bAvailable;
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreApps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreApps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreApps");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4D00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeftSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RightSpeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::TriggerVibration(const struct FUWorksControllerHandle& ControllerHandle, int32_t LeftSpeed, int32_t RightSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerVibration");
		
		UUWorksInterfaceCoreController_TriggerVibration_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.LeftSpeed = LeftSpeed;
		params.RightSpeed = RightSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4B50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksSteamControllerPad               TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OffMicroSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Repeat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::TriggerRepeatedHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec, int32_t OffMicroSec, int32_t Repeat, int32_t Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerRepeatedHapticPulse");
		
		UUWorksInterfaceCoreController_TriggerRepeatedHapticPulse_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.TargetPad = TargetPad;
		params.DurationMicroSec = DurationMicroSec;
		params.OffMicroSec = OffMicroSec;
		params.Repeat = Repeat;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4A40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksSteamControllerPad               TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::TriggerHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.TriggerHapticPulse");
		
		UUWorksInterfaceCoreController_TriggerHapticPulse_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.TargetPad = TargetPad;
		params.DurationMicroSec = DurationMicroSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4980
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerAnalogActionHandle         Action                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::StopAnalogActionMomentum(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.StopAnalogActionMomentum");
		
		UUWorksInterfaceCoreController_StopAnalogActionMomentum_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4950
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.Shutdown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreController::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Shutdown");
		
		UUWorksInterfaceCoreController_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F48C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreController::ShowBindingPanel(const struct FUWorksControllerHandle& ControllerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ShowBindingPanel");
		
		UUWorksInterfaceCoreController_ShowBindingPanel_Params params {};
		params.ControllerHandle = ControllerHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F46E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorR                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorG                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksSteamControllerLEDFlag>   Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::SetLEDColor(const struct FUWorksControllerHandle& ControllerHandle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.SetLEDColor");
		
		UUWorksInterfaceCoreController_SetLEDColor_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.ColorR = ColorR;
		params.ColorG = ColorG;
		params.ColorB = ColorB;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F46C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.RunFrame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreController::RunFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.RunFrame");
		
		UUWorksInterfaceCoreController_RunFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4690
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreController::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.Init");
		
		UUWorksInterfaceCoreController_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F45C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksControllerActionOrigin           Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreController::GetStringForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetStringForActionOrigin");
		
		UUWorksInterfaceCoreController_GetStringForActionOrigin_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4510
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetMotionData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerMotionData UUWorksInterfaceCoreController::GetMotionData(const struct FUWorksControllerHandle& ControllerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetMotionData");
		
		UUWorksInterfaceCoreController_GetMotionData_Params params {};
		params.ControllerHandle = ControllerHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4440
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksControllerActionOrigin           Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreController::GetGlyphForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGlyphForActionOrigin");
		
		UUWorksInterfaceCoreController_GetGlyphForActionOrigin_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F43B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreController::GetGamepadIndexForController(const struct FUWorksControllerHandle& ControllerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetGamepadIndexForController");
		
		UUWorksInterfaceCoreController_GetGamepadIndexForController_Params params {};
		params.ControllerHandle = ControllerHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3E50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerDigitalActionHandle        DigitalActionHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreController::GetDigitalActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionOrigins");
		
		UUWorksInterfaceCoreController_GetDigitalActionOrigins_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.ActionSetHandle = ActionSetHandle;
		params.DigitalActionHandle = DigitalActionHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginsOut != nullptr)
			*OriginsOut = params.OriginsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F42C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerDigitalActionHandle UUWorksInterfaceCoreController::GetDigitalActionHandle(const class FString& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionHandle");
		
		UUWorksInterfaceCoreController_GetDigitalActionHandle_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F41F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerDigitalActionHandle        DigitalActionHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerDigitalActionData UUWorksInterfaceCoreController::GetDigitalActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetDigitalActionData");
		
		UUWorksInterfaceCoreController_GetDigitalActionData_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.DigitalActionHandle = DigitalActionHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4150
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetCurrentActionSet(const struct FUWorksControllerHandle& ControllerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetCurrentActionSet");
		
		UUWorksInterfaceCoreController_GetCurrentActionSet_Params params {};
		params.ControllerHandle = ControllerHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F40C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerHandle UUWorksInterfaceCoreController::GetControllerForGamepadIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetControllerForGamepadIndex");
		
		UUWorksInterfaceCoreController_GetControllerForGamepadIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F4090
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetController
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreController* UUWorksInterfaceCoreController::STATIC_GetController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetController");
		
		UUWorksInterfaceCoreController_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3FD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksControllerHandle>             HandlesOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreController::GetConnectedControllers(TArray<struct FUWorksControllerHandle>* HandlesOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetConnectedControllers");
		
		UUWorksInterfaceCoreController_GetConnectedControllers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandlesOut != nullptr)
			*HandlesOut = params.HandlesOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3E50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerAnalogActionHandle         AnalogActionHandle                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksControllerActionOrigin>   OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreController::GetAnalogActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionOrigins");
		
		UUWorksInterfaceCoreController_GetAnalogActionOrigins_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.ActionSetHandle = ActionSetHandle;
		params.AnalogActionHandle = AnalogActionHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginsOut != nullptr)
			*OriginsOut = params.OriginsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3D60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerAnalogActionHandle UUWorksInterfaceCoreController::GetAnalogActionHandle(const class FString& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionHandle");
		
		UUWorksInterfaceCoreController_GetAnalogActionHandle_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3C80
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerAnalogActionHandle         AnalogActionHandle                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerAnalogActionData UUWorksInterfaceCoreController::GetAnalogActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetAnalogActionData");
		
		UUWorksInterfaceCoreController_GetAnalogActionData_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.AnalogActionHandle = AnalogActionHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3B90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActionSetName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerActionSetHandle UUWorksInterfaceCoreController::GetActionSetHandle(const class FString& ActionSetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.GetActionSetHandle");
		
		UUWorksInterfaceCoreController_GetActionSetHandle_Params params {};
		params.ActionSetName = ActionSetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F3AD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     ControllerHandle                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksControllerActionSetHandle            ActionSetHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreController::ActivateActionSet(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreController.ActivateActionSet");
		
		UUWorksInterfaceCoreController_ActivateActionSet_Params params {};
		params.ControllerHandle = ControllerHandle;
		params.ActionSetHandle = ActionSetHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreController");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F96A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::SetRichPresence(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetRichPresence");
		
		UUWorksInterfaceCoreFriends_SetRichPresence_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9620
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUserPlayedWith                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::SetPlayedWith(const struct FUWorksSteamID& SteamIDUserPlayedWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPlayedWith");
		
		UUWorksInterfaceCoreFriends_SetPlayedWith_Params params {};
		params.SteamIDUserPlayedWith = SteamIDUserPlayedWith;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F94D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::SetPersonaNameMinimal(const class FScriptDelegate& Completed, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaNameMinimal");
		
		UUWorksInterfaceCoreFriends_SetPersonaNameMinimal_Params params {};
		params.Completed = Completed;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F94A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreSetPersonaName* UUWorksInterfaceCoreFriends::SetPersonaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetPersonaName");
		
		UUWorksInterfaceCoreFriends_SetPersonaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9410
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInterceptEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetListenForFriendsMessages");
		
		UUWorksInterfaceCoreFriends_SetListenForFriendsMessages_Params params {};
		params.bInterceptEnabled = bInterceptEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9340
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSpeaking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::SetInGameVoiceSpeaking(const struct FUWorksSteamID& SteamIDUser, bool bSpeaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SetInGameVoiceSpeaking");
		
		UUWorksInterfaceCoreFriends_SetInGameVoiceSpeaking_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.bSpeaking = bSpeaking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9210
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::SendClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.SendClanChatMessage");
		
		UUWorksInterfaceCoreFriends_SendClanChatMessage_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9150
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::RequestUserInformation(const struct FUWorksSteamID& SteamIDUser, bool bRequireNameOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestUserInformation");
		
		UUWorksInterfaceCoreFriends_RequestUserInformation_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.bRequireNameOnly = bRequireNameOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F90D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::RequestFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestFriendRichPresence");
		
		UUWorksInterfaceCoreFriends_RequestFriendRichPresence_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8FD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::RequestClanOfficerListMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerListMinimal");
		
		UUWorksInterfaceCoreFriends_RequestClanOfficerListMinimal_Params params {};
		params.Completed = Completed;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8FA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestClanOfficerList* UUWorksInterfaceCoreFriends::RequestClanOfficerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.RequestClanOfficerList");
		
		UUWorksInterfaceCoreFriends_RequestClanOfficerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8E70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      MessageToSend                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::ReplyToFriendMessage(const struct FUWorksSteamID& SteamIDFriend, const class FString& MessageToSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ReplyToFriendMessage");
		
		UUWorksInterfaceCoreFriends_ReplyToFriendMessage_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.MessageToSend = MessageToSend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8DE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::OpenClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.OpenClanChatWindowInSteam");
		
		UUWorksInterfaceCoreFriends_OpenClanChatWindowInSteam_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8D50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::LeaveClanChatRoom(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.LeaveClanChatRoom");
		
		UUWorksInterfaceCoreFriends_LeaveClanChatRoom_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8C50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::JoinClanChatRoomMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoomMinimal");
		
		UUWorksInterfaceCoreFriends_JoinClanChatRoomMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8C20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreJoinClanChatRoom* UUWorksInterfaceCoreFriends::JoinClanChatRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.JoinClanChatRoom");
		
		UUWorksInterfaceCoreFriends_JoinClanChatRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8B60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::IsUserInSource(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsUserInSource");
		
		UUWorksInterfaceCoreFriends_IsUserInSource_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.SteamIDSource = SteamIDSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8A60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::IsFollowingMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowingMinimal");
		
		UUWorksInterfaceCoreFriends_IsFollowingMinimal_Params params {};
		params.Completed = Completed;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8A30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreIsFollowing* UUWorksInterfaceCoreFriends::IsFollowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsFollowing");
		
		UUWorksInterfaceCoreFriends_IsFollowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F89A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::IsClanChatWindowOpenInSteam(const struct FUWorksSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatWindowOpenInSteam");
		
		UUWorksInterfaceCoreFriends_IsClanChatWindowOpenInSteam_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F88E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::IsClanChatAdmin(const struct FUWorksSteamID& SteamIDClanChat, const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.IsClanChatAdmin");
		
		UUWorksInterfaceCoreFriends_IsClanChatAdmin_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F87B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::InviteUserToGame(const struct FUWorksSteamID& SteamIDFriend, const class FString& ConnectString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.InviteUserToGame");
		
		UUWorksInterfaceCoreFriends_InviteUserToGame_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.ConnectString = ConnectString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8690
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::HasFriend(const struct FUWorksSteamID& SteamIDFriend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.HasFriend");
		
		UUWorksInterfaceCoreFriends_HasFriend_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.FriendFlags = FriendFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8610
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<UWorksCore_EUWorksUserRestriction> UUWorksInterfaceCoreFriends::GetUserRestrictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetUserRestrictions");
		
		UUWorksInterfaceCoreFriends_GetUserRestrictions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8580
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUWorksInterfaceCoreFriends::GetSmallFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetSmallFriendAvatar");
		
		UUWorksInterfaceCoreFriends_GetSmallFriendAvatar_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F84A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDPlayer                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetPlayerNickname(const struct FUWorksSteamID& SteamIDPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPlayerNickname");
		
		UUWorksInterfaceCoreFriends_GetPlayerNickname_Params params {};
		params.SteamIDPlayer = SteamIDPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8470
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetPersonaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaState");
		
		UUWorksInterfaceCoreFriends_GetPersonaState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F83F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUWorksInterfaceCoreFriends::GetPersonaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetPersonaName");
		
		UUWorksInterfaceCoreFriends_GetPersonaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8360
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUWorksInterfaceCoreFriends::GetMediumFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetMediumFriendAvatar");
		
		UUWorksInterfaceCoreFriends_GetMediumFriendAvatar_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F82D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUWorksInterfaceCoreFriends::GetLargeFriendAvatar(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetLargeFriendAvatar");
		
		UUWorksInterfaceCoreFriends_GetLargeFriendAvatar_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7EB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendSteamLevel(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendSteamLevel");
		
		UUWorksInterfaceCoreFriends_GetFriendSteamLevel_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F81F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetFriendsGroupName(const struct FUWorksFriendsGroupID& FriendsGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupName");
		
		UUWorksInterfaceCoreFriends_GetFriendsGroupName_Params params {};
		params.FriendsGroupID = FriendsGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F80C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      SteamIDMembers                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MembersCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::GetFriendsGroupMembersList(const struct FUWorksFriendsGroupID& FriendsGroupID, TArray<struct FUWorksSteamID>* SteamIDMembers, int32_t MembersCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersList");
		
		UUWorksInterfaceCoreFriends_GetFriendsGroupMembersList_Params params {};
		params.FriendsGroupID = FriendsGroupID;
		params.MembersCount = MembersCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDMembers != nullptr)
			*SteamIDMembers = params.SteamIDMembers;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F8030
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksFriendsGroupID                       FriendsGroupID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendsGroupMembersCount(const struct FUWorksFriendsGroupID& FriendsGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupMembersCount");
		
		UUWorksInterfaceCoreFriends_GetFriendsGroupMembersCount_Params params {};
		params.FriendsGroupID = FriendsGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7FA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FriendGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksFriendsGroupID UUWorksInterfaceCoreFriends::GetFriendsGroupIDByIndex(int32_t FriendGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupIDByIndex");
		
		UUWorksInterfaceCoreFriends_GetFriendsGroupIDByIndex_Params params {};
		params.FriendGroup = FriendGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7F70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendsGroupCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendsGroupCount");
		
		UUWorksInterfaceCoreFriends_GetFriendsGroupCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7F40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreFriends* UUWorksInterfaceCoreFriends::STATIC_GetFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriends");
		
		UUWorksInterfaceCoreFriends_GetFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7E20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyCount(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyCount");
		
		UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyCount_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7D20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetFriendRichPresenceKeyByIndex(const struct FUWorksSteamID& SteamIDFriend, int32_t Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresenceKeyByIndex");
		
		UUWorksInterfaceCoreFriends_GetFriendRichPresenceKeyByIndex_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7BB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRichPresence");
		
		UUWorksInterfaceCoreFriends_GetFriendRichPresence_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7B20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksFriendRelationship UUWorksInterfaceCoreFriends::GetFriendRelationship(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendRelationship");
		
		UUWorksInterfaceCoreFriends_GetFriendRelationship_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7A90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksPersonaState UUWorksInterfaceCoreFriends::GetFriendPersonaState(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaState");
		
		UUWorksInterfaceCoreFriends_GetFriendPersonaState_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7990
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PersonaName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetFriendPersonaNameHistory(const struct FUWorksSteamID& SteamIDFriend, int32_t PersonaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaNameHistory");
		
		UUWorksInterfaceCoreFriends_GetFriendPersonaNameHistory_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.PersonaName = PersonaName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F78B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetFriendPersonaName(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendPersonaName");
		
		UUWorksInterfaceCoreFriends_GetFriendPersonaName_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F76D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendMessage(const struct FUWorksSteamID& SteamIDFriend, int32_t MessageID, class FString* Text, int32_t TextMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendMessage");
		
		UUWorksInterfaceCoreFriends_GetFriendMessage_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		params.MessageID = MessageID;
		params.TextMaxLength = TextMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F74A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameIP                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::GetFriendGamePlayed(const struct FUWorksSteamID& SteamIDFriend, struct FUWorksGameID* GameID, class FString* GameIP, int32_t* ConnectionPort, int32_t* QueryPort, struct FUWorksSteamID* SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendGamePlayed");
		
		UUWorksInterfaceCoreFriends_GetFriendGamePlayed_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
		if (GameIP != nullptr)
			*GameIP = params.GameIP;
		if (ConnectionPort != nullptr)
			*ConnectionPort = params.ConnectionPort;
		if (QueryPort != nullptr)
			*QueryPort = params.QueryPort;
		if (SteamIDLobby != nullptr)
			*SteamIDLobby = params.SteamIDLobby;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F73D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Friend                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendFromSourceByIndex(const struct FUWorksSteamID& SteamIDSource, int32_t Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendFromSourceByIndex");
		
		UUWorksInterfaceCoreFriends_GetFriendFromSourceByIndex_Params params {};
		params.SteamIDSource = SteamIDSource;
		params.Friend = Friend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7340
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDSource                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendCountFromSource(const struct FUWorksSteamID& SteamIDSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCountFromSource");
		
		UUWorksInterfaceCoreFriends_GetFriendCountFromSource_Params params {};
		params.SteamIDSource = SteamIDSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7250
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendCount(TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCount");
		
		UUWorksInterfaceCoreFriends_GetFriendCount_Params params {};
		params.FriendFlags = FriendFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F71C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendCoplayTime(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayTime");
		
		UUWorksInterfaceCoreFriends_GetFriendCoplayTime_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7130
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDFriend                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetFriendCoplayGame(const struct FUWorksSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendCoplayGame");
		
		UUWorksInterfaceCoreFriends_GetFriendCoplayGame_Params params {};
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F7000
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Friend                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksFriendFlags>              FriendFlags                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetFriendByIndex(int32_t Friend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFriendByIndex");
		
		UUWorksInterfaceCoreFriends_GetFriendByIndex_Params params {};
		params.Friend = Friend;
		params.FriendFlags = FriendFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6F00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::GetFollowerCountMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCountMinimal");
		
		UUWorksInterfaceCoreFriends_GetFollowerCountMinimal_Params params {};
		params.Completed = Completed;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6ED0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreGetFollowerCount* UUWorksInterfaceCoreFriends::GetFollowerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetFollowerCount");
		
		UUWorksInterfaceCoreFriends_GetFollowerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6EA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetCoplayFriendCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriendCount");
		
		UUWorksInterfaceCoreFriends_GetCoplayFriendCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6E10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            CoplayFriend                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetCoplayFriend(int32_t CoplayFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetCoplayFriend");
		
		UUWorksInterfaceCoreFriends_GetCoplayFriend_Params params {};
		params.CoplayFriend = CoplayFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6D30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetClanTag(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanTag");
		
		UUWorksInterfaceCoreFriends_GetClanTag_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6CA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOwner(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOwner");
		
		UUWorksInterfaceCoreFriends_GetClanOwner_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6C10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetClanOfficerCount(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerCount");
		
		UUWorksInterfaceCoreFriends_GetClanOfficerCount_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6B40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Officer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanOfficerByIndex(const struct FUWorksSteamID& SteamIDClan, int32_t Officer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanOfficerByIndex");
		
		UUWorksInterfaceCoreFriends_GetClanOfficerByIndex_Params params {};
		params.SteamIDClan = SteamIDClan;
		params.Officer = Officer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6A60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreFriends::GetClanName(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanName");
		
		UUWorksInterfaceCoreFriends_GetClanName_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6A30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetClanCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanCount");
		
		UUWorksInterfaceCoreFriends_GetClanCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6830
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDChatter                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, int32_t MessageID, class FString* Text, int32_t TextMax, UWorksCore_EUWorksChatEntryType* ChatEntryType, struct FUWorksSteamID* SteamIDChatter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMessage");
		
		UUWorksInterfaceCoreFriends_GetClanChatMessage_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		params.MessageID = MessageID;
		params.TextMax = TextMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		if (SteamIDChatter != nullptr)
			*SteamIDChatter = params.SteamIDChatter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F67A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreFriends::GetClanChatMemberCount(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanChatMemberCount");
		
		UUWorksInterfaceCoreFriends_GetClanChatMemberCount_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6710
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Clan                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetClanByIndex(int32_t Clan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanByIndex");
		
		UUWorksInterfaceCoreFriends_GetClanByIndex_Params params {};
		params.Clan = Clan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6570
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Online                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chatting                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::GetClanActivityCounts(const struct FUWorksSteamID& SteamIDClan, int32_t* Online, int32_t* InGame, int32_t* Chatting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetClanActivityCounts");
		
		UUWorksInterfaceCoreFriends_GetClanActivityCounts_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Online != nullptr)
			*Online = params.Online;
		if (InGame != nullptr)
			*InGame = params.InGame;
		if (Chatting != nullptr)
			*Chatting = params.Chatting;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F64A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreFriends::GetChatMemberByIndex(const struct FUWorksSteamID& SteamIDClan, int32_t User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.GetChatMemberByIndex");
		
		UUWorksInterfaceCoreFriends_GetChatMemberByIndex_Params params {};
		params.SteamIDClan = SteamIDClan;
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F63A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::EnumerateFollowingListMinimal(const class FScriptDelegate& Completed, int32_t StartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingListMinimal");
		
		UUWorksInterfaceCoreFriends_EnumerateFollowingListMinimal_Params params {};
		params.Completed = Completed;
		params.StartIndex = StartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6370
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreEnumerateFollowingList* UUWorksInterfaceCoreFriends::EnumerateFollowingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.EnumerateFollowingList");
		
		UUWorksInterfaceCoreFriends_EnumerateFollowingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6220
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::DownloadClanActivityCountsMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksSteamID> SteamIDClans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCountsMinimal");
		
		UUWorksInterfaceCoreFriends_DownloadClanActivityCountsMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDClans = SteamIDClans;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F61F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreDownloadClanActivityCounts* UUWorksInterfaceCoreFriends::DownloadClanActivityCounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.DownloadClanActivityCounts");
		
		UUWorksInterfaceCoreFriends_DownloadClanActivityCounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6160
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreFriends::CloseClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.CloseClanChatWindowInSteam");
		
		UUWorksInterfaceCoreFriends_CloseClanChatWindowInSteam_Params params {};
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6140
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreFriends::ClearRichPresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ClearRichPresence");
		
		UUWorksInterfaceCoreFriends_ClearRichPresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F6060
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::ActivateGameOverlayToWebPage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToWebPage");
		
		UUWorksInterfaceCoreFriends_ActivateGameOverlayToWebPage_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F5FA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksOverlaySpecific                  Dialog                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::ActivateGameOverlayToUser(UWorksCore_EUWorksOverlaySpecific Dialog, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToUser");
		
		UUWorksInterfaceCoreFriends_ActivateGameOverlayToUser_Params params {};
		params.Dialog = Dialog;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F5EE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksOverlayToStoreFlag               Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::ActivateGameOverlayToStore(int32_t AppID, UWorksCore_EUWorksOverlayToStoreFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayToStore");
		
		UUWorksInterfaceCoreFriends_ActivateGameOverlayToStore_Params params {};
		params.AppID = AppID;
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F5E60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::ActivateGameOverlayInviteDialog(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlayInviteDialog");
		
		UUWorksInterfaceCoreFriends_ActivateGameOverlayInviteDialog_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F5DE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksOverlayGeneric                   Dialog                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreFriends::ActivateGameOverlay(UWorksCore_EUWorksOverlayGeneric Dialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreFriends.ActivateGameOverlay");
		
		UUWorksInterfaceCoreFriends_ActivateGameOverlay_Params params {};
		params.Dialog = Dialog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAEC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreGameServer::WasRestartRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.WasRestartRequested");
		
		UUWorksInterfaceCoreGameServer_WasRestartRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAE00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreGameServer::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.UserHasLicenseForApp");
		
		UUWorksInterfaceCoreGameServer_UserHasLicenseForApp_Params params {};
		params.SteamID = SteamID;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAD20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ServerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetServerName(const class FString& ServerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetServerName");
		
		UUWorksInterfaceCoreGameServer_SetServerName_Params params {};
		params.ServerName = ServerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAC40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Region                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetRegion(const class FString& Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetRegion");
		
		UUWorksInterfaceCoreGameServer_SetRegion_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FABB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bPasswordProtected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetPasswordProtected(bool bPasswordProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetPasswordProtected");
		
		UUWorksInterfaceCoreGameServer_SetPasswordProtected_Params params {};
		params.bPasswordProtected = bPasswordProtected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAB30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PlayersMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetMaxPlayerCount(int32_t PlayersMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMaxPlayerCount");
		
		UUWorksInterfaceCoreGameServer_SetMaxPlayerCount_Params params {};
		params.PlayersMax = PlayersMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FAA50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetMapName(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetMapName");
		
		UUWorksInterfaceCoreGameServer_SetMapName_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA8E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetKeyValue(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetKeyValue");
		
		UUWorksInterfaceCoreGameServer_SetKeyValue_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA860
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HeartbeatInterval                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetHeartbeatInterval(int32_t HeartbeatInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetHeartbeatInterval");
		
		UUWorksInterfaceCoreGameServer_SetHeartbeatInterval_Params params {};
		params.HeartbeatInterval = HeartbeatInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA780
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameTags                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetGameTags(const class FString& GameTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameTags");
		
		UUWorksInterfaceCoreGameServer_SetGameTags_Params params {};
		params.GameTags = GameTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA6A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetGameData(const class FString& GameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetGameData");
		
		UUWorksInterfaceCoreGameServer_SetGameData_Params params {};
		params.GameData = GameData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA620
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            BotPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::SetBotPlayerCount(int32_t BotPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.SetBotPlayerCount");
		
		UUWorksInterfaceCoreGameServer_SetBotPlayerCount_Params params {};
		params.BotPlayers = BotPlayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA560
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDGroup                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServer::RequestUserGroupStatus(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.RequestUserGroupStatus");
		
		UUWorksInterfaceCoreGameServer_RequestUserGroupStatus_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.SteamIDGroup = SteamIDGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA520
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreGameServer::GetSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetSteamID");
		
		UUWorksInterfaceCoreGameServer_GetSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA4F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreGameServer* UUWorksInterfaceCoreGameServer::STATIC_GetGameServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetGameServer");
		
		UUWorksInterfaceCoreGameServer_GetGameServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA430
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksTicketHandle UUWorksInterfaceCoreGameServer::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.GetAuthSessionTicket");
		
		UUWorksInterfaceCoreGameServer_GetAuthSessionTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA410
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreGameServer::ForceHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ForceHeartbeat");
		
		UUWorksInterfaceCoreGameServer_ForceHeartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA390
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::EndAuthSession(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EndAuthSession");
		
		UUWorksInterfaceCoreGameServer_EndAuthSession_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA300
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::EnableHeartbeats(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.EnableHeartbeats");
		
		UUWorksInterfaceCoreGameServer_EnableHeartbeats_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA200
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibilityMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDNewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibilityMinimal");
		
		UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibilityMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDNewPlayer = SteamIDNewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA1D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreComputeNewPlayerCompatibility* UUWorksInterfaceCoreGameServer::ComputeNewPlayerCompatibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ComputeNewPlayerCompatibility");
		
		UUWorksInterfaceCoreGameServer_ComputeNewPlayerCompatibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA1B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreGameServer::ClearAllKeyValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.ClearAllKeyValues");
		
		UUWorksInterfaceCoreGameServer_ClearAllKeyValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA130
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksTicketHandle                         TicketHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.CancelAuthTicket");
		
		UUWorksInterfaceCoreGameServer_CancelAuthTicket_Params params {};
		params.TicketHandle = TicketHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9FE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreGameServer::BSecure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BSecure");
		
		UUWorksInterfaceCoreGameServer_BSecure_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9FB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreGameServer::BLoggedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BLoggedOn");
		
		UUWorksInterfaceCoreGameServer_BLoggedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FA010
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreGameServer::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.BeginAuthSession");
		
		UUWorksInterfaceCoreGameServer_BeginAuthSession_Params params {};
		params.Ticket = Ticket;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9EB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServer::AssociateWithClanMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClanMinimal");
		
		UUWorksInterfaceCoreGameServer_AssociateWithClanMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005F9E80
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreAssociateWithClan* UUWorksInterfaceCoreGameServer::AssociateWithClan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServer.AssociateWithClan");
		
		UUWorksInterfaceCoreGameServer_AssociateWithClan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreGameServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreGameServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreGameServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FBED0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::UpdateUserAvgRateStat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.UpdateUserAvgRateStat");
		
		UUWorksInterfaceCoreGameServerStats_UpdateUserAvgRateStat_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.CountThisSession = CountThisSession;
		params.SessionLength = SessionLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FBDD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServerStats::StoreUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStatsMinimal");
		
		UUWorksInterfaceCoreGameServerStats_StoreUserStatsMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FBDA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreStoreUserStats* UUWorksInterfaceCoreGameServerStats::StoreUserStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.StoreUserStats");
		
		UUWorksInterfaceCoreGameServerStats_StoreUserStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FBC40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromInteger");
		
		UUWorksInterfaceCoreGameServerStats_SetUserStatFromInteger_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FBAD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::SetUserStatFromFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserStatFromFloat");
		
		UUWorksInterfaceCoreGameServerStats_SetUserStatFromFloat_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB9A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::SetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.SetUserAchievement");
		
		UUWorksInterfaceCoreGameServerStats_SetUserAchievement_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB8A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreGameServerStats::RequestUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStatsMinimal");
		
		UUWorksInterfaceCoreGameServerStats_RequestUserStatsMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB870
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestUserStatsGS* UUWorksInterfaceCoreGameServerStats::RequestUserStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.RequestUserStats");
		
		UUWorksInterfaceCoreGameServerStats_RequestUserStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB6F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsInteger");
		
		UUWorksInterfaceCoreGameServerStats_GetUserStatAsInteger_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB570
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::GetUserStatAsFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserStatAsFloat");
		
		UUWorksInterfaceCoreGameServerStats_GetUserStatAsFloat_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB3F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetUserAchievement");
		
		UUWorksInterfaceCoreGameServerStats_GetUserAchievement_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB3C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreGameServerStats* UUWorksInterfaceCoreGameServerStats::STATIC_GetGameServerStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.GetGameServerStats");
		
		UUWorksInterfaceCoreGameServerStats_GetGameServerStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FB290
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreGameServerStats::ClearUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreGameServerStats.ClearUserAchievement");
		
		UUWorksInterfaceCoreGameServerStats_ClearUserAchievement_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreGameServerStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreGameServerStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreGameServerStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FE1D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::TriggerItemDrop(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemDef& ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TriggerItemDrop");
		
		UUWorksInterfaceCoreInventory_TriggerItemDrop_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FE060
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamItemInstanceID                  ItemSourceInstanceID                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemSourceQuantity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamItemInstanceID                  ItemDestinationInstanceID                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::TransferItemQuantity(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemInstanceID& ItemSourceInstanceID, int32_t ItemSourceQuantity, const struct FUWorksSteamItemInstanceID& ItemDestinationInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TransferItemQuantity");
		
		UUWorksInterfaceCoreInventory_TransferItemQuantity_Params params {};
		params.ItemSourceInstanceID = ItemSourceInstanceID;
		params.ItemSourceQuantity = ItemSourceQuantity;
		params.ItemDestinationInstanceID = ItemDestinationInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDD40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDTradePartner                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemInstanceID>          ItemsGiven                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemsGivenQuantities                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemInstanceID>          ItemsReceived                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemsReceivedQuantities                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::TradeItems(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamID& SteamIDTradePartner, TArray<struct FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32_t> ItemsGivenQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32_t> ItemsReceivedQuantities)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.TradeItems");
		
		UUWorksInterfaceCoreInventory_TradeItems_Params params {};
		params.SteamIDTradePartner = SteamIDTradePartner;
		params.ItemsGiven = ItemsGiven;
		params.ItemsGivenQuantities = ItemsGivenQuantities;
		params.ItemsReceived = ItemsReceived;
		params.ItemsReceivedQuantities = ItemsReceivedQuantities;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDC40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::SerializeResult(const struct FUWorksSteamInventoryResult& handle, TArray<unsigned char>* Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.SerializeResult");
		
		UUWorksInterfaceCoreInventory_SerializeResult_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDB40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDsMinimal");
		
		UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDsMinimal_Params params {};
		params.Completed = Completed;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDB10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* UUWorksInterfaceCoreInventory::RequestEligiblePromoItemDefinitionsIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.RequestEligiblePromoItemDefinitionsIDs");
		
		UUWorksInterfaceCoreInventory_RequestEligiblePromoItemDefinitionsIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDAE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreInventory::LoadItemDefinitions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.LoadItemDefinitions");
		
		UUWorksInterfaceCoreInventory_LoadItemDefinitions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FDA30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GrantPromoItems(struct FUWorksSteamInventoryResult* handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GrantPromoItems");
		
		UUWorksInterfaceCoreInventory_GrantPromoItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD9A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreInventory::GetResultTimestamp(const struct FUWorksSteamInventoryResult& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultTimestamp");
		
		UUWorksInterfaceCoreInventory_GetResultTimestamp_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD910
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksResult UUWorksInterfaceCoreInventory::GetResultStatus(const struct FUWorksSteamInventoryResult& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultStatus");
		
		UUWorksInterfaceCoreInventory_GetResultStatus_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD7F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemDetails>             items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetResultItems(const struct FUWorksSteamInventoryResult& handle, TArray<struct FUWorksSteamItemDetails>* items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetResultItems");
		
		UUWorksInterfaceCoreInventory_GetResultItems_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (items != nullptr)
			*items = params.items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD6A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemInstanceID>          InstanceIDs                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetItemsByID(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemInstanceID> InstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemsByID");
		
		UUWorksInterfaceCoreInventory_GetItemsByID_Params params {};
		params.InstanceIDs = InstanceIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD520
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyValue                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertyValue(const struct FUWorksSteamItemDef& ItemDefinition, const class FString& PropertyName, class FString* PropertyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertyValue");
		
		UUWorksInterfaceCoreInventory_GetItemDefinitionPropertyValue_Params params {};
		params.ItemDefinition = ItemDefinition;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PropertyValue != nullptr)
			*PropertyValue = params.PropertyValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD400
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PropertiesNames                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetItemDefinitionPropertiesNames(const struct FUWorksSteamItemDef& ItemDefinition, TArray<class FString>* PropertiesNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionPropertiesNames");
		
		UUWorksInterfaceCoreInventory_GetItemDefinitionPropertiesNames_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PropertiesNames != nullptr)
			*PropertiesNames = params.PropertiesNames;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD340
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetItemDefinitionIDs(TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetItemDefinitionIDs");
		
		UUWorksInterfaceCoreInventory_GetItemDefinitionIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDefinitions != nullptr)
			*ItemDefinitions = params.ItemDefinitions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD310
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreInventory* UUWorksInterfaceCoreInventory::STATIC_GetInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetInventory");
		
		UUWorksInterfaceCoreInventory_GetInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD210
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetEligiblePromoItemDefinitionIDs(const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef>* ItemDefinitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetEligiblePromoItemDefinitionIDs");
		
		UUWorksInterfaceCoreInventory_GetEligiblePromoItemDefinitionIDs_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDefinitions != nullptr)
			*ItemDefinitions = params.ItemDefinitions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FD160
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GetAllItems(struct FUWorksSteamInventoryResult* handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GetAllItems");
		
		UUWorksInterfaceCoreInventory_GetAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FCFA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemQuantities                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::GenerateItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions, TArray<int32_t> ItemQuantities)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.GenerateItems");
		
		UUWorksInterfaceCoreInventory_GenerateItems_Params params {};
		params.ItemDefinitions = ItemDefinitions;
		params.ItemQuantities = ItemQuantities;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FCCC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemDef>                 ItemsGenerated                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemsGeneratedQuantities                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemInstanceID>          ItemsDestroyed                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemsDestroyedQuantities                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::ExchangeItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemsGenerated, TArray<int32_t> ItemsGeneratedQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32_t> ItemsDestroyedQuantities)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ExchangeItems");
		
		UUWorksInterfaceCoreInventory_ExchangeItems_Params params {};
		params.ItemsGenerated = ItemsGenerated;
		params.ItemsGeneratedQuantities = ItemsGeneratedQuantities;
		params.ItemsDestroyed = ItemsDestroyed;
		params.ItemsDestroyedQuantities = ItemsDestroyedQuantities;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FCC40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreInventory::DestroyResult(const struct FUWorksSteamInventoryResult& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DestroyResult");
		
		UUWorksInterfaceCoreInventory_DestroyResult_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FCAA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReservedMustBeFalse                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::DeserializeResult(struct FUWorksSteamInventoryResult* handle, TArray<unsigned char> Buffer, bool bReservedMustBeFalse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.DeserializeResult");
		
		UUWorksInterfaceCoreInventory_DeserializeResult_Params params {};
		params.Buffer = Buffer;
		params.bReservedMustBeFalse = bReservedMustBeFalse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FC980
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamItemInstanceID                  ItemInstanceID                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::ConsumeItem(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemInstanceID& ItemInstanceID, int32_t ItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.ConsumeItem");
		
		UUWorksInterfaceCoreInventory_ConsumeItem_Params params {};
		params.ItemInstanceID = ItemInstanceID;
		params.ItemQuantity = ItemQuantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FC8B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::CheckResultSteamID(const struct FUWorksSteamInventoryResult& handle, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.CheckResultSteamID");
		
		UUWorksInterfaceCoreInventory_CheckResultSteamID_Params params {};
		params.handle = handle;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FC760
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamItemDef>                 ItemDefinitions                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::AddPromoItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItems");
		
		UUWorksInterfaceCoreInventory_AddPromoItems_Params params {};
		params.ItemDefinitions = ItemDefinitions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FC670
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 handle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamItemDef                         ItemDefinition                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreInventory::AddPromoItem(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemDef& ItemDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreInventory.AddPromoItem");
		
		UUWorksInterfaceCoreInventory_AddPromoItem_Params params {};
		params.ItemDefinition = ItemDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (handle != nullptr)
			*handle = params.handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreInventory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreInventory");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601540
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLobbyType(const struct FUWorksSteamID& SteamIDLobby, UWorksCore_EUWorksLobbyType LobbyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyType");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyType_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.LobbyType = LobbyType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601480
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDNewOwner                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDNewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyOwner");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyOwner_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDNewOwner = SteamIDNewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006013C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberLimit");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyMemberLimit_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601220
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::SetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyMemberData");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyMemberData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601160
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLobbyJoinable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLobbyJoinable(const struct FUWorksSteamID& SteamIDLobby, bool bLobbyJoinable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyJoinable");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyJoinable_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.bLobbyJoinable = bLobbyJoinable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600FD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameServerIP                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameServerPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::SetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, const class FString& GameServerIP, int32_t GameServerPort, const struct FUWorksSteamID& SteamIDGameServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyGameServer");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyGameServer_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.GameServerIP = GameServerIP;
		params.GameServerPort = GameServerPort;
		params.SteamIDGameServer = SteamIDGameServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600E20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLobbyData");
		
		UUWorksInterfaceCoreMatchmaking_SetLobbyData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600D60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobbyDependent                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SetLinkedLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDLobbyDependent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SetLinkedLobby");
		
		UUWorksInterfaceCoreMatchmaking_SetLinkedLobby_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDLobbyDependent = SteamIDLobbyDependent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600C30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::SendLobbyChatMsg(const struct FUWorksSteamID& SteamIDLobby, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.SendLobbyChatMsg");
		
		UUWorksInterfaceCoreMatchmaking_SendLobbyChatMsg_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600B70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::RequestLobbyListMinimal(const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyListMinimal");
		
		UUWorksInterfaceCoreMatchmaking_RequestLobbyListMinimal_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600B40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestLobbyList* UUWorksInterfaceCoreMatchmaking::RequestLobbyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyList");
		
		UUWorksInterfaceCoreMatchmaking_RequestLobbyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600AB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::RequestLobbyData(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RequestLobbyData");
		
		UUWorksInterfaceCoreMatchmaking_RequestLobbyData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600890
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::RemoveFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.RemoveFavoriteGame");
		
		UUWorksInterfaceCoreMatchmaking_RemoveFavoriteGame_Params params {};
		params.AppID = AppID;
		params.IP = IP;
		params.ConnectionPort = ConnectionPort;
		params.QueryPort = QueryPort;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600810
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::LeaveLobby(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.LeaveLobby");
		
		UUWorksInterfaceCoreMatchmaking_LeaveLobby_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600710
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::JoinLobbyMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobbyMinimal");
		
		UUWorksInterfaceCoreMatchmaking_JoinLobbyMinimal_Params params {};
		params.Completed = Completed;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006006E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreJoinLobby* UUWorksInterfaceCoreMatchmaking::JoinLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.JoinLobby");
		
		UUWorksInterfaceCoreMatchmaking_JoinLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600620
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDInvitee                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::InviteUserToLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDInvitee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.InviteUserToLobby");
		
		UUWorksInterfaceCoreMatchmaking_InviteUserToLobby_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDInvitee = SteamIDInvitee;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600590
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::GetNumLobbyMembers(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetNumLobbyMembers");
		
		UUWorksInterfaceCoreMatchmaking_GetNumLobbyMembers_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600560
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreMatchmaking* UUWorksInterfaceCoreMatchmaking::STATIC_GetMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetMatchmaking");
		
		UUWorksInterfaceCoreMatchmaking_GetMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006004D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyOwner");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyOwner_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600440
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::GetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberLimit");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyMemberLimit_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006002B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreMatchmaking::GetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDUser, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberData");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyMemberData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDUser = SteamIDUser;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006001E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Member                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyMemberByIndex(const struct FUWorksSteamID& SteamIDLobby, int32_t Member)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyMemberByIndex");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyMemberByIndex_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Member = Member;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00600030
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameServerIP                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameServerPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::GetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, class FString* GameServerIP, int32_t* GameServerPort, struct FUWorksSteamID* SteamIDGameServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyGameServer");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyGameServer_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameServerIP != nullptr)
			*GameServerIP = params.GameServerIP;
		if (GameServerPort != nullptr)
			*GameServerPort = params.GameServerPort;
		if (SteamIDGameServer != nullptr)
			*SteamIDGameServer = params.SteamIDGameServer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FFFA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::GetLobbyDataCount(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataCount");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyDataCount_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FFDA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LobbyData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueMaxLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::GetLobbyDataByIndex(const struct FUWorksSteamID& SteamIDLobby, int32_t LobbyData, class FString* Key, int32_t KeyMaxLength, class FString* Value, int32_t ValueMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyDataByIndex");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyDataByIndex_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.LobbyData = LobbyData;
		params.KeyMaxLength = KeyMaxLength;
		params.ValueMaxLength = ValueMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FFC30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreMatchmaking::GetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyData");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FFA30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageMaxLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatEntryType                    ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::GetLobbyChatEntry(const struct FUWorksSteamID& SteamIDLobby, int32_t MessageID, struct FUWorksSteamID* SteamIDUser, class FString* Message, int32_t MessageMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyChatEntry");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyChatEntry_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.MessageID = MessageID;
		params.MessageMaxLength = MessageMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDUser != nullptr)
			*SteamIDUser = params.SteamIDUser;
		if (Message != nullptr)
			*Message = params.Message;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF9A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Lobby                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreMatchmaking::GetLobbyByIndex(int32_t Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetLobbyByIndex");
		
		UUWorksInterfaceCoreMatchmaking_GetLobbyByIndex_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF970
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::GetFavoriteGameCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGameCount");
		
		UUWorksInterfaceCoreMatchmaking_GetFavoriteGameCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF6E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Game                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastPlayedOnServer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::GetFavoriteGame(int32_t Game, int32_t* AppID, class FString* IP, int32_t* ConnectionPort, int32_t* QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags>* Flags, int32_t* TimeLastPlayedOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.GetFavoriteGame");
		
		UUWorksInterfaceCoreMatchmaking_GetFavoriteGame_Params params {};
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppID != nullptr)
			*AppID = params.AppID;
		if (IP != nullptr)
			*IP = params.IP;
		if (ConnectionPort != nullptr)
			*ConnectionPort = params.ConnectionPort;
		if (QueryPort != nullptr)
			*QueryPort = params.QueryPort;
		if (Flags != nullptr)
			*Flags = params.Flags;
		if (TimeLastPlayedOnServer != nullptr)
			*TimeLastPlayedOnServer = params.TimeLastPlayedOnServer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF5B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreMatchmaking::DeleteLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.DeleteLobbyData");
		
		UUWorksInterfaceCoreMatchmaking_DeleteLobbyData_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF480
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::CreateLobbyMinimal(const class FScriptDelegate& Completed, UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobbyMinimal");
		
		UUWorksInterfaceCoreMatchmaking_CreateLobbyMinimal_Params params {};
		params.Completed = Completed;
		params.LobbyType = LobbyType;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF450
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreCreateLobby* UUWorksInterfaceCoreMatchmaking::CreateLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.CreateLobby");
		
		UUWorksInterfaceCoreMatchmaking_CreateLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF2B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ValueToMatch                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLobbyComparison                  ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListStringFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListStringFilter_Params params {};
		params.KeyToMatch = KeyToMatch;
		params.ValueToMatch = ValueToMatch;
		params.ComparisonType = ComparisonType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF230
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListResultCountFilter(int32_t MaxResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListResultCountFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListResultCountFilter_Params params {};
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FF0E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueToMatch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLobbyComparison                  ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32_t ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNumericalFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNumericalFilter_Params params {};
		params.KeyToMatch = KeyToMatch;
		params.ValueToMatch = ValueToMatch;
		params.ComparisonType = ComparisonType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FEFC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueToBeCloseTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32_t ValueToBeCloseTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListNearValueFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListNearValueFilter_Params params {};
		params.KeyToMatch = KeyToMatch;
		params.ValueToBeCloseTo = ValueToBeCloseTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FEF40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotsAvailable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListFilterSlotsAvailable");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params params {};
		params.SlotsAvailable = SlotsAvailable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FEEC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksLobbyDistanceFilter              LobbyDistanceFilter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListDistanceFilter(UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListDistanceFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListDistanceFilter_Params params {};
		params.LobbyDistanceFilter = LobbyDistanceFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FEE40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmaking::AddRequestLobbyListCompatibleMembersFilter(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddRequestLobbyListCompatibleMembersFilter");
		
		UUWorksInterfaceCoreMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005FEBE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<UWorksCore_EUWorksFavoriteFlags>            Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastPlayedOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreMatchmaking::AddFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmaking.AddFavoriteGame");
		
		UUWorksInterfaceCoreMatchmaking_AddFavoriteGame_Params params {};
		params.AppID = AppID;
		params.IP = IP;
		params.ConnectionPort = ConnectionPort;
		params.QueryPort = QueryPort;
		params.Flags = Flags;
		params.TimeLastPlayedOnServer = TimeLastPlayedOnServer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreMatchmaking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreMatchmaking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMatchmaking");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601F50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksServerQueryType                  queryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmakingServers::ServerListMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, int32_t AppID, UWorksCore_EUWorksServerQueryType queryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerListMinimal");
		
		UUWorksInterfaceCoreMatchmakingServers_ServerListMinimal_Params params {};
		params.Completed = Completed;
		params.Updated = Updated;
		params.AppID = AppID;
		params.queryType = queryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601F20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreServerList* UUWorksInterfaceCoreMatchmakingServers::ServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.ServerList");
		
		UUWorksInterfaceCoreMatchmakingServers_ServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601D20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmakingServers::RulesMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.RulesMinimal");
		
		UUWorksInterfaceCoreMatchmakingServers_RulesMinimal_Params params {};
		params.Completed = Completed;
		params.Updated = Updated;
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601CF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRules* UUWorksInterfaceCoreMatchmakingServers::Rules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Rules");
		
		UUWorksInterfaceCoreMatchmakingServers_Rules_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601AF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Updated                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmakingServers::PlayersMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PlayersMinimal");
		
		UUWorksInterfaceCoreMatchmakingServers_PlayersMinimal_Params params {};
		params.Completed = Completed;
		params.Updated = Updated;
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601AC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCorePlayers* UUWorksInterfaceCoreMatchmakingServers::Players()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Players");
		
		UUWorksInterfaceCoreMatchmakingServers_Players_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601930
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMatchmakingServers::PingMinimal(const class FScriptDelegate& Completed, const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.PingMinimal");
		
		UUWorksInterfaceCoreMatchmakingServers_PingMinimal_Params params {};
		params.Completed = Completed;
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00601900
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCorePing* UUWorksInterfaceCoreMatchmakingServers::Ping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.Ping");
		
		UUWorksInterfaceCoreMatchmakingServers_Ping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006018D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreMatchmakingServers* UUWorksInterfaceCoreMatchmakingServers::STATIC_GetMatchmakingServers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMatchmakingServers.GetMatchmakingServers");
		
		UUWorksInterfaceCoreMatchmakingServers_GetMatchmakingServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreMatchmakingServers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreMatchmakingServers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMatchmakingServers");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602570
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreMusic::SetVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.SetVolume");
		
		UUWorksInterfaceCoreMusic_SetVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602550
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreMusic::PlayPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayPrevious");
		
		UUWorksInterfaceCoreMusic_PlayPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602530
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreMusic::PlayNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.PlayNext");
		
		UUWorksInterfaceCoreMusic_PlayNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602510
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreMusic::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Play");
		
		UUWorksInterfaceCoreMusic_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006024F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreMusic::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.Pause");
		
		UUWorksInterfaceCoreMusic_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006024C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UUWorksInterfaceCoreMusic::GetVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetVolume");
		
		UUWorksInterfaceCoreMusic_GetVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602490
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	UWorksCore_EUWorksAudioPlaybackStatus UUWorksInterfaceCoreMusic::GetPlaybackStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetPlaybackStatus");
		
		UUWorksInterfaceCoreMusic_GetPlaybackStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602460
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreMusic* UUWorksInterfaceCoreMusic::STATIC_GetMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.GetMusic");
		
		UUWorksInterfaceCoreMusic_GetMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602430
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreMusic::BIsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsPlaying");
		
		UUWorksInterfaceCoreMusic_BIsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602400
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreMusic::BIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreMusic.BIsEnabled");
		
		UUWorksInterfaceCoreMusic_BIsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreMusic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreMusic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreMusic");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603270
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksP2PSend                          P2PSendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::SendP2PPacket(const struct FUWorksSteamID& SteamIDRemote, TArray<unsigned char> Data, UWorksCore_EUWorksP2PSend P2PSendType, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PPacket");
		
		UUWorksInterfaceCoreNetworking_SendP2PPacket_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		params.Data = Data;
		params.P2PSendType = P2PSendType;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006030E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksP2PSend                          P2PSendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::SendP2PMessage(const struct FUWorksSteamID& SteamIDRemote, const class FString& Data, UWorksCore_EUWorksP2PSend P2PSendType, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.SendP2PMessage");
		
		UUWorksInterfaceCoreNetworking_SendP2PMessage_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		params.Data = Data;
		params.P2PSendType = P2PSendType;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602F40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::ReadP2PPacket(TArray<unsigned char>* Data, int32_t DataMax, struct FUWorksSteamID* SteamIDRemote, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PPacket");
		
		UUWorksInterfaceCoreNetworking_ReadP2PPacket_Params params {};
		params.DataMax = DataMax;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		if (SteamIDRemote != nullptr)
			*SteamIDRemote = params.SteamIDRemote;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602DA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::ReadP2PMessage(class FString* Data, int32_t DataMax, struct FUWorksSteamID* SteamIDRemote, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.ReadP2PMessage");
		
		UUWorksInterfaceCoreNetworking_ReadP2PMessage_Params params {};
		params.DataMax = DataMax;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		if (SteamIDRemote != nullptr)
			*SteamIDRemote = params.SteamIDRemote;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602CC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            DataSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::IsP2PPacketAvailable(int32_t* DataSize, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.IsP2PPacketAvailable");
		
		UUWorksInterfaceCoreNetworking_IsP2PPacketAvailable_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataSize != nullptr)
			*DataSize = params.DataSize;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602BD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksP2PSessionState                      ConnectionState                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::GetP2PSessionState(const struct FUWorksSteamID& SteamIDRemote, struct FUWorksP2PSessionState* ConnectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetP2PSessionState");
		
		UUWorksInterfaceCoreNetworking_GetP2PSessionState_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionState != nullptr)
			*ConnectionState = params.ConnectionState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602BA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreNetworking* UUWorksInterfaceCoreNetworking::STATIC_GetNetworking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.GetNetworking");
		
		UUWorksInterfaceCoreNetworking_GetNetworking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602B10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::CloseP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PSessionWithUser");
		
		UUWorksInterfaceCoreNetworking_CloseP2PSessionWithUser_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602A50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::CloseP2PChannelWithUser(const struct FUWorksSteamID& SteamIDRemote, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.CloseP2PChannelWithUser");
		
		UUWorksInterfaceCoreNetworking_CloseP2PChannelWithUser_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006029C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::AllowP2PPacketRelay(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AllowP2PPacketRelay");
		
		UUWorksInterfaceCoreNetworking_AllowP2PPacketRelay_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00602930
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDRemote                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreNetworking::AcceptP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreNetworking.AcceptP2PSessionWithUser");
		
		UUWorksInterfaceCoreNetworking_AcceptP2PSessionWithUser_Params params {};
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreNetworking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreNetworking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreNetworking");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604E10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksRemoteStoragePlatform            RemoteStoragePlatform                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::SetSyncPlatforms(const class FString& File, UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetSyncPlatforms");
		
		UUWorksInterfaceCoreRemoteStorage_SetSyncPlatforms_Params params {};
		params.File = File;
		params.RemoteStoragePlatform = RemoteStoragePlatform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604D80
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreRemoteStorage::SetCloudEnabledForApp(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.SetCloudEnabledForApp");
		
		UUWorksInterfaceCoreRemoteStorage_SetCloudEnabledForApp_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604D50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForApp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForApp");
		
		UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForApp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604D20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::IsCloudEnabledForAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.IsCloudEnabledForAccount");
		
		UUWorksInterfaceCoreRemoteStorage_IsCloudEnabledForAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604C30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksRemoteStoragePlatform UUWorksInterfaceCoreRemoteStorage::GetSyncPlatforms(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetSyncPlatforms");
		
		UUWorksInterfaceCoreRemoteStorage_GetSyncPlatforms_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604C00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreRemoteStorage* UUWorksInterfaceCoreRemoteStorage::STATIC_GetRemoteStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetRemoteStorage");
		
		UUWorksInterfaceCoreRemoteStorage_GetRemoteStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604AE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TotalBytes                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AvailableBytes                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::GetQuota(class FString* TotalBytes, class FString* AvailableBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetQuota");
		
		UUWorksInterfaceCoreRemoteStorage_GetQuota_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalBytes != nullptr)
			*TotalBytes = params.TotalBytes;
		if (AvailableBytes != nullptr)
			*AvailableBytes = params.AvailableBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006049F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreRemoteStorage::GetFileTimestamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileTimestamp");
		
		UUWorksInterfaceCoreRemoteStorage_GetFileTimestamp_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604900
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreRemoteStorage::GetFileSize(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileSize");
		
		UUWorksInterfaceCoreRemoteStorage_GetFileSize_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006047F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            File                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileSizeInBytes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreRemoteStorage::GetFileNameAndSize(int32_t File, int32_t* FileSizeInBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileNameAndSize");
		
		UUWorksInterfaceCoreRemoteStorage_GetFileNameAndSize_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileSizeInBytes != nullptr)
			*FileSizeInBytes = params.FileSizeInBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006047C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreRemoteStorage::GetFileCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.GetFileCount");
		
		UUWorksInterfaceCoreRemoteStorage_GetFileCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604690
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCFileWriteStreamHandle             handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamWriteChunk(const struct FUWorksUGCFileWriteStreamHandle& handle, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamWriteChunk");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteStreamWriteChunk_Params params {};
		params.handle = handle;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006045A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCFileWriteStreamHandle UUWorksInterfaceCoreRemoteStorage::FileWriteStreamOpen(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamOpen");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteStreamOpen_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604510
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCFileWriteStreamHandle             handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamClose(const struct FUWorksUGCFileWriteStreamHandle& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamClose");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteStreamClose_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604480
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCFileWriteStreamHandle             handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileWriteStreamCancel(const struct FUWorksUGCFileWriteStreamHandle& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteStreamCancel");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteStreamCancel_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006042A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreRemoteStorage::FileWriteAsyncMinimal(const class FScriptDelegate& Completed, const class FString& File, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsyncMinimal");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteAsyncMinimal_Params params {};
		params.Completed = Completed;
		params.File = File;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604270
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreFileWriteAsync* UUWorksInterfaceCoreRemoteStorage::FileWriteAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWriteAsync");
		
		UUWorksInterfaceCoreRemoteStorage_FileWriteAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00604100
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileWrite(const class FString& File, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileWrite");
		
		UUWorksInterfaceCoreRemoteStorage_FileWrite_Params params {};
		params.File = File;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603F40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreRemoteStorage::FileReadAsyncMinimal(const class FScriptDelegate& Completed, const class FString& File, int32_t Offset, int32_t BytesToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsyncMinimal");
		
		UUWorksInterfaceCoreRemoteStorage_FileReadAsyncMinimal_Params params {};
		params.Completed = Completed;
		params.File = File;
		params.Offset = Offset;
		params.BytesToRead = BytesToRead;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603F10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreFileReadAsync* UUWorksInterfaceCoreRemoteStorage::FileReadAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileReadAsync");
		
		UUWorksInterfaceCoreRemoteStorage_FileReadAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603D90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BufferSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreRemoteStorage::FileRead(const class FString& File, TArray<unsigned char>* Buffer, int32_t BufferSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileRead");
		
		UUWorksInterfaceCoreRemoteStorage_FileRead_Params params {};
		params.File = File;
		params.BufferSize = BufferSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603CA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FilePersisted(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FilePersisted");
		
		UUWorksInterfaceCoreRemoteStorage_FilePersisted_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603BB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileForget(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileForget");
		
		UUWorksInterfaceCoreRemoteStorage_FileForget_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00603AC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileExists(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileExists");
		
		UUWorksInterfaceCoreRemoteStorage_FileExists_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006039D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreRemoteStorage::FileDelete(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreRemoteStorage.FileDelete");
		
		UUWorksInterfaceCoreRemoteStorage_FileDelete_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreRemoteStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreRemoteStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreRemoteStorage");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006059C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::WriteScreenshot(class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.WriteScreenshot");
		
		UUWorksInterfaceCoreScreenshots_WriteScreenshot_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006059A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreScreenshots::TriggerScreenshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TriggerScreenshot");
		
		UUWorksInterfaceCoreScreenshots_TriggerScreenshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006058D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreScreenshots::TagUser(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagUser");
		
		UUWorksInterfaceCoreScreenshots_TagUser_Params params {};
		params.Screenshot = Screenshot;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00605800
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreScreenshots::TagPublishedFile(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.TagPublishedFile");
		
		UUWorksInterfaceCoreScreenshots_TagPublishedFile_Params params {};
		params.Screenshot = Screenshot;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006056D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksScreenshotHandle                     Screenshot                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreScreenshots::SetLocation(const struct FUWorksScreenshotHandle& Screenshot, const class FString& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.SetLocation");
		
		UUWorksInterfaceCoreScreenshots_SetLocation_Params params {};
		params.Screenshot = Screenshot;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006056A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreScreenshots::IsScreenshotsHooked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.IsScreenshotsHooked");
		
		UUWorksInterfaceCoreScreenshots_IsScreenshotsHooked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00605610
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bHook                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreScreenshots::HookScreenshots(bool bHook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.HookScreenshots");
		
		UUWorksInterfaceCoreScreenshots_HookScreenshots_Params params {};
		params.bHook = bHook;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006055E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreScreenshots* UUWorksInterfaceCoreScreenshots::STATIC_GetScreenshots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.GetScreenshots");
		
		UUWorksInterfaceCoreScreenshots_GetScreenshots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00605430
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksVRScreenshotType                 Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VRFileName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddVRScreenshotToLibrary(UWorksCore_EUWorksVRScreenshotType Type, const class FString& Filename, const class FString& VRFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddVRScreenshotToLibrary");
		
		UUWorksInterfaceCoreScreenshots_AddVRScreenshotToLibrary_Params params {};
		params.Type = Type;
		params.Filename = Filename;
		params.VRFileName = VRFileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00605250
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FileMame                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ThumbnailFileName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksScreenshotHandle UUWorksInterfaceCoreScreenshots::AddScreenshotToLibrary(const class FString& FileMame, const class FString& ThumbnailFileName, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreScreenshots.AddScreenshotToLibrary");
		
		UUWorksInterfaceCoreScreenshots_AddScreenshotToLibrary_Params params {};
		params.FileMame = FileMame;
		params.ThumbnailFileName = ThumbnailFileName;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreScreenshots.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreScreenshots::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreScreenshots");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B8C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewVideo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::UpdateItemPreviewVideo(const struct FUWorksUGCUpdateHandle& handle, int32_t Index, const class FString& PreviewVideo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewVideo");
		
		UUWorksInterfaceCoreUGC_UpdateItemPreviewVideo_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.PreviewVideo = PreviewVideo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B750
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::UpdateItemPreviewFile(const struct FUWorksUGCUpdateHandle& handle, int32_t Index, const class FString& PreviewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UpdateItemPreviewFile");
		
		UUWorksInterfaceCoreUGC_UpdateItemPreviewFile_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.PreviewFile = PreviewFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B650
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::UnsubscribeItemMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItemMinimal");
		
		UUWorksInterfaceCoreUGC_UnsubscribeItemMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B620
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreUnsubscribeItem* UUWorksInterfaceCoreUGC::UnsubscribeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.UnsubscribeItem");
		
		UUWorksInterfaceCoreUGC_UnsubscribeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B590
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSuspend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::SuspendDownloads(bool bSuspend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SuspendDownloads");
		
		UUWorksInterfaceCoreUGC_SuspendDownloads_Params params {};
		params.bSuspend = bSuspend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B490
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::SubscribeItemMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItemMinimal");
		
		UUWorksInterfaceCoreUGC_SubscribeItemMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B460
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreSubscribeItem* UUWorksInterfaceCoreUGC::SubscribeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubscribeItem");
		
		UUWorksInterfaceCoreUGC_SubscribeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B2D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::SubmitItemUpdateMinimal(const class FScriptDelegate& Completed, const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdateMinimal");
		
		UUWorksInterfaceCoreUGC_SubmitItemUpdateMinimal_Params params {};
		params.Completed = Completed;
		params.UGCUpdateHandle = UGCUpdateHandle;
		params.ChangeNote = ChangeNote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B2A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreSubmitItemUpdate* UUWorksInterfaceCoreUGC::SubmitItemUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SubmitItemUpdate");
		
		UUWorksInterfaceCoreUGC_SubmitItemUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B150
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingMinimal");
		
		UUWorksInterfaceCoreUGC_StopPlaytimeTrackingMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B090
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItemsMinimal(const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItemsMinimal");
		
		UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItemsMinimal_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B060
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* UUWorksInterfaceCoreUGC::StopPlaytimeTrackingForAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTrackingForAllItems");
		
		UUWorksInterfaceCoreUGC_StopPlaytimeTrackingForAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060B030
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreStopPlaytimeTracking* UUWorksInterfaceCoreUGC::StopPlaytimeTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StopPlaytimeTracking");
		
		UUWorksInterfaceCoreUGC_StopPlaytimeTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060AEE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::StartPlaytimeTrackingMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTrackingMinimal");
		
		UUWorksInterfaceCoreUGC_StartPlaytimeTrackingMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060AEB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreStartPlaytimeTracking* UUWorksInterfaceCoreUGC::StartPlaytimeTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartPlaytimeTracking");
		
		UUWorksInterfaceCoreUGC_StartPlaytimeTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060ADE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCUpdateHandle UUWorksInterfaceCoreUGC::StartItemUpdate(int32_t ConsumerAppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.StartItemUpdate");
		
		UUWorksInterfaceCoreUGC_StartItemUpdate_Params params {};
		params.ConsumerAppID = ConsumerAppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060ACA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::SetUserItemVoteMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVoteMinimal");
		
		UUWorksInterfaceCoreUGC_SetUserItemVoteMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileID = PublishedFileID;
		params.bVoteUp = bVoteUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060AC70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreSetUserItemVote* UUWorksInterfaceCoreUGC::SetUserItemVote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetUserItemVote");
		
		UUWorksInterfaceCoreUGC_SetUserItemVote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060AB40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      searchText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetSearchText(const struct FUWorksUGCQueryHandle& handle, const class FString& searchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetSearchText");
		
		UUWorksInterfaceCoreUGC_SetSearchText_Params params {};
		params.handle = handle;
		params.searchText = searchText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060AA70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnTotalOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnTotalOnly(const struct FUWorksUGCQueryHandle& handle, bool bReturnTotalOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnTotalOnly");
		
		UUWorksInterfaceCoreUGC_SetReturnTotalOnly_Params params {};
		params.handle = handle;
		params.bReturnTotalOnly = bReturnTotalOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A9A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnOnlyIDs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnOnlyIDs(const struct FUWorksUGCQueryHandle& handle, bool bReturnOnlyIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnOnlyIDs");
		
		UUWorksInterfaceCoreUGC_SetReturnOnlyIDs_Params params {};
		params.handle = handle;
		params.bReturnOnlyIDs = bReturnOnlyIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A8D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnMetaData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnMetadata(const struct FUWorksUGCQueryHandle& handle, bool bReturnMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnMetadata");
		
		UUWorksInterfaceCoreUGC_SetReturnMetadata_Params params {};
		params.handle = handle;
		params.bReturnMetaData = bReturnMetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A800
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnLongDescription                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnLongDescription(const struct FUWorksUGCQueryHandle& handle, bool bReturnLongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnLongDescription");
		
		UUWorksInterfaceCoreUGC_SetReturnLongDescription_Params params {};
		params.handle = handle;
		params.bReturnLongDescription = bReturnLongDescription;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A730
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnKeyValueTags                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnKeyValueTags(const struct FUWorksUGCQueryHandle& handle, bool bReturnKeyValueTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnKeyValueTags");
		
		UUWorksInterfaceCoreUGC_SetReturnKeyValueTags_Params params {};
		params.handle = handle;
		params.bReturnKeyValueTags = bReturnKeyValueTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A660
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnChildren(const struct FUWorksUGCQueryHandle& handle, bool bReturnChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnChildren");
		
		UUWorksInterfaceCoreUGC_SetReturnChildren_Params params {};
		params.handle = handle;
		params.bReturnChildren = bReturnChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A590
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnAdditionalPreviews                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetReturnAdditionalPreviews(const struct FUWorksUGCQueryHandle& handle, bool bReturnAdditionalPreviews)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetReturnAdditionalPreviews");
		
		UUWorksInterfaceCoreUGC_SetReturnAdditionalPreviews_Params params {};
		params.handle = handle;
		params.bReturnAdditionalPreviews = bReturnAdditionalPreviews;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A4C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetRankedByTrendDays(const struct FUWorksUGCQueryHandle& handle, int32_t Days)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetRankedByTrendDays");
		
		UUWorksInterfaceCoreUGC_SetRankedByTrendDays_Params params {};
		params.handle = handle;
		params.Days = Days;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A3F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchAnyTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetMatchAnyTag(const struct FUWorksUGCQueryHandle& handle, bool bMatchAnyTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetMatchAnyTag");
		
		UUWorksInterfaceCoreUGC_SetMatchAnyTag_Params params {};
		params.handle = handle;
		params.bMatchAnyTag = bMatchAnyTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A2C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetLanguage(const struct FUWorksUGCQueryHandle& handle, const class FString& Language)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetLanguage");
		
		UUWorksInterfaceCoreUGC_SetLanguage_Params params {};
		params.handle = handle;
		params.Language = Language;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A1F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemVisibility(const struct FUWorksUGCUpdateHandle& handle, UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemVisibility");
		
		UUWorksInterfaceCoreUGC_SetItemVisibility_Params params {};
		params.handle = handle;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060A0C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemUpdateLanguage(const struct FUWorksUGCUpdateHandle& handle, const class FString& Language)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemUpdateLanguage");
		
		UUWorksInterfaceCoreUGC_SetItemUpdateLanguage_Params params {};
		params.handle = handle;
		params.Language = Language;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609F90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemTitle(const struct FUWorksUGCUpdateHandle& handle, const class FString& title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTitle");
		
		UUWorksInterfaceCoreUGC_SetItemTitle_Params params {};
		params.handle = handle;
		params.title = title;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609DD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              tags                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemTags(const struct FUWorksUGCUpdateHandle& handle, TArray<class FString> tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemTags");
		
		UUWorksInterfaceCoreUGC_SetItemTags_Params params {};
		params.handle = handle;
		params.tags = tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609CA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemPreview(const struct FUWorksUGCUpdateHandle& handle, const class FString& PreviewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemPreview");
		
		UUWorksInterfaceCoreUGC_SetItemPreview_Params params {};
		params.handle = handle;
		params.PreviewFile = PreviewFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609B70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemMetadata(const struct FUWorksUGCUpdateHandle& handle, const class FString& MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemMetadata");
		
		UUWorksInterfaceCoreUGC_SetItemMetadata_Params params {};
		params.handle = handle;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609A40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemDescription(const struct FUWorksUGCUpdateHandle& handle, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemDescription");
		
		UUWorksInterfaceCoreUGC_SetItemDescription_Params params {};
		params.handle = handle;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609910
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentFolder                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetItemContent(const struct FUWorksUGCUpdateHandle& handle, const class FString& ContentFolder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetItemContent");
		
		UUWorksInterfaceCoreUGC_SetItemContent_Params params {};
		params.handle = handle;
		params.ContentFolder = ContentFolder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006097E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchCloudFileName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetCloudFileNameFilter(const struct FUWorksUGCQueryHandle& handle, const class FString& MatchCloudFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetCloudFileNameFilter");
		
		UUWorksInterfaceCoreUGC_SetCloudFileNameFilter_Params params {};
		params.handle = handle;
		params.MatchCloudFileName = MatchCloudFileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609710
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxAgeSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::SetAllowCachedResponse(const struct FUWorksUGCQueryHandle& handle, int32_t MaxAgeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SetAllowCachedResponse");
		
		UUWorksInterfaceCoreUGC_SetAllowCachedResponse_Params params {};
		params.handle = handle;
		params.MaxAgeSeconds = MaxAgeSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609600
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::SendQueryUGCRequestMinimal(const class FScriptDelegate& Completed, const struct FUWorksUGCQueryHandle& UGCQueryHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequestMinimal");
		
		UUWorksInterfaceCoreUGC_SendQueryUGCRequestMinimal_Params params {};
		params.Completed = Completed;
		params.UGCQueryHandle = UGCQueryHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006095D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreSendQueryUGCRequest* UUWorksInterfaceCoreUGC::SendQueryUGCRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.SendQueryUGCRequest");
		
		UUWorksInterfaceCoreUGC_SendQueryUGCRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609500
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::RemoveItemPreview(const struct FUWorksUGCUpdateHandle& handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemPreview");
		
		UUWorksInterfaceCoreUGC_RemoveItemPreview_Params params {};
		params.handle = handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006093D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::RemoveItemKeyValueTags(const struct FUWorksUGCUpdateHandle& handle, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemKeyValueTags");
		
		UUWorksInterfaceCoreUGC_RemoveItemKeyValueTags_Params params {};
		params.handle = handle;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006092A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::RemoveItemFromFavoritesMinimal(const class FScriptDelegate& Completed, int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavoritesMinimal");
		
		UUWorksInterfaceCoreUGC_RemoveItemFromFavoritesMinimal_Params params {};
		params.Completed = Completed;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609270
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRemoveItemFromFavorites* UUWorksInterfaceCoreUGC::RemoveItemFromFavorites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.RemoveItemFromFavorites");
		
		UUWorksInterfaceCoreUGC_RemoveItemFromFavorites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006091E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::ReleaseQueryUGCRequest(const struct FUWorksUGCQueryHandle& handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.ReleaseQueryUGCRequest");
		
		UUWorksInterfaceCoreUGC_ReleaseQueryUGCRequest_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006090E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::GetUserItemVoteMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVoteMinimal");
		
		UUWorksInterfaceCoreUGC_GetUserItemVoteMinimal_Params params {};
		params.Completed = Completed;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006090B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreGetUserItemVote* UUWorksInterfaceCoreUGC::GetUserItemVote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUserItemVote");
		
		UUWorksInterfaceCoreUGC_GetUserItemVote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00609080
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreUGC* UUWorksInterfaceCoreUGC::STATIC_GetUGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetUGC");
		
		UUWorksInterfaceCoreUGC_GetUGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608F90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUGC::GetSubscribedItems(TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int32_t MaxEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetSubscribedItems");
		
		UUWorksInterfaceCoreUGC_GetSubscribedItems_Params params {};
		params.MaxEntries = MaxEntries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileIDs != nullptr)
			*PublishedFileIDs = params.PublishedFileIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608E20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksItemStatistic                    StatType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatValue                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCStatistic(const struct FUWorksUGCQueryHandle& handle, int32_t Index, UWorksCore_EUWorksItemStatistic StatType, class FString* StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCStatistic");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCStatistic_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.StatType = StatType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatValue != nullptr)
			*StatValue = params.StatValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608C70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamUGCDetails                      Details                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCResult(const struct FUWorksUGCQueryHandle& handle, int32_t Index, struct FUWorksSteamUGCDetails* Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCResult");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCResult_Params params {};
		params.handle = handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Details != nullptr)
			*Details = params.Details;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608AF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            URLMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCPreviewURL(const struct FUWorksUGCQueryHandle& handle, int32_t Index, class FString* URL, int32_t URLMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCPreviewURL");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCPreviewURL_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.URLMaxLength = URLMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL != nullptr)
			*URL = params.URL;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608A20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUGC::GetQueryUGCNumKeyValueTags(const struct FUWorksUGCQueryHandle& handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumKeyValueTags");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCNumKeyValueTags_Params params {};
		params.handle = handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608950
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUGC::GetQueryUGCNumAdditionalPreviews(const struct FUWorksUGCQueryHandle& handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCNumAdditionalPreviews");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCNumAdditionalPreviews_Params params {};
		params.handle = handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006087D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MetadataMaxLength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCMetadata(const struct FUWorksUGCQueryHandle& handle, int32_t Index, class FString* MetaData, int32_t MetadataMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCMetadata");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCMetadata_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.MetadataMaxLength = MetadataMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MetaData != nullptr)
			*MetaData = params.MetaData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608590
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyValueTagIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyMaxLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueMaxLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCKeyValueTag(const struct FUWorksUGCQueryHandle& handle, int32_t Index, int32_t KeyValueTagIndex, class FString* Key, int32_t KeyMaxLength, class FString* Value, int32_t ValueMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCKeyValueTag");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCKeyValueTag_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.KeyValueTagIndex = KeyValueTagIndex;
		params.KeyMaxLength = KeyMaxLength;
		params.ValueMaxLength = ValueMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608410
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCChildren(const struct FUWorksUGCQueryHandle& handle, int32_t Index, TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int32_t MaxEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCChildren");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCChildren_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.MaxEntries = MaxEntries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileIDs != nullptr)
			*PublishedFileIDs = params.PublishedFileIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608180
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviewIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      urlOrVideoId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            URLOrVideoIDMaxLength                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      originalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OriginalFileNameMaxLength                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksItemPreviewType                  PreviewType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetQueryUGCAdditionalPreview(const struct FUWorksUGCQueryHandle& handle, int32_t Index, int32_t PreviewIndex, class FString* urlOrVideoId, int32_t URLOrVideoIDMaxLength, class FString* originalFileName, int32_t OriginalFileNameMaxLength, UWorksCore_EUWorksItemPreviewType* PreviewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetQueryUGCAdditionalPreview");
		
		UUWorksInterfaceCoreUGC_GetQueryUGCAdditionalPreview_Params params {};
		params.handle = handle;
		params.Index = Index;
		params.PreviewIndex = PreviewIndex;
		params.URLOrVideoIDMaxLength = URLOrVideoIDMaxLength;
		params.OriginalFileNameMaxLength = OriginalFileNameMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (urlOrVideoId != nullptr)
			*urlOrVideoId = params.urlOrVideoId;
		if (originalFileName != nullptr)
			*originalFileName = params.originalFileName;
		if (PreviewType != nullptr)
			*PreviewType = params.PreviewType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00608150
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUGC::GetNumSubscribedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetNumSubscribedItems");
		
		UUWorksInterfaceCoreUGC_GetNumSubscribedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607FF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      BytesProcessed                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      bytesTotal                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksItemUpdateStatus UUWorksInterfaceCoreUGC::GetItemUpdateProgress(const struct FUWorksUGCUpdateHandle& handle, class FString* BytesProcessed, class FString* bytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemUpdateProgress");
		
		UUWorksInterfaceCoreUGC_GetItemUpdateProgress_Params params {};
		params.handle = handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesProcessed != nullptr)
			*BytesProcessed = params.BytesProcessed;
		if (bytesTotal != nullptr)
			*bytesTotal = params.bytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607F60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUGC::GetItemState(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemState");
		
		UUWorksInterfaceCoreUGC_GetItemState_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607D90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      SizeOnDisk                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PathMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timestamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetItemInstallInfo(const struct FUWorksPublishedFileID& PublishedFileID, class FString* SizeOnDisk, class FString* Path, int32_t PathMaxLength, int32_t* Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemInstallInfo");
		
		UUWorksInterfaceCoreUGC_GetItemInstallInfo_Params params {};
		params.PublishedFileID = PublishedFileID;
		params.PathMaxLength = PathMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeOnDisk != nullptr)
			*SizeOnDisk = params.SizeOnDisk;
		if (Path != nullptr)
			*Path = params.Path;
		if (Timestamp != nullptr)
			*Timestamp = params.Timestamp;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607C30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      bytesTotal                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::GetItemDownloadInfo(const struct FUWorksPublishedFileID& PublishedFileID, class FString* BytesDownloaded, class FString* bytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.GetItemDownloadInfo");
		
		UUWorksInterfaceCoreUGC_GetItemDownloadInfo_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesDownloaded != nullptr)
			*BytesDownloaded = params.BytesDownloaded;
		if (bytesTotal != nullptr)
			*bytesTotal = params.bytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607B70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHighPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::DownloadItem(const struct FUWorksPublishedFileID& PublishedFileID, bool bHighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.DownloadItem");
		
		UUWorksInterfaceCoreUGC_DownloadItem_Params params {};
		params.PublishedFileID = PublishedFileID;
		params.bHighPriority = bHighPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607970
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUserUGCList                      ListType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUserUGCListSortOrder             sortOrder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUserUGCRequest(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksUserUGCList ListType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType, UWorksCore_EUWorksUserUGCListSortOrder sortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUserUGCRequest");
		
		UUWorksInterfaceCoreUGC_CreateQueryUserUGCRequest_Params params {};
		params.SteamID = SteamID;
		params.ListType = ListType;
		params.MatchingUGCType = MatchingUGCType;
		params.sortOrder = sortOrder;
		params.CreatorAppID = CreatorAppID;
		params.ConsumerAppID = ConsumerAppID;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607840
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPublishedFileIDs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryUGCDetailsRequest(TArray<struct FUWorksPublishedFileID> PublishedFileIDs, int32_t NumPublishedFileIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryUGCDetailsRequest");
		
		UUWorksInterfaceCoreUGC_CreateQueryUGCDetailsRequest_Params params {};
		params.PublishedFileIDs = PublishedFileIDs;
		params.NumPublishedFileIDs = NumPublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006076A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksUGCQuery                         queryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUGCMatchingUGCType               MatchingUGCTypeFileType                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCQueryHandle UUWorksInterfaceCoreUGC::CreateQueryAllUGCRequest(UWorksCore_EUWorksUGCQuery queryType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateQueryAllUGCRequest");
		
		UUWorksInterfaceCoreUGC_CreateQueryAllUGCRequest_Params params {};
		params.queryType = queryType;
		params.MatchingUGCTypeFileType = MatchingUGCTypeFileType;
		params.CreatorAppID = CreatorAppID;
		params.ConsumerAppID = ConsumerAppID;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607570
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksWorkshopFileType                 fileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::CreateItemMinimal(const class FScriptDelegate& Completed, int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItemMinimal");
		
		UUWorksInterfaceCoreUGC_CreateItemMinimal_Params params {};
		params.Completed = Completed;
		params.ConsumerAppID = ConsumerAppID;
		params.fileType = fileType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607540
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreCreateItem* UUWorksInterfaceCoreUGC::CreateItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.CreateItem");
		
		UUWorksInterfaceCoreUGC_CreateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607420
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WorkshopDepotID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Folder                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::BInitWorkshopForGameServer(int32_t WorkshopDepotID, const class FString& Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.BInitWorkshopForGameServer");
		
		UUWorksInterfaceCoreUGC_BInitWorkshopForGameServer_Params params {};
		params.WorkshopDepotID = WorkshopDepotID;
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006072F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddRequiredTag(const struct FUWorksUGCQueryHandle& handle, const class FString& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredTag");
		
		UUWorksInterfaceCoreUGC_AddRequiredTag_Params params {};
		params.handle = handle;
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607140
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddRequiredKeyValueTag(const struct FUWorksUGCQueryHandle& handle, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddRequiredKeyValueTag");
		
		UUWorksInterfaceCoreUGC_AddRequiredKeyValueTag_Params params {};
		params.handle = handle;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00607010
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUGC::AddItemToFavoritesMinimal(const class FScriptDelegate& Completed, int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavoritesMinimal");
		
		UUWorksInterfaceCoreUGC_AddItemToFavoritesMinimal_Params params {};
		params.Completed = Completed;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00606FE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreAddItemToFavorites* UUWorksInterfaceCoreUGC::AddItemToFavorites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemToFavorites");
		
		UUWorksInterfaceCoreUGC_AddItemToFavorites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00606EB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      VideoID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddItemPreviewVideo(const struct FUWorksUGCUpdateHandle& handle, const class FString& VideoID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewVideo");
		
		UUWorksInterfaceCoreUGC_AddItemPreviewVideo_Params params {};
		params.handle = handle;
		params.VideoID = VideoID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00606D40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksItemPreviewType                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddItemPreviewFile(const struct FUWorksUGCUpdateHandle& handle, const class FString& PreviewFile, UWorksCore_EUWorksItemPreviewType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemPreviewFile");
		
		UUWorksInterfaceCoreUGC_AddItemPreviewFile_Params params {};
		params.handle = handle;
		params.PreviewFile = PreviewFile;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00606B90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddItemKeyValueTag(const struct FUWorksUGCUpdateHandle& handle, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddItemKeyValueTag");
		
		UUWorksInterfaceCoreUGC_AddItemKeyValueTag_Params params {};
		params.handle = handle;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00606A60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUGC::AddExcludedTag(const struct FUWorksUGCQueryHandle& handle, const class FString& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUGC.AddExcludedTag");
		
		UUWorksInterfaceCoreUGC_AddExcludedTag_Params params {};
		params.handle = handle;
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreUGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreUGC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUGC");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CF60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksUserHasLicenseForAppResult UUWorksInterfaceCoreUser::UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.UserHasLicenseForApp");
		
		UUWorksInterfaceCoreUser_UserHasLicenseForApp_Params params {};
		params.SteamID = SteamID;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CF40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreUser::StopVoiceRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StopVoiceRecording");
		
		UUWorksInterfaceCoreUser_StopVoiceRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CF20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreUser::StartVoiceRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.StartVoiceRecording");
		
		UUWorksInterfaceCoreUser_StartVoiceRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CDD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUser::RequestStoreAuthURLMinimal(const class FScriptDelegate& Completed, const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURLMinimal");
		
		UUWorksInterfaceCoreUser_RequestStoreAuthURLMinimal_Params params {};
		params.Completed = Completed;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CDA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestStoreAuthURL* UUWorksInterfaceCoreUser::RequestStoreAuthURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestStoreAuthURL");
		
		UUWorksInterfaceCoreUser_RequestStoreAuthURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CC50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUser::RequestEncryptedAppTicketMinimal(const class FScriptDelegate& Completed, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicketMinimal");
		
		UUWorksInterfaceCoreUser_RequestEncryptedAppTicketMinimal_Params params {};
		params.Completed = Completed;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CC20
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestEncryptedAppTicket* UUWorksInterfaceCoreUser::RequestEncryptedAppTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.RequestEncryptedAppTicket");
		
		UUWorksInterfaceCoreUser_RequestEncryptedAppTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CB90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* UUWorksInterfaceCoreUser::GetVoiceChannel(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoiceChannel");
		
		UUWorksInterfaceCoreUser_GetVoiceChannel_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CAD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetVoice
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::GetVoice(TArray<unsigned char>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetVoice");
		
		UUWorksInterfaceCoreUser_GetVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CAA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetUser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreUser* UUWorksInterfaceCoreUser::STATIC_GetUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetUser");
		
		UUWorksInterfaceCoreUser_GetUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CA60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FUWorksSteamID UUWorksInterfaceCoreUser::GetSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetSteamID");
		
		UUWorksInterfaceCoreUser_GetSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060CA30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUser::GetPlayerSteamLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetPlayerSteamLevel");
		
		UUWorksInterfaceCoreUser_GetPlayerSteamLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C9F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FUWorksSteamUser UUWorksInterfaceCoreUser::GetHSteamUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetHSteamUser");
		
		UUWorksInterfaceCoreUser_GetHSteamUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C930
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Series                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoil                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUser::GetGameBadgeLevel(int32_t Series, bool bFoil)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetGameBadgeLevel");
		
		UUWorksInterfaceCoreUser_GetGameBadgeLevel_Params params {};
		params.Series = Series;
		params.bFoil = bFoil;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C870
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUser::GetEncryptedAppTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetEncryptedAppTicket");
		
		UUWorksInterfaceCoreUser_GetEncryptedAppTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C7B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FUWorksTicketHandle UUWorksInterfaceCoreUser::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.GetAuthSessionTicket");
		
		UUWorksInterfaceCoreUser_GetAuthSessionTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C730
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUser::EndAuthSession(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.EndAuthSession");
		
		UUWorksInterfaceCoreUser_EndAuthSession_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C5D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              CompressedBuffer                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              UncompressedBuffer                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksVoiceResult UUWorksInterfaceCoreUser::DecompressVoice(TArray<unsigned char> CompressedBuffer, TArray<unsigned char>* UncompressedBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.DecompressVoice");
		
		UUWorksInterfaceCoreUser_DecompressVoice_Params params {};
		params.CompressedBuffer = CompressedBuffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UncompressedBuffer != nullptr)
			*UncompressedBuffer = params.UncompressedBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C550
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksTicketHandle                         TicketHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUser::CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.CancelAuthTicket");
		
		UUWorksInterfaceCoreUser_CancelAuthTicket_Params params {};
		params.TicketHandle = TicketHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C400
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BLoggedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BLoggedOn");
		
		UUWorksInterfaceCoreUser_BLoggedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C3D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BIsTwoFactorEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsTwoFactorEnabled");
		
		UUWorksInterfaceCoreUser_BIsTwoFactorEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C3A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BIsPhoneVerified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneVerified");
		
		UUWorksInterfaceCoreUser_BIsPhoneVerified_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C370
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BIsPhoneRequiringVerification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneRequiringVerification");
		
		UUWorksInterfaceCoreUser_BIsPhoneRequiringVerification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C340
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BIsPhoneIdentifying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsPhoneIdentifying");
		
		UUWorksInterfaceCoreUser_BIsPhoneIdentifying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C310
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUser::BIsBehindNAT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BIsBehindNAT");
		
		UUWorksInterfaceCoreUser_BIsBehindNAT_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C430
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksBeginAuthSessionResult UUWorksInterfaceCoreUser::BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.BeginAuthSession");
		
		UUWorksInterfaceCoreUser_BeginAuthSession_Params params {};
		params.Ticket = Ticket;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C1C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDGameServer                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerIP                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ServerPort                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUser::AdvertiseGame(const struct FUWorksSteamID& SteamIDGameServer, const class FString& ServerIP, int32_t ServerPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AdvertiseGame");
		
		UUWorksInterfaceCoreUser_AdvertiseGame_Params params {};
		params.SteamIDGameServer = SteamIDGameServer;
		params.ServerIP = ServerIP;
		params.ServerPort = ServerPort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060C0A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAudioComponent* UUWorksInterfaceCoreUser::AddBufferToVoiceChannel(TArray<unsigned char> Buffer, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUser.AddBufferToVoiceChannel");
		
		UUWorksInterfaceCoreUser_AddBufferToVoiceChannel_Params params {};
		params.Buffer = Buffer;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610F90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::UploadLeaderboardScoreMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScoreMinimal");
		
		UUWorksInterfaceCoreUserStats_UploadLeaderboardScoreMinimal_Params params {};
		params.Completed = Completed;
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
		params.score = score;
		params.ScoreDetails = ScoreDetails;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610F60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreUploadLeaderboardScore* UUWorksInterfaceCoreUserStats::UploadLeaderboardScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UploadLeaderboardScore");
		
		UUWorksInterfaceCoreUserStats_UploadLeaderboardScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610DF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.UpdateAvgRateStat");
		
		UUWorksInterfaceCoreUserStats_UpdateAvgRateStat_Params params {};
		params.Name = Name;
		params.CountThisSession = CountThisSession;
		params.SessionLength = SessionLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610DC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUserStats::StoreStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.StoreStats");
		
		UUWorksInterfaceCoreUserStats_StoreStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610C90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::SetStatAsInteger(const class FString& Name, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsInteger");
		
		UUWorksInterfaceCoreUserStats_SetStatAsInteger_Params params {};
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610B60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::SetStatAsFloat(const class FString& Name, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetStatAsFloat");
		
		UUWorksInterfaceCoreUserStats_SetStatAsFloat_Params params {};
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610A70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::SetAchievement(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.SetAchievement");
		
		UUWorksInterfaceCoreUserStats_SetAchievement_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006109E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAchievementsToo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::ResetAllStats(bool bAchievementsToo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ResetAllStats");
		
		UUWorksInterfaceCoreUserStats_ResetAllStats_Params params {};
		params.bAchievementsToo = bAchievementsToo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006108E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::RequestUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStatsMinimal");
		
		UUWorksInterfaceCoreUserStats_RequestUserStatsMinimal_Params params {};
		params.Completed = Completed;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006108B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestUserStats* UUWorksInterfaceCoreUserStats::RequestUserStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestUserStats");
		
		UUWorksInterfaceCoreUserStats_RequestUserStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006107B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::RequestGlobalStatsMinimal(const class FScriptDelegate& Completed, int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStatsMinimal");
		
		UUWorksInterfaceCoreUserStats_RequestGlobalStatsMinimal_Params params {};
		params.Completed = Completed;
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610780
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestGlobalStats* UUWorksInterfaceCoreUserStats::RequestGlobalStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalStats");
		
		UUWorksInterfaceCoreUserStats_RequestGlobalStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006106C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentagesMinimal(const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentagesMinimal");
		
		UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentagesMinimal_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610690
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreRequestGlobalAchievementPercentages* UUWorksInterfaceCoreUserStats::RequestGlobalAchievementPercentages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestGlobalAchievementPercentages");
		
		UUWorksInterfaceCoreUserStats_RequestGlobalAchievementPercentages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610660
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUserStats::RequestCurrentStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.RequestCurrentStats");
		
		UUWorksInterfaceCoreUserStats_RequestCurrentStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610500
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentProgress                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxProgress                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::IndicateAchievementProgress(const class FString& Name, int32_t CurrentProgress, int32_t MaxProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.IndicateAchievementProgress");
		
		UUWorksInterfaceCoreUserStats_IndicateAchievementProgress_Params params {};
		params.Name = Name;
		params.CurrentProgress = CurrentProgress;
		params.MaxProgress = MaxProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006104D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreUserStats* UUWorksInterfaceCoreUserStats::STATIC_GetUserStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStats");
		
		UUWorksInterfaceCoreUserStats_GetUserStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610350
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetUserStatInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatInteger");
		
		UUWorksInterfaceCoreUserStats_GetUserStatInteger_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006101D0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetUserStatFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserStatFloat");
		
		UUWorksInterfaceCoreUserStats_GetUserStatFloat_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00610010
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetUserAchievementAndUnlockTime(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32_t* UnlockTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievementAndUnlockTime");
		
		UUWorksInterfaceCoreUserStats_GetUserAchievementAndUnlockTime_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		if (UnlockTime != nullptr)
			*UnlockTime = params.UnlockTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FE90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetUserAchievement");
		
		UUWorksInterfaceCoreUserStats_GetUserAchievement_Params params {};
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FD50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetStatAsInteger(const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsInteger");
		
		UUWorksInterfaceCoreUserStats_GetStatAsInteger_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FC00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetStatAsFloat(const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetStatAsFloat");
		
		UUWorksInterfaceCoreUserStats_GetStatAsFloat_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FB40
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayersMinimal(const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayersMinimal");
		
		UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayersMinimal_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FB10
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreGetNumberOfCurrentPlayers* UUWorksInterfaceCoreUserStats::GetNumberOfCurrentPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumberOfCurrentPlayers");
		
		UUWorksInterfaceCoreUserStats_GetNumberOfCurrentPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060FAE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetNumAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNumAchievements");
		
		UUWorksInterfaceCoreUserStats_GetNumAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F8E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            IteratorPrevious                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NameBufferLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, class FString* Name, int32_t NameBufferLength, float* Percent, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetNextMostAchievedAchievementInfo");
		
		UUWorksInterfaceCoreUserStats_GetNextMostAchievedAchievementInfo_Params params {};
		params.IteratorPrevious = IteratorPrevious;
		params.NameBufferLength = NameBufferLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Percent != nullptr)
			*Percent = params.Percent;
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F730
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NameBufferLength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetMostAchievedAchievementInfo(class FString* Name, int32_t NameBufferLength, float* Percent, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetMostAchievedAchievementInfo");
		
		UUWorksInterfaceCoreUserStats_GetMostAchievedAchievementInfo_Params params {};
		params.NameBufferLength = NameBufferLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Percent != nullptr)
			*Percent = params.Percent;
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F6A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksLeaderboardSortMethod UUWorksInterfaceCoreUserStats::GetLeaderboardSortMethod(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardSortMethod");
		
		UUWorksInterfaceCoreUserStats_GetLeaderboardSortMethod_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F5C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreUserStats::GetLeaderboardName(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardName");
		
		UUWorksInterfaceCoreUserStats_GetLeaderboardName_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F530
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetLeaderboardEntryCount(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardEntryCount");
		
		UUWorksInterfaceCoreUserStats_GetLeaderboardEntryCount_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F4A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksLeaderboardDisplayType UUWorksInterfaceCoreUserStats::GetLeaderboardDisplayType(const struct FUWorksSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetLeaderboardDisplayType");
		
		UUWorksInterfaceCoreUserStats_GetLeaderboardDisplayType_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F2F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromIntegers(const class FString& StatName, TArray<class FString>* Data, int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromIntegers");
		
		UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromIntegers_Params params {};
		params.StatName = StatName;
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060F140
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksInterfaceCoreUserStats::GetGlobalStatHistoryFromFloats(const class FString& StatName, TArray<class FString>* Data, int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatHistoryFromFloats");
		
		UUWorksInterfaceCoreUserStats_GetGlobalStatHistoryFromFloats_Params params {};
		params.StatName = StatName;
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060EFE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromInteger(const class FString& StatName, class FString* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromInteger");
		
		UUWorksInterfaceCoreUserStats_GetGlobalStatFromInteger_Params params {};
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060EE80
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetGlobalStatFromFloat(const class FString& StatName, class FString* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetGlobalStatFromFloat");
		
		UUWorksInterfaceCoreUserStats_GetGlobalStatFromFloat_Params params {};
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060EC80
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksLeaderboardEntry                     LeaderboardEntry                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Details                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DetailsMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetDownloadedLeaderboardEntry(const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t Index, struct FUWorksLeaderboardEntry* LeaderboardEntry, TArray<int32_t>* Details, int32_t DetailsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetDownloadedLeaderboardEntry");
		
		UUWorksInterfaceCoreUserStats_GetDownloadedLeaderboardEntry_Params params {};
		params.SteamLeaderboardEntries = SteamLeaderboardEntries;
		params.Index = Index;
		params.DetailsMax = DetailsMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeaderboardEntry != nullptr)
			*LeaderboardEntry = params.LeaderboardEntry;
		if (Details != nullptr)
			*Details = params.Details;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060EBB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Achievement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreUserStats::GetAchievementName(int32_t Achievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementName");
		
		UUWorksInterfaceCoreUserStats_GetAchievementName_Params params {};
		params.Achievement = Achievement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060EAC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUWorksInterfaceCoreUserStats::GetAchievementIcon(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementIcon");
		
		UUWorksInterfaceCoreUserStats_GetAchievementIcon_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E910
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksInterfaceCoreUserStats::GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementDisplayAttribute");
		
		UUWorksInterfaceCoreUserStats_GetAchievementDisplayAttribute_Params params {};
		params.Name = Name;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E770
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32_t* UnlockTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAndUnlockTime");
		
		UUWorksInterfaceCoreUserStats_GetAchievementAndUnlockTime_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		if (UnlockTime != nullptr)
			*UnlockTime = params.UnlockTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E620
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetAchievementAchievedPercent(const class FString& Name, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievementAchievedPercent");
		
		UUWorksInterfaceCoreUserStats_GetAchievementAchievedPercent_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E4E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::GetAchievement(const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.GetAchievement");
		
		UUWorksInterfaceCoreUserStats_GetAchievement_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E320
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboardMinimal(const class FScriptDelegate& Completed, const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboardMinimal");
		
		UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboardMinimal_Params params {};
		params.Completed = Completed;
		params.LeaderboardName = LeaderboardName;
		params.LeaderboardSortMethod = LeaderboardSortMethod;
		params.LeaderboardDisplayType = LeaderboardDisplayType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E2F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreFindOrCreateLeaderboard* UUWorksInterfaceCoreUserStats::FindOrCreateLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindOrCreateLeaderboard");
		
		UUWorksInterfaceCoreUserStats_FindOrCreateLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E1A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::FindLeaderboardMinimal(const class FScriptDelegate& Completed, const class FString& LeaderboardName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboardMinimal");
		
		UUWorksInterfaceCoreUserStats_FindLeaderboardMinimal_Params params {};
		params.Completed = Completed;
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060E170
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreFindLeaderboard* UUWorksInterfaceCoreUserStats::FindLeaderboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.FindLeaderboard");
		
		UUWorksInterfaceCoreUserStats_FindLeaderboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DFC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesMinimal");
		
		UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesMinimal_Params params {};
		params.Completed = Completed;
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardDataRequest = LeaderboardDataRequest;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DE30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      Users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsersMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsersMinimal");
		
		UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsersMinimal_Params params {};
		params.Completed = Completed;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Users = Users;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DE00
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntriesForUsers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntriesForUsers");
		
		UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntriesForUsers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DDD0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreDownloadLeaderboardEntries* UUWorksInterfaceCoreUserStats::DownloadLeaderboardEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.DownloadLeaderboardEntries");
		
		UUWorksInterfaceCoreUserStats_DownloadLeaderboardEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DCE0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUserStats::ClearAchievement(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.ClearAchievement");
		
		UUWorksInterfaceCoreUserStats_ClearAchievement_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DBA0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUserStats::AttachLeaderboardUGCMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGCMinimal");
		
		UUWorksInterfaceCoreUserStats_AttachLeaderboardUGCMinimal_Params params {};
		params.Completed = Completed;
		params.SteamLeaderboard = SteamLeaderboard;
		params.UGCHandle = UGCHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0060DB70
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUWorksRequestCoreAttachLeaderboardUGC* UUWorksInterfaceCoreUserStats::AttachLeaderboardUGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUserStats.AttachLeaderboardUGC");
		
		UUWorksInterfaceCoreUserStats_AttachLeaderboardUGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreUserStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUserStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611E50
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksInterfaceCoreUtils::StartVRDashboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.StartVRDashboard");
		
		UUWorksInterfaceCoreUtils_StartVRDashboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611C30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksGamepadTextInputMode             InputMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksGamepadTextInputLineMode         LineInputMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CharMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExistingText                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUtils::ShowGamepadTextInput(UWorksCore_EUWorksGamepadTextInputMode InputMode, UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode, const class FString& Description, int32_t CharMax, const class FString& ExistingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.ShowGamepadTextInput");
		
		UUWorksInterfaceCoreUtils_ShowGamepadTextInput_Params params {};
		params.InputMode = InputMode;
		params.LineInputMode = LineInputMode;
		params.Description = Description;
		params.CharMax = CharMax;
		params.ExistingText = ExistingText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611BB0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksNotificationPosition             NotificationPosition                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUtils::SetOverlayNotificationPosition(UWorksCore_EUWorksNotificationPosition NotificationPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationPosition");
		
		UUWorksInterfaceCoreUtils_SetOverlayNotificationPosition_Params params {};
		params.NotificationPosition = NotificationPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611AF0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HorizontalInset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VerticalInset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreUtils::SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.SetOverlayNotificationInset");
		
		UUWorksInterfaceCoreUtils_SetOverlayNotificationInset_Params params {};
		params.HorizontalInset = HorizontalInset;
		params.VerticalInset = VerticalInset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611AC0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUtils::IsSteamRunningInVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamRunningInVR");
		
		UUWorksInterfaceCoreUtils_IsSteamRunningInVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611A90
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUtils::IsSteamInBigPictureMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsSteamInBigPictureMode");
		
		UUWorksInterfaceCoreUtils_IsSteamInBigPictureMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611A60
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUtils::IsOverlayEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.IsOverlayEnabled");
		
		UUWorksInterfaceCoreUtils_IsOverlayEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611A30
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreUtils* UUWorksInterfaceCoreUtils::STATIC_GetUtils()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetUtils");
		
		UUWorksInterfaceCoreUtils_GetUtils_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006119B0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUWorksInterfaceCoreUtils::GetSteamUILanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSteamUILanguage");
		
		UUWorksInterfaceCoreUtils_GetSteamUILanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611980
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetServerRealTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetServerRealTime");
		
		UUWorksInterfaceCoreUtils_GetServerRealTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611950
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetSecondsSinceComputerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceComputerActive");
		
		UUWorksInterfaceCoreUtils_GetSecondsSinceComputerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611920
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetSecondsSinceAppActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetSecondsSinceAppActive");
		
		UUWorksInterfaceCoreUtils_GetSecondsSinceAppActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006118A0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUWorksInterfaceCoreUtils::GetIPCountry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCountry");
		
		UUWorksInterfaceCoreUtils_GetIPCountry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611870
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetIPCCallCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetIPCCallCount");
		
		UUWorksInterfaceCoreUtils_GetIPCCallCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611840
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetEnteredGamepadTextLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextLength");
		
		UUWorksInterfaceCoreUtils_GetEnteredGamepadTextLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611750
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextMaxLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreUtils::GetEnteredGamepadTextInput(class FString* Text, int32_t TextMaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetEnteredGamepadTextInput");
		
		UUWorksInterfaceCoreUtils_GetEnteredGamepadTextInput_Params params {};
		params.TextMaxLength = TextMaxLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611720
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	unsigned char UUWorksInterfaceCoreUtils::GetCurrentBatteryPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetCurrentBatteryPower");
		
		UUWorksInterfaceCoreUtils_GetCurrentBatteryPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006116F0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	UWorksCore_EUWorksUniverse UUWorksInterfaceCoreUtils::GetConnectedUniverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetConnectedUniverse");
		
		UUWorksInterfaceCoreUtils_GetConnectedUniverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006116C0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UUWorksInterfaceCoreUtils::GetAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.GetAppID");
		
		UUWorksInterfaceCoreUtils_GetAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00611690
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUWorksInterfaceCoreUtils::BOverlayNeedsPresent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreUtils.BOverlayNeedsPresent");
		
		UUWorksInterfaceCoreUtils_BOverlayNeedsPresent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006120E0
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumViewers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUWorksInterfaceCoreVideo::IsBroadcasting(int32_t* NumViewers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.IsBroadcasting");
		
		UUWorksInterfaceCoreVideo_IsBroadcasting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumViewers != nullptr)
			*NumViewers = params.NumViewers;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00612060
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            VideoAppID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksInterfaceCoreVideo::GetVideoURL(int32_t VideoAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.GetVideoURL");
		
		UUWorksInterfaceCoreVideo_GetVideoURL_Params params {};
		params.VideoAppID = VideoAppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00612030
	 * 		Name   -> Function UWorksCore.UWorksInterfaceCoreVideo.GetVideo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksInterfaceCoreVideo* UUWorksInterfaceCoreVideo::STATIC_GetVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksInterfaceCoreVideo.GetVideo");
		
		UUWorksInterfaceCoreVideo_GetVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterfaceCoreVideo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterfaceCoreVideo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksInterfaceCoreVideo");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetFileDetails::SetInput(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.SetInput");
		
		UUWorksRequestCoreGetFileDetails_SetInput_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreGetFileDetails::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.IsActive");
		
		UUWorksRequestCoreGetFileDetails_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileSHA                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    FileFlags                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetFileDetails::GetOutput(UWorksCore_EUWorksResult* result, int32_t* FileSize, class FString* FileSHA, TArray<int32_t>* FileFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.GetOutput");
		
		UUWorksRequestCoreGetFileDetails_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (FileSize != nullptr)
			*FileSize = params.FileSize;
		if (FileSHA != nullptr)
			*FileSHA = params.FileSHA;
		if (FileFlags != nullptr)
			*FileFlags = params.FileFlags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetFileDetails::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Deactivate");
		
		UUWorksRequestCoreGetFileDetails_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetFileDetails::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFileDetails.Activate");
		
		UUWorksRequestCoreGetFileDetails_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreGetFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreGetFileDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetFileDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSetPersonaName::SetInput(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.SetInput");
		
		UUWorksRequestCoreSetPersonaName_SetInput_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreSetPersonaName::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.IsActive");
		
		UUWorksRequestCoreSetPersonaName_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613C80
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLocalSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSetPersonaName::GetOutput(bool* bSuccess, bool* bLocalSuccess, UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.GetOutput");
		
		UUWorksRequestCoreSetPersonaName_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (bLocalSuccess != nullptr)
			*bLocalSuccess = params.bLocalSuccess;
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSetPersonaName::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Deactivate");
		
		UUWorksRequestCoreSetPersonaName_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSetPersonaName::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetPersonaName.Activate");
		
		UUWorksRequestCoreSetPersonaName_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreSetPersonaName.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreSetPersonaName::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSetPersonaName");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613DC0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadClanActivityCounts::SetInput(TArray<struct FUWorksSteamID> SteamIDClans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.SetInput");
		
		UUWorksRequestCoreDownloadClanActivityCounts_SetInput_Params params {};
		params.SteamIDClans = SteamIDClans;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreDownloadClanActivityCounts::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.IsActive");
		
		UUWorksRequestCoreDownloadClanActivityCounts_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006135A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadClanActivityCounts::GetOutput(bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.GetOutput");
		
		UUWorksRequestCoreDownloadClanActivityCounts_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadClanActivityCounts::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Deactivate");
		
		UUWorksRequestCoreDownloadClanActivityCounts_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadClanActivityCounts::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadClanActivityCounts.Activate");
		
		UUWorksRequestCoreDownloadClanActivityCounts_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreDownloadClanActivityCounts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreDownloadClanActivityCounts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadClanActivityCounts");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestClanOfficerList::SetInput(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.SetInput");
		
		UUWorksRequestCoreRequestClanOfficerList_SetInput_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestClanOfficerList::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.IsActive");
		
		UUWorksRequestCoreRequestClanOfficerList_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613B40
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Officers                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestClanOfficerList::GetOutput(struct FUWorksSteamID* SteamIDClan, int32_t* Officers, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.GetOutput");
		
		UUWorksRequestCoreRequestClanOfficerList_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDClan != nullptr)
			*SteamIDClan = params.SteamIDClan;
		if (Officers != nullptr)
			*Officers = params.Officers;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestClanOfficerList::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Deactivate");
		
		UUWorksRequestCoreRequestClanOfficerList_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestClanOfficerList::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestClanOfficerList.Activate");
		
		UUWorksRequestCoreRequestClanOfficerList_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestClanOfficerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestClanOfficerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestClanOfficerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreJoinClanChatRoom::SetInput(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.SetInput");
		
		UUWorksRequestCoreJoinClanChatRoom_SetInput_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreJoinClanChatRoom::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.IsActive");
		
		UUWorksRequestCoreJoinClanChatRoom_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613A60
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreJoinClanChatRoom::GetOutput(struct FUWorksSteamID* SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.GetOutput");
		
		UUWorksRequestCoreJoinClanChatRoom_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDClanChat != nullptr)
			*SteamIDClanChat = params.SteamIDClanChat;
		if (ChatRoomEnterResponse != nullptr)
			*ChatRoomEnterResponse = params.ChatRoomEnterResponse;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreJoinClanChatRoom::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Deactivate");
		
		UUWorksRequestCoreJoinClanChatRoom_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreJoinClanChatRoom::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinClanChatRoom.Activate");
		
		UUWorksRequestCoreJoinClanChatRoom_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreJoinClanChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreJoinClanChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreJoinClanChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetFollowerCount::SetInput(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.SetInput");
		
		UUWorksRequestCoreGetFollowerCount_SetInput_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreGetFollowerCount::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.IsActive");
		
		UUWorksRequestCoreGetFollowerCount_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006137E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetFollowerCount::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.GetOutput");
		
		UUWorksRequestCoreGetFollowerCount_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetFollowerCount::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Deactivate");
		
		UUWorksRequestCoreGetFollowerCount_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetFollowerCount::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetFollowerCount.Activate");
		
		UUWorksRequestCoreGetFollowerCount_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreGetFollowerCount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreGetFollowerCount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetFollowerCount");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreIsFollowing::SetInput(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.SetInput");
		
		UUWorksRequestCoreIsFollowing_SetInput_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreIsFollowing::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.IsActive");
		
		UUWorksRequestCoreIsFollowing_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613920
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFollowing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreIsFollowing::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, bool* bIsFollowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.GetOutput");
		
		UUWorksRequestCoreIsFollowing_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
		if (bIsFollowing != nullptr)
			*bIsFollowing = params.bIsFollowing;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreIsFollowing::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Deactivate");
		
		UUWorksRequestCoreIsFollowing_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreIsFollowing.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreIsFollowing::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreIsFollowing.Activate");
		
		UUWorksRequestCoreIsFollowing_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreIsFollowing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreIsFollowing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreIsFollowing");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613EA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreEnumerateFollowingList::SetInput(int32_t StartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.SetInput");
		
		UUWorksRequestCoreEnumerateFollowingList_SetInput_Params params {};
		params.StartIndex = StartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreEnumerateFollowingList::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.IsActive");
		
		UUWorksRequestCoreEnumerateFollowingList_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613630
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      SteamIDs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ResultsReturned                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalResultCount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreEnumerateFollowingList::GetOutput(UWorksCore_EUWorksResult* result, TArray<struct FUWorksSteamID>* SteamIDs, int32_t* ResultsReturned, int32_t* TotalResultCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.GetOutput");
		
		UUWorksRequestCoreEnumerateFollowingList_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamIDs != nullptr)
			*SteamIDs = params.SteamIDs;
		if (ResultsReturned != nullptr)
			*ResultsReturned = params.ResultsReturned;
		if (TotalResultCount != nullptr)
			*TotalResultCount = params.TotalResultCount;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreEnumerateFollowingList::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Deactivate");
		
		UUWorksRequestCoreEnumerateFollowingList_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreEnumerateFollowingList::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreEnumerateFollowingList.Activate");
		
		UUWorksRequestCoreEnumerateFollowingList_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreEnumerateFollowingList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreEnumerateFollowingList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreEnumerateFollowingList");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAssociateWithClan::SetInput(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.SetInput");
		
		UUWorksRequestCoreAssociateWithClan_SetInput_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreAssociateWithClan::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.IsActive");
		
		UUWorksRequestCoreAssociateWithClan_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006143E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAssociateWithClan::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.GetOutput");
		
		UUWorksRequestCoreAssociateWithClan_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAssociateWithClan::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Deactivate");
		
		UUWorksRequestCoreAssociateWithClan_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAssociateWithClan::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAssociateWithClan.Activate");
		
		UUWorksRequestCoreAssociateWithClan_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreAssociateWithClan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreAssociateWithClan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAssociateWithClan");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreComputeNewPlayerCompatibility::SetInput(const struct FUWorksSteamID& SteamIDNewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.SetInput");
		
		UUWorksRequestCoreComputeNewPlayerCompatibility_SetInput_Params params {};
		params.SteamIDNewPlayer = SteamIDNewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreComputeNewPlayerCompatibility::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.IsActive");
		
		UUWorksRequestCoreComputeNewPlayerCompatibility_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614470
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayersThatDontLikeCandidate                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayersThatCandidateDoesntLike                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClanPlayersThatDontLikeCandidate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDCandidate                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreComputeNewPlayerCompatibility::GetOutput(UWorksCore_EUWorksResult* result, int32_t* PlayersThatDontLikeCandidate, int32_t* PlayersThatCandidateDoesntLike, int32_t* ClanPlayersThatDontLikeCandidate, struct FUWorksSteamID* SteamIDCandidate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.GetOutput");
		
		UUWorksRequestCoreComputeNewPlayerCompatibility_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (PlayersThatDontLikeCandidate != nullptr)
			*PlayersThatDontLikeCandidate = params.PlayersThatDontLikeCandidate;
		if (PlayersThatCandidateDoesntLike != nullptr)
			*PlayersThatCandidateDoesntLike = params.PlayersThatCandidateDoesntLike;
		if (ClanPlayersThatDontLikeCandidate != nullptr)
			*ClanPlayersThatDontLikeCandidate = params.ClanPlayersThatDontLikeCandidate;
		if (SteamIDCandidate != nullptr)
			*SteamIDCandidate = params.SteamIDCandidate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreComputeNewPlayerCompatibility::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Deactivate");
		
		UUWorksRequestCoreComputeNewPlayerCompatibility_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreComputeNewPlayerCompatibility::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility.Activate");
		
		UUWorksRequestCoreComputeNewPlayerCompatibility_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreComputeNewPlayerCompatibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreComputeNewPlayerCompatibility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestUserStatsGS::SetInput(const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.SetInput");
		
		UUWorksRequestCoreRequestUserStatsGS_SetInput_Params params {};
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestUserStatsGS::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.IsActive");
		
		UUWorksRequestCoreRequestUserStatsGS_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614AB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestUserStatsGS::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.GetOutput");
		
		UUWorksRequestCoreRequestUserStatsGS_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamIDUser != nullptr)
			*SteamIDUser = params.SteamIDUser;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestUserStatsGS::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Deactivate");
		
		UUWorksRequestCoreRequestUserStatsGS_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestUserStatsGS::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStatsGS.Activate");
		
		UUWorksRequestCoreRequestUserStatsGS_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestUserStatsGS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestUserStatsGS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestUserStatsGS");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStoreUserStats::SetInput(const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.SetInput");
		
		UUWorksRequestCoreStoreUserStats_SetInput_Params params {};
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreStoreUserStats::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.IsActive");
		
		UUWorksRequestCoreStoreUserStats_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614AB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStoreUserStats::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.GetOutput");
		
		UUWorksRequestCoreStoreUserStats_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamIDUser != nullptr)
			*SteamIDUser = params.SteamIDUser;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStoreUserStats::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Deactivate");
		
		UUWorksRequestCoreStoreUserStats_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStoreUserStats::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStoreUserStats.Activate");
		
		UUWorksRequestCoreStoreUserStats_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreStoreUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreStoreUserStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStoreUserStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::SetInput(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.SetInput");
		
		UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_SetInput_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.IsActive");
		
		UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614DB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumEligiblePromoItemsDefinitionsIDs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCachedData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, int32_t* NumEligiblePromoItemsDefinitionsIDs, bool* bCachedData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.GetOutput");
		
		UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
		if (NumEligiblePromoItemsDefinitionsIDs != nullptr)
			*NumEligiblePromoItemsDefinitionsIDs = params.NumEligiblePromoItemsDefinitionsIDs;
		if (bCachedData != nullptr)
			*bCachedData = params.bCachedData;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Deactivate");
		
		UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.Activate");
		
		UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestLobbyList::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.IsActive");
		
		UUWorksRequestCoreRequestLobbyList_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00615740
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            LobbiesMatching                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestLobbyList::GetOutput(int32_t* LobbiesMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.GetOutput");
		
		UUWorksRequestCoreRequestLobbyList_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LobbiesMatching != nullptr)
			*LobbiesMatching = params.LobbiesMatching;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestLobbyList::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Deactivate");
		
		UUWorksRequestCoreRequestLobbyList_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestLobbyList::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestLobbyList.Activate");
		
		UUWorksRequestCoreRequestLobbyList_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestLobbyList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestLobbyList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestLobbyList");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006157D0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreCreateLobby::SetInput(UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.SetInput");
		
		UUWorksRequestCoreCreateLobby_SetInput_Params params {};
		params.LobbyType = LobbyType;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreCreateLobby::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.IsActive");
		
		UUWorksRequestCoreCreateLobby_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614AB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreCreateLobby::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.GetOutput");
		
		UUWorksRequestCoreCreateLobby_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamIDLobby != nullptr)
			*SteamIDLobby = params.SteamIDLobby;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreCreateLobby::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Deactivate");
		
		UUWorksRequestCoreCreateLobby_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateLobby.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreCreateLobby::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateLobby.Activate");
		
		UUWorksRequestCoreCreateLobby_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreCreateLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreCreateLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreCreateLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreJoinLobby::SetInput(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.SetInput");
		
		UUWorksRequestCoreJoinLobby_SetInput_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreJoinLobby::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.IsActive");
		
		UUWorksRequestCoreJoinLobby_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00615580
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ChatPermissions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreJoinLobby::GetOutput(struct FUWorksSteamID* SteamIDLobby, TArray<unsigned char>* ChatPermissions, bool* bLocked, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.GetOutput");
		
		UUWorksRequestCoreJoinLobby_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDLobby != nullptr)
			*SteamIDLobby = params.SteamIDLobby;
		if (ChatPermissions != nullptr)
			*ChatPermissions = params.ChatPermissions;
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
		if (ChatRoomEnterResponse != nullptr)
			*ChatRoomEnterResponse = params.ChatRoomEnterResponse;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreJoinLobby::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Deactivate");
		
		UUWorksRequestCoreJoinLobby_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreJoinLobby.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreJoinLobby::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreJoinLobby.Activate");
		
		UUWorksRequestCoreJoinLobby_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreJoinLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreJoinLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreJoinLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617520
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksServerQueryType                  queryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::SetInput(int32_t AppID, UWorksCore_EUWorksServerQueryType queryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.SetInput");
		
		UUWorksRequestCoreServerList_SetInput_Params params {};
		params.AppID = AppID;
		params.queryType = queryType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreServerList::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.IsActive");
		
		UUWorksRequestCoreServerList_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617290
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksServerInfo                           UpdatedServer                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksServerInfo>                   Servers                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::GetOutput(struct FUWorksServerInfo* UpdatedServer, TArray<struct FUWorksServerInfo>* Servers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.GetOutput");
		
		UUWorksRequestCoreServerList_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedServer != nullptr)
			*UpdatedServer = params.UpdatedServer;
		if (Servers != nullptr)
			*Servers = params.Servers;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Deactivate");
		
		UUWorksRequestCoreServerList_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616ED0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterSecure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterSecure");
		
		UUWorksRequestCoreServerList_AddFilterSecure_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616E40
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterOr(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterOr");
		
		UUWorksRequestCoreServerList_AddFilterOr_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616E20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterNotFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNotFull");
		
		UUWorksRequestCoreServerList_AddFilterNotFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616D90
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterNor(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNor");
		
		UUWorksRequestCoreServerList_AddFilterNor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616D70
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterNoPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNoPlayers");
		
		UUWorksRequestCoreServerList_AddFilterNoPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616CE0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterNand(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterNand");
		
		UUWorksRequestCoreServerList_AddFilterNand_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616BF0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterMap(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterMap");
		
		UUWorksRequestCoreServerList_AddFilterMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616BD0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterLinux()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterLinux");
		
		UUWorksRequestCoreServerList_AddFilterLinux_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616BB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterHasPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterHasPlayers");
		
		UUWorksRequestCoreServerList_AddFilterHasPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616AC0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameTagsNor(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsNor");
		
		UUWorksRequestCoreServerList_AddFilterGameTagsNor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006169D0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameTagsAnd(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameTagsAnd");
		
		UUWorksRequestCoreServerList_AddFilterGameTagsAnd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006168E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameDataOr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataOr");
		
		UUWorksRequestCoreServerList_AddFilterGameDataOr_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006167F0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameDataNor(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataNor");
		
		UUWorksRequestCoreServerList_AddFilterGameDataNor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616700
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameDataAnd(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameDataAnd");
		
		UUWorksRequestCoreServerList_AddFilterGameDataAnd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616610
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterGameAddr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterGameAddr");
		
		UUWorksRequestCoreServerList_AddFilterGameAddr_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006165F0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::AddFilterDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterDedicated");
		
		UUWorksRequestCoreServerList_AddFilterDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616560
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterAnd(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAnd");
		
		UUWorksRequestCoreServerList_AddFilterAnd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616470
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreServerList::AddFilterAddr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.AddFilterAddr");
		
		UUWorksRequestCoreServerList_AddFilterAddr_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreServerList.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreServerList::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreServerList.Activate");
		
		UUWorksRequestCoreServerList_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreServerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreServerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreServerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617400
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePing.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCorePing::SetInput(const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.SetInput");
		
		UUWorksRequestCorePing_SetInput_Params params {};
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePing.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCorePing::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.IsActive");
		
		UUWorksRequestCorePing_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616EF0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePing.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksServerInfo                           Server                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCorePing::GetOutput(struct FUWorksServerInfo* Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.GetOutput");
		
		UUWorksRequestCorePing_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Server != nullptr)
			*Server = params.Server;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePing.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCorePing::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Deactivate");
		
		UUWorksRequestCorePing_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePing.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCorePing::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePing.Activate");
		
		UUWorksRequestCorePing_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCorePing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCorePing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCorePing");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617400
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePlayers.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCorePlayers::SetInput(const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.SetInput");
		
		UUWorksRequestCorePlayers_SetInput_Params params {};
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePlayers.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCorePlayers::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.IsActive");
		
		UUWorksRequestCorePlayers_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00616FF0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePlayers.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksPlayerInfo                           UpdatedPlayer                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksPlayerInfo>                   Players                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCorePlayers::GetOutput(struct FUWorksPlayerInfo* UpdatedPlayer, TArray<struct FUWorksPlayerInfo>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.GetOutput");
		
		UUWorksRequestCorePlayers_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedPlayer != nullptr)
			*UpdatedPlayer = params.UpdatedPlayer;
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePlayers.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCorePlayers::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Deactivate");
		
		UUWorksRequestCorePlayers_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCorePlayers.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCorePlayers::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCorePlayers.Activate");
		
		UUWorksRequestCorePlayers_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCorePlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCorePlayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCorePlayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617400
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRules.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRules::SetInput(const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.SetInput");
		
		UUWorksRequestCoreRules_SetInput_Params params {};
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRules.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRules::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.IsActive");
		
		UUWorksRequestCoreRules_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617130
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRules.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksRuleInfo                             UpdatedRule                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksRuleInfo>                     Rules                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRules::GetOutput(struct FUWorksRuleInfo* UpdatedRule, TArray<struct FUWorksRuleInfo>* Rules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.GetOutput");
		
		UUWorksRequestCoreRules_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedRule != nullptr)
			*UpdatedRule = params.UpdatedRule;
		if (Rules != nullptr)
			*Rules = params.Rules;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRules.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRules::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Deactivate");
		
		UUWorksRequestCoreRules_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRules.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRules::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRules.Activate");
		
		UUWorksRequestCoreRules_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRules.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRules::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRules");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617D50
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFileWriteAsync::SetInput(const class FString& File, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.SetInput");
		
		UUWorksRequestCoreFileWriteAsync_SetInput_Params params {};
		params.File = File;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreFileWriteAsync::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.IsActive");
		
		UUWorksRequestCoreFileWriteAsync_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617B70
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFileWriteAsync::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.GetOutput");
		
		UUWorksRequestCoreFileWriteAsync_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFileWriteAsync::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Deactivate");
		
		UUWorksRequestCoreFileWriteAsync_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFileWriteAsync::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileWriteAsync.Activate");
		
		UUWorksRequestCoreFileWriteAsync_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreFileWriteAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreFileWriteAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFileWriteAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617C00
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFileReadAsync::SetInput(const class FString& File, int32_t Offset, int32_t BytesToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.SetInput");
		
		UUWorksRequestCoreFileReadAsync_SetInput_Params params {};
		params.File = File;
		params.Offset = Offset;
		params.BytesToRead = BytesToRead;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreFileReadAsync::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.IsActive");
		
		UUWorksRequestCoreFileReadAsync_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00617A20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFileReadAsync::GetOutput(UWorksCore_EUWorksResult* result, int32_t* Offset, TArray<unsigned char>* Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.GetOutput");
		
		UUWorksRequestCoreFileReadAsync_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (Offset != nullptr)
			*Offset = params.Offset;
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFileReadAsync::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Deactivate");
		
		UUWorksRequestCoreFileReadAsync_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFileReadAsync::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFileReadAsync.Activate");
		
		UUWorksRequestCoreFileReadAsync_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreFileReadAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreFileReadAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFileReadAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A190
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSendQueryUGCRequest::SetInput(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.SetInput");
		
		UUWorksRequestCoreSendQueryUGCRequest_SetInput_Params params {};
		params.UGCQueryHandle = UGCQueryHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreSendQueryUGCRequest::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.IsActive");
		
		UUWorksRequestCoreSendQueryUGCRequest_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619CA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numResultsReturned                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalMatchingResults                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCachedData                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSendQueryUGCRequest::GetOutput(struct FUWorksUGCQueryHandle* UGCQueryHandle, UWorksCore_EUWorksResult* result, int32_t* numResultsReturned, int32_t* TotalMatchingResults, bool* bCachedData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.GetOutput");
		
		UUWorksRequestCoreSendQueryUGCRequest_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UGCQueryHandle != nullptr)
			*UGCQueryHandle = params.UGCQueryHandle;
		if (result != nullptr)
			*result = params.result;
		if (numResultsReturned != nullptr)
			*numResultsReturned = params.numResultsReturned;
		if (TotalMatchingResults != nullptr)
			*TotalMatchingResults = params.TotalMatchingResults;
		if (bCachedData != nullptr)
			*bCachedData = params.bCachedData;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSendQueryUGCRequest::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Deactivate");
		
		UUWorksRequestCoreSendQueryUGCRequest_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSendQueryUGCRequest::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSendQueryUGCRequest.Activate");
		
		UUWorksRequestCoreSendQueryUGCRequest_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreSendQueryUGCRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreSendQueryUGCRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSendQueryUGCRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A0D0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksWorkshopFileType                 fileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreCreateItem::SetInput(int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.SetInput");
		
		UUWorksRequestCoreCreateItem_SetInput_Params params {};
		params.ConsumerAppID = ConsumerAppID;
		params.fileType = fileType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreCreateItem::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.IsActive");
		
		UUWorksRequestCoreCreateItem_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619960
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreCreateItem::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.GetOutput");
		
		UUWorksRequestCoreCreateItem_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
		if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
			*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreCreateItem::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Deactivate");
		
		UUWorksRequestCoreCreateItem_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreCreateItem.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreCreateItem::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreCreateItem.Activate");
		
		UUWorksRequestCoreCreateItem_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreCreateItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreCreateItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreCreateItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A2E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSubmitItemUpdate::SetInput(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.SetInput");
		
		UUWorksRequestCoreSubmitItemUpdate_SetInput_Params params {};
		params.UGCUpdateHandle = UGCUpdateHandle;
		params.ChangeNote = ChangeNote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreSubmitItemUpdate::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.IsActive");
		
		UUWorksRequestCoreSubmitItemUpdate_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619F30
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSubmitItemUpdate::GetOutput(UWorksCore_EUWorksResult* result, bool* bUserNeedsToAcceptWorkshopLegalAgreement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.GetOutput");
		
		UUWorksRequestCoreSubmitItemUpdate_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (bUserNeedsToAcceptWorkshopLegalAgreement != nullptr)
			*bUserNeedsToAcceptWorkshopLegalAgreement = params.bUserNeedsToAcceptWorkshopLegalAgreement;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSubmitItemUpdate::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Deactivate");
		
		UUWorksRequestCoreSubmitItemUpdate_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSubmitItemUpdate::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubmitItemUpdate.Activate");
		
		UUWorksRequestCoreSubmitItemUpdate_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreSubmitItemUpdate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreSubmitItemUpdate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSubmitItemUpdate");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A210
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.SetInput");
		
		UUWorksRequestCoreSetUserItemVote_SetInput_Params params {};
		params.PublishedFileID = PublishedFileID;
		params.bVoteUp = bVoteUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreSetUserItemVote::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.IsActive");
		
		UUWorksRequestCoreSetUserItemVote_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619820
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.GetOutput");
		
		UUWorksRequestCoreSetUserItemVote_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
		if (result != nullptr)
			*result = params.result;
		if (bVoteUp != nullptr)
			*bVoteUp = params.bVoteUp;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSetUserItemVote::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Deactivate");
		
		UUWorksRequestCoreSetUserItemVote_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSetUserItemVote::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSetUserItemVote.Activate");
		
		UUWorksRequestCoreSetUserItemVote_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreSetUserItemVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreSetUserItemVote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSetUserItemVote");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetUserItemVote::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.SetInput");
		
		UUWorksRequestCoreGetUserItemVote_SetInput_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreGetUserItemVote::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.IsActive");
		
		UUWorksRequestCoreGetUserItemVote_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619AA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVotedUp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVotedDown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteSkipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetUserItemVote::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bVotedUp, bool* bVotedDown, bool* bVoteSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.GetOutput");
		
		UUWorksRequestCoreGetUserItemVote_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
		if (result != nullptr)
			*result = params.result;
		if (bVotedUp != nullptr)
			*bVotedUp = params.bVotedUp;
		if (bVotedDown != nullptr)
			*bVotedDown = params.bVotedDown;
		if (bVoteSkipped != nullptr)
			*bVoteSkipped = params.bVoteSkipped;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetUserItemVote::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Deactivate");
		
		UUWorksRequestCoreGetUserItemVote_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetUserItemVote::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetUserItemVote.Activate");
		
		UUWorksRequestCoreGetUserItemVote_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreGetUserItemVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreGetUserItemVote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetUserItemVote");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A010
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAddItemToFavorites::SetInput(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.SetInput");
		
		UUWorksRequestCoreAddItemToFavorites_SetInput_Params params {};
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreAddItemToFavorites::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.IsActive");
		
		UUWorksRequestCoreAddItemToFavorites_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619820
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasAddRequest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAddItemToFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bWasAddRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.GetOutput");
		
		UUWorksRequestCoreAddItemToFavorites_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
		if (result != nullptr)
			*result = params.result;
		if (bWasAddRequest != nullptr)
			*bWasAddRequest = params.bWasAddRequest;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAddItemToFavorites::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Deactivate");
		
		UUWorksRequestCoreAddItemToFavorites_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAddItemToFavorites::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAddItemToFavorites.Activate");
		
		UUWorksRequestCoreAddItemToFavorites_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreAddItemToFavorites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreAddItemToFavorites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAddItemToFavorites");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A010
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRemoveItemFromFavorites::SetInput(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.SetInput");
		
		UUWorksRequestCoreRemoveItemFromFavorites_SetInput_Params params {};
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRemoveItemFromFavorites::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.IsActive");
		
		UUWorksRequestCoreRemoveItemFromFavorites_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619820
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasAddRequest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRemoveItemFromFavorites::GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bWasAddRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.GetOutput");
		
		UUWorksRequestCoreRemoveItemFromFavorites_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
		if (result != nullptr)
			*result = params.result;
		if (bWasAddRequest != nullptr)
			*bWasAddRequest = params.bWasAddRequest;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRemoveItemFromFavorites::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Deactivate");
		
		UUWorksRequestCoreRemoveItemFromFavorites_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRemoveItemFromFavorites::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRemoveItemFromFavorites.Activate");
		
		UUWorksRequestCoreRemoveItemFromFavorites_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRemoveItemFromFavorites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRemoveItemFromFavorites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRemoveItemFromFavorites");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.SetInput");
		
		UUWorksRequestCoreSubscribeItem_SetInput_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreSubscribeItem::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.IsActive");
		
		UUWorksRequestCoreSubscribeItem_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614AB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreSubscribeItem::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.GetOutput");
		
		UUWorksRequestCoreSubscribeItem_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSubscribeItem::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Deactivate");
		
		UUWorksRequestCoreSubscribeItem_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreSubscribeItem::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreSubscribeItem.Activate");
		
		UUWorksRequestCoreSubscribeItem_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreSubscribeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreSubscribeItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreSubscribeItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreUnsubscribeItem::SetInput(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.SetInput");
		
		UUWorksRequestCoreUnsubscribeItem_SetInput_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreUnsubscribeItem::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.IsActive");
		
		UUWorksRequestCoreUnsubscribeItem_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00614AB0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreUnsubscribeItem::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.GetOutput");
		
		UUWorksRequestCoreUnsubscribeItem_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (PublishedFileID != nullptr)
			*PublishedFileID = params.PublishedFileID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreUnsubscribeItem::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Deactivate");
		
		UUWorksRequestCoreUnsubscribeItem_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreUnsubscribeItem::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUnsubscribeItem.Activate");
		
		UUWorksRequestCoreUnsubscribeItem_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreUnsubscribeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreUnsubscribeItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreUnsubscribeItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613DC0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStartPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.SetInput");
		
		UUWorksRequestCoreStartPlaytimeTracking_SetInput_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreStartPlaytimeTracking::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.IsActive");
		
		UUWorksRequestCoreStartPlaytimeTracking_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006135A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStartPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.GetOutput");
		
		UUWorksRequestCoreStartPlaytimeTracking_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStartPlaytimeTracking::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Deactivate");
		
		UUWorksRequestCoreStartPlaytimeTracking_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStartPlaytimeTracking::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStartPlaytimeTracking.Activate");
		
		UUWorksRequestCoreStartPlaytimeTracking_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreStartPlaytimeTracking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreStartPlaytimeTracking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStartPlaytimeTracking");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613DC0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStopPlaytimeTracking::SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.SetInput");
		
		UUWorksRequestCoreStopPlaytimeTracking_SetInput_Params params {};
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreStopPlaytimeTracking::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.IsActive");
		
		UUWorksRequestCoreStopPlaytimeTracking_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006135A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStopPlaytimeTracking::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.GetOutput");
		
		UUWorksRequestCoreStopPlaytimeTracking_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStopPlaytimeTracking::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Deactivate");
		
		UUWorksRequestCoreStopPlaytimeTracking_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStopPlaytimeTracking::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTracking.Activate");
		
		UUWorksRequestCoreStopPlaytimeTracking_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreStopPlaytimeTracking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreStopPlaytimeTracking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStopPlaytimeTracking");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreStopPlaytimeTrackingForAllItems::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.IsActive");
		
		UUWorksRequestCoreStopPlaytimeTrackingForAllItems_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00619EA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.GetOutput");
		
		UUWorksRequestCoreStopPlaytimeTrackingForAllItems_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Deactivate");
		
		UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreStopPlaytimeTrackingForAllItems::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems.Activate");
		
		UUWorksRequestCoreStopPlaytimeTrackingForAllItems_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreStopPlaytimeTrackingForAllItems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreStopPlaytimeTrackingForAllItems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A900
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestEncryptedAppTicket::SetInput(TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.SetInput");
		
		UUWorksRequestCoreRequestEncryptedAppTicket_SetInput_Params params {};
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestEncryptedAppTicket::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.IsActive");
		
		UUWorksRequestCoreRequestEncryptedAppTicket_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006135A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestEncryptedAppTicket::GetOutput(UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.GetOutput");
		
		UUWorksRequestCoreRequestEncryptedAppTicket_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestEncryptedAppTicket::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Deactivate");
		
		UUWorksRequestCoreRequestEncryptedAppTicket_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestEncryptedAppTicket::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket.Activate");
		
		UUWorksRequestCoreRequestEncryptedAppTicket_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestEncryptedAppTicket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestEncryptedAppTicket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestStoreAuthURL::SetInput(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.SetInput");
		
		UUWorksRequestCoreRequestStoreAuthURL_SetInput_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestStoreAuthURL::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.IsActive");
		
		UUWorksRequestCoreRequestStoreAuthURL_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061A850
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestStoreAuthURL::GetOutput(class FString* URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.GetOutput");
		
		UUWorksRequestCoreRequestStoreAuthURL_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL != nullptr)
			*URL = params.URL;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestStoreAuthURL::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Deactivate");
		
		UUWorksRequestCoreRequestStoreAuthURL_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestStoreAuthURL::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestStoreAuthURL.Activate");
		
		UUWorksRequestCoreRequestStoreAuthURL_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestStoreAuthURL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestStoreAuthURL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestStoreAuthURL");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613F20
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestUserStats::SetInput(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.SetInput");
		
		UUWorksRequestCoreRequestUserStats_SetInput_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestUserStats::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.IsActive");
		
		UUWorksRequestCoreRequestUserStats_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C460
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestUserStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.GetOutput");
		
		UUWorksRequestCoreRequestUserStats_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
		if (result != nullptr)
			*result = params.result;
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestUserStats::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Deactivate");
		
		UUWorksRequestCoreRequestUserStats_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestUserStats::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestUserStats.Activate");
		
		UUWorksRequestCoreRequestUserStats_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestUserStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestUserStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061CB10
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFindOrCreateLeaderboard::SetInput(const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.SetInput");
		
		UUWorksRequestCoreFindOrCreateLeaderboard_SetInput_Params params {};
		params.LeaderboardName = LeaderboardName;
		params.LeaderboardSortMethod = LeaderboardSortMethod;
		params.LeaderboardDisplayType = LeaderboardDisplayType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreFindOrCreateLeaderboard::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.IsActive");
		
		UUWorksRequestCoreFindOrCreateLeaderboard_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C1C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderboardFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFindOrCreateLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.GetOutput");
		
		UUWorksRequestCoreFindOrCreateLeaderboard_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
		if (bLeaderboardFound != nullptr)
			*bLeaderboardFound = params.bLeaderboardFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFindOrCreateLeaderboard::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Deactivate");
		
		UUWorksRequestCoreFindOrCreateLeaderboard_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFindOrCreateLeaderboard::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard.Activate");
		
		UUWorksRequestCoreFindOrCreateLeaderboard_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreFindOrCreateLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreFindOrCreateLeaderboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFindLeaderboard::SetInput(const class FString& LeaderboardName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.SetInput");
		
		UUWorksRequestCoreFindLeaderboard_SetInput_Params params {};
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreFindLeaderboard::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.IsActive");
		
		UUWorksRequestCoreFindLeaderboard_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C0E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderboardFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreFindLeaderboard::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.GetOutput");
		
		UUWorksRequestCoreFindLeaderboard_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
		if (bLeaderboardFound != nullptr)
			*bLeaderboardFound = params.bLeaderboardFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFindLeaderboard::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Deactivate");
		
		UUWorksRequestCoreFindLeaderboard_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreFindLeaderboard::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreFindLeaderboard.Activate");
		
		UUWorksRequestCoreFindLeaderboard_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreFindLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreFindLeaderboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreFindLeaderboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C890
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntries::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.SetInput");
		
		UUWorksRequestCoreDownloadLeaderboardEntries_SetInput_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardDataRequest = LeaderboardDataRequest;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreDownloadLeaderboardEntries::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.IsActive");
		
		UUWorksRequestCoreDownloadLeaderboardEntries_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061BFA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntries::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int32_t* EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.GetOutput");
		
		UUWorksRequestCoreDownloadLeaderboardEntries_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
		if (SteamLeaderboardEntries != nullptr)
			*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
		if (EntryCount != nullptr)
			*EntryCount = params.EntryCount;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntries::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Deactivate");
		
		UUWorksRequestCoreDownloadLeaderboardEntries_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntries::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries.Activate");
		
		UUWorksRequestCoreDownloadLeaderboardEntries_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreDownloadLeaderboardEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreDownloadLeaderboardEntries::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C9E0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      Users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.SetInput");
		
		UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_SetInput_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.Users = Users;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.IsActive");
		
		UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061BFA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int32_t* EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.GetOutput");
		
		UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
		if (SteamLeaderboardEntries != nullptr)
			*SteamLeaderboardEntries = params.SteamLeaderboardEntries;
		if (EntryCount != nullptr)
			*EntryCount = params.EntryCount;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Deactivate");
		
		UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers.Activate");
		
		UUWorksRequestCoreDownloadLeaderboardEntriesForUsers_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreDownloadLeaderboardEntriesForUsers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreDownloadLeaderboardEntriesForUsers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061CC60
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreUploadLeaderboardScore::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.SetInput");
		
		UUWorksRequestCoreUploadLeaderboardScore_SetInput_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
		params.score = score;
		params.ScoreDetails = ScoreDetails;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreUploadLeaderboardScore::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.IsActive");
		
		UUWorksRequestCoreUploadLeaderboardScore_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C5A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScoreChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GlobalRankNew                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GlobalRankPrevious                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreUploadLeaderboardScore::GetOutput(bool* bSuccess, struct FUWorksSteamLeaderboard* SteamLeaderboard, int32_t* score, bool* bScoreChanged, int32_t* GlobalRankNew, int32_t* GlobalRankPrevious)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.GetOutput");
		
		UUWorksRequestCoreUploadLeaderboardScore_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
		if (score != nullptr)
			*score = params.score;
		if (bScoreChanged != nullptr)
			*bScoreChanged = params.bScoreChanged;
		if (GlobalRankNew != nullptr)
			*GlobalRankNew = params.GlobalRankNew;
		if (GlobalRankPrevious != nullptr)
			*GlobalRankPrevious = params.GlobalRankPrevious;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreUploadLeaderboardScore::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Deactivate");
		
		UUWorksRequestCoreUploadLeaderboardScore_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreUploadLeaderboardScore::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreUploadLeaderboardScore.Activate");
		
		UUWorksRequestCoreUploadLeaderboardScore_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreUploadLeaderboardScore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreUploadLeaderboardScore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreUploadLeaderboardScore");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C7D0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAttachLeaderboardUGC::SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.SetInput");
		
		UUWorksRequestCoreAttachLeaderboardUGC_SetInput_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.UGCHandle = UGCHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreAttachLeaderboardUGC::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.IsActive");
		
		UUWorksRequestCoreAttachLeaderboardUGC_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061BEC0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreAttachLeaderboardUGC::GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamLeaderboard* SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.GetOutput");
		
		UUWorksRequestCoreAttachLeaderboardUGC_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
		if (SteamLeaderboard != nullptr)
			*SteamLeaderboard = params.SteamLeaderboard;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAttachLeaderboardUGC::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Deactivate");
		
		UUWorksRequestCoreAttachLeaderboardUGC_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreAttachLeaderboardUGC::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreAttachLeaderboardUGC.Activate");
		
		UUWorksRequestCoreAttachLeaderboardUGC_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreAttachLeaderboardUGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreAttachLeaderboardUGC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreAttachLeaderboardUGC");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreGetNumberOfCurrentPlayers::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.IsActive");
		
		UUWorksRequestCoreGetNumberOfCurrentPlayers_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C2A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Players                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreGetNumberOfCurrentPlayers::GetOutput(bool* bSuccess, int32_t* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.GetOutput");
		
		UUWorksRequestCoreGetNumberOfCurrentPlayers_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetNumberOfCurrentPlayers::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Deactivate");
		
		UUWorksRequestCoreGetNumberOfCurrentPlayers_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreGetNumberOfCurrentPlayers::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers.Activate");
		
		UUWorksRequestCoreGetNumberOfCurrentPlayers_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreGetNumberOfCurrentPlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreGetNumberOfCurrentPlayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestGlobalAchievementPercentages::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.IsActive");
		
		UUWorksRequestCoreRequestGlobalAchievementPercentages_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061C380
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestGlobalAchievementPercentages::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.GetOutput");
		
		UUWorksRequestCoreRequestGlobalAchievementPercentages_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestGlobalAchievementPercentages::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Deactivate");
		
		UUWorksRequestCoreRequestGlobalAchievementPercentages_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestGlobalAchievementPercentages::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages.Activate");
		
		UUWorksRequestCoreRequestGlobalAchievementPercentages_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestGlobalAchievementPercentages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestGlobalAchievementPercentages::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613EA0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestGlobalStats::SetInput(int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.SetInput");
		
		UUWorksRequestCoreRequestGlobalStats_SetInput_Params params {};
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006125B0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UUWorksRequestCoreRequestGlobalStats::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.IsActive");
		
		UUWorksRequestCoreRequestGlobalStats_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00613A60
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksRequestCoreRequestGlobalStats::GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.GetOutput");
		
		UUWorksRequestCoreRequestGlobalStats_GetOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123C0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestGlobalStats::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Deactivate");
		
		UUWorksRequestCoreRequestGlobalStats_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006123A0
	 * 		Name   -> Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UUWorksRequestCoreRequestGlobalStats::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.UWorksRequestCoreRequestGlobalStats.Activate");
		
		UUWorksRequestCoreRequestGlobalStats_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequestCoreRequestGlobalStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequestCoreRequestGlobalStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.UWorksRequestCoreRequestGlobalStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061D0F0
	 * 		Name   -> Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileSHA                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    FileFlags                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreGetFileDetailsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t FileSize, const class FString& FileSHA, TArray<int32_t> FileFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.OnRequestCompleted");
		
		UCoreGetFileDetailsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.FileSize = FileSize;
		params.FileSHA = FileSHA;
		params.FileFlags = FileFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061D010
	 * 		Name   -> Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreGetFileDetailsNode* UCoreGetFileDetailsNode::STATIC_GetFileDetailsNode(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFileDetailsNode.GetFileDetailsNode");
		
		UCoreGetFileDetailsNode_GetFileDetailsNode_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGetFileDetailsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGetFileDetailsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreGetFileDetailsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E9A0
	 * 		Name   -> Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreSetPersonaNameNode* UCoreSetPersonaNameNode::STATIC_SetPersonaNameNode(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.SetPersonaNameNode");
		
		UCoreSetPersonaNameNode_SetPersonaNameNode_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E7C0
	 * 		Name   -> Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLocalSuccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSetPersonaNameNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetPersonaNameNode.OnRequestCompleted");
		
		UCoreSetPersonaNameNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.bSuccess = bSuccess;
		params.bLocalSuccess = bLocalSuccess;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSetPersonaNameNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSetPersonaNameNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreSetPersonaNameNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E050
	 * 		Name   -> Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreDownloadClanActivityCountsNode::OnRequestCompleted(bool bSuccessful, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.OnRequestCompleted");
		
		UCoreDownloadClanActivityCountsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061DD70
	 * 		Name   -> Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksSteamID>                      SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreDownloadClanActivityCountsNode* UCoreDownloadClanActivityCountsNode::STATIC_DownloadClanActivityCountsNode(TArray<struct FUWorksSteamID> SteamIDClans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadClanActivityCountsNode.DownloadClanActivityCountsNode");
		
		UCoreDownloadClanActivityCountsNode_DownloadClanActivityCountsNode_Params params {};
		params.SteamIDClans = SteamIDClans;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreDownloadClanActivityCountsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreDownloadClanActivityCountsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreDownloadClanActivityCountsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E920
	 * 		Name   -> Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestClanOfficerListNode* UCoreRequestClanOfficerListNode::STATIC_RequestClanOfficerListNode(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.RequestClanOfficerListNode");
		
		UCoreRequestClanOfficerListNode_RequestClanOfficerListNode_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E670
	 * 		Name   -> Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Officers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestClanOfficerListNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClan, int32_t Officers, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestClanOfficerListNode.OnRequestCompleted");
		
		UCoreRequestClanOfficerListNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamIDClan = SteamIDClan;
		params.Officers = Officers;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestClanOfficerListNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestClanOfficerListNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestClanOfficerListNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E570
	 * 		Name   -> Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDClanChat                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreJoinClanChatRoomNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.OnRequestCompleted");
		
		UCoreJoinClanChatRoomNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamIDClanChat = SteamIDClanChat;
		params.ChatRoomEnterResponse = ChatRoomEnterResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061DFD0
	 * 		Name   -> Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreJoinClanChatRoomNode* UCoreJoinClanChatRoomNode::STATIC_JoinClanChatRoomNode(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinClanChatRoomNode.JoinClanChatRoomNode");
		
		UCoreJoinClanChatRoomNode_JoinClanChatRoomNode_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreJoinClanChatRoomNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreJoinClanChatRoomNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreJoinClanChatRoomNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E2E0
	 * 		Name   -> Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGetFollowerCountNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.OnRequestCompleted");
		
		UCoreGetFollowerCountNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamID = SteamID;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061DED0
	 * 		Name   -> Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreGetFollowerCountNode* UCoreGetFollowerCountNode::STATIC_GetFollowerCountNode(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetFollowerCountNode.GetFollowerCountNode");
		
		UCoreGetFollowerCountNode_GetFollowerCountNode_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGetFollowerCountNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGetFollowerCountNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreGetFollowerCountNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E420
	 * 		Name   -> Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFollowing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreIsFollowingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, bool bIsFollowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.OnRequestCompleted");
		
		UCoreIsFollowingNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamID = SteamID;
		params.bIsFollowing = bIsFollowing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061DF50
	 * 		Name   -> Function UWorksCore.CoreIsFollowingNode.IsFollowingNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreIsFollowingNode* UCoreIsFollowingNode::STATIC_IsFollowingNode(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreIsFollowingNode.IsFollowingNode");
		
		UCoreIsFollowingNode_IsFollowingNode_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreIsFollowingNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreIsFollowingNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreIsFollowingNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E120
	 * 		Name   -> Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      SteamIDs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ResultsReturned                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalResultCount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreEnumerateFollowingListNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, TArray<struct FUWorksSteamID> SteamIDs, int32_t ResultsReturned, int32_t TotalResultCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.OnRequestCompleted");
		
		UCoreEnumerateFollowingListNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamIDs = SteamIDs;
		params.ResultsReturned = ResultsReturned;
		params.TotalResultCount = TotalResultCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061DE50
	 * 		Name   -> Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreEnumerateFollowingListNode* UCoreEnumerateFollowingListNode::STATIC_EnumerateFollowingListNode(int32_t StartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreEnumerateFollowingListNode.EnumerateFollowingListNode");
		
		UCoreEnumerateFollowingListNode_EnumerateFollowingListNode_Params params {};
		params.StartIndex = StartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreEnumerateFollowingListNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEnumerateFollowingListNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreEnumerateFollowingListNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAssociateWithClanNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.OnRequestCompleted");
		
		UCoreAssociateWithClanNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061ED80
	 * 		Name   -> Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDClan                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreAssociateWithClanNode* UCoreAssociateWithClanNode::STATIC_AssociateWithClanNode(const struct FUWorksSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAssociateWithClanNode.AssociateWithClanNode");
		
		UCoreAssociateWithClanNode_AssociateWithClanNode_Params params {};
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreAssociateWithClanNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAssociateWithClanNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreAssociateWithClanNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EF40
	 * 		Name   -> Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayersThatDontLikeCandidate                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayersThatCandidateDoesntLike                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClanPlayersThatDontLikeCandidate                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDCandidate                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreComputeNewPlayerCompatibilityNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t PlayersThatDontLikeCandidate, int32_t PlayersThatCandidateDoesntLike, int32_t ClanPlayersThatDontLikeCandidate, const struct FUWorksSteamID& SteamIDCandidate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.OnRequestCompleted");
		
		UCoreComputeNewPlayerCompatibilityNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.PlayersThatDontLikeCandidate = PlayersThatDontLikeCandidate;
		params.PlayersThatCandidateDoesntLike = PlayersThatCandidateDoesntLike;
		params.ClanPlayersThatDontLikeCandidate = ClanPlayersThatDontLikeCandidate;
		params.SteamIDCandidate = SteamIDCandidate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE00
	 * 		Name   -> Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDNewPlayer                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreComputeNewPlayerCompatibilityNode* UCoreComputeNewPlayerCompatibilityNode::STATIC_ComputeNewPlayerCompatibilityNode(const struct FUWorksSteamID& SteamIDNewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreComputeNewPlayerCompatibilityNode.ComputeNewPlayerCompatibilityNode");
		
		UCoreComputeNewPlayerCompatibilityNode_ComputeNewPlayerCompatibilityNode_Params params {};
		params.SteamIDNewPlayer = SteamIDNewPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreComputeNewPlayerCompatibilityNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreComputeNewPlayerCompatibilityNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreComputeNewPlayerCompatibilityNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F500
	 * 		Name   -> Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestUserStatsGSNode* UCoreRequestUserStatsGSNode::STATIC_RequestUserStatsGSNode(const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.RequestUserStatsGSNode");
		
		UCoreRequestUserStatsGSNode_RequestUserStatsGSNode_Params params {};
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F400
	 * 		Name   -> Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestUserStatsGSNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsGSNode.OnRequestCompleted");
		
		UCoreRequestUserStatsGSNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestUserStatsGSNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestUserStatsGSNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestUserStatsGSNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F580
	 * 		Name   -> Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreStoreUserStatsNode* UCoreStoreUserStatsNode::STATIC_StoreUserStatsNode(const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.StoreUserStatsNode");
		
		UCoreStoreUserStatsNode_StoreUserStatsNode_Params params {};
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F400
	 * 		Name   -> Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDUser                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreStoreUserStatsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStoreUserStatsNode.OnRequestCompleted");
		
		UCoreStoreUserStatsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStoreUserStatsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStoreUserStatsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreStoreUserStatsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F910
	 * 		Name   -> Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestEligiblePromoItemDefinitionsIDsNode* UCoreRequestEligiblePromoItemDefinitionsIDsNode::STATIC_RequestEligiblePromoItemDefinitionsIDsNode(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.RequestEligiblePromoItemDefinitionsIDsNode");
		
		UCoreRequestEligiblePromoItemDefinitionsIDsNode_RequestEligiblePromoItemDefinitionsIDsNode_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F780
	 * 		Name   -> Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumEligiblePromoItemsDefinitionsIDs                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCachedData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestEligiblePromoItemDefinitionsIDsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, int32_t NumEligiblePromoItemsDefinitionsIDs, bool bCachedData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode.OnRequestCompleted");
		
		UCoreRequestEligiblePromoItemDefinitionsIDsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamID = SteamID;
		params.NumEligiblePromoItemsDefinitionsIDs = NumEligiblePromoItemsDefinitionsIDs;
		params.bCachedData = bCachedData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestEligiblePromoItemDefinitionsIDsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestEligiblePromoItemDefinitionsIDsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006201E0
	 * 		Name   -> Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCoreRequestLobbyListNode* UCoreRequestLobbyListNode::STATIC_RequestLobbyListNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.RequestLobbyListNode");
		
		UCoreRequestLobbyListNode_RequestLobbyListNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620120
	 * 		Name   -> Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LobbiesMatching                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestLobbyListNode::OnRequestCompleted(bool bSuccessful, int32_t LobbiesMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestLobbyListNode.OnRequestCompleted");
		
		UCoreRequestLobbyListNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.LobbiesMatching = LobbiesMatching;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestLobbyListNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestLobbyListNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestLobbyListNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F400
	 * 		Name   -> Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreCreateLobbyNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.OnRequestCompleted");
		
		UCoreCreateLobbyNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061FE10
	 * 		Name   -> Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		UWorksCore_EUWorksLobbyType                        LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreCreateLobbyNode* UCoreCreateLobbyNode::STATIC_CreateLobbyNode(UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateLobbyNode.CreateLobbyNode");
		
		UCoreCreateLobbyNode_CreateLobbyNode_Params params {};
		params.LobbyType = LobbyType;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCreateLobbyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCreateLobbyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreCreateLobbyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061FF50
	 * 		Name   -> Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ChatPermissions                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksChatRoomEnterResponse            ChatRoomEnterResponse                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreJoinLobbyNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDLobby, TArray<unsigned char> ChatPermissions, bool bLocked, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.OnRequestCompleted");
		
		UCoreJoinLobbyNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamIDLobby = SteamIDLobby;
		params.ChatPermissions = ChatPermissions;
		params.bLocked = bLocked;
		params.ChatRoomEnterResponse = ChatRoomEnterResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061FED0
	 * 		Name   -> Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamIDLobby                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreJoinLobbyNode* UCoreJoinLobbyNode::STATIC_JoinLobbyNode(const struct FUWorksSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreJoinLobbyNode.JoinLobbyNode");
		
		UCoreJoinLobbyNode_JoinLobbyNode_Params params {};
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreJoinLobbyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreJoinLobbyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreJoinLobbyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00621140
	 * 		Name   -> Function UWorksCore.CoreServerListNode.ServerListNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksServerQueryType                  queryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreServerListNode* UCoreServerListNode::STATIC_ServerListNode(int32_t AppID, UWorksCore_EUWorksServerQueryType queryType, int32_t MaxUpdates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.ServerListNode");
		
		UCoreServerListNode_ServerListNode_Params params {};
		params.AppID = AppID;
		params.queryType = queryType;
		params.MaxUpdates = MaxUpdates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620C30
	 * 		Name   -> Function UWorksCore.CoreServerListNode.OnRequestUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksServerInfo                           Server                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCoreServerListNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksServerInfo& Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreServerListNode.OnRequestUpdated");
		
		UCoreServerListNode_OnRequestUpdated_Params params {};
		params.bSuccessful = bSuccessful;
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreServerListNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreServerListNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreServerListNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620D80
	 * 		Name   -> Function UWorksCore.CorePingNode.PingNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCorePingNode* UCorePingNode::STATIC_PingNode(const class FString& IP, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.PingNode");
		
		UCorePingNode_PingNode_Params params {};
		params.IP = IP;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006208B0
	 * 		Name   -> Function UWorksCore.CorePingNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksServerInfo                           Server                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCorePingNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksServerInfo& Server)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePingNode.OnRequestCompleted");
		
		UCorePingNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.Server = Server;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePingNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePingNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CorePingNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620EA0
	 * 		Name   -> Function UWorksCore.CorePlayersNode.PlayersNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCorePlayersNode* UCorePlayersNode::STATIC_PlayersNode(const class FString& IP, int32_t Port, int32_t MaxUpdates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.PlayersNode");
		
		UCorePlayersNode_PlayersNode_Params params {};
		params.IP = IP;
		params.Port = Port;
		params.MaxUpdates = MaxUpdates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620A00
	 * 		Name   -> Function UWorksCore.CorePlayersNode.OnRequestUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPlayerInfo                           Player                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCorePlayersNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksPlayerInfo& Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CorePlayersNode.OnRequestUpdated");
		
		UCorePlayersNode_OnRequestUpdated_Params params {};
		params.bSuccessful = bSuccessful;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCorePlayersNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayersNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CorePlayersNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620FF0
	 * 		Name   -> Function UWorksCore.CoreRulesNode.RulesNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxUpdates                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRulesNode* UCoreRulesNode::STATIC_RulesNode(const class FString& IP, int32_t Port, int32_t MaxUpdates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.RulesNode");
		
		UCoreRulesNode_RulesNode_Params params {};
		params.IP = IP;
		params.Port = Port;
		params.MaxUpdates = MaxUpdates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00620B10
	 * 		Name   -> Function UWorksCore.CoreRulesNode.OnRequestUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksRuleInfo                             Rule                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UCoreRulesNode::OnRequestUpdated(bool bSuccessful, const struct FUWorksRuleInfo& Rule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRulesNode.OnRequestUpdated");
		
		UCoreRulesNode_OnRequestUpdated_Params params {};
		params.bSuccessful = bSuccessful;
		params.Rule = Rule;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRulesNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRulesNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRulesNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreFileWriteAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.OnRequestCompleted");
		
		UCoreFileWriteAsyncNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00621680
	 * 		Name   -> Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreFileWriteAsyncNode* UCoreFileWriteAsyncNode::STATIC_FileWriteAsyncNode(const class FString& File, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileWriteAsyncNode.FileWriteAsyncNode");
		
		UCoreFileWriteAsyncNode_FileWriteAsyncNode_Params params {};
		params.File = File;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreFileWriteAsyncNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFileWriteAsyncNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreFileWriteAsyncNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006217F0
	 * 		Name   -> Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCoreFileReadAsyncNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.OnRequestCompleted");
		
		UCoreFileReadAsyncNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00621530
	 * 		Name   -> Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreFileReadAsyncNode* UCoreFileReadAsyncNode::STATIC_FileReadAsyncNode(const class FString& File, int32_t Offset, int32_t BytesToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFileReadAsyncNode.FileReadAsyncNode");
		
		UCoreFileReadAsyncNode_FileReadAsyncNode_Params params {};
		params.File = File;
		params.Offset = Offset;
		params.BytesToRead = BytesToRead;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreFileReadAsyncNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFileReadAsyncNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreFileReadAsyncNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623430
	 * 		Name   -> Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreSendQueryUGCRequestNode* UCoreSendQueryUGCRequestNode::STATIC_SendQueryUGCRequestNode(const struct FUWorksUGCQueryHandle& UGCQueryHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.SendQueryUGCRequestNode");
		
		UCoreSendQueryUGCRequestNode_SendQueryUGCRequestNode_Params params {};
		params.UGCQueryHandle = UGCQueryHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623090
	 * 		Name   -> Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCQueryHandle                       UGCQueryHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numResultsReturned                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalMatchingResults                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCachedData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSendQueryUGCRequestNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksUGCQueryHandle& UGCQueryHandle, UWorksCore_EUWorksResult result, int32_t numResultsReturned, int32_t TotalMatchingResults, bool bCachedData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSendQueryUGCRequestNode.OnRequestCompleted");
		
		UCoreSendQueryUGCRequestNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.UGCQueryHandle = UGCQueryHandle;
		params.result = result;
		params.numResultsReturned = numResultsReturned;
		params.TotalMatchingResults = TotalMatchingResults;
		params.bCachedData = bCachedData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSendQueryUGCRequestNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSendQueryUGCRequestNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreSendQueryUGCRequestNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E420
	 * 		Name   -> Function UWorksCore.CoreCreateItemNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCreateItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.OnRequestCompleted");
		
		UCoreCreateItemNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.PublishedFileID = PublishedFileID;
		params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622C20
	 * 		Name   -> Function UWorksCore.CoreCreateItemNode.CreateItemNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksWorkshopFileType                 fileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreCreateItemNode* UCoreCreateItemNode::STATIC_CreateItemNode(int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreCreateItemNode.CreateItemNode");
		
		UCoreCreateItemNode_CreateItemNode_Params params {};
		params.ConsumerAppID = ConsumerAppID;
		params.fileType = fileType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreCreateItemNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCreateItemNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreCreateItemNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623760
	 * 		Name   -> Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      UGCUpdateHandle                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreSubmitItemUpdateNode* UCoreSubmitItemUpdateNode::STATIC_SubmitItemUpdateNode(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.SubmitItemUpdateNode");
		
		UCoreSubmitItemUpdateNode_SubmitItemUpdateNode_Params params {};
		params.UGCUpdateHandle = UGCUpdateHandle;
		params.ChangeNote = ChangeNote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623260
	 * 		Name   -> Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUserNeedsToAcceptWorkshopLegalAgreement                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSubmitItemUpdateNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, bool bUserNeedsToAcceptWorkshopLegalAgreement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubmitItemUpdateNode.OnRequestCompleted");
		
		UCoreSubmitItemUpdateNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.bUserNeedsToAcceptWorkshopLegalAgreement = bUserNeedsToAcceptWorkshopLegalAgreement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSubmitItemUpdateNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSubmitItemUpdateNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreSubmitItemUpdateNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006234B0
	 * 		Name   -> Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreSetUserItemVoteNode* UCoreSetUserItemVoteNode::STATIC_SetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.SetUserItemVoteNode");
		
		UCoreSetUserItemVoteNode_SetUserItemVoteNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		params.bVoteUp = bVoteUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622D60
	 * 		Name   -> Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSetUserItemVoteNode.OnRequestCompleted");
		
		UCoreSetUserItemVoteNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.PublishedFileID = PublishedFileID;
		params.result = result;
		params.bVoteUp = bVoteUp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSetUserItemVoteNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSetUserItemVoteNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreSetUserItemVoteNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622EB0
	 * 		Name   -> Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVotedUp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVotedDown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteSkipped                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGetUserItemVoteNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.OnRequestCompleted");
		
		UCoreGetUserItemVoteNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.PublishedFileID = PublishedFileID;
		params.result = result;
		params.bVotedUp = bVotedUp;
		params.bVotedDown = bVotedDown;
		params.bVoteSkipped = bVoteSkipped;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622CE0
	 * 		Name   -> Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreGetUserItemVoteNode* UCoreGetUserItemVoteNode::STATIC_GetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetUserItemVoteNode.GetUserItemVoteNode");
		
		UCoreGetUserItemVoteNode_GetUserItemVoteNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGetUserItemVoteNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGetUserItemVoteNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreGetUserItemVoteNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622D60
	 * 		Name   -> Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasAddRequest                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAddItemToFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bWasAddRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.OnRequestCompleted");
		
		UCoreAddItemToFavoritesNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.PublishedFileID = PublishedFileID;
		params.result = result;
		params.bWasAddRequest = bWasAddRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622B60
	 * 		Name   -> Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreAddItemToFavoritesNode* UCoreAddItemToFavoritesNode::STATIC_AddItemToFavoritesNode(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAddItemToFavoritesNode.AddItemToFavoritesNode");
		
		UCoreAddItemToFavoritesNode_AddItemToFavoritesNode_Params params {};
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreAddItemToFavoritesNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAddItemToFavoritesNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreAddItemToFavoritesNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623370
	 * 		Name   -> Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRemoveItemFromFavoritesNode* UCoreRemoveItemFromFavoritesNode::STATIC_RemoveItemFromFavoritesNode(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.RemoveItemFromFavoritesNode");
		
		UCoreRemoveItemFromFavoritesNode_RemoveItemFromFavoritesNode_Params params {};
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00622D60
	 * 		Name   -> Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasAddRequest                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRemoveItemFromFavoritesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bWasAddRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRemoveItemFromFavoritesNode.OnRequestCompleted");
		
		UCoreRemoveItemFromFavoritesNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.PublishedFileID = PublishedFileID;
		params.result = result;
		params.bWasAddRequest = bWasAddRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRemoveItemFromFavoritesNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRemoveItemFromFavoritesNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRemoveItemFromFavoritesNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623890
	 * 		Name   -> Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreSubscribeItemNode* UCoreSubscribeItemNode::STATIC_SubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.SubscribeItemNode");
		
		UCoreSubscribeItemNode_SubscribeItemNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F400
	 * 		Name   -> Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreSubscribeItemNode.OnRequestCompleted");
		
		UCoreSubscribeItemNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreSubscribeItemNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSubscribeItemNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreSubscribeItemNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623910
	 * 		Name   -> Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreUnsubscribeItemNode* UCoreUnsubscribeItemNode::STATIC_UnsubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.UnsubscribeItemNode");
		
		UCoreUnsubscribeItemNode_UnsubscribeItemNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061F400
	 * 		Name   -> Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksPublishedFileID                      PublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUnsubscribeItemNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUnsubscribeItemNode.OnRequestCompleted");
		
		UCoreUnsubscribeItemNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreUnsubscribeItemNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUnsubscribeItemNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreUnsubscribeItemNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623570
	 * 		Name   -> Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreStartPlaytimeTrackingNode* UCoreStartPlaytimeTrackingNode::STATIC_StartPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.StartPlaytimeTrackingNode");
		
		UCoreStartPlaytimeTrackingNode_StartPlaytimeTrackingNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStartPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStartPlaytimeTrackingNode.OnRequestCompleted");
		
		UCoreStartPlaytimeTrackingNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStartPlaytimeTrackingNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStartPlaytimeTrackingNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreStartPlaytimeTrackingNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623680
	 * 		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FUWorksPublishedFileID>              PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreStopPlaytimeTrackingNode* UCoreStopPlaytimeTrackingNode::STATIC_StopPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.StopPlaytimeTrackingNode");
		
		UCoreStopPlaytimeTrackingNode_StopPlaytimeTrackingNode_Params params {};
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStopPlaytimeTrackingNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingNode.OnRequestCompleted");
		
		UCoreStopPlaytimeTrackingNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStopPlaytimeTrackingNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStopPlaytimeTrackingNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreStopPlaytimeTrackingNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623650
	 * 		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCoreStopPlaytimeTrackingForAllItemsNode* UCoreStopPlaytimeTrackingForAllItemsNode::STATIC_StopPlaytimeTrackingForAllItemsNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.StopPlaytimeTrackingForAllItemsNode");
		
		UCoreStopPlaytimeTrackingForAllItemsNode_StopPlaytimeTrackingForAllItemsNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreStopPlaytimeTrackingForAllItemsNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode.OnRequestCompleted");
		
		UCoreStopPlaytimeTrackingForAllItemsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreStopPlaytimeTrackingForAllItemsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStopPlaytimeTrackingForAllItemsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623DC0
	 * 		Name   -> Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestEncryptedAppTicketNode* UCoreRequestEncryptedAppTicketNode::STATIC_RequestEncryptedAppTicketNode(TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.RequestEncryptedAppTicketNode");
		
		UCoreRequestEncryptedAppTicketNode_RequestEncryptedAppTicketNode_Params params {};
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061EE80
	 * 		Name   -> Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestEncryptedAppTicketNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestEncryptedAppTicketNode.OnRequestCompleted");
		
		UCoreRequestEncryptedAppTicketNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestEncryptedAppTicketNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestEncryptedAppTicketNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestEncryptedAppTicketNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623EA0
	 * 		Name   -> Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestStoreAuthURLNode* UCoreRequestStoreAuthURLNode::STATIC_RequestStoreAuthURLNode(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.RequestStoreAuthURLNode");
		
		UCoreRequestStoreAuthURLNode_RequestStoreAuthURLNode_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00623C90
	 * 		Name   -> Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestStoreAuthURLNode::OnRequestCompleted(bool bSuccessful, const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestStoreAuthURLNode.OnRequestCompleted");
		
		UCoreRequestStoreAuthURLNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestStoreAuthURLNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestStoreAuthURLNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestStoreAuthURLNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625CA0
	 * 		Name   -> Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestUserStatsNode* UCoreRequestUserStatsNode::STATIC_RequestUserStatsNode(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.RequestUserStatsNode");
		
		UCoreRequestUserStatsNode_RequestUserStatsNode_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625890
	 * 		Name   -> Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestUserStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestUserStatsNode.OnRequestCompleted");
		
		UCoreRequestUserStatsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.GameID = GameID;
		params.result = result;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestUserStatsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestUserStatsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestUserStatsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625670
	 * 		Name   -> Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderboardFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreFindOrCreateLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.OnRequestCompleted");
		
		UCoreFindOrCreateLeaderboardNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamLeaderboard = SteamLeaderboard;
		params.bLeaderboardFound = bLeaderboardFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625290
	 * 		Name   -> Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardSortMethod            LeaderboardSortMethod                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDisplayType           LeaderboardDisplayType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreFindOrCreateLeaderboardNode* UCoreFindOrCreateLeaderboardNode::STATIC_FindOrCreateLeaderboardNode(const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindOrCreateLeaderboardNode.FindOrCreateLeaderboardNode");
		
		UCoreFindOrCreateLeaderboardNode_FindOrCreateLeaderboardNode_Params params {};
		params.LeaderboardName = LeaderboardName;
		params.LeaderboardSortMethod = LeaderboardSortMethod;
		params.LeaderboardDisplayType = LeaderboardDisplayType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreFindOrCreateLeaderboardNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFindOrCreateLeaderboardNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreFindOrCreateLeaderboardNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625670
	 * 		Name   -> Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeaderboardFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreFindLeaderboardNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.OnRequestCompleted");
		
		UCoreFindLeaderboardNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamLeaderboard = SteamLeaderboard;
		params.bLeaderboardFound = bLeaderboardFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006251B0
	 * 		Name   -> Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreFindLeaderboardNode* UCoreFindLeaderboardNode::STATIC_FindLeaderboardNode(const class FString& LeaderboardName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreFindLeaderboardNode.FindLeaderboardNode");
		
		UCoreFindLeaderboardNode_FindLeaderboardNode_Params params {};
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreFindLeaderboardNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFindLeaderboardNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreFindLeaderboardNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625520
	 * 		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreDownloadLeaderboardEntriesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.OnRequestCompleted");
		
		UCoreDownloadLeaderboardEntriesNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamLeaderboard = SteamLeaderboard;
		params.SteamLeaderboardEntries = SteamLeaderboardEntries;
		params.EntryCount = EntryCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625070
	 * 		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardDataRequest           LeaderboardDataRequest                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreDownloadLeaderboardEntriesNode* UCoreDownloadLeaderboardEntriesNode::STATIC_DownloadLeaderboardEntriesNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesNode.DownloadLeaderboardEntriesNode");
		
		UCoreDownloadLeaderboardEntriesNode_DownloadLeaderboardEntriesNode_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardDataRequest = LeaderboardDataRequest;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreDownloadLeaderboardEntriesNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreDownloadLeaderboardEntriesNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreDownloadLeaderboardEntriesNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625520
	 * 		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboardEntries              SteamLeaderboardEntries                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntryCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreDownloadLeaderboardEntriesForUsersNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t EntryCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.OnRequestCompleted");
		
		UCoreDownloadLeaderboardEntriesForUsersNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.SteamLeaderboard = SteamLeaderboard;
		params.SteamLeaderboardEntries = SteamLeaderboardEntries;
		params.EntryCount = EntryCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00624F40
	 * 		Name   -> Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUWorksSteamID>                      Users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreDownloadLeaderboardEntriesForUsersNode* UCoreDownloadLeaderboardEntriesForUsersNode::STATIC_DownloadLeaderboardEntriesForUsersNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode.DownloadLeaderboardEntriesForUsersNode");
		
		UCoreDownloadLeaderboardEntriesForUsersNode_DownloadLeaderboardEntriesForUsersNode_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.Users = Users;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreDownloadLeaderboardEntriesForUsersNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreDownloadLeaderboardEntriesForUsersNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625D20
	 * 		Name   -> Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksLeaderboardUploadScoreMethod     LeaderboardUploadScoreMethod                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UCoreUploadLeaderboardScoreNode* UCoreUploadLeaderboardScoreNode::STATIC_UploadLeaderboardScoreNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.UploadLeaderboardScoreNode");
		
		UCoreUploadLeaderboardScoreNode_UploadLeaderboardScoreNode_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.LeaderboardUploadScoreMethod = LeaderboardUploadScoreMethod;
		params.score = score;
		params.ScoreDetails = ScoreDetails;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006259E0
	 * 		Name   -> Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScoreChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GlobalRankNew                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GlobalRankPrevious                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreUploadLeaderboardScoreNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, const struct FUWorksSteamLeaderboard& SteamLeaderboard, int32_t score, bool bScoreChanged, int32_t GlobalRankNew, int32_t GlobalRankPrevious)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreUploadLeaderboardScoreNode.OnRequestCompleted");
		
		UCoreUploadLeaderboardScoreNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.bSuccess = bSuccess;
		params.SteamLeaderboard = SteamLeaderboard;
		params.score = score;
		params.bScoreChanged = bScoreChanged;
		params.GlobalRankNew = GlobalRankNew;
		params.GlobalRankPrevious = GlobalRankPrevious;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreUploadLeaderboardScoreNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUploadLeaderboardScoreNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreUploadLeaderboardScoreNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625410
	 * 		Name   -> Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAttachLeaderboardUGCNode::OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.OnRequestCompleted");
		
		UCoreAttachLeaderboardUGCNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.result = result;
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00624E80
	 * 		Name   -> Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     SteamLeaderboard                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksUGCHandle                            UGCHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCoreAttachLeaderboardUGCNode* UCoreAttachLeaderboardUGCNode::STATIC_AttachLeaderboardUGCNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreAttachLeaderboardUGCNode.AttachLeaderboardUGCNode");
		
		UCoreAttachLeaderboardUGCNode_AttachLeaderboardUGCNode_Params params {};
		params.SteamLeaderboard = SteamLeaderboard;
		params.UGCHandle = UGCHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreAttachLeaderboardUGCNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAttachLeaderboardUGCNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreAttachLeaderboardUGCNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625780
	 * 		Name   -> Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Players                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreGetNumberOfCurrentPlayersNode::OnRequestCompleted(bool bSuccessful, bool bSuccess, int32_t Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.OnRequestCompleted");
		
		UCoreGetNumberOfCurrentPlayersNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.bSuccess = bSuccess;
		params.Players = Players;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x006253E0
	 * 		Name   -> Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCoreGetNumberOfCurrentPlayersNode* UCoreGetNumberOfCurrentPlayersNode::STATIC_GetNumberOfCurrentPlayersNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreGetNumberOfCurrentPlayersNode.GetNumberOfCurrentPlayersNode");
		
		UCoreGetNumberOfCurrentPlayersNode_GetNumberOfCurrentPlayersNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreGetNumberOfCurrentPlayersNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreGetNumberOfCurrentPlayersNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreGetNumberOfCurrentPlayersNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625BF0
	 * 		Name   -> Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCoreRequestGlobalAchievementPercentagesNode* UCoreRequestGlobalAchievementPercentagesNode::STATIC_RequestGlobalAchievementPercentagesNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.RequestGlobalAchievementPercentagesNode");
		
		UCoreRequestGlobalAchievementPercentagesNode_RequestGlobalAchievementPercentagesNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E570
	 * 		Name   -> Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestGlobalAchievementPercentagesNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalAchievementPercentagesNode.OnRequestCompleted");
		
		UCoreRequestGlobalAchievementPercentagesNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.GameID = GameID;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestGlobalAchievementPercentagesNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestGlobalAchievementPercentagesNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestGlobalAchievementPercentagesNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00625C20
	 * 		Name   -> Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRequestGlobalStatsNode* UCoreRequestGlobalStatsNode::STATIC_RequestGlobalStatsNode(int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.RequestGlobalStatsNode");
		
		UCoreRequestGlobalStatsNode_RequestGlobalStatsNode_Params params {};
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0061E570
	 * 		Name   -> Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksResult                           result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRequestGlobalStatsNode::OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksCore.CoreRequestGlobalStatsNode.OnRequestCompleted");
		
		UCoreRequestGlobalStatsNode_OnRequestCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		params.GameID = GameID;
		params.result = result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCoreRequestGlobalStatsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRequestGlobalStatsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksCore.CoreRequestGlobalStatsNode");
		return ptr;
	}

}


