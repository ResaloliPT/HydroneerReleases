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
//		Offset -> 0x005B72F0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNewReadOnlyValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_SetReadOnly(const struct FString& inPath, bool bNewReadOnlyValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly");

	UEasyFileSystemBPLibrary_SetReadOnly_Params params {};
	params.inPath = inPath;
	params.bNewReadOnlyValue = bNewReadOnlyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B7180
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     textData                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_SaveStringToFile(const struct FString& inPath, const struct FString& textData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile");

	UEasyFileSystemBPLibrary_SaveStringToFile_Params params {};
	params.inPath = inPath;
	params.textData = textData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B7010
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Array                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_SaveArrayToFile(const struct FString& inPath, TArray<unsigned char> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile");

	UEasyFileSystemBPLibrary_SaveArrayToFile_Params params {};
	params.inPath = inPath;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6EA0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_MoveFile(const struct FString& to, const struct FString& from)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile");

	UEasyFileSystemBPLibrary_MoveFile_Params params {};
	params.to = to;
	params.from = from;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6D80
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_LoadFileToString(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString");

	UEasyFileSystemBPLibrary_LoadFileToString_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6C30
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              result                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_LoadFileToArray(const struct FString& inPath, TArray<unsigned char>* result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray");

	UEasyFileSystemBPLibrary_LoadFileToArray_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (result != nullptr)
		*result = params.result;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6B50
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_IsReadOnly(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly");

	UEasyFileSystemBPLibrary_IsReadOnly_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B69A0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetStringFieldJson(const struct FString& Data, const struct FString& fieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson");

	UEasyFileSystemBPLibrary_GetStringFieldJson_Params params {};
	params.Data = Data;
	params.fieldName = fieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6920
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetSourceDir()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir");

	UEasyFileSystemBPLibrary_GetSourceDir_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6840
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEasyFileSystemBPLibrary::STATIC_GetSizeFile(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile");

	UEasyFileSystemBPLibrary_GetSizeFile_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B67C0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetProjectFilePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath");

	UEasyFileSystemBPLibrary_GetProjectFilePath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6650
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UEasyFileSystemBPLibrary::STATIC_GetIntegerFieldJson(const struct FString& Data, const struct FString& fieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson");

	UEasyFileSystemBPLibrary_GetIntegerFieldJson_Params params {};
	params.Data = Data;
	params.fieldName = fieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6530
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetFilenameOnDisk(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk");

	UEasyFileSystemBPLibrary_GetFilenameOnDisk_Params params {};
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6410
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetExtension(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension");

	UEasyFileSystemBPLibrary_GetExtension_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6390
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_GetEngineDir()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir");

	UEasyFileSystemBPLibrary_GetEngineDir_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6220
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_GetBoolFieldJson(const struct FString& Data, const struct FString& fieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson");

	UEasyFileSystemBPLibrary_GetBoolFieldJson_Params params {};
	params.Data = Data;
	params.fieldName = fieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B6030
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     fileExtension                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UEasyFileSystemBPLibrary::STATIC_FindFiles(const struct FString& Directory, const struct FString& fileExtension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles");

	UEasyFileSystemBPLibrary_FindFiles_Params params {};
	params.Directory = Directory;
	params.fileExtension = fileExtension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5F50
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_FileExists(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists");

	UEasyFileSystemBPLibrary_FileExists_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5E70
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_DirectoryExists(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists");

	UEasyFileSystemBPLibrary_DirectoryExists_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5D90
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_DeleteFile(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile");

	UEasyFileSystemBPLibrary_DeleteFile_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5CB0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_DeleteDirectory(const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory");

	UEasyFileSystemBPLibrary_DeleteDirectory_Params params {};
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5BD0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_CreateDirectory(const struct FString& inPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory");

	UEasyFileSystemBPLibrary_CreateDirectory_Params params {};
	params.inPath = inPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5A60
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_CopyFile(const struct FString& to, const struct FString& from)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile");

	UEasyFileSystemBPLibrary_CopyFile_Params params {};
	params.to = to;
	params.from = from;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B58B0
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     destinationDirectory                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Source                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOverwriteAllExisting                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEasyFileSystemBPLibrary::STATIC_CopyDirectoryTree(const struct FString& destinationDirectory, const struct FString& Source, bool bOverwriteAllExisting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree");

	UEasyFileSystemBPLibrary_CopyDirectoryTree_Params params {};
	params.destinationDirectory = destinationDirectory;
	params.Source = Source;
	params.bOverwriteAllExisting = bOverwriteAllExisting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B5700
//		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     inNewExtension                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UEasyFileSystemBPLibrary::STATIC_ChangeExtension(const struct FString& inPath, const struct FString& inNewExtension)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension");

	UEasyFileSystemBPLibrary_ChangeExtension_Params params {};
	params.inPath = inPath;
	params.inNewExtension = inNewExtension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEasyFileSystemBPLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UEasyFileSystemBPLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
