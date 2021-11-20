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
//		Offset -> 0x0077B3C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerDirectory::MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo");

	ULowEntryFileManagerDirectory_MoveTo_Params params {};
	params.NewDirectory = NewDirectory;
	params.OverrideExistingFiles = OverrideExistingFiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077B190
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerDirectory::IsRootBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool");

	ULowEntryFileManagerDirectory_IsRootBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B100
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerDirectory::IsRoot(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot");

	ULowEntryFileManagerDirectory_IsRoot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077ACE0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerDirectory::IsEmptyBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool");

	ULowEntryFileManagerDirectory_IsEmptyBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077ABC0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerDirectory::IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty");

	ULowEntryFileManagerDirectory_IsEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077A820
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerDirectory::GetPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath");

	ULowEntryFileManagerDirectory_GetPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A7C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetParentDirectory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory");

	ULowEntryFileManagerDirectory_GetParentDirectory_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A6C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerDirectory::GetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName");

	ULowEntryFileManagerDirectory_GetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A360
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryFileManagerFile*>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryFileManagerFile*> ULowEntryFileManagerDirectory::GetFiles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles");

	ULowEntryFileManagerDirectory_GetFiles_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779F10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryFileManagerFile*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerFile* ULowEntryFileManagerDirectory::GetFile(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile");

	ULowEntryFileManagerDirectory_GetFile_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779A60
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory_                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerDirectory::GetDirectory(const struct FString& Directory_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory");

	ULowEntryFileManagerDirectory_GetDirectory_Params params {};
	params.Directory_ = Directory_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779900
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryFileManagerDirectory*>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerDirectory::GetDirectories()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories");

	ULowEntryFileManagerDirectory_GetDirectories_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779710
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerDirectory::GetAbsolutePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath");

	ULowEntryFileManagerDirectory_GetAbsolutePath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779530
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerDirectory::ExistsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool");

	ULowEntryFileManagerDirectory_ExistsBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779410
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerDirectory::Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists");

	ULowEntryFileManagerDirectory_Exists_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x007788A0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerDirectory::Delete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete");

	ULowEntryFileManagerDirectory_Delete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007786B0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerDirectory::Create()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Create");

	ULowEntryFileManagerDirectory_Create_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778560
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryFileManagerDirectory*               NewDirectory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OverrideExistingFiles                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerDirectory::CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo");

	ULowEntryFileManagerDirectory_CopyTo_Params params {};
	params.NewDirectory = NewDirectory;
	params.OverrideExistingFiles = OverrideExistingFiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778200
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerDirectory::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear");

	ULowEntryFileManagerDirectory_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULowEntryFileManagerDirectory::AfterRead()
{
	UObject::AfterRead();

}

void ULowEntryFileManagerDirectory::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0077BF50
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Size
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryFileManagerFile::Size()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Size");

	ULowEntryFileManagerFile_Size_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077BEC0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::SetTimestamp(const struct FDateTime& Timestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp");

	ULowEntryFileManagerFile_SetTimestamp_Params params {};
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077BE30
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::SetReadOnly(bool ReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly");

	ULowEntryFileManagerFile_SetReadOnly_Params params {};
	params.ReadOnly = ReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077BAF0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.SetData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::SetData(TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.SetData");

	ULowEntryFileManagerFile_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077B490
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::MoveTo(class ULowEntryFileManagerFile* NewFile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo");

	ULowEntryFileManagerFile_MoveTo_Params params {};
	params.NewFile = NewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077B0D0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerFile::IsReadOnlyBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool");

	ULowEntryFileManagerFile_IsReadOnlyBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B040
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::IsReadOnly(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly");

	ULowEntryFileManagerFile_IsReadOnly_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077AD10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerFile::IsEmptyBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool");

	ULowEntryFileManagerFile_IsEmptyBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077AC50
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty");

	ULowEntryFileManagerFile_IsEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077A950
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime ULowEntryFileManagerFile::GetTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp");

	ULowEntryFileManagerFile_GetTimestamp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A820
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerFile::GetPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetPath");

	ULowEntryFileManagerFile_GetPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A7F0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerFile::GetParentDirectory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory");

	ULowEntryFileManagerFile_GetParentDirectory_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A740
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerFile::GetNameWithoutExtension()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension");

	ULowEntryFileManagerFile_GetNameWithoutExtension_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A6C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerFile::GetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetName");

	ULowEntryFileManagerFile_GetName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779E90
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerFile::GetExtension()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension");

	ULowEntryFileManagerFile_GetExtension_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779880
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryFileManagerFile::GetData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetData");

	ULowEntryFileManagerFile_GetData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007797C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime ULowEntryFileManagerFile::GetAccessTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp");

	ULowEntryFileManagerFile_GetAccessTimestamp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779710
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerFile::GetAbsolutePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath");

	ULowEntryFileManagerFile_GetAbsolutePath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779560
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerFile::ExistsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool");

	ULowEntryFileManagerFile_ExistsBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007794A0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Exists
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Exists");

	ULowEntryFileManagerFile_Exists_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x00778D80
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryFileManagerDirectory*               OptionalWorkingDirectory                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::ExecuteAsync(const struct FString& Parameters, bool* Success, int* ProcessID, bool Hidden, int Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync");

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


// Function:
//		Offset -> 0x00778B80
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Execute
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::Execute(const struct FString& Parameters, bool* Success, int* ReturnCode, struct FString* StdOut, struct FString* StdErr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Execute");

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


// Function:
//		Offset -> 0x007788C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Delete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerFile::Delete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Delete");

	ULowEntryFileManagerFile_Delete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007786D0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Create
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerFile::Create()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Create");

	ULowEntryFileManagerFile_Create_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778630
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryFileManagerFile*                    NewFile                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::CopyTo(class ULowEntryFileManagerFile* NewFile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo");

	ULowEntryFileManagerFile_CopyTo_Params params {};
	params.NewFile = NewFile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778220
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.Clear
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryFileManagerFile::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.Clear");

	ULowEntryFileManagerFile_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778060
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryFileManagerFile::AppendData(TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerFile.AppendData");

	ULowEntryFileManagerFile_AppendData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULowEntryFileManagerFile::AfterRead()
{
	UObject::AfterRead();

}

void ULowEntryFileManagerFile::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0077C0E0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PathPart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_SplitPath(const struct FString& Path, struct FString* PathPart, struct FString* NamePart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath");

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


// Function:
//		Offset -> 0x0077BF80
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NamePart                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtensionPart                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_SplitName(const struct FString& Name, struct FString* NamePart, struct FString* ExtensionPart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName");

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


// Function:
//		Offset -> 0x0077BD60
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   Timestamp                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_SetFileTimestamp(const struct FString& File, const struct FDateTime& Timestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp");

	ULowEntryFileManagerLibrary_SetFileTimestamp_Params params {};
	params.File = File;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077BC90
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReadOnly                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_SetFileReadOnly(const struct FString& File, bool ReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly");

	ULowEntryFileManagerLibrary_SetFileReadOnly_Params params {};
	params.File = File;
	params.ReadOnly = ReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077BBA0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_SetFileData(const struct FString& File, TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData");

	ULowEntryFileManagerLibrary_SetFileData_Params params {};
	params.File = File;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077B9C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_ReplaceInvalidPathCharacters(const struct FString& String, const struct FString& ReplacementCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters");

	ULowEntryFileManagerLibrary_ReplaceInvalidPathCharacters_Params params {};
	params.String = String;
	params.ReplacementCharacter = ReplacementCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B890
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_ReplaceInvalidFilenameCharacters(const struct FString& String, const struct FString& ReplacementCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters");

	ULowEntryFileManagerLibrary_ReplaceInvalidFilenameCharacters_Params params {};
	params.String = String;
	params.ReplacementCharacter = ReplacementCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B7B0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_ReplaceBackslashesBySlashes(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes");

	ULowEntryFileManagerLibrary_ReplaceBackslashesBySlashes_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B6D0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_RemoveInvalidPathCharacters(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters");

	ULowEntryFileManagerLibrary_RemoveInvalidPathCharacters_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B5F0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_RemoveInvalidFilenameCharacters(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters");

	ULowEntryFileManagerLibrary_RemoveInvalidFilenameCharacters_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B510
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_RelativeToAbsolutePath(const struct FString& RelativePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath");

	ULowEntryFileManagerLibrary_RelativeToAbsolutePath_Params params {};
	params.RelativePath = RelativePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077B2E0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_MoveFile(const struct FString& File, const struct FString& to)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile");

	ULowEntryFileManagerLibrary_MoveFile_Params params {};
	params.File = File;
	params.to = to;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077B1C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_MoveDirectory(const struct FString& Directory, const struct FString& to, bool OverrideExistingFiles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory");

	ULowEntryFileManagerLibrary_MoveDirectory_Params params {};
	params.Directory = Directory;
	params.to = to;
	params.OverrideExistingFiles = OverrideExistingFiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077AFA0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_IsFileReadOnlyBool(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool");

	ULowEntryFileManagerLibrary_IsFileReadOnlyBool_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077AEC0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_IsFileReadOnly(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly");

	ULowEntryFileManagerLibrary_IsFileReadOnly_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077AE20
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_IsFileEmptyBool(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool");

	ULowEntryFileManagerLibrary_IsFileEmptyBool_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077AD40
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_IsFileEmpty(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty");

	ULowEntryFileManagerLibrary_IsFileEmpty_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077AB20
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_IsDirectoryEmptyBool(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool");

	ULowEntryFileManagerLibrary_IsDirectoryEmptyBool_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077AA40
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_IsDirectoryEmpty(const struct FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty");

	ULowEntryFileManagerLibrary_IsDirectoryEmpty_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077AA10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_HasDiskPathsBool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool");

	ULowEntryFileManagerLibrary_HasDiskPathsBool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A990
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_HasDiskPaths(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths");

	ULowEntryFileManagerLibrary_HasDiskPaths_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0077A8D0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetRootDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath");

	ULowEntryFileManagerLibrary_GetRootDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A8A0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetRoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot");

	ULowEntryFileManagerLibrary_GetRoot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B67C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetProjectFilePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath");

	ULowEntryFileManagerLibrary_GetProjectFilePath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A640
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetGameUserDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath");

	ULowEntryFileManagerLibrary_GetGameUserDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A5C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetGameSavedDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath");

	ULowEntryFileManagerLibrary_GetGameSavedDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A540
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetGamePersistentDownloadDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath");

	ULowEntryFileManagerLibrary_GetGamePersistentDownloadDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A4C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetGameDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath");

	ULowEntryFileManagerLibrary_GetGameDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A2C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime ULowEntryFileManagerLibrary::STATIC_GetFileTimestamp(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp");

	ULowEntryFileManagerLibrary_GetFileTimestamp_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A220
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryFileManagerLibrary::STATIC_GetFileSize(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize");

	ULowEntryFileManagerLibrary_GetFileSize_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A3E0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryFileManagerLibrary::STATIC_GetFiles(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles");

	ULowEntryFileManagerLibrary_GetFiles_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A140
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryFileManagerLibrary::STATIC_GetFileNames(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames");

	ULowEntryFileManagerLibrary_GetFileNames_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077A060
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryFileManagerLibrary::STATIC_GetFileData(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData");

	ULowEntryFileManagerLibrary_GetFileData_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779FC0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime ULowEntryFileManagerLibrary::STATIC_GetFileAccessTimestamp(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp");

	ULowEntryFileManagerLibrary_GetFileAccessTimestamp_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779E10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetEngineSavedDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath");

	ULowEntryFileManagerLibrary_GetEngineSavedDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779D90
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetEngineDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath");

	ULowEntryFileManagerLibrary_GetEngineDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779D10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryFileManagerDirectory*>       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryFileManagerDirectory*> ULowEntryFileManagerLibrary::STATIC_GetDisks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks");

	ULowEntryFileManagerLibrary_GetDisks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779C90
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryFileManagerLibrary::STATIC_GetDiskPaths()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths");

	ULowEntryFileManagerLibrary_GetDiskPaths_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779BB0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryFileManagerLibrary::STATIC_GetDirectoryNames(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames");

	ULowEntryFileManagerLibrary_GetDirectoryNames_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779B10
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetDirectory(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory");

	ULowEntryFileManagerLibrary_GetDirectory_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779980
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryFileManagerLibrary::STATIC_GetDirectories(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories");

	ULowEntryFileManagerLibrary_GetDirectories_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779800
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryFileManagerLibrary::STATIC_GetCloudDirPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath");

	ULowEntryFileManagerLibrary_GetCloudDirPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779790
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryFileManagerDirectory*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryFileManagerDirectory* ULowEntryFileManagerLibrary::STATIC_GetAbsoluteRoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot");

	ULowEntryFileManagerLibrary_GetAbsoluteRoot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779670
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_FileExistsBool(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool");

	ULowEntryFileManagerLibrary_FileExistsBool_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00779590
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_FileExists(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists");

	ULowEntryFileManagerLibrary_FileExists_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x007791C0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ProcessID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Hidden                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OptionalWorkingDirectory                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_ExecuteFileAsync(const struct FString& File, const struct FString& Parameters, bool* Success, int* ProcessID, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync");

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


// Function:
//		Offset -> 0x00778F80
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Parameters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnCode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StdOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StdErr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_ExecuteFile(const struct FString& File, const struct FString& Parameters, bool* Success, int* ReturnCode, struct FString* StdOut, struct FString* StdErr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile");

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


// Function:
//		Offset -> 0x00778AE0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryFileManagerLibrary::STATIC_DirectoryExistsBool(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool");

	ULowEntryFileManagerLibrary_DirectoryExistsBool_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00778A00
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryFileManager_ELowEntryFileManagerYesNo      Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_DirectoryExists(const struct FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists");

	ULowEntryFileManagerLibrary_DirectoryExists_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x00778970
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_DeleteFile(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile");

	ULowEntryFileManagerLibrary_DeleteFile_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007788E0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_DeleteDirectory(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory");

	ULowEntryFileManagerLibrary_DeleteDirectory_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778810
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_CreateParentDirectory(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory");

	ULowEntryFileManagerLibrary_CreateParentDirectory_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778780
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_CreateNewFile(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile");

	ULowEntryFileManagerLibrary_CreateNewFile_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007786F0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_CreateNewDirectory(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory");

	ULowEntryFileManagerLibrary_CreateNewDirectory_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778480
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_CopyFile(const struct FString& File, const struct FString& to)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile");

	ULowEntryFileManagerLibrary_CopyFile_Params params {};
	params.File = File;
	params.to = to;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778360
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     to                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OverrideExistingFiles                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_CopyDirectory(const struct FString& Directory, const struct FString& to, bool OverrideExistingFiles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory");

	ULowEntryFileManagerLibrary_CopyDirectory_Params params {};
	params.Directory = Directory;
	params.to = to;
	params.OverrideExistingFiles = OverrideExistingFiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007782D0
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_ClearFile(const struct FString& File)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile");

	ULowEntryFileManagerLibrary_ClearFile_Params params {};
	params.File = File;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778240
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_ClearDirectory(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory");

	ULowEntryFileManagerLibrary_ClearDirectory_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00778110
//		Name   -> Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryFileManagerLibrary::STATIC_AppendFileData(const struct FString& File, TArray<unsigned char> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData");

	ULowEntryFileManagerLibrary_AppendFileData_Params params {};
	params.File = File;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULowEntryFileManagerLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULowEntryFileManagerLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
