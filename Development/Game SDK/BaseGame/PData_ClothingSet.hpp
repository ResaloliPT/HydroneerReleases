#ifndef UE4SS_SDK_PData_ClothingSet_HPP
#define UE4SS_SDK_PData_ClothingSet_HPP

class UPData_ClothingSet_C : public UPData_Customizable_Base_C
{
    FS_CharacterClothing Hat;                                                         // 0x0070 (size: 0x80)
    FS_CharacterClothing Shirt;                                                       // 0x00F0 (size: 0x80)
    FS_CharacterClothing Pants;                                                       // 0x0170 (size: 0x80)

    void GetIcon(uint8 Context, TSoftObjectPtr<UTexture2D>& Icon, bool& Display);
}; // Size: 0x1F0

#endif
