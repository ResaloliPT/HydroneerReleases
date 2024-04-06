#ifndef UE4SS_SDK_BPI_Interact_HPP
#define UE4SS_SDK_BPI_Interact_HPP

class IBPI_Interact_C : public IInterface
{

    void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt?);
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
};

#endif
