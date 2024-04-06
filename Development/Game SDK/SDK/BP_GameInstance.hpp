#ifndef UE4SS_SDK_BP_GameInstance_HPP
#define UE4SS_SDK_BP_GameInstance_HPP

class UBP_GameInstance_C : public UCGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<int32> SessionIDs;
    TArray<FString> SteamIDs;
    FString GameVersion;
    FString ModBridgeVersion;
    class USaveGame_UserData_C* UserData;
    bool RemotePlayStarted;
    bool HasLocalPlayer;

    void RemoveSessionID(int32 Index);
    void AddSessionID(int32 SessionID, bool Remote?);
    void SaveUserData();
    void LoadUserData();
    void LoadMods();
    void ClearAndReloadInput();
    void AmbianceVolumeChanged(float NewValue);
    void MasterVolumeChanged(float NewValue);
    void MusicVolumeChanged(float NewValue);
    void GeneralVolumeChanged(float NewValue);
    void MachineryVolumeChanged(float NewValue);
    void PlayerVolumeChanged(float NewValue);
    void VehicleVolumeChanged(float NewValue);
    void WaterVolumeChanged(float NewValue);
    void GamepadIconsChanged(FString NewValue);
    void ExplosionVolumeChanged(float NewValue);
    void ReceiveInit();
    void MultiMonitorToggle(bool NewValue);
    void SetDLSSMode(int32 NewValue);
    void AutosaveChange(float NewValue);
    void ToggleCrouchChange(float NewValue);
    void ToggleSprintChange(float NewValue);
    void SubtitlesEnabledChanged(bool NewValue);
    void NPCVoicesChanged(float NewValue);
    void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
};

#endif
