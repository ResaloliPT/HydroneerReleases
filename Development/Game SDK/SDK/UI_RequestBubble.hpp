#ifndef UE4SS_SDK_UI_RequestBubble_HPP
#define UE4SS_SDK_UI_RequestBubble_HPP

class UUI_RequestBubble_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ScaleIn;
    class UCanvasPanel* CanvasPanel_Body;
    class UCanvasPanel* CanvasPanel_HasRequest;
    class UCanvasPanel* CanvasPanel_Main;
    class UHorizontalBox* HorizontalBox_RequiredResources;
    class UImage* Image;
    class UImage* Image_103;
    class UThrobber* Throbber_98;
    class UUI_RequestIcon_C* UI_RequestIcon_Main;
    class UUI_RequestIcon_C* UI_RequestIcon_Resource1;
    class UUI_RequestIcon_C* UI_RequestIcon_Resource2;
    class UUI_RequestIcon_C* UI_RequestIcon_Resource3;
    class UUI_RequestIcon_C* UI_RequestIcon_Reward;
    FUI_RequestBubble_COnHidden OnHidden;
    void OnHidden();

    void FindIcon(TSubclassOf<class ABP_ParentResource_C> Class, FString Type, TSoftObjectPtr<UTexture2D>& Icon);
    void TogglePendingRequestVisibility(bool Visible?);
    void ToggleContentsVisibility(bool Visible?);
    void SetRequestContents(FST_NPC_Request Request, TEnumAsByte<E_NPC_RequestType::Type> RequestType);
    void Finished_ED982C7B431213DDA9CC8E968283411F();
    void Play ScaleIn(TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode);
    void ExecuteUbergraph_UI_RequestBubble(int32 EntryPoint);
    void OnHidden__DelegateSignature();
};

#endif
