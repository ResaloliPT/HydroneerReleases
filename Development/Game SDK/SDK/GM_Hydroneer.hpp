#ifndef UE4SS_SDK_GM_Hydroneer_HPP
#define UE4SS_SDK_GM_Hydroneer_HPP

class AGM_Hydroneer_C : public AGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool InGame?;
    class UUI_MainMenu_C* UI_MainMenu;
    TArray<FPublishedFileID> DisabledModIDs;
    FGM_Hydroneer_COnPlayerAdded OnPlayerAdded;
    void OnPlayerAdded();
    FGM_Hydroneer_COnPlayerRemoved OnPlayerRemoved;
    void OnPlayerRemoved();
    bool NPCTalking?;

    void LocationIndicatorColorChange(FString NewValue);
    bool CanAddPlayer?();
    class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const FTransform& SpawnTransform);
    class ABP_Character_HydroGuy_C* SpawnHydroguy(FTransform SpawnTransform, class AController* PlayerController);
    class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
    void UpdateMPC_Highlight();
    void SpawnInitialItems();
    void Try Load Creative Mode();
    void AddDebugPlayer(bool Add?);
    void RemovePlayer(const FSteamRemotePlaySessionDisconnected& Data);
    void RemoveLocalPlayer();
    void AddLocalPlayer();
    void AddRemotePlayer(const FSteamRemotePlaySessionConnected& Data);
    void AddPlayer(const FSteamRemotePlaySessionConnected& Data, bool isRemote, class ABP_GameController_C*& PlayerController);
    void MultiplayerStart();
    void InitGameplay(bool UseCameraLerp?);
    void InitMainMenu(bool SkipMainMenu?);
    void OnCompleted_04443C294CDB96DED26005BF09499B5C();
    void OnCompleted_3F15BCF84DC8092F8F59C584D5404462();
    void ContinueGame(bool Creative?, bool CloudSaving?);
    void NewGame();
    void DevNewGame();
    void ReceiveBeginPlay();
    void StartTutorial();
    void ExecuteUbergraph_GM_Hydroneer(int32 EntryPoint);
    void OnPlayerRemoved__DelegateSignature();
    void OnPlayerAdded__DelegateSignature();
};

#endif
