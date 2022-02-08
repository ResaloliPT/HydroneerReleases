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
	 * 		Offset -> 0x005B72F0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewReadOnlyValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_SetReadOnly(const class FString& inPath, bool bNewReadOnlyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SetReadOnly");
		
		UEasyFileSystemBPLibrary_SetReadOnly_Params params {};
		params.inPath = inPath;
		params.bNewReadOnlyValue = bNewReadOnlyValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B7180
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      textData                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_SaveStringToFile(const class FString& inPath, const class FString& textData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveStringToFile");
		
		UEasyFileSystemBPLibrary_SaveStringToFile_Params params {};
		params.inPath = inPath;
		params.textData = textData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B7010
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Array                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_SaveArrayToFile(const class FString& inPath, TArray<unsigned char> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.SaveArrayToFile");
		
		UEasyFileSystemBPLibrary_SaveArrayToFile_Params params {};
		params.inPath = inPath;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6EA0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_MoveFile(const class FString& to, const class FString& from)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.MoveFile");
		
		UEasyFileSystemBPLibrary_MoveFile_Params params {};
		params.to = to;
		params.from = from;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6D80
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_LoadFileToString(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToString");
		
		UEasyFileSystemBPLibrary_LoadFileToString_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6C30
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              result                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_LoadFileToArray(const class FString& inPath, TArray<unsigned char>* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.LoadFileToArray");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x005B6B50
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_IsReadOnly(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.IsReadOnly");
		
		UEasyFileSystemBPLibrary_IsReadOnly_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B69A0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetStringFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetStringFieldJson");
		
		UEasyFileSystemBPLibrary_GetStringFieldJson_Params params {};
		params.Data = Data;
		params.fieldName = fieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6920
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetSourceDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSourceDir");
		
		UEasyFileSystemBPLibrary_GetSourceDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6840
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEasyFileSystemBPLibrary::STATIC_GetSizeFile(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetSizeFile");
		
		UEasyFileSystemBPLibrary_GetSizeFile_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B67C0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetProjectFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetProjectFilePath");
		
		UEasyFileSystemBPLibrary_GetProjectFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6650
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEasyFileSystemBPLibrary::STATIC_GetIntegerFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetIntegerFieldJson");
		
		UEasyFileSystemBPLibrary_GetIntegerFieldJson_Params params {};
		params.Data = Data;
		params.fieldName = fieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6530
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetFilenameOnDisk(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetFilenameOnDisk");
		
		UEasyFileSystemBPLibrary_GetFilenameOnDisk_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6410
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetExtension(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetExtension");
		
		UEasyFileSystemBPLibrary_GetExtension_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6390
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_GetEngineDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetEngineDir");
		
		UEasyFileSystemBPLibrary_GetEngineDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6220
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fieldName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_GetBoolFieldJson(const class FString& Data, const class FString& fieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.GetBoolFieldJson");
		
		UEasyFileSystemBPLibrary_GetBoolFieldJson_Params params {};
		params.Data = Data;
		params.fieldName = fieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B6030
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fileExtension                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UEasyFileSystemBPLibrary::STATIC_FindFiles(const class FString& Directory, const class FString& fileExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FindFiles");
		
		UEasyFileSystemBPLibrary_FindFiles_Params params {};
		params.Directory = Directory;
		params.fileExtension = fileExtension;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5F50
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_FileExists(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.FileExists");
		
		UEasyFileSystemBPLibrary_FileExists_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5E70
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_DirectoryExists(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DirectoryExists");
		
		UEasyFileSystemBPLibrary_DirectoryExists_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5D90
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_DeleteFile(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteFile");
		
		UEasyFileSystemBPLibrary_DeleteFile_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5CB0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Directory                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_DeleteDirectory(const class FString& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.DeleteDirectory");
		
		UEasyFileSystemBPLibrary_DeleteDirectory_Params params {};
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5BD0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_CreateDirectory(const class FString& inPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CreateDirectory");
		
		UEasyFileSystemBPLibrary_CreateDirectory_Params params {};
		params.inPath = inPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B5A60
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      to                                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      from                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_CopyFile(const class FString& to, const class FString& from)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyFile");
		
		UEasyFileSystemBPLibrary_CopyFile_Params params {};
		params.to = to;
		params.from = from;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005B58B0
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      destinationDirectory                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Source                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverwriteAllExisting                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEasyFileSystemBPLibrary::STATIC_CopyDirectoryTree(const class FString& destinationDirectory, const class FString& Source, bool bOverwriteAllExisting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.CopyDirectoryTree");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x005B5700
	 * 		Name   -> Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inPath                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      inNewExtension                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEasyFileSystemBPLibrary::STATIC_ChangeExtension(const class FString& inPath, const class FString& inNewExtension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EasyFileSystem.EasyFileSystemBPLibrary.ChangeExtension");
		
		UEasyFileSystemBPLibrary_ChangeExtension_Params params {};
		params.inPath = inPath;
		params.inNewExtension = inNewExtension;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEasyFileSystemBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEasyFileSystemBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EasyFileSystem.EasyFileSystemBPLibrary");
		return ptr;
	}

}


