#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LowEntryFileManager.LowEntryFileManagerDirectory.MoveTo
struct ULowEntryFileManagerDirectory_MoveTo_Params
{
	class ULowEntryFileManagerDirectory*               NewDirectory;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideExistingFiles;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRootBool
struct ULowEntryFileManagerDirectory_IsRootBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.IsRoot
struct ULowEntryFileManagerDirectory_IsRoot_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmptyBool
struct ULowEntryFileManagerDirectory_IsEmptyBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.IsEmpty
struct ULowEntryFileManagerDirectory_IsEmpty_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetPath
struct ULowEntryFileManagerDirectory_GetPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetParentDirectory
struct ULowEntryFileManagerDirectory_GetParentDirectory_Params
{
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetName
struct ULowEntryFileManagerDirectory_GetName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFiles
struct ULowEntryFileManagerDirectory_GetFiles_Params
{
	TArray<class ULowEntryFileManagerFile*>            ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetFile
struct ULowEntryFileManagerDirectory_GetFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryFileManagerFile*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectory
struct ULowEntryFileManagerDirectory_GetDirectory_Params
{
	struct FString                                     Directory_;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetDirectories
struct ULowEntryFileManagerDirectory_GetDirectories_Params
{
	TArray<class ULowEntryFileManagerDirectory*>       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.GetAbsolutePath
struct ULowEntryFileManagerDirectory_GetAbsolutePath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.ExistsBool
struct ULowEntryFileManagerDirectory_ExistsBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.Exists
struct ULowEntryFileManagerDirectory_Exists_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.Delete
struct ULowEntryFileManagerDirectory_Delete_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.Create
struct ULowEntryFileManagerDirectory_Create_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.CopyTo
struct ULowEntryFileManagerDirectory_CopyTo_Params
{
	class ULowEntryFileManagerDirectory*               NewDirectory;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideExistingFiles;                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerDirectory.Clear
struct ULowEntryFileManagerDirectory_Clear_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Size
struct ULowEntryFileManagerFile_Size_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.SetTimestamp
struct ULowEntryFileManagerFile_SetTimestamp_Params
{
	struct FDateTime                                   Timestamp;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.SetReadOnly
struct ULowEntryFileManagerFile_SetReadOnly_Params
{
	bool                                               ReadOnly;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.SetData
struct ULowEntryFileManagerFile_SetData_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.MoveTo
struct ULowEntryFileManagerFile_MoveTo_Params
{
	class ULowEntryFileManagerFile*                    NewFile;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnlyBool
struct ULowEntryFileManagerFile_IsReadOnlyBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.IsReadOnly
struct ULowEntryFileManagerFile_IsReadOnly_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.IsEmptyBool
struct ULowEntryFileManagerFile_IsEmptyBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.IsEmpty
struct ULowEntryFileManagerFile_IsEmpty_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetTimestamp
struct ULowEntryFileManagerFile_GetTimestamp_Params
{
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetPath
struct ULowEntryFileManagerFile_GetPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetParentDirectory
struct ULowEntryFileManagerFile_GetParentDirectory_Params
{
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetNameWithoutExtension
struct ULowEntryFileManagerFile_GetNameWithoutExtension_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetName
struct ULowEntryFileManagerFile_GetName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetExtension
struct ULowEntryFileManagerFile_GetExtension_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetData
struct ULowEntryFileManagerFile_GetData_Params
{
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetAccessTimestamp
struct ULowEntryFileManagerFile_GetAccessTimestamp_Params
{
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.GetAbsolutePath
struct ULowEntryFileManagerFile_GetAbsolutePath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.ExistsBool
struct ULowEntryFileManagerFile_ExistsBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Exists
struct ULowEntryFileManagerFile_Exists_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.ExecuteAsync
struct ULowEntryFileManagerFile_ExecuteAsync_Params
{
	struct FString                                     Parameters;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProcessID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryFileManagerDirectory*               OptionalWorkingDirectory;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Execute
struct ULowEntryFileManagerFile_Execute_Params
{
	struct FString                                     Parameters;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnCode;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StdOut;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StdErr;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Delete
struct ULowEntryFileManagerFile_Delete_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Create
struct ULowEntryFileManagerFile_Create_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerFile.CopyTo
struct ULowEntryFileManagerFile_CopyTo_Params
{
	class ULowEntryFileManagerFile*                    NewFile;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerFile.Clear
struct ULowEntryFileManagerFile_Clear_Params
{
};

// Function LowEntryFileManager.LowEntryFileManagerFile.AppendData
struct ULowEntryFileManagerFile_AppendData_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitPath
struct ULowEntryFileManagerLibrary_SplitPath_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PathPart;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NamePart;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.SplitName
struct ULowEntryFileManagerLibrary_SplitName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NamePart;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtensionPart;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileTimestamp
struct ULowEntryFileManagerLibrary_SetFileTimestamp_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   Timestamp;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileReadOnly
struct ULowEntryFileManagerLibrary_SetFileReadOnly_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReadOnly;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.SetFileData
struct ULowEntryFileManagerLibrary_SetFileData_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidPathCharacters
struct ULowEntryFileManagerLibrary_ReplaceInvalidPathCharacters_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReplacementCharacter;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceInvalidFilenameCharacters
struct ULowEntryFileManagerLibrary_ReplaceInvalidFilenameCharacters_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReplacementCharacter;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ReplaceBackslashesBySlashes
struct ULowEntryFileManagerLibrary_ReplaceBackslashesBySlashes_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidPathCharacters
struct ULowEntryFileManagerLibrary_RemoveInvalidPathCharacters_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.RemoveInvalidFilenameCharacters
struct ULowEntryFileManagerLibrary_RemoveInvalidFilenameCharacters_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.RelativeToAbsolutePath
struct ULowEntryFileManagerLibrary_RelativeToAbsolutePath_Params
{
	struct FString                                     RelativePath;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveFile
struct ULowEntryFileManagerLibrary_MoveFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     to;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.MoveDirectory
struct ULowEntryFileManagerLibrary_MoveDirectory_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     to;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideExistingFiles;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnlyBool
struct ULowEntryFileManagerLibrary_IsFileReadOnlyBool_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileReadOnly
struct ULowEntryFileManagerLibrary_IsFileReadOnly_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmptyBool
struct ULowEntryFileManagerLibrary_IsFileEmptyBool_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsFileEmpty
struct ULowEntryFileManagerLibrary_IsFileEmpty_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmptyBool
struct ULowEntryFileManagerLibrary_IsDirectoryEmptyBool_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.IsDirectoryEmpty
struct ULowEntryFileManagerLibrary_IsDirectoryEmpty_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPathsBool
struct ULowEntryFileManagerLibrary_HasDiskPathsBool_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.HasDiskPaths
struct ULowEntryFileManagerLibrary_HasDiskPaths_Params
{
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRootDirPath
struct ULowEntryFileManagerLibrary_GetRootDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetRoot
struct ULowEntryFileManagerLibrary_GetRoot_Params
{
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetProjectFilePath
struct ULowEntryFileManagerLibrary_GetProjectFilePath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameUserDirPath
struct ULowEntryFileManagerLibrary_GetGameUserDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameSavedDirPath
struct ULowEntryFileManagerLibrary_GetGameSavedDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGamePersistentDownloadDirPath
struct ULowEntryFileManagerLibrary_GetGamePersistentDownloadDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetGameDirPath
struct ULowEntryFileManagerLibrary_GetGameDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileTimestamp
struct ULowEntryFileManagerLibrary_GetFileTimestamp_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileSize
struct ULowEntryFileManagerLibrary_GetFileSize_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFiles
struct ULowEntryFileManagerLibrary_GetFiles_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileNames
struct ULowEntryFileManagerLibrary_GetFileNames_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileData
struct ULowEntryFileManagerLibrary_GetFileData_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetFileAccessTimestamp
struct ULowEntryFileManagerLibrary_GetFileAccessTimestamp_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineSavedDirPath
struct ULowEntryFileManagerLibrary_GetEngineSavedDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetEngineDirPath
struct ULowEntryFileManagerLibrary_GetEngineDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDisks
struct ULowEntryFileManagerLibrary_GetDisks_Params
{
	TArray<class ULowEntryFileManagerDirectory*>       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDiskPaths
struct ULowEntryFileManagerLibrary_GetDiskPaths_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectoryNames
struct ULowEntryFileManagerLibrary_GetDirectoryNames_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectory
struct ULowEntryFileManagerLibrary_GetDirectory_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetDirectories
struct ULowEntryFileManagerLibrary_GetDirectories_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetCloudDirPath
struct ULowEntryFileManagerLibrary_GetCloudDirPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.GetAbsoluteRoot
struct ULowEntryFileManagerLibrary_GetAbsoluteRoot_Params
{
	class ULowEntryFileManagerDirectory*               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExistsBool
struct ULowEntryFileManagerLibrary_FileExistsBool_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.FileExists
struct ULowEntryFileManagerLibrary_FileExists_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFileAsync
struct ULowEntryFileManagerLibrary_ExecuteFileAsync_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameters;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProcessID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OptionalWorkingDirectory;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ExecuteFile
struct ULowEntryFileManagerLibrary_ExecuteFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameters;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnCode;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StdOut;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StdErr;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExistsBool
struct ULowEntryFileManagerLibrary_DirectoryExistsBool_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.DirectoryExists
struct ULowEntryFileManagerLibrary_DirectoryExists_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LowEntryFileManager_ELowEntryFileManagerYesNo      Branch;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteFile
struct ULowEntryFileManagerLibrary_DeleteFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.DeleteDirectory
struct ULowEntryFileManagerLibrary_DeleteDirectory_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateParentDirectory
struct ULowEntryFileManagerLibrary_CreateParentDirectory_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewFile
struct ULowEntryFileManagerLibrary_CreateNewFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.CreateNewDirectory
struct ULowEntryFileManagerLibrary_CreateNewDirectory_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyFile
struct ULowEntryFileManagerLibrary_CopyFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     to;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.CopyDirectory
struct ULowEntryFileManagerLibrary_CopyDirectory_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     to;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideExistingFiles;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearFile
struct ULowEntryFileManagerLibrary_ClearFile_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.ClearDirectory
struct ULowEntryFileManagerLibrary_ClearDirectory_Params
{
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LowEntryFileManager.LowEntryFileManagerLibrary.AppendFileData
struct ULowEntryFileManagerLibrary_AppendFileData_Params
{
	struct FString                                     File;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
