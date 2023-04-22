#ifndef UE4SS_SDK_AC_Highlight_HPP
#define UE4SS_SDK_AC_Highlight_HPP

class UAC_Highlight_C : public UActorComponent
{
    FAC_Highlight_COnHighlighted OnHighlighted;
    void OnHighlighted(class ABP_GameController_C* Controller);
    FAC_Highlight_COnUnhighlighted OnUnhighlighted;
    void OnUnhighlighted(class ABP_GameController_C* Controller);
    bool CanHighlight?;
    TArray<int32> HighlightArray;
    bool IsHighlighted?;

    void SetHighlight(class ABP_GameController_C* Controller);
    void ToggleHighlightSpecific(int32 StencilValue, bool Highlight?);
    void ForceStopHighlight(class ABP_GameController_C* Controller);
    void TogglePlayerHighlight(bool Highlight?, class ABP_GameController_C* Controller);
    void OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller);
    void OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller);
};

#endif
