#ifndef UE4SS_SDK_AutoSettings_HPP
#define UE4SS_SDK_AutoSettings_HPP

class UAutoSettingsConfig : public UDeveloperSettings
{
    FString SettingsIniName;
    FString SettingsSectionName;

};

class UAutoSettingWidget : public UUserWidget
{
    FName CVarName;
    TSubclassOf<class USettingValueMask> ValueMask;
    bool bAutoSave;
    bool bAutoApply;
    FGameplayTagContainer SettingTags;
    FString CurrentValue;
    bool bHasUnappliedChange;
    bool bHasUnsavedChange;
    bool bUpdatingSettingSelection;

    void UpdateSelection(FString Value);
    void Save();
    bool HasUnsavedChange();
    bool HasUnappliedChange();
    void Cancel();
    void ApplySettingValue(FString Value, bool bSaveIfPossible);
    void Apply();
};

class UToggleSetting : public UAutoSettingWidget
{

    void UpdateToggleState(bool State);
    void ToggleStateUpdated(bool State);
};

class UCheckBoxSetting : public UToggleSetting
{
    class UCheckBox* CheckBox;

    void CheckBoxStateChanged(bool IsChecked);
};

struct FSettingOption
{
    FText Label;
    FString Value;

};

class USelectSetting : public UAutoSettingWidget
{
    TArray<FSettingOption> Options;
    TSubclassOf<class USettingOptionFactory> OptionFactory;
    bool bUpdatingSettingOptions;

    void UpdateOptions(const TArray<FSettingOption>& InOptions);
    void RegenerateOptions();
};

class UComboBoxSetting : public USelectSetting
{
    class UComboBoxString* ComboBox;

    void ComboBoxSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
};

class UConsoleUtils : public UBlueprintFunctionLibrary
{

    void SetStringCVar(FName Name, FString Value);
    void SetIntCVar(FName Name, int32 Value);
    void SetFloatCVar(FName Name, float Value);
    void SetBoolCVar(FName Name, bool Value);
    bool IsCVarRegistered(FName Name);
    FString GetStringCVar(FName Name);
    int32 GetIntCVar(FName Name);
    float GetFloatCVar(FName Name);
    bool GetBoolCVar(FName Name);
};

class UCVarChangeListener : public UObject
{
};

class UCVarChangeListenerManager : public UObject
{
    TMap<class FName, class UCVarChangeListener*> Listeners;

    void AddStringCVarCallbackStatic(FName Name, FAddStringCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddIntCVarCallbackStatic(FName Name, FAddIntCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddFloatCVarCallbackStatic(FName Name, FAddFloatCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddBoolCVarCallbackStatic(FName Name, FAddBoolCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
};

class USliderSetting : public UAutoSettingWidget
{
    float LeftValue;
    float RightValue;

    void UpdateSliderValue(float NormalizedValue, float RawValue);
    void SliderValueUpdated(float NormalizedValue);
    bool ShouldSaveCurrentValue();
    float RawValueToNormalized(float RawValue);
    void OnSliderValueUpdated(float NormalizedValue, float RawValue);
    float NormalizedValueToRaw(float NormalizedValue);
    float ClampRawValue(float RawValue);
};

class UNativeSliderSetting : public USliderSetting
{
    class USlider* Slider;
    bool bMouseCaptureInProgress;

    void SliderValueChanged(float NewValue);
    void SliderMouseCaptureEnd();
    void SliderMouseCaptureBegin();
};

class URadioButton : public UUserWidget
{
    FRadioButtonOnSelected OnSelected;
    void RadioSelectedSignature(FString Value);
    FText Label;
    FString Value;
    bool Selected;

    void UpdateSelected(bool InSelected);
    void UpdateLabel(const FText& InLabel);
    void TriggerSelection();
    void SetValue(FString InValue);
    void SetSelected(bool InSelected);
    void SetLabel(FText InLabel);
    FString GetValue();
    bool GetSelected();
    FText GetLabel();
};

class URadioSelect : public UUserWidget
{
    TArray<FSettingOption> Options;
    TSubclassOf<class URadioButton> RadioButtonClass;
    FRadioSelectSelectionChangedEvent SelectionChangedEvent;
    void RadioSelectedSignature(FString Value);
    class UPanelWidget* ButtonContainer;
    TArray<class URadioButton*> RadioButtons;

    void SetOptions(TArray<FSettingOption> InOptions);
    void Select(FString Value);
    void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
    TArray<class URadioButton*> GetRadioButtonWidgets();
    TArray<FSettingOption> GetOptions();
    void ButtonSelected(FString Value);
};

class URadioSelectSetting : public USelectSetting
{
    TSubclassOf<class URadioButton> RadioButtonClass;
    class URadioSelect* RadioSelect;

    void RadioSelectionChanged(FString Value);
};

class USettingOptionFactory : public UObject
{

    TArray<FSettingOption> ConstructOptions();
};

class UResolutionOptionFactory : public USettingOptionFactory
{
};

class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
};

class USettingValueMask : public UObject
{

    FString RecombineValues(FString SettingValue, FString ConsoleValue);
    FString MaskValue(FString ConsoleValue);
};

class UResolutionValueMask : public USettingValueMask
{
};

class USettingContainerUtils : public UBlueprintFunctionLibrary
{

    void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    TArray<class UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
};

struct FAutoSettingData
{
    FName Key;
    FString Value;
    FGameplayTagContainer Tags;

};

class USettingsManager : public UEngineSubsystem
{
    FSettingsManagerOnSettingSaved OnSettingSaved;
    void OnSettingSaved(FAutoSettingData SettingData);
    FString IniFilename;

    void SaveSettingStatic(FAutoSettingData SettingData);
    void RegisterStringCVarSettingWithCallback(FName Name, FString DefaultValue, FString Help, FRegisterStringCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterStringCVarSetting(FName Name, FString DefaultValue, FString Help);
    void RegisterIntCVarSettingWithCallback(FName Name, int32 DefaultValue, FString Help, FRegisterIntCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterIntCVarSetting(FName Name, int32 DefaultValue, FString Help);
    void RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, FString Help, FRegisterFloatCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterFloatCVarSetting(FName Name, float DefaultValue, FString Help);
    void RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, FString Help, FRegisterBoolCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterBoolCVarSetting(FName Name, bool DefaultValue, FString Help);
    FString GetValue(FName Key, bool bPreferConfigValue);
    void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void ApplySettingStatic(FAutoSettingData SettingData);
};

class USpinner : public UUserWidget
{
    TArray<FSettingOption> Options;
    bool bAllowWrapping;
    FSpinnerSelectionChangedEvent SelectionChangedEvent;
    void SpinnerSelectionChanged(FString Value);

    void SelectValue(FString Value);
    void SelectIndex(int32 Index);
    void Previous();
    void OnSelectionChanged(FSettingOption SelectedOption);
    void Next();
    bool HasValidPrevious();
    bool HasValidNext();
    FSettingOption GetCurrentOption();
    int32 GetCurrentIndex();
};

class USpinnerSetting : public USelectSetting
{
    class USpinner* Spinner;

    void SpinnerSelectionChanged(FString Value);
};

class UWindowModeValueMask : public USettingValueMask
{
};

#endif
