#ifndef UE4SS_SDK_GM_Hydroneer_HPP
#define UE4SS_SDK_GM_Hydroneer_HPP

class AGM_Hydroneer_C : public AGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    bool InGame?;                                                                     // 0x0318 (size: 0x1)
    class UUI_MainMenu_C* UI_MainMenu;                                                // 0x0320 (size: 0x8)
    FGM_Hydroneer_COnPlayerAdded OnPlayerAdded;                                       // 0x0328 (size: 0x10)
    void OnPlayerAdded();
    FGM_Hydroneer_COnPlayerRemoved OnPlayerRemoved;                                   // 0x0338 (size: 0x10)
    void OnPlayerRemoved();
    bool NPCTalking?;                                                                 // 0x0348 (size: 0x1)
    FTimerHandle ResourceRemoverTimerHandle;                                          // 0x0350 (size: 0x8)
    bool ClearResources;                                                              // 0x0358 (size: 0x1)
    FTransform DefaultPlayerLocation;                                                 // 0x0360 (size: 0x30)
    TEnumAsByte<E_GameType::Type> GameType;                                           // 0x0390 (size: 0x1)
    TSubclassOf<class UUserWidget> LoadingScreenClass;                                // 0x0398 (size: 0x8)
    class UUserWidget* LoadingScreen;                                                 // 0x03A0 (size: 0x8)
    FGM_Hydroneer_COnPlayerStart OnPlayerStart;                                       // 0x03A8 (size: 0x10)
    void OnPlayerStart(class APlayerController* PlayerController);

    void TryBackupSave();
    bool IsSaveSlotCorrupted();
    void ToggleLoadingScreen(bool Show);
    void SetCurrentGameType();
    void RequestDevTool(class UCanvasPanel* Canvas);
    void GamestateNewGame();
    void DetermineCanAchieve();
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
    void ContinueGame(bool Creative?, bool CloudSaving?, bool ClearResources?, FString Slot);
    void NewGame();
    void DevNewGame();
    void ReceiveBeginPlay();
    void StartTutorial();
    void K2_OnRestartPlayer(class AController* NewPlayer);
    void ExecuteUbergraph_GM_Hydroneer(int32 EntryPoint);
    void OnPlayerStart__DelegateSignature(class APlayerController* PlayerController);
    void OnPlayerRemoved__DelegateSignature();
    void OnPlayerAdded__DelegateSignature();
}; // Size: 0x3B8

#endif
