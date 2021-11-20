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
// Classes
//---------------------------------------------------------------------------

// Class LowEntryFileManager.LowEntryFileManagerDirectory
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class ULowEntryFileManagerDirectory : public UObject
{
public:
	struct FString                                     Directory;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRoot;                                                   // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BV9C[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerDirectory");
		return ptr;
	}



	void MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
	bool IsRootBool();
	void IsRoot(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	bool IsEmptyBool();
	void IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	struct FString GetPath();
	class ULowEntryFileManagerDirectory* GetParentDirectory();
	struct FString GetName();
	TArray<class ULowEntryFileManagerFile*> GetFiles();
	class ULowEntryFileManagerFile* GetFile(const struct FString& File);
	class ULowEntryFileManagerDirectory* GetDirectory(const struct FString& Directory_);
	TArray<class ULowEntryFileManagerDirectory*> GetDirectories();
	struct FString GetAbsolutePath();
	bool ExistsBool();
	void Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	void Delete();
	void Create();
	void CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
	void Clear();
	void AfterRead();
	void BeforeDelete();

};

// Class LowEntryFileManager.LowEntryFileManagerFile
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULowEntryFileManagerFile : public UObject
{
public:
	struct FString                                     Directory;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                      // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerFile");
		return ptr;
	}



	int Size();
	void SetTimestamp(const struct FDateTime& Timestamp);
	void SetReadOnly(bool ReadOnly);
	void SetData(TArray<unsigned char> Data);
	void MoveTo(class ULowEntryFileManagerFile* NewFile);
	bool IsReadOnlyBool();
	void IsReadOnly(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	bool IsEmptyBool();
	void IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	struct FDateTime GetTimestamp();
	struct FString GetPath();
	class ULowEntryFileManagerDirectory* GetParentDirectory();
	struct FString GetNameWithoutExtension();
	struct FString GetName();
	struct FString GetExtension();
	TArray<unsigned char> GetData();
	struct FDateTime GetAccessTimestamp();
	struct FString GetAbsolutePath();
	bool ExistsBool();
	void Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	void ExecuteAsync(const struct FString& Parameters, bool* Success, int* ProcessID, bool Hidden, int Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory);
	void Execute(const struct FString& Parameters, bool* Success, int* ReturnCode, struct FString* StdOut, struct FString* StdErr);
	void Delete();
	void Create();
	void CopyTo(class ULowEntryFileManagerFile* NewFile);
	void Clear();
	void AppendData(TArray<unsigned char> Data);
	void AfterRead();
	void BeforeDelete();

};

// Class LowEntryFileManager.LowEntryFileManagerLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LowEntryFileManager.LowEntryFileManagerLibrary");
		return ptr;
	}



	void STATIC_SplitPath(const struct FString& Path, struct FString* PathPart, struct FString* NamePart);
	void STATIC_SplitName(const struct FString& Name, struct FString* NamePart, struct FString* ExtensionPart);
	void STATIC_SetFileTimestamp(const struct FString& File, const struct FDateTime& Timestamp);
	void STATIC_SetFileReadOnly(const struct FString& File, bool ReadOnly);
	void STATIC_SetFileData(const struct FString& File, TArray<unsigned char> Data);
	struct FString STATIC_ReplaceInvalidPathCharacters(const struct FString& String, const struct FString& ReplacementCharacter);
	struct FString STATIC_ReplaceInvalidFilenameCharacters(const struct FString& String, const struct FString& ReplacementCharacter);
	struct FString STATIC_ReplaceBackslashesBySlashes(const struct FString& String);
	struct FString STATIC_RemoveInvalidPathCharacters(const struct FString& String);
	struct FString STATIC_RemoveInvalidFilenameCharacters(const struct FString& String);
	struct FString STATIC_RelativeToAbsolutePath(const struct FString& RelativePath);
	void STATIC_MoveFile(const struct FString& File, const struct FString& to);
	void STATIC_MoveDirectory(const struct FString& Directory, const struct FString& to, bool OverrideExistingFiles);
	bool STATIC_IsFileReadOnlyBool(const struct FString& File);
	void STATIC_IsFileReadOnly(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	bool STATIC_IsFileEmptyBool(const struct FString& File);
	void STATIC_IsFileEmpty(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	bool STATIC_IsDirectoryEmptyBool(const struct FString& Directory);
	void STATIC_IsDirectoryEmpty(const struct FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	bool STATIC_HasDiskPathsBool();
	void STATIC_HasDiskPaths(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	struct FString STATIC_GetRootDirPath();
	class ULowEntryFileManagerDirectory* STATIC_GetRoot();
	struct FString STATIC_GetProjectFilePath();
	struct FString STATIC_GetGameUserDirPath();
	struct FString STATIC_GetGameSavedDirPath();
	struct FString STATIC_GetGamePersistentDownloadDirPath();
	struct FString STATIC_GetGameDirPath();
	struct FDateTime STATIC_GetFileTimestamp(const struct FString& File);
	int STATIC_GetFileSize(const struct FString& File);
	TArray<struct FString> STATIC_GetFiles(const struct FString& Directory);
	TArray<struct FString> STATIC_GetFileNames(const struct FString& Directory);
	TArray<unsigned char> STATIC_GetFileData(const struct FString& File);
	struct FDateTime STATIC_GetFileAccessTimestamp(const struct FString& File);
	struct FString STATIC_GetEngineSavedDirPath();
	struct FString STATIC_GetEngineDirPath();
	TArray<class ULowEntryFileManagerDirectory*> STATIC_GetDisks();
	TArray<struct FString> STATIC_GetDiskPaths();
	TArray<struct FString> STATIC_GetDirectoryNames(const struct FString& Directory);
	class ULowEntryFileManagerDirectory* STATIC_GetDirectory(const struct FString& Path);
	TArray<struct FString> STATIC_GetDirectories(const struct FString& Directory);
	struct FString STATIC_GetCloudDirPath();
	class ULowEntryFileManagerDirectory* STATIC_GetAbsoluteRoot();
	bool STATIC_FileExistsBool(const struct FString& File);
	void STATIC_FileExists(const struct FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	void STATIC_ExecuteFileAsync(const struct FString& File, const struct FString& Parameters, bool* Success, int* ProcessID, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory);
	void STATIC_ExecuteFile(const struct FString& File, const struct FString& Parameters, bool* Success, int* ReturnCode, struct FString* StdOut, struct FString* StdErr);
	bool STATIC_DirectoryExistsBool(const struct FString& Directory);
	void STATIC_DirectoryExists(const struct FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
	void STATIC_DeleteFile(const struct FString& File);
	void STATIC_DeleteDirectory(const struct FString& Directory);
	void STATIC_CreateParentDirectory(const struct FString& Path);
	void STATIC_CreateNewFile(const struct FString& File);
	void STATIC_CreateNewDirectory(const struct FString& Directory);
	void STATIC_CopyFile(const struct FString& File, const struct FString& to);
	void STATIC_CopyDirectory(const struct FString& Directory, const struct FString& to, bool OverrideExistingFiles);
	void STATIC_ClearFile(const struct FString& File);
	void STATIC_ClearDirectory(const struct FString& Directory);
	void STATIC_AppendFileData(const struct FString& File, TArray<unsigned char> Data);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
