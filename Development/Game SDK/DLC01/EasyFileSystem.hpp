#ifndef UE4SS_SDK_EasyFileSystem_HPP
#define UE4SS_SDK_EasyFileSystem_HPP

class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary
{

    bool SetReadOnly(const FString inPath, bool bNewReadOnlyValue);
    bool SaveStringToFile(FString inPath, const FString textData);
    bool SaveArrayToFile(FString inPath, TArray<uint8> Array);
    bool MoveFile(const FString to, const FString from);
    FString LoadFileToString(FString inPath);
    bool LoadFileToArray(FString inPath, TArray<uint8>& Result);
    bool IsReadOnly(const FString Filename);
    FString GetStringFieldJson(const FString Data, const FString fieldName);
    FString GetSourceDir();
    int32 GetSizeFile(const FString inPath);
    FString GetProjectFilePath();
    int32 GetIntegerFieldJson(const FString Data, const FString fieldName);
    FString GetFilenameOnDisk(const FString Filename);
    FString GetExtension(const FString inPath);
    FString GetEngineDir();
    bool GetBoolFieldJson(const FString Data, const FString fieldName);
    TArray<FString> FindFiles(const FString Directory, const FString fileExtension);
    bool FileExists(const FString inPath);
    bool DirectoryExists(const FString inPath);
    bool DeleteFile(const FString inPath);
    bool DeleteDirectory(const FString Directory);
    bool CreateDirectory(const FString inPath);
    bool CopyFile(const FString to, const FString from);
    bool CopyDirectoryTree(const FString destinationDirectory, const FString Source, const bool bOverwriteAllExisting);
    FString ChangeExtension(const FString inPath, const FString inNewExtension);
}; // Size: 0x28

#endif
