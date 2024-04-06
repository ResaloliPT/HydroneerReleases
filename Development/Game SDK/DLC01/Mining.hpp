#ifndef UE4SS_SDK_Mining_HPP
#define UE4SS_SDK_Mining_HPP

#include "Mining_enums.hpp"

class UCGameEngine : public UGameEngine
{
}; // Size: 0xE30

class UCGameInstance : public UGameInstance
{
}; // Size: 0x1A8

class UCHydroneerLibrary : public UBlueprintFunctionLibrary
{

    bool StringToClassRef(FString ClassStringName, UClass*& OutClass);
    void SetHiddenShadow(bool bNewCastHiddenShadow, class UPrimitiveComponent* Target);
    void SetCanAffectNavigation(bool bCanAffectNavigation, class UPrimitiveComponent* Target);
    FString SanitizeString(FString Filename);
    bool RenameSave(FString OriginalSaveName, FString NewSaveName);
    void ReloadInput(bool bReload);
    FString GetSaveDirectory();
    void GetSaveBackupNames(FString SaveName, TArray<FString>& OutBackups);
    int32 GetHighestCurrentSaveIndex(FString SaveName);
    UClass* GetBlueprintAssetClass(const FAssetData& Asset);
    FString GetAppdataLocalDir();
    TArray<FString> FindFolders(FString FilePath);
    void CopyOverDirectory(FString OldDirectory, FString NewDirectory);
    void BackupSave(FString SaveName, bool bIncrementSave, int32 MaxIncrements);
}; // Size: 0x28

class UCHydroneerProjectSettings : public UDeveloperSettings
{
    bool bDebugMainMenu;                                                              // 0x0038 (size: 0x1)

    class UCHydroneerProjectSettings* Get();
}; // Size: 0x40

class UCModdingSubsystem : public UEngineSubsystem
{

    void UnloadMod(FString ModName);
    void UninstallUnsubscribedMods();
    void LoadMod(FString ModName);
    void InstallAllPending();
    class UCModdingSubsystem* GetModdingSubsystem();
    TArray<FString> GetLoadedMods();
    TArray<FString> GetInstalledMods();
    TArray<FPublishedFileID> GetAllSubscribedMods();
}; // Size: 0x30

class ULocalCableComponent : public UCableComponent
{
}; // Size: 0x510

#endif
