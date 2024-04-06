#ifndef UE4SS_SDK_BP_GameInstance_HPP
#define UE4SS_SDK_BP_GameInstance_HPP

class UBP_GameInstance_C : public UCGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01A8 (size: 0x8)
    TArray<int32> SessionIDs;                                                         // 0x01B0 (size: 0x10)
    TArray<FString> SteamIDs;                                                         // 0x01C0 (size: 0x10)
    FString GameVersion;                                                              // 0x01D0 (size: 0x10)
    FString ModBridgeVersion;                                                         // 0x01E0 (size: 0x10)
    class USaveGame_UserData_C* UserData;                                             // 0x01F0 (size: 0x8)
    bool RemotePlayStarted;                                                           // 0x01F8 (size: 0x1)
    bool HasLocalPlayer;                                                              // 0x01F9 (size: 0x1)
    FString SaveSlot;                                                                 // 0x0200 (size: 0x10)
    FS_TempSaveMenuInfo TempSaveMenuInfo;                                             // 0x0210 (size: 0x18)
    bool WorldTransition;                                                             // 0x0228 (size: 0x1)
    TSubclassOf<class UUserWidget> LoadingScreenClass;                                // 0x0230 (size: 0x8)

    void RemoveSessionID(int32 Index);
    void AddSessionID(int32 SessionID, bool Remote?);
    void SaveUserData();
    void LoadUserData();
    void LoadMods();
    void ClearAndReloadInput();
    void MasterVolumeChanged(float NewValue);
    void AmbianceVolumeChanged(float NewValue);
    void GeneralVolumeChanged(float NewValue);
    void MachineryVolumeChanged(float NewValue);
    void PlayerVolumeChanged(float NewValue);
    void VehicleVolumeChanged(float NewValue);
    void MusicVolumeChanged(float NewValue);
    void WaterVolumeChanged(float NewValue);
    void GamepadIconsChanged(FString NewValue);
    void ReceiveInit();
    void ExplosionVolumeChanged(float NewValue);
    void MultiMonitorToggle(bool NewValue);
    void SetDLSSMode(int32 NewValue);
    void AutosaveChange(float NewValue);
    void ToggleCrouchChange(float NewValue);
    void ToggleSprintChange(float NewValue);
    void SubtitlesEnabledChanged(bool NewValue);
    void NPCVoicesChanged(float NewValue);
    void SetMaxFPS(int32 NewValue);
    void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
}; // Size: 0x238

#endif
