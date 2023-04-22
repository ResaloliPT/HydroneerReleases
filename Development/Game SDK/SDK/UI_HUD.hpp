#ifndef UE4SS_SDK_UI_HUD_HPP
#define UE4SS_SDK_UI_HUD_HPP

class UUI_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SaveIconAnim;
    class UWidgetAnimation* ToolTipAnim;
    class UCanvasPanel* CanvasPanel_PlayerName;
    class UImage* Crosshair;
    class UDefaultActionLabel_C* DefaultActionLabel;
    class UHorizontalBox* GenBadgeBox;
    class UHTextBlockDELETE_C* GenToolTipDescrip;
    class UH_TextTitle_C* GenToolTipName;
    class UH_TextTitle_C* H_TextTitle_PlayerName;
    class UImage* Image_93;
    class UImage* Image_207;
    class UImage* Image_209;
    class UImage* Image_PlayerNameBG;
    class UHorizontalBox* StoreBadgeBox;
    class UHTextBlockDELETE_C* StoreItemDescription;
    class UHTextBlockDELETE_C* StoreItemName;
    class UHTextBlockDELETE_C* StoreItemPrice;
    class UCanvasPanel* StoreTooltipBox;
    class UH_TextBody_C* TutorialText;
    class UCanvasPanel* VehicleTipBox;
    bool GenToolTipOut?;

    void Callback_ToggleNamePlates(bool NewValue);
    void SetShowPlayerName();
    void AddBadges(TArray<TEnumAsByte<E_Badges::Type>>& Badges, class UPanelWidget* Target);
    void SetPriceBox(int32 Amount, FText Name, FText Description, const TArray<TEnumAsByte<E_Badges::Type>>& Badges, TEnumAsByte<E_CurrencyType::Type> Currency);
    void NewItemPickedUp(FText Name, FText Description, const TArray<TEnumAsByte<E_Badges::Type>>& Badges);
    void ItemDropped();
    void VehicleTipBoxShow(bool Show?);
    void SetCrosshair(TEnumAsByte<E_Crosshairs::Type> Type);
    void Saving?(bool Saving?);
    void ToggleCrosshair(bool Show?);
    void Construct();
    void ExecuteUbergraph_UI_HUD(int32 EntryPoint);
};

#endif
