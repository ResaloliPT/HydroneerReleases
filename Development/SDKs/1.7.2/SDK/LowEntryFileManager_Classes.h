#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LowEntryFileManager.LowEntryFileManagerDirectory
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerDirectory : public UObject
	{
	public:
		class FString                                              Directory;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRoot;                                                 // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKH0[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		void MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
		bool IsRootBool();
		void IsRoot(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		bool IsEmptyBool();
		void IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		class FString GetPath();
		class ULowEntryFileManagerDirectory* GetParentDirectory();
		class FString GetName();
		TArray<class ULowEntryFileManagerFile*> GetFiles();
		class ULowEntryFileManagerFile* GetFile(const class FString& File);
		class ULowEntryFileManagerDirectory* GetDirectory(const class FString& Directory_);
		TArray<class ULowEntryFileManagerDirectory*> GetDirectories();
		class FString GetAbsolutePath();
		bool ExistsBool();
		void Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		void Delete();
		void Create();
		void CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, bool OverrideExistingFiles);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryFileManager.LowEntryFileManagerFile
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerFile : public UObject
	{
	public:
		class FString                                              Directory;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		int32_t Size();
		void SetTimestamp(const struct FDateTime& Timestamp);
		void SetReadOnly(bool ReadOnly);
		void SetData(TArray<unsigned char> Data);
		void MoveTo(class ULowEntryFileManagerFile* NewFile);
		bool IsReadOnlyBool();
		void IsReadOnly(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		bool IsEmptyBool();
		void IsEmpty(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		struct FDateTime GetTimestamp();
		class FString GetPath();
		class ULowEntryFileManagerDirectory* GetParentDirectory();
		class FString GetNameWithoutExtension();
		class FString GetName();
		class FString GetExtension();
		TArray<unsigned char> GetData();
		struct FDateTime GetAccessTimestamp();
		class FString GetAbsolutePath();
		bool ExistsBool();
		void Exists(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		void ExecuteAsync(const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory);
		void Execute(const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr);
		void Delete();
		void Create();
		void CopyTo(class ULowEntryFileManagerFile* NewFile);
		void Clear();
		void AppendData(TArray<unsigned char> Data);
		static UClass* StaticClass();
	};

	/**
	 * Class LowEntryFileManager.LowEntryFileManagerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SplitPath(const class FString& Path, class FString* PathPart, class FString* NamePart);
		void STATIC_SplitName(const class FString& Name, class FString* NamePart, class FString* ExtensionPart);
		void STATIC_SetFileTimestamp(const class FString& File, const struct FDateTime& Timestamp);
		void STATIC_SetFileReadOnly(const class FString& File, bool ReadOnly);
		void STATIC_SetFileData(const class FString& File, TArray<unsigned char> Data);
		class FString STATIC_ReplaceInvalidPathCharacters(const class FString& String, const class FString& ReplacementCharacter);
		class FString STATIC_ReplaceInvalidFilenameCharacters(const class FString& String, const class FString& ReplacementCharacter);
		class FString STATIC_ReplaceBackslashesBySlashes(const class FString& String);
		class FString STATIC_RemoveInvalidPathCharacters(const class FString& String);
		class FString STATIC_RemoveInvalidFilenameCharacters(const class FString& String);
		class FString STATIC_RelativeToAbsolutePath(const class FString& RelativePath);
		void STATIC_MoveFile(const class FString& File, const class FString& to);
		void STATIC_MoveDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles);
		bool STATIC_IsFileReadOnlyBool(const class FString& File);
		void STATIC_IsFileReadOnly(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		bool STATIC_IsFileEmptyBool(const class FString& File);
		void STATIC_IsFileEmpty(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		bool STATIC_IsDirectoryEmptyBool(const class FString& Directory);
		void STATIC_IsDirectoryEmpty(const class FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		bool STATIC_HasDiskPathsBool();
		void STATIC_HasDiskPaths(LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		class FString STATIC_GetRootDirPath();
		class ULowEntryFileManagerDirectory* STATIC_GetRoot();
		class FString STATIC_GetProjectFilePath();
		class FString STATIC_GetGameUserDirPath();
		class FString STATIC_GetGameSavedDirPath();
		class FString STATIC_GetGamePersistentDownloadDirPath();
		class FString STATIC_GetGameDirPath();
		struct FDateTime STATIC_GetFileTimestamp(const class FString& File);
		int32_t STATIC_GetFileSize(const class FString& File);
		TArray<class FString> STATIC_GetFiles(const class FString& Directory);
		TArray<class FString> STATIC_GetFileNames(const class FString& Directory);
		TArray<unsigned char> STATIC_GetFileData(const class FString& File);
		struct FDateTime STATIC_GetFileAccessTimestamp(const class FString& File);
		class FString STATIC_GetEngineSavedDirPath();
		class FString STATIC_GetEngineDirPath();
		TArray<class ULowEntryFileManagerDirectory*> STATIC_GetDisks();
		TArray<class FString> STATIC_GetDiskPaths();
		TArray<class FString> STATIC_GetDirectoryNames(const class FString& Directory);
		class ULowEntryFileManagerDirectory* STATIC_GetDirectory(const class FString& Path);
		TArray<class FString> STATIC_GetDirectories(const class FString& Directory);
		class FString STATIC_GetCloudDirPath();
		class ULowEntryFileManagerDirectory* STATIC_GetAbsoluteRoot();
		bool STATIC_FileExistsBool(const class FString& File);
		void STATIC_FileExists(const class FString& File, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		void STATIC_ExecuteFileAsync(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ProcessID, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory);
		void STATIC_ExecuteFile(const class FString& File, const class FString& Parameters, bool* Success, int32_t* ReturnCode, class FString* StdOut, class FString* StdErr);
		bool STATIC_DirectoryExistsBool(const class FString& Directory);
		void STATIC_DirectoryExists(const class FString& Directory, LowEntryFileManager_ELowEntryFileManagerYesNo* Branch);
		void STATIC_DeleteFile(const class FString& File);
		void STATIC_DeleteDirectory(const class FString& Directory);
		void STATIC_CreateParentDirectory(const class FString& Path);
		void STATIC_CreateNewFile(const class FString& File);
		void STATIC_CreateNewDirectory(const class FString& Directory);
		void STATIC_CopyFile(const class FString& File, const class FString& to);
		void STATIC_CopyDirectory(const class FString& Directory, const class FString& to, bool OverrideExistingFiles);
		void STATIC_ClearFile(const class FString& File);
		void STATIC_ClearDirectory(const class FString& Directory);
		void STATIC_AppendFileData(const class FString& File, TArray<unsigned char> Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
