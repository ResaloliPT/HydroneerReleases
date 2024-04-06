#ifndef UE4SS_SDK_EasyMultiSave_HPP
#define UE4SS_SDK_EasyMultiSave_HPP

#include "EasyMultiSave_enums.hpp"

struct FActorSaveData
{
}; // Size: 0x80

struct FComponentSaveData
{
}; // Size: 0x50

struct FControllerSaveData
{
}; // Size: 0x30

struct FGameObjectSaveData
{
}; // Size: 0x20

struct FLevelArchive
{
}; // Size: 0x68

struct FLevelScriptSaveData
{
}; // Size: 0x28

struct FPawnSaveData
{
}; // Size: 0x38

struct FPlayerArchive
{
}; // Size: 0x90

struct FSaveSlotInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FDateTime Timestamp;                                                              // 0x0010 (size: 0x8)
    FName Level;                                                                      // 0x0018 (size: 0x8)
    TArray<FString> Players;                                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

class IEMSActorSaveInterface : public IInterface
{

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorSaved();
    void ActorPreSave();
    void ActorLoaded();
}; // Size: 0x28

class UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
    FEMSAsyncLoadGameOnCompleted OnCompleted;                                         // 0x0030 (size: 0x10)
    void AsyncLoadOutputPin();

    class UEMSAsyncLoadGame* AsyncLoadActors(class UObject* WorldContextObject, int32 Data, bool bFullReload);
}; // Size: 0x78

class UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
    FEMSAsyncSaveGameOnCompleted OnCompleted;                                         // 0x0030 (size: 0x10)
    void AsyncSaveOutputPin();

    class UEMSAsyncSaveGame* AsyncSaveActors(class UObject* WorldContextObject, int32 Data);
}; // Size: 0x60

class UEMSAsyncWait : public UBlueprintAsyncActionBase
{
    FEMSAsyncWaitOnCompleted OnCompleted;                                             // 0x0030 (size: 0x10)
    void AsyncWaitOutputPin();

    class UEMSAsyncWait* AsyncWaitForOperation(class UObject* WorldContextObject);
}; // Size: 0x58

class UEMSCustomSaveGame : public USaveGame
{
    FString SaveGameName;                                                             // 0x0028 (size: 0x10)
    bool bUseSaveSlot;                                                                // 0x0038 (size: 0x1)

}; // Size: 0x40

class UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetCurrentSaveUserName(class UObject* WorldContextObject, FString UserName);
    void SetCurrentSaveGameName(class UObject* WorldContextObject, FString SaveGameName);
    void SetActorSaveProperties(class UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform);
    bool SavePersistentObject(class UObject* WorldContextObject);
    bool SaveLocalProfile(class UObject* WorldContextObject);
    bool SaveCustom(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
    bool IsSavingOrLoading(class UObject* WorldContextObject);
    class UTexture2D* ImportSaveThumbnail(class UObject* WorldContextObject, FString SaveGameName);
    TArray<FString> GetSortedSaveSlots(class UObject* WorldContextObject);
    class UEMSInfoSaveGame* GetSlotInfoSaveGame(class UObject* WorldContextObject, FString& SaveGameName);
    class UEMSPersistentSaveGame* GetPersistentSave(class UObject* WorldContextObject);
    class UEMSInfoSaveGame* GetNamedSlotInfo(class UObject* WorldContextObject, FString SaveGameName);
    class UEMSProfileSaveGame* GetLocalProfileSaveGame(class UObject* WorldContextObject);
    class UEMSCustomSaveGame* GetCustomSave(class UObject* WorldContextObject, TSubclassOf<class UEMSCustomSaveGame> SaveGameClass);
    TArray<FString> GetAllSaveUsers(class UObject* WorldContextObject);
    void ExportSaveThumbnail(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, FString SaveGameName);
    bool DoesSaveSlotExist(class UObject* WorldContextObject, FString SaveGameName);
    void DeleteSaveUser(class UObject* WorldContextObject, FString UserName);
    void DeleteLocalProfile(class UObject* WorldContextObject);
    void DeleteCustomSave(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
    void DeleteAllSaveDataForSlot(class UObject* WorldContextObject, FString SaveGameName);
}; // Size: 0x28

class UEMSInfoSaveGame : public USaveGame
{
    FSaveSlotInfo SlotInfo;                                                           // 0x0028 (size: 0x30)

}; // Size: 0x58

class UEMSObject : public UObject
{
    class UWorld* World;                                                              // 0x0028 (size: 0x8)
    FString CurrentSaveGameName;                                                      // 0x0030 (size: 0x10)
    FString CurrentSaveUserName;                                                      // 0x0040 (size: 0x10)
    class UEMSInfoSaveGame* CachedSlotInfoSave;                                       // 0x0050 (size: 0x8)
    class UEMSPersistentSaveGame* CachedPersistentSave;                               // 0x0058 (size: 0x8)
    class UEMSProfileSaveGame* CachedProfileSave;                                     // 0x0060 (size: 0x8)
    TMap<class FString, class UEMSCustomSaveGame*> CachedCustomSaves;                 // 0x0068 (size: 0x50)
    TArray<class AActor*> ActorList;                                                  // 0x00B8 (size: 0x10)

    void OuterActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
}; // Size: 0x1D0

class UEMSPersistentSaveGame : public USaveGame
{
    FSaveSlotInfo SlotInfo;                                                           // 0x0028 (size: 0x30)

}; // Size: 0x58

class UEMSPluginSettings : public UObject
{
    FString DefaultSaveGameName;                                                      // 0x0028 (size: 0x10)
    FSoftClassPath SlotInfoSaveGameClass;                                             // 0x0038 (size: 0x18)
    bool bPersistentPlayer;                                                           // 0x0050 (size: 0x1)
    bool bPersistentGameMode;                                                         // 0x0051 (size: 0x1)
    bool bAdvancedSpawnCheck;                                                         // 0x0052 (size: 0x1)
    bool bSaveActorAffiliation;                                                       // 0x0053 (size: 0x1)
    bool bAutoSaveStructs;                                                            // 0x0054 (size: 0x1)
    bool bMultiThreadSaving;                                                          // 0x0055 (size: 0x1)
    ELoadMethod LoadMethod;                                                           // 0x0056 (size: 0x1)
    EFileSaveMethod FileNamingType;                                                   // 0x0057 (size: 0x1)
    bool bCopyPersistentSave;                                                         // 0x0058 (size: 0x1)
    FSoftClassPath PersistentSaveGameClass;                                           // 0x0060 (size: 0x18)
    FSoftClassPath ProfileSaveGameClass;                                              // 0x0078 (size: 0x18)

}; // Size: 0x90

class UEMSProfileSaveGame : public USaveGame
{
}; // Size: 0x28

#endif
