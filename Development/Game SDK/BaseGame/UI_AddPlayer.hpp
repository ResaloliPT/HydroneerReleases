#ifndef UE4SS_SDK_UI_AddPlayer_HPP
#define UE4SS_SDK_UI_AddPlayer_HPP

class UUI_AddPlayer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UH_ButtonWood1_C* H_ButtonWood1_InvitePlayer;                               // 0x0268 (size: 0x8)
    class UH_ButtonWood2_C* H_ButtonWood2_AddLocalPlayer;                             // 0x0270 (size: 0x8)
    class UH_ButtonWood2_C* H_ButtonWood2_RemoteLocalPlayer;                          // 0x0278 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_AddRemoveLocalPlayer;                       // 0x0280 (size: 0x8)

    void CheckCanEnable();
    void Construct();
    void BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_AddPlayer(int32 EntryPoint);
}; // Size: 0x288

#endif
