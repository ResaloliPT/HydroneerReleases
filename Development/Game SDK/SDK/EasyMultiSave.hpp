#ifndef UE4SS_SDK_EasyMultiSave_HPP
#define UE4SS_SDK_EasyMultiSave_HPP

#include "EasyMultiSave_enums.hpp"

class IEMSActorSaveInterface : public IInterface
{

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorSaved();
    void ActorPreSave();
    void ActorLoaded();
};

class UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
{
    FEMSAsyncLoadGameOnCompleted OnCompleted;
    void AsyncLoadOutputPin();

    class UEMSAsyncLoadGame* AsyncLoadActors(class UObject* WorldContextObject, int32 Data, bool bFullReload);
};

class UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
{
    FEMSAsyncSaveGameOnCompleted OnCompleted;
    void AsyncSaveOutputPin();

    class UEMSAsyncSaveGame* AsyncSaveActors(class UObject* WorldContextObject, int32 Data);
};

class UEMSAsyncWait : public UBlueprintAsyncActionBase
{
    FEMSAsyncWaitOnCompleted OnCompleted;
    void AsyncWaitOutputPin();

    class UEMSAsyncWait* AsyncWaitForOperation(class UObject* WorldContextObject);
};

class UEMSCustomSaveGame : public USaveGame
{
    FString SaveGameName;
    bool bUseSaveSlot;

};

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
};

struct FSaveSlotInfo
{
    FString Name;
    FDateTime Timestamp;
    FName Level;
    TArray<FString> Players;

};

class UEMSInfoSaveGame : public USaveGame
{
    FSaveSlotInfo SlotInfo;

};

class UEMSObject : public UObject
{
    class UWorld* World;
    FString CurrentSaveGameName;
    FString CurrentSaveUserName;
    class UEMSInfoSaveGame* CachedSlotInfoSave;
    class UEMSPersistentSaveGame* CachedPersistentSave;
    class UEMSProfileSaveGame* CachedProfileSave;
    TMap<class FString, class UEMSCustomSaveGame*> CachedCustomSaves;
    TArray<class AActor*> ActorList;

    void OuterActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
};

class UEMSPersistentSaveGame : public USaveGame
{
    FSaveSlotInfo SlotInfo;

};

class UEMSPluginSettings : public UObject
{
    FString DefaultSaveGameName;
    FSoftClassPath SlotInfoSaveGameClass;
    bool bPersistentPlayer;
    bool bPersistentGameMode;
    bool bAdvancedSpawnCheck;
    bool bSaveActorAffiliation;
    bool bAutoSaveStructs;
    bool bMultiThreadSaving;
    ELoadMethod LoadMethod;
    EFileSaveMethod FileNamingType;
    bool bCopyPersistentSave;
    FSoftClassPath PersistentSaveGameClass;
    FSoftClassPath ProfileSaveGameClass;

};

class UEMSProfileSaveGame : public USaveGame
{
};

struct FPlayerArchive
{
};

struct FLevelArchive
{
};

struct FControllerSaveData
{
};

struct FPawnSaveData
{
};

struct FLevelScriptSaveData
{
};

struct FActorSaveData
{
};

struct FGameObjectSaveData
{
};

struct FComponentSaveData
{
};

#endif
