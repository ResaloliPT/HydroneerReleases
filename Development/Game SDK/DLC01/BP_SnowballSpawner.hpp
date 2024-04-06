#ifndef UE4SS_SDK_BP_SnowballSpawner_HPP
#define UE4SS_SDK_BP_SnowballSpawner_HPP

class ABP_SnowballSpawner_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    TArray<int32> Highlight Array;                                                    // 0x0240 (size: 0x10)

    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt?);
    void OverridePickupPressed(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_SnowballSpawner(int32 EntryPoint);
}; // Size: 0x250

#endif
