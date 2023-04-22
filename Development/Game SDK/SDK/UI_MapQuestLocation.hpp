#ifndef UE4SS_SDK_UI_MapQuestLocation_HPP
#define UE4SS_SDK_UI_MapQuestLocation_HPP

class UUI_MapQuestLocation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_QuestIcon;
    class UImage* Image_QuestIconHighlight;
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;

    void InitRequestColor();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_MapQuestLocation(int32 EntryPoint);
};

#endif
