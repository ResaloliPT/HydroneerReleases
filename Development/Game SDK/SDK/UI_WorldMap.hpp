#ifndef UE4SS_SDK_UI_WorldMap_HPP
#define UE4SS_SDK_UI_WorldMap_HPP

class UUI_WorldMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_0;
    class UImage* Image_Map;
    class UUI_MapPlayerLocation_C* P1;
    class UUI_MapPlayerLocation_C* P2;
    class UUI_MapPlayerLocation_C* P3;
    class UUI_MapPlayerLocation_C* P4;
    class ABP_GameCharacter_C* Player;
    FTimerHandle LoopTimer;
    int32 PlayerIndex;
    class ABP_GameState_C* GameState;
    TArray<class UUI_MapQuestLocation_C*> RequestIcons;

    void TransformLocationToMap(FVector Location, float& X, float& Y);
    void UpdateSelection(bool InUse?);
    void Loop();
    void Activate(int32 PlayerIndex);
    void Deactivate();
    void ExecuteUbergraph_UI_WorldMap(int32 EntryPoint);
};

#endif
