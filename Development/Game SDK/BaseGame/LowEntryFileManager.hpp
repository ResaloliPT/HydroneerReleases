#ifndef UE4SS_SDK_LowEntryFileManager_HPP
#define UE4SS_SDK_LowEntryFileManager_HPP

#include "LowEntryFileManager_enums.hpp"

class ULowEntryFileManagerDirectory : public UObject
{
    FString Directory;                                                                // 0x0028 (size: 0x10)
    FString Name;                                                                     // 0x0038 (size: 0x10)
    FString Path;                                                                     // 0x0048 (size: 0x10)
    bool bIsRoot;                                                                     // 0x0058 (size: 0x1)

    void MoveTo(class ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles);
    bool IsRootBool();
    void IsRoot(ELowEntryFileManagerYesNo& Branch);
    bool IsEmptyBool();
    void IsEmpty(ELowEntryFileManagerYesNo& Branch);
    FString GetPath();
    class ULowEntryFileManagerDirectory* GetParentDirectory();
    FString GetName();
    TArray<class ULowEntryFileManagerFile*> GetFiles();
    class ULowEntryFileManagerFile* GetFile(FString File);
    class ULowEntryFileManagerDirectory* GetDirectory(FString Directory_);
    TArray<class ULowEntryFileManagerDirectory*> GetDirectories();
    FString GetAbsolutePath();
    bool ExistsBool();
    void Exists(ELowEntryFileManagerYesNo& Branch);
    void Delete();
    void Create();
    void CopyTo(class ULowEntryFileManagerDirectory* NewDirectory, const bool OverrideExistingFiles);
    void Clear();
}; // Size: 0x60

class ULowEntryFileManagerFile : public UObject
{
    FString Directory;                                                                // 0x0028 (size: 0x10)
    FString Name;                                                                     // 0x0038 (size: 0x10)
    FString Path;                                                                     // 0x0048 (size: 0x10)

    int32 Size();
    void SetTimestamp(const FDateTime& Timestamp);
    void SetReadOnly(const bool ReadOnly);
    void SetData(const TArray<uint8>& Data);
    void MoveTo(class ULowEntryFileManagerFile* NewFile);
    bool IsReadOnlyBool();
    void IsReadOnly(ELowEntryFileManagerYesNo& Branch);
    bool IsEmptyBool();
    void IsEmpty(ELowEntryFileManagerYesNo& Branch);
    FDateTime GetTimestamp();
    FString GetPath();
    class ULowEntryFileManagerDirectory* GetParentDirectory();
    FString GetNameWithoutExtension();
    FString GetName();
    FString GetExtension();
    TArray<uint8> GetData();
    FDateTime GetAccessTimestamp();
    FString GetAbsolutePath();
    bool ExistsBool();
    void Exists(ELowEntryFileManagerYesNo& Branch);
    void ExecuteAsync(FString Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, class ULowEntryFileManagerDirectory* OptionalWorkingDirectory);
    void Execute(FString Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr);
    void Delete();
    void Create();
    void CopyTo(class ULowEntryFileManagerFile* NewFile);
    void Clear();
    void AppendData(const TArray<uint8>& Data);
}; // Size: 0x58

class ULowEntryFileManagerLibrary : public UBlueprintFunctionLibrary
{

    void SplitPath(FString Path, FString& PathPart, FString& NamePart);
    void SplitName(FString Name, FString& NamePart, FString& ExtensionPart);
    void SetFileTimestamp(FString File, const FDateTime& Timestamp);
    void SetFileReadOnly(FString File, const bool ReadOnly);
    void SetFileData(FString File, const TArray<uint8>& Data);
    FString ReplaceInvalidPathCharacters(FString String, FString ReplacementCharacter);
    FString ReplaceInvalidFilenameCharacters(FString String, FString ReplacementCharacter);
    FString ReplaceBackslashesBySlashes(FString String);
    FString RemoveInvalidPathCharacters(FString String);
    FString RemoveInvalidFilenameCharacters(FString String);
    FString RelativeToAbsolutePath(FString RelativePath);
    void MoveFile(FString File, FString to);
    void MoveDirectory(FString Directory, FString to, bool OverrideExistingFiles);
    bool IsFileReadOnlyBool(FString File);
    void IsFileReadOnly(FString File, ELowEntryFileManagerYesNo& Branch);
    bool IsFileEmptyBool(FString File);
    void IsFileEmpty(FString File, ELowEntryFileManagerYesNo& Branch);
    bool IsDirectoryEmptyBool(FString Directory);
    void IsDirectoryEmpty(FString Directory, ELowEntryFileManagerYesNo& Branch);
    bool HasDiskPathsBool();
    void HasDiskPaths(ELowEntryFileManagerYesNo& Branch);
    FString GetRootDirPath();
    class ULowEntryFileManagerDirectory* GetRoot();
    FString GetProjectFilePath();
    FString GetGameUserDirPath();
    FString GetGameSavedDirPath();
    FString GetGamePersistentDownloadDirPath();
    FString GetGameDirPath();
    FDateTime GetFileTimestamp(FString File);
    int32 GetFileSize(FString File);
    TArray<FString> GetFiles(FString Directory);
    TArray<FString> GetFileNames(FString Directory);
    TArray<uint8> GetFileData(FString File);
    FDateTime GetFileAccessTimestamp(FString File);
    FString GetEngineSavedDirPath();
    FString GetEngineDirPath();
    TArray<class ULowEntryFileManagerDirectory*> GetDisks();
    TArray<FString> GetDiskPaths();
    TArray<FString> GetDirectoryNames(FString Directory);
    class ULowEntryFileManagerDirectory* GetDirectory(FString Path);
    TArray<FString> GetDirectories(FString Directory);
    FString GetCloudDirPath();
    class ULowEntryFileManagerDirectory* GetAbsoluteRoot();
    bool FileExistsBool(FString File);
    void FileExists(FString File, ELowEntryFileManagerYesNo& Branch);
    void ExecuteFileAsync(FString File, FString Parameters, bool& Success, int32& ProcessID, const bool Hidden, const int32 Priority, FString OptionalWorkingDirectory);
    void ExecuteFile(FString File, FString Parameters, bool& Success, int32& ReturnCode, FString& StdOut, FString& StdErr);
    bool DirectoryExistsBool(FString Directory);
    void DirectoryExists(FString Directory, ELowEntryFileManagerYesNo& Branch);
    void DeleteFile(FString File);
    void DeleteDirectory(FString Directory);
    void CreateParentDirectory(FString Path);
    void CreateNewFile(FString File);
    void CreateNewDirectory(FString Directory);
    void CopyFile(FString File, FString to);
    void CopyDirectory(FString Directory, FString to, bool OverrideExistingFiles);
    void ClearFile(FString File);
    void ClearDirectory(FString Directory);
    void AppendFileData(FString File, const TArray<uint8>& Data);
}; // Size: 0x28

#endif
