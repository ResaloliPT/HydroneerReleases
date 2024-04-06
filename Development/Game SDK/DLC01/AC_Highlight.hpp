#ifndef UE4SS_SDK_AC_Highlight_HPP
#define UE4SS_SDK_AC_Highlight_HPP

class UAC_Highlight_C : public UActorComponent
{
    FAC_Highlight_COnHighlighted OnHighlighted;                                       // 0x00B0 (size: 0x10)
    void OnHighlighted(class ABP_GameController_C* Controller);
    FAC_Highlight_COnUnhighlighted OnUnhighlighted;                                   // 0x00C0 (size: 0x10)
    void OnUnhighlighted(class ABP_GameController_C* Controller);
    bool CanHighlight?;                                                               // 0x00D0 (size: 0x1)
    TArray<int32> HighlightArray;                                                     // 0x00D8 (size: 0x10)
    bool IsHighlighted?;                                                              // 0x00E8 (size: 0x1)

    void SetHighlight(class ABP_GameController_C* Controller);
    void ToggleHighlightSpecific(int32 StencilValue, bool Highlight?);
    void ForceStopHighlight(class ABP_GameController_C* Controller);
    void TogglePlayerHighlight(bool Highlight?, class ABP_GameController_C* Controller);
    void OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller);
    void OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller);
}; // Size: 0xE9

#endif
