#ifndef UE4SS_SDK_UI_AddPlayer_HPP
#define UE4SS_SDK_UI_AddPlayer_HPP

class UUI_AddPlayer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UH_ButtonWood1_C* H_ButtonWood1_InvitePlayer;
    class UH_ButtonWood2_C* H_ButtonWood2_AddLocalPlayer;
    class UH_ButtonWood2_C* H_ButtonWood2_RemoteLocalPlayer;
    class UWidgetSwitcher* WidgetSwitcher_AddRemoveLocalPlayer;

    void CheckCanEnable();
    void Construct();
    void BndEvt__UI_AddPlayer_H_ButtonWood1_C_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_AddPlayer_H_ButtonWood2_C_82_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_AddPlayer_H_ButtonWood2_RemoteLocalPlayer_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_AddPlayer(int32 EntryPoint);
};

#endif
