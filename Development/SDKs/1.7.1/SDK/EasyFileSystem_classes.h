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

// Class EasyFileSystem.EasyFileSystemBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEasyFileSystemBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EasyFileSystem.EasyFileSystemBPLibrary");
		return ptr;
	}



	bool STATIC_SetReadOnly(const struct FString& inPath, bool bNewReadOnlyValue);
	bool STATIC_SaveStringToFile(const struct FString& inPath, const struct FString& textData);
	bool STATIC_SaveArrayToFile(const struct FString& inPath, TArray<unsigned char> Array);
	bool STATIC_MoveFile(const struct FString& to, const struct FString& from);
	struct FString STATIC_LoadFileToString(const struct FString& inPath);
	bool STATIC_LoadFileToArray(const struct FString& inPath, TArray<unsigned char>* result);
	bool STATIC_IsReadOnly(const struct FString& Filename);
	struct FString STATIC_GetStringFieldJson(const struct FString& Data, const struct FString& fieldName);
	struct FString STATIC_GetSourceDir();
	int STATIC_GetSizeFile(const struct FString& inPath);
	struct FString STATIC_GetProjectFilePath();
	int STATIC_GetIntegerFieldJson(const struct FString& Data, const struct FString& fieldName);
	struct FString STATIC_GetFilenameOnDisk(const struct FString& Filename);
	struct FString STATIC_GetExtension(const struct FString& inPath);
	struct FString STATIC_GetEngineDir();
	bool STATIC_GetBoolFieldJson(const struct FString& Data, const struct FString& fieldName);
	TArray<struct FString> STATIC_FindFiles(const struct FString& Directory, const struct FString& fileExtension);
	bool STATIC_FileExists(const struct FString& inPath);
	bool STATIC_DirectoryExists(const struct FString& inPath);
	bool STATIC_DeleteFile(const struct FString& inPath);
	bool STATIC_DeleteDirectory(const struct FString& Directory);
	bool STATIC_CreateDirectory(const struct FString& inPath);
	bool STATIC_CopyFile(const struct FString& to, const struct FString& from);
	bool STATIC_CopyDirectoryTree(const struct FString& destinationDirectory, const struct FString& Source, bool bOverwriteAllExisting);
	struct FString STATIC_ChangeExtension(const struct FString& inPath, const struct FString& inNewExtension);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
