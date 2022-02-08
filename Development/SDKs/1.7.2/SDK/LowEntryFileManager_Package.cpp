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
	 * 		Offset -> 0x0077B3C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo");
		
		ULowEntryFileManagerDirectory_MoveTo_Params params {};
		params.NewDirectory = NewDirectory;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B190
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerDirectory::IsRootBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool");
		
		ULowEntryFileManagerDirectory_IsRootBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B100
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsRoot(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot");
		
		ULowEntryFileManagerDirectory_IsRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077ACE0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerDirectory::IsEmptyBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool");
		
		ULowEntryFileManagerDirectory_IsEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077ABC0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty");
		
		ULowEntryFileManagerDirectory_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A820
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerDirectory::GetPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath");
		
		ULowEntryFileManagerDirectory_GetPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A7C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetParentDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory");
		
		ULowEntryFileManagerDirectory_GetParentDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A6C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerDirectory::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName");
		
		ULowEntryFileManagerDirectory_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A360
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class ULowEntryFileManagerFile*> ULowEntryFileManagerDirectory::GetFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles");
		
		ULowEntryFileManagerDirectory_GetFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779F10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerFile* ULowEntryFileManagerDirectory::GetFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile");
		
		ULowEntryFileManagerDirectory_GetFile_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779A60
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory_                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetDirectory(const class FString& Directory_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory");
		
		ULowEntryFileManagerDirectory_GetDirectory_Params params {};
		params.Directory_ = Directory_;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779900
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerDirectory::GetDirectories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories");
		
		ULowEntryFileManagerDirectory_GetDirectories_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779710
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerDirectory::GetAbsolutePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath");
		
		ULowEntryFileManagerDirectory_GetAbsolutePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779530
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerDirectory::ExistsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool");
		
		ULowEntryFileManagerDirectory_ExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779410
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists");
		
		ULowEntryFileManagerDirectory_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007788A0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerDirectory::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete");
		
		ULowEntryFileManagerDirectory_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007786B0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerDirectory::Create()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Create");
		
		ULowEntryFileManagerDirectory_Create_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778560
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerDirectory::CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo");
		
		ULowEntryFileManagerDirectory_CopyTo_Params params {};
		params.NewDirectory = NewDirectory;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778200
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerDirectory::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear");
		
		ULowEntryFileManagerDirectory_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerDirectory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerDirectory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerDirectory");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BF50
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Size
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t ULowEntryFileManagerFile::Size()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Size");
		
		ULowEntryFileManagerFile_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BEC0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetTimestamp(const struct FDateTime& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp");
		
		ULowEntryFileManagerFile_SetTimestamp_Params params {};
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BE30
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetReadOnly(bool ReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly");
		
		ULowEntryFileManagerFile_SetReadOnly_Params params {};
		params.ReadOnly = ReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BAF0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::SetData(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetData");
		
		ULowEntryFileManagerFile_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B490
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::MoveTo(class ULowEntryFileManagerFile* NewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo");
		
		ULowEntryFileManagerFile_MoveTo_Params params {};
		params.NewFile = NewFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B0D0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerFile::IsReadOnlyBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool");
		
		ULowEntryFileManagerFile_IsReadOnlyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B040
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsReadOnly(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly");
		
		ULowEntryFileManagerFile_IsReadOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AD10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerFile::IsEmptyBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool");
		
		ULowEntryFileManagerFile_IsEmptyBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AC50
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty");
		
		ULowEntryFileManagerFile_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A950
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FDateTime ULowEntryFileManagerFile::GetTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp");
		
		ULowEntryFileManagerFile_GetTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A820
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerFile::GetPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetPath");
		
		ULowEntryFileManagerFile_GetPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A7F0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerFile::GetParentDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory");
		
		ULowEntryFileManagerFile_GetParentDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A740
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerFile::GetNameWithoutExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension");
		
		ULowEntryFileManagerFile_GetNameWithoutExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A6C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerFile::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetName");
		
		ULowEntryFileManagerFile_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779E90
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerFile::GetExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension");
		
		ULowEntryFileManagerFile_GetExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779880
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<unsigned char> ULowEntryFileManagerFile::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetData");
		
		ULowEntryFileManagerFile_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007797C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FDateTime ULowEntryFileManagerFile::GetAccessTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp");
		
		ULowEntryFileManagerFile_GetAccessTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779710
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULowEntryFileManagerFile::GetAbsolutePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath");
		
		ULowEntryFileManagerFile_GetAbsolutePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779560
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerFile::ExistsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool");
		
		ULowEntryFileManagerFile_ExistsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007794A0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Exists
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Exists");
		
		ULowEntryFileManagerFile_Exists_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778D80
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULowEntryFileManagerDirectory*               OptionalWorkingDirectory                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::ExecuteAsync(const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync");
		
		ULowEntryFileManagerFile_ExecuteAsync_Params params {};
		params.Parameters = Parameters;
		params.Hidden = Hidden;
		params.Priority = Priority;
		params.OptionalWorkingDirectory = OptionalWorkingDirectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ProcessID != nullptr)
			*ProcessID = params.ProcessID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778B80
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Execute
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::Execute(const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Execute");
		
		ULowEntryFileManagerFile_Execute_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ReturnCode != nullptr)
			*ReturnCode = params.ReturnCode;
		if (StdOut != nullptr)
			*StdOut = params.StdOut;
		if (StdErr != nullptr)
			*StdErr = params.StdErr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007788C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Delete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerFile::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Delete");
		
		ULowEntryFileManagerFile_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007786D0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Create
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerFile::Create()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Create");
		
		ULowEntryFileManagerFile_Create_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778630
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::CopyTo(class ULowEntryFileManagerFile* NewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo");
		
		ULowEntryFileManagerFile_CopyTo_Params params {};
		params.NewFile = NewFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778220
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULowEntryFileManagerFile::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Clear");
		
		ULowEntryFileManagerFile_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778060
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerFile::AppendData(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.AppendData");
		
		ULowEntryFileManagerFile_AppendData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077C0E0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PathPart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_SplitPath(const class FString& Path, class FString* PathPart, class FString* NamePart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath");
		
		ULowEntryFileManagerLibrary_SplitPath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathPart != nullptr)
			*PathPart = params.PathPart;
		if (NamePart != nullptr)
			*NamePart = params.NamePart;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BF80
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtensionPart                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_SplitName(const class FString& Name, class FString* NamePart, class FString* ExtensionPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName");
		
		ULowEntryFileManagerLibrary_SplitName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamePart != nullptr)
			*NamePart = params.NamePart;
		if (ExtensionPart != nullptr)
			*ExtensionPart = params.ExtensionPart;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BD60
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_SetFileTimestamp(const class FString& File, const struct FDateTime& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp");
		
		ULowEntryFileManagerLibrary_SetFileTimestamp_Params params {};
		params.File = File;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BC90
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_SetFileReadOnly(const class FString& File, bool ReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly");
		
		ULowEntryFileManagerLibrary_SetFileReadOnly_Params params {};
		params.File = File;
		params.ReadOnly = ReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077BBA0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_SetFileData(const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData");
		
		ULowEntryFileManagerLibrary_SetFileData_Params params {};
		params.File = File;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B9C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_ReplaceInvalidPathCharacters(const class FString& String, const class FString& ReplacementCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters");
		
		ULowEntryFileManagerLibrary_ReplaceInvalidPathCharacters_Params params {};
		params.String = String;
		params.ReplacementCharacter = ReplacementCharacter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B890
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_ReplaceInvalidFilenameCharacters(const class FString& String, const class FString& ReplacementCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters");
		
		ULowEntryFileManagerLibrary_ReplaceInvalidFilenameCharacters_Params params {};
		params.String = String;
		params.ReplacementCharacter = ReplacementCharacter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B7B0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_ReplaceBackslashesBySlashes(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes");
		
		ULowEntryFileManagerLibrary_ReplaceBackslashesBySlashes_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B6D0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_RemoveInvalidPathCharacters(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters");
		
		ULowEntryFileManagerLibrary_RemoveInvalidPathCharacters_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B5F0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_RemoveInvalidFilenameCharacters(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters");
		
		ULowEntryFileManagerLibrary_RemoveInvalidFilenameCharacters_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B510
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_RelativeToAbsolutePath(const class FString& RelativePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath");
		
		ULowEntryFileManagerLibrary_RelativeToAbsolutePath_Params params {};
		params.RelativePath = RelativePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B2E0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_MoveFile(const class FString& File, const class FString& to)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile");
		
		ULowEntryFileManagerLibrary_MoveFile_Params params {};
		params.File = File;
		params.to = to;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077B1C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_MoveDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory");
		
		ULowEntryFileManagerLibrary_MoveDirectory_Params params {};
		params.Directory = Directory;
		params.to = to;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AFA0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_IsFileReadOnlyBool(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool");
		
		ULowEntryFileManagerLibrary_IsFileReadOnlyBool_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AEC0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_IsFileReadOnly(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly");
		
		ULowEntryFileManagerLibrary_IsFileReadOnly_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AE20
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_IsFileEmptyBool(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool");
		
		ULowEntryFileManagerLibrary_IsFileEmptyBool_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AD40
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_IsFileEmpty(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty");
		
		ULowEntryFileManagerLibrary_IsFileEmpty_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AB20
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_IsDirectoryEmptyBool(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool");
		
		ULowEntryFileManagerLibrary_IsDirectoryEmptyBool_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AA40
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_IsDirectoryEmpty(const class FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty");
		
		ULowEntryFileManagerLibrary_IsDirectoryEmpty_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077AA10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_HasDiskPathsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool");
		
		ULowEntryFileManagerLibrary_HasDiskPathsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A990
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_HasDiskPaths(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths");
		
		ULowEntryFileManagerLibrary_HasDiskPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A8D0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetRootDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath");
		
		ULowEntryFileManagerLibrary_GetRootDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A8A0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot");
		
		ULowEntryFileManagerLibrary_GetRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B67C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetProjectFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath");
		
		ULowEntryFileManagerLibrary_GetProjectFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A640
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetGameUserDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath");
		
		ULowEntryFileManagerLibrary_GetGameUserDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A5C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetGameSavedDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath");
		
		ULowEntryFileManagerLibrary_GetGameSavedDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A540
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetGamePersistentDownloadDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath");
		
		ULowEntryFileManagerLibrary_GetGamePersistentDownloadDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A4C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetGameDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath");
		
		ULowEntryFileManagerLibrary_GetGameDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A2C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime ULowEntryFileManagerLibrary::STATIC_GetFileTimestamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp");
		
		ULowEntryFileManagerLibrary_GetFileTimestamp_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A220
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULowEntryFileManagerLibrary::STATIC_GetFileSize(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize");
		
		ULowEntryFileManagerLibrary_GetFileSize_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A3E0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::STATIC_GetFiles(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles");
		
		ULowEntryFileManagerLibrary_GetFiles_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A140
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::STATIC_GetFileNames(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames");
		
		ULowEntryFileManagerLibrary_GetFileNames_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0077A060
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULowEntryFileManagerLibrary::STATIC_GetFileData(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData");
		
		ULowEntryFileManagerLibrary_GetFileData_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779FC0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime ULowEntryFileManagerLibrary::STATIC_GetFileAccessTimestamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp");
		
		ULowEntryFileManagerLibrary_GetFileAccessTimestamp_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779E10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetEngineSavedDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath");
		
		ULowEntryFileManagerLibrary_GetEngineSavedDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779D90
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetEngineDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath");
		
		ULowEntryFileManagerLibrary_GetEngineDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779D10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerLibrary::STATIC_GetDisks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks");
		
		ULowEntryFileManagerLibrary_GetDisks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779C90
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::STATIC_GetDiskPaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths");
		
		ULowEntryFileManagerLibrary_GetDiskPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779BB0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::STATIC_GetDirectoryNames(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames");
		
		ULowEntryFileManagerLibrary_GetDirectoryNames_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779B10
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetDirectory(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory");
		
		ULowEntryFileManagerLibrary_GetDirectory_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779980
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULowEntryFileManagerLibrary::STATIC_GetDirectories(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories");
		
		ULowEntryFileManagerLibrary_GetDirectories_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779800
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString ULowEntryFileManagerLibrary::STATIC_GetCloudDirPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath");
		
		ULowEntryFileManagerLibrary_GetCloudDirPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779790
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetAbsoluteRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot");
		
		ULowEntryFileManagerLibrary_GetAbsoluteRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779670
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_FileExistsBool(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool");
		
		ULowEntryFileManagerLibrary_FileExistsBool_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00779590
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_FileExists(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists");
		
		ULowEntryFileManagerLibrary_FileExists_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007791C0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalWorkingDirectory                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_ExecuteFileAsync(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync");
		
		ULowEntryFileManagerLibrary_ExecuteFileAsync_Params params {};
		params.File = File;
		params.Parameters = Parameters;
		params.Hidden = Hidden;
		params.Priority = Priority;
		params.OptionalWorkingDirectory = OptionalWorkingDirectory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ProcessID != nullptr)
			*ProcessID = params.ProcessID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778F80
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_ExecuteFile(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile");
		
		ULowEntryFileManagerLibrary_ExecuteFile_Params params {};
		params.File = File;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ReturnCode != nullptr)
			*ReturnCode = params.ReturnCode;
		if (StdOut != nullptr)
			*StdOut = params.StdOut;
		if (StdErr != nullptr)
			*StdErr = params.StdErr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778AE0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULowEntryFileManagerLibrary::STATIC_DirectoryExistsBool(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool");
		
		ULowEntryFileManagerLibrary_DirectoryExistsBool_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778A00
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_DirectoryExists(const class FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists");
		
		ULowEntryFileManagerLibrary_DirectoryExists_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branch != nullptr)
			*Branch = params.Branch;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778970
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_DeleteFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile");
		
		ULowEntryFileManagerLibrary_DeleteFile_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007788E0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_DeleteDirectory(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory");
		
		ULowEntryFileManagerLibrary_DeleteDirectory_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778810
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_CreateParentDirectory(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory");
		
		ULowEntryFileManagerLibrary_CreateParentDirectory_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778780
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_CreateNewFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile");
		
		ULowEntryFileManagerLibrary_CreateNewFile_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007786F0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_CreateNewDirectory(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory");
		
		ULowEntryFileManagerLibrary_CreateNewDirectory_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778480
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_CopyFile(const class FString& File, const class FString& to)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile");
		
		ULowEntryFileManagerLibrary_CopyFile_Params params {};
		params.File = File;
		params.to = to;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778360
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_CopyDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory");
		
		ULowEntryFileManagerLibrary_CopyDirectory_Params params {};
		params.Directory = Directory;
		params.to = to;
		params.OverrideExistingFiles = OverrideExistingFiles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007782D0
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_ClearFile(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile");
		
		ULowEntryFileManagerLibrary_ClearFile_Params params {};
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778240
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_ClearDirectory(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory");
		
		ULowEntryFileManagerLibrary_ClearDirectory_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00778110
	 * 		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULowEntryFileManagerLibrary::STATIC_AppendFileData(const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData");
		
		ULowEntryFileManagerLibrary_AppendFileData_Params params {};
		params.File = File;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULowEntryFileManagerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULowEntryFileManagerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerLibrary");
		return ptr;
	}

}


