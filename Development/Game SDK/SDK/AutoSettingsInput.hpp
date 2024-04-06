#ifndef UE4SS_SDK_AutoSettingsInput_HPP
#define UE4SS_SDK_AutoSettingsInput_HPP

#include "AutoSettingsInput_enums.hpp"

class UInputLabel : public UUserWidget
{
    int32 MappingGroup;
    FGameplayTag KeyGroup;
    bool bUsePlayerKeyGroup;
    FGameplayTagContainer IconTags;

    void UpdateLabel();
    void MappingsChanged(class APlayerController* Player);
};

class UActionLabel : public UInputLabel
{
    FName ActionName;
    TSubclassOf<class UKeyLabel> KeyLabelWidgetClass;
    TSubclassOf<class UWidget> KeySeparatorWidgetClass;
    class UPanelWidget* KeyContainer;
    class UKeyLabel* PrimaryKeyLabel;
    class UKeyLabel* ShiftLabel;
    class UKeyLabel* CtrlLabel;
    class UKeyLabel* AltLabel;
    class UKeyLabel* CmdLabel;
    class UWidget* ShiftSeparator;
    class UWidget* CtrlSeparator;
    class UWidget* AltSeparator;
    class UWidget* CmdSeparator;

};

struct FCapturedInput
{
    FInputChord Chord;
    float AxisScale;

};

class UInputMapping : public UUserWidget
{
    int32 MappingGroup;
    FGameplayTag KeyGroup;
    FGameplayTagContainer IconTags;
    class UBindCaptureButton* BindCaptureButton;

    void UpdateMapping();
    void UpdateLabel();
    void ChordCaptured(FCapturedInput CapturedInput);
    void BindChord(FCapturedInput CapturedInput);
};

class UActionMapping : public UInputMapping
{
    FName ActionName;
    class UActionLabel* ActionLabel;

};

struct FConfigActionKeyMapping : public FInputActionKeyMapping
{
    bool bIsDefault;

};

struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
{
    bool bIsDefault;

};

struct FInputMappingGroup
{
    TArray<FConfigActionKeyMapping> ActionMappings;
    TArray<FConfigAxisKeyMapping> AxisMappings;
    TArray<FConfigActionKeyMapping> UnboundActionMappings;
    TArray<FConfigAxisKeyMapping> UnboundAxisMappings;

};

struct FInputMappingLayout
{
    TArray<FInputMappingGroup> MappingGroups;

};

struct FInputMappingPreset
{
    FGameplayTag PresetTag;
    bool bUseDefaultMappings;
    FInputMappingLayout InputLayout;
    TArray<FInputMappingGroup> MappingGroups;

};

struct FMappingGroupLink
{
    TArray<int32> MappingGroups;

};

struct FKeyIconPair
{
    FKey Key;
    class UTexture* Icon;

};

struct FKeyIconSet
{
    FGameplayTagContainer Tags;
    TMap<class FKey, class TSoftObjectPtr<UTexture>> IconMap;
    TArray<FKeyIconPair> Icons;

};

struct FKeyFriendlyName
{
    FKey Key;
    FText FriendlyName;

};

struct FKeyGroup
{
    FGameplayTag KeyGroupTag;
    bool bUseGamepadKeys;
    bool bUseNonGamepadKeys;
    TArray<FKey> Keys;

};

struct FKeyScale
{
    FKey Key;
    float Scale;

};

struct FAxisAssociation
{
    FKey AxisKey;
    FKey AnalogKey;
    TArray<FKeyScale> ButtonKeys;
    TArray<FKeyScale> BooleanKeys;

};

class UAutoSettingsInputConfig : public UDeveloperSettings
{
    bool bAutoInitializePlayerInputOverrides;
    bool AllowModifierKeys;
    FText ShiftModifierOverrideText;
    FText CtrlModifierOverrideText;
    FText AltModifierOverrideText;
    FText CmdModifierOverrideText;
    TArray<FInputMappingPreset> InputPresets;
    bool AllowMultipleBindingsPerKey;
    TArray<FMappingGroupLink> MappingGroupLinks;
    TArray<FName> PreservedActions;
    TArray<FName> PreservedAxes;
    TArray<FKeyIconSet> KeyIconSets;
    TArray<FKeyFriendlyName> KeyFriendlyNames;
    TArray<FKeyGroup> KeyGroups;
    TArray<FKey> AllowedKeys;
    TArray<FKey> DisallowedKeys;
    TArray<FKey> BindingEscapeKeys;
    float MouseMoveCaptureDistance;
    TArray<FAxisAssociation> AxisAssociations;
    TArray<FName> BlacklistedActions;
    TArray<FName> BlacklistedAxes;

};

class IAutoSettingsInputConfigInterface : public IInterface
{
};

class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
{

    TArray<class UTexture*> LoadKeyIcons(FGameplayTagContainer KeyIconTags);
    FGameplayTag GetKeyGroupStatic(FKey Key);
    FText GetKeyFriendlyNameStatic(FKey Key);
};

class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{
};

class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
{
};

struct FPlayerInputMappings
{
    FString PlayerId;
    int32 PlayerIndex;
    FGameplayTag BasePresetTag;
    bool bNullBasePreset;
    FInputMappingLayout MappingOverrides;
    bool Custom;
    FInputMappingPreset Preset;
    FGameplayTag PlayerKeyGroup;

};

class IAutoSettingsPlayer : public IInterface
{

    void SaveInputMappings(FPlayerInputMappings InputMappings);
    FString GetUniquePlayerIdentifier();
    bool GetInputMappings(FPlayerInputMappings& InputMappings);
    FInputMappingPreset GetDefaultInputMappingPreset();
};

class UAxisLabel : public UInputLabel
{
    FName AxisName;
    float Scale;
    class UKeyLabel* KeyLabel;

};

class UAxisMapping : public UInputMapping
{
    FName AxisName;
    float Scale;
    class UAxisLabel* AxisLabel;

};

class UBindCaptureButton : public UUserWidget
{
    FGameplayTag KeyGroup;
    TSubclassOf<class UBindCapturePrompt> BindCapturePromptClass;
    int32 CapturePromptZOrder;
    class UBindCapturePrompt* Prompt;

    class UBindCapturePrompt* StartCapture();
    void InitializePrompt(class UBindCapturePrompt* PromptWidget);
    void ChordCaptured(FCapturedInput CapturedInput);
};

class UBindCapturePrompt : public UUserWidget
{
    bool bIgnoreGameViewportInputWhileCapturing;
    bool bRestrictKeyGroup;
    EBindingCaptureMode CaptureMode;
    FGameplayTag KeyGroup;
    FBindCapturePromptOnChordCaptured OnChordCaptured;
    void ChordCapturedEvent(FCapturedInput CapturedInput);
    FBindCapturePromptOnChordRejected OnChordRejected;
    void ChordRejectedEvent(FCapturedInput CapturedInput);
    FBindCapturePromptOnCapturePromptClosed OnCapturePromptClosed;
    void CapturePromptClosedEvent(bool bWasCancelled);
    TArray<FKey> KeysDown;
    bool PreviousIgnoreInput;
    FVector2D AccumulatedMouseDelta;

    bool IsKeyAllowed(FKey PrimaryKey);
    FGameplayTag GetKeyGroup();
    void Cancel();
};

class UGlobalKeyIconTagManager : public UObject
{
    FGlobalKeyIconTagManagerOnGlobalKeyIconTagsModified OnGlobalKeyIconTagsModified;
    void GlobalKeyIconTagsModifiedEvent();
    FGameplayTagContainer GlobalKeyIconTags;

    void SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags);
    class UTexture* GetIconForKey(FKey InKey, FGameplayTagContainer IconTags, float AxisScale);
};

class UInputMappingManager : public UEngineSubsystem
{
    FInputMappingManagerOnMappingsChanged OnMappingsChanged;
    void OnMappingsChanged(class APlayerController* Player);
    TArray<FPlayerInputMappings> PlayerInputOverrides;
    TArray<class APlayerController*> RegisteredPlayerControllers;

    void SetPlayerKeyGroupStatic(class APlayerController* Player, FGameplayTag KeyGroup);
    void SetPlayerInputPresetStatic(class APlayerController* Player, FInputMappingPreset Preset);
    void SetPlayerInputPresetByTag(class APlayerController* Player, FGameplayTag PresetTag);
    void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
    bool InitializePlayerInputOverridesStatic(class APlayerController* Player);
    void GetPlayerMappingsByKey(class APlayerController* Player, FKey Key, TArray<FInputActionKeyMapping>& Actions, TArray<FInputAxisKeyMapping>& Axes);
    FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);
    FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup);
    TArray<FInputAxisKeyMapping> GetPlayerAxisMappings(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputAxisKeyMapping GetPlayerAxisMapping(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, FName ActionName, int32 MappingGroup);
    TArray<FInputActionKeyMapping> GetPlayerActionMappings(class APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputActionKeyMapping GetPlayerActionMapping(class APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    TArray<FInputMappingPreset> GetDefaultInputPresets();
    void AddPlayerAxisOverrideStatic(class APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerAxisOverride(class APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerActionOverrideStatic(class APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerActionOverride(class APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
};

class UKeyLabel : public UUserWidget
{
    FText KeyInvalidText;
    FText LabelOverride;
    FKey Key;
    float AxisScale;
    FGameplayTagContainer IconTags;

    void UpdateKeyLabel();
    void OnGlobalKeyIconTagsModified();
    bool HasValidKey();
    bool HasIcon();
    ESlateVisibility GetIconVisibility();
    FSlateBrush GetIconBrush();
    class UTexture* GetIcon();
    ESlateVisibility GetDisplayNameVisibility();
    FText GetDisplayName();
};

#endif
