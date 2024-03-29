#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FGeometry
{
};

struct FInputEvent
{
};

struct FPointerEvent : public FInputEvent
{
};

struct FSlateColor
{
    FLinearColor SpecifiedColor;
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;

};

struct FMargin
{
    float Left;
    float Top;
    float Right;
    float Bottom;

};

struct FSlateBrush
{
    FVector2D ImageSize;
    FMargin Margin;
    FSlateColor TintColor;
    class UObject* ResourceObject;
    FName ResourceName;
    FBox2D UVRegion;
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;
    uint8 bIsDynamicallyLoaded;
    uint8 bHasUObject;

};

struct FFocusEvent
{
};

struct FKeyEvent : public FInputEvent
{
};

struct FMotionEvent : public FInputEvent
{
};

struct FCharacterEvent : public FInputEvent
{
};

struct FAnalogInputEvent : public FKeyEvent
{
};

struct FSlateWidgetStyle
{
};

class UFontBulkData : public UObject
{
};

class IFontFaceInterface : public IInterface
{
};

class IFontProviderInterface : public IInterface
{
};

class USlateTypes : public UObject
{
};

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;

};

class USlateWidgetStyleContainerBase : public UObject
{
};

class ISlateWidgetStyleContainerInterface : public IInterface
{
};

struct FSlateSound
{
    class UObject* ResourceObject;

};

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;
    FSlateBrush Hovered;
    FSlateBrush Pressed;
    FSlateBrush Disabled;
    FMargin NormalPadding;
    FMargin PressedPadding;
    FSlateSound PressedSlateSound;
    FSlateSound HoveredSlateSound;

};

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;
    FSlateBrush UncheckedImage;
    FSlateBrush UncheckedHoveredImage;
    FSlateBrush UncheckedPressedImage;
    FSlateBrush CheckedImage;
    FSlateBrush CheckedHoveredImage;
    FSlateBrush CheckedPressedImage;
    FSlateBrush UndeterminedImage;
    FSlateBrush UndeterminedHoveredImage;
    FSlateBrush UndeterminedPressedImage;
    FMargin Padding;
    FSlateColor ForegroundColor;
    FSlateColor BorderBackgroundColor;
    FSlateSound CheckedSlateSound;
    FSlateSound UncheckedSlateSound;
    FSlateSound HoveredSlateSound;

};

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;
    FSlateBrush DownArrowImage;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateBrush MenuBorderBrush;
    FMargin MenuBorderPadding;

};

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;
    FSlateSound PressedSlateSound;
    FSlateSound SelectionChangeSlateSound;

};

struct FFontOutlineSettings
{
    int32 OutlineSize;
    bool bSeparateFillAlpha;
    bool bApplyOutlineToDropShadows;
    class UObject* OutlineMaterial;
    FLinearColor OutlineColor;

};

struct FSlateFontInfo
{
    class UObject* FontObject;
    class UObject* FontMaterial;
    FFontOutlineSettings OutlineSettings;
    FName TypefaceFontName;
    int32 Size;
    int32 LetterSpacing;

};

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;
    FSlateBrush VerticalBackgroundImage;
    FSlateBrush VerticalTopSlotImage;
    FSlateBrush HorizontalTopSlotImage;
    FSlateBrush VerticalBottomSlotImage;
    FSlateBrush HorizontalBottomSlotImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DraggedThumbImage;

};

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;
    FSlateBrush BackgroundImageHovered;
    FSlateBrush BackgroundImageFocused;
    FSlateBrush BackgroundImageReadOnly;
    FMargin Padding;
    FSlateFontInfo Font;
    FSlateColor ForegroundColor;
    FSlateColor BackgroundColor;
    FSlateColor ReadOnlyForegroundColor;
    FMargin HScrollBarPadding;
    FMargin VScrollBarPadding;
    FScrollBarStyle ScrollBarStyle;

};

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FSlateBrush BackgroundImageSelected;
    FSlateBrush BackgroundImageComposing;
    FSlateBrush CaretImage;

};

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;
    FSlateBrush FillImage;
    FSlateBrush MarqueeImage;

};

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;
    FSlateBrush LeftShadowBrush;
    FSlateBrush RightShadowBrush;

};

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;
    FSlateBrush HoveredBackgroundBrush;
    FSlateBrush ActiveFillBrush;
    FSlateBrush InactiveFillBrush;
    FSlateBrush ArrowsImage;
    FSlateColor ForegroundColor;
    FMargin TextPadding;

};

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;
    FSlateColor ColorAndOpacity;
    FVector2D ShadowOffset;
    FLinearColor ShadowColorAndOpacity;
    FSlateColor SelectedBackgroundColor;
    FLinearColor HighlightColor;
    FSlateBrush HighlightShape;
    FSlateBrush StrikeBrush;
    FSlateBrush UnderlineBrush;

};

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;
    FSlateBrush ActiveHoveredBrush;
    FSlateBrush ActiveBrush;
    FSlateBrush InactiveHoveredBrush;
    FSlateBrush InactiveBrush;
    FSlateBrush EvenRowBackgroundHoveredBrush;
    FSlateBrush EvenRowBackgroundBrush;
    FSlateBrush OddRowBackgroundHoveredBrush;
    FSlateBrush OddRowBackgroundBrush;
    FSlateColor TextColor;
    FSlateColor SelectedTextColor;
    FSlateBrush DropIndicator_Above;
    FSlateBrush DropIndicator_Onto;
    FSlateBrush DropIndicator_Below;
    FSlateBrush ActiveHighlightedBrush;
    FSlateBrush InactiveHighlightedBrush;

};

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;
    FSlateBrush ExpandedImage;
    float RolloutAnimationSeconds;

};

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;
    FSlateBrush HoveredBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush NormalThumbImage;
    FSlateBrush HoveredThumbImage;
    FSlateBrush DisabledThumbImage;
    float BarThickness;

};

struct FNavigationEvent : public FInputEvent
{
};

struct FFontData
{
    FString FontFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    int32 SubFaceIndex;
    class UObject* FontFaceAsset;

};

struct FTypefaceEntry
{
    FName Name;
    FFontData Font;

};

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;

};

struct FCompositeFallbackFont
{
    FTypeface Typeface;
    float ScalingFactor;

};

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;
    FString Cultures;

};

struct FCompositeFont
{
    FTypeface DefaultTypeface;
    FCompositeFallbackFont FallbackTypeface;
    TArray<FCompositeSubFont> SubTypefaces;

};

struct FCaptureLostEvent
{
};

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;
    FButtonStyle MaximizeButtonStyle;
    FButtonStyle RestoreButtonStyle;
    FButtonStyle CloseButtonStyle;
    FTextBlockStyle TitleTextStyle;
    FSlateBrush ActiveTitleBrush;
    FSlateBrush InactiveTitleBrush;
    FSlateBrush FlashTitleBrush;
    FSlateColor BackgroundColor;
    FSlateBrush OutlineBrush;
    FSlateColor OutlineColor;
    FSlateBrush BorderBrush;
    FSlateBrush BackgroundBrush;
    FSlateBrush ChildBackgroundBrush;

};

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;
    FSlateBrush BottomShadowBrush;

};

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;
    FSlateBrush NormalBrush;
    FSlateBrush ActiveBrush;
    FSlateBrush ColorOverlayTabBrush;
    FSlateBrush ColorOverlayIconBrush;
    FSlateBrush ForegroundBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush ContentAreaBrush;
    FSlateBrush TabWellBrush;
    FMargin TabPadding;
    float OverlapWidth;
    FSlateColor FlashColor;

};

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;
    FSlateBrush SortPrimaryDescendingImage;
    FSlateBrush SortSecondaryAscendingImage;
    FSlateBrush SortSecondaryDescendingImage;
    FSlateBrush NormalBrush;
    FSlateBrush HoveredBrush;
    FSlateBrush MenuDropdownImage;
    FSlateBrush MenuDropdownNormalBorderBrush;
    FSlateBrush MenuDropdownHoveredBorderBrush;

};

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;
    FSlateBrush HandleHighlightBrush;

};

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;
    FTableColumnHeaderStyle LastColumnStyle;
    FSplitterStyle ColumnSplitterStyle;
    FSlateBrush BackgroundBrush;
    FSlateColor ForegroundColor;

};

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;
    int16 Baseline;

};

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;
    FSlateBrush HighVolumeImage;
    FSlateBrush MidVolumeImage;
    FSlateBrush LowVolumeImage;
    FSlateBrush NoVolumeImage;
    FSlateBrush MutedImage;

};

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;
    FSlateFontInfo ActiveFontInfo;
    FSlateBrush UpArrowImage;
    FSlateBrush DownArrowImage;
    FSlateBrush GlassImage;
    FSlateBrush ClearImage;
    FMargin ImagePadding;
    bool bLeftAlignButtons;

};

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;
    FTextBlockStyle TextStyle;

};

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;
    FTextBlockStyle TextStyle;
    FMargin Padding;

};

#endif
