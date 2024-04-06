#ifndef UE4SS_SDK_S_DTFish_HPP
#define UE4SS_SDK_S_DTFish_HPP

struct FS_DTFish
{
    TEnumAsByte<E_FishType::Type> Type_4_0BC375574CB011A04F011A80D3B0B877;            // 0x0000 (size: 0x1)
    FText Name_14_A74E44DC49472A95C3508585ED17534C;                                   // 0x0008 (size: 0x18)
    FText Description_8_B6A3E9DD491F3B8D1CD0C28C9783C569;                             // 0x0020 (size: 0x18)
    int32 Price_15_8AF2CC804DC195FE706F7997D3222616;                                  // 0x0038 (size: 0x4)
    class UStaticMesh* Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7;                      // 0x0040 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Icon_27_285E72E044FD266DDBFB0CA63A1E37D4;              // 0x0048 (size: 0x28)

}; // Size: 0x70

#endif
