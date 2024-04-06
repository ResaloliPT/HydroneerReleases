#ifndef UE4SS_SDK_UI_Badge_HPP
#define UE4SS_SDK_UI_Badge_HPP

class UUI_Badge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_1;
    TEnumAsByte<E_Badges::Type> Badge;

    void Construct();
    void ExecuteUbergraph_UI_Badge(int32 EntryPoint);
};

#endif
