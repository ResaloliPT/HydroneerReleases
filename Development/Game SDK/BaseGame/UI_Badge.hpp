#ifndef UE4SS_SDK_UI_Badge_HPP
#define UE4SS_SDK_UI_Badge_HPP

class UUI_Badge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0268 (size: 0x8)
    TEnumAsByte<E_Badges::Type> Badge;                                                // 0x0270 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_UI_Badge(int32 EntryPoint);
}; // Size: 0x271

#endif
