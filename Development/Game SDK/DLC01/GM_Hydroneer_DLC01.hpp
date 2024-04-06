#ifndef UE4SS_SDK_GM_Hydroneer_DLC01_HPP
#define UE4SS_SDK_GM_Hydroneer_DLC01_HPP

class AGM_Hydroneer_DLC01_C : public AGM_Hydroneer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UAC_WeatherManager_C* AC_WeatherManager;                                    // 0x03C0 (size: 0x8)
    FString DLCSaveSlot;                                                              // 0x03C8 (size: 0x10)

    void GamestateNewGame();
    void SpawnBones();
    void InitGameplay(bool UseCameraLerp?);
    void Try Load Creative Mode();
    void SpawnInitialItems();
    void GetDLC01SaveSlot(FString& SaveSlot);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GM_Hydroneer_DLC01(int32 EntryPoint);
}; // Size: 0x3D8

#endif
