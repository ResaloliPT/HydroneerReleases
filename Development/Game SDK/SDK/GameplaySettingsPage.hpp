#ifndef UE4SS_SDK_GameplaySettingsPage_HPP
#define UE4SS_SDK_GameplaySettingsPage_HPP

class UGameplaySettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_DropSwatches;
    class UDefaultRadioSelectSetting_C* RadioSelectSetting_DropColor;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_1;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_2;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_55;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_138;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_213;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_267;
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_319;

    void Construct();
    void LocationIndicatorSwatchSelected(FString Value);
    void ExecuteUbergraph_GameplaySettingsPage(int32 EntryPoint);
};

#endif
