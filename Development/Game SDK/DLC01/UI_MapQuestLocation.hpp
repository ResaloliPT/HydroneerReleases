#ifndef UE4SS_SDK_UI_MapQuestLocation_HPP
#define UE4SS_SDK_UI_MapQuestLocation_HPP

class UUI_MapQuestLocation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_QuestIcon;                                                    // 0x0268 (size: 0x8)
    class UImage* Image_QuestIconHighlight;                                           // 0x0270 (size: 0x8)
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;                                 // 0x0278 (size: 0x1)
    bool HasNote;                                                                     // 0x0279 (size: 0x1)

    void InitRequestColor();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_MapQuestLocation(int32 EntryPoint);
}; // Size: 0x27A

#endif
