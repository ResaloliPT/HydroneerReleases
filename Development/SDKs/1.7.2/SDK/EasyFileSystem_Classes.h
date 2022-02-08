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
	 * Class EasyFileSystem.EasyFileSystemBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetReadOnly(const class FString& inPath, bool bNewReadOnlyValue);
		bool STATIC_SaveStringToFile(const class FString& inPath, const class FString& textData);
		bool STATIC_SaveArrayToFile(const class FString& inPath, TArray<unsigned char> Array);
		bool STATIC_MoveFile(const class FString& to, const class FString& from);
		class FString STATIC_LoadFileToString(const class FString& inPath);
		bool STATIC_LoadFileToArray(const class FString& inPath, TArray<unsigned char>* result);
		bool STATIC_IsReadOnly(const class FString& Filename);
		class FString STATIC_GetStringFieldJson(const class FString& Data, const class FString& fieldName);
		class FString STATIC_GetSourceDir();
		int32_t STATIC_GetSizeFile(const class FString& inPath);
		class FString STATIC_GetProjectFilePath();
		int32_t STATIC_GetIntegerFieldJson(const class FString& Data, const class FString& fieldName);
		class FString STATIC_GetFilenameOnDisk(const class FString& Filename);
		class FString STATIC_GetExtension(const class FString& inPath);
		class FString STATIC_GetEngineDir();
		bool STATIC_GetBoolFieldJson(const class FString& Data, const class FString& fieldName);
		TArray<class FString> STATIC_FindFiles(const class FString& Directory, const class FString& fileExtension);
		bool STATIC_FileExists(const class FString& inPath);
		bool STATIC_DirectoryExists(const class FString& inPath);
		bool STATIC_DeleteFile(const class FString& inPath);
		bool STATIC_DeleteDirectory(const class FString& Directory);
		bool STATIC_CreateDirectory(const class FString& inPath);
		bool STATIC_CopyFile(const class FString& to, const class FString& from);
		bool STATIC_CopyDirectoryTree(const class FString& destinationDirectory, const class FString& Source, bool bOverwriteAllExisting);
		class FString STATIC_ChangeExtension(const class FString& inPath, const class FString& inNewExtension);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
