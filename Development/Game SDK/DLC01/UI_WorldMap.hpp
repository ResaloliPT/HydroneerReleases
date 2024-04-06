#ifndef UE4SS_SDK_UI_WorldMap_HPP
#define UE4SS_SDK_UI_WorldMap_HPP

class UUI_WorldMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    class UImage* Image_Map;                                                          // 0x0270 (size: 0x8)
    class UUI_MapPlayerLocation_C* P1;                                                // 0x0278 (size: 0x8)
    class UUI_MapPlayerLocation_C* P2;                                                // 0x0280 (size: 0x8)
    class UUI_MapPlayerLocation_C* P3;                                                // 0x0288 (size: 0x8)
    class UUI_MapPlayerLocation_C* P4;                                                // 0x0290 (size: 0x8)
    class ABP_GameCharacter_C* Player;                                                // 0x0298 (size: 0x8)
    FTimerHandle LoopTimer;                                                           // 0x02A0 (size: 0x8)
    int32 PlayerIndex;                                                                // 0x02A8 (size: 0x4)
    class ABP_GameState_C* GameState;                                                 // 0x02B0 (size: 0x8)
    TArray<class UUI_MapQuestLocation_C*> RequestIcons;                               // 0x02B8 (size: 0x10)
    FTransform MapTransform;                                                          // 0x02D0 (size: 0x30)
    float MapWidth;                                                                   // 0x0300 (size: 0x4)

    void SetMapTexture(TSoftObjectPtr<UTexture2D> Texture);
    void TransformLocationToMap(FTransform Transform, float& X, float& Y, float& Yaw);
    void UpdateSelection(bool InUse?);
    void Loop();
    void Activate(int32 PlayerIndex);
    void Deactivate();
    void ExecuteUbergraph_UI_WorldMap(int32 EntryPoint);
}; // Size: 0x304

#endif
