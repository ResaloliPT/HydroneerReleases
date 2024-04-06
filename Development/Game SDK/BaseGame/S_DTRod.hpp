#ifndef UE4SS_SDK_S_DTRod_HPP
#define UE4SS_SDK_S_DTRod_HPP

struct FS_DTRod
{
    TEnumAsByte<E_Rod::Type> Type_25_0BC375574CB011A04F011A80D3B0B877;                // 0x0000 (size: 0x1)
    FText Name_14_A74E44DC49472A95C3508585ED17534C;                                   // 0x0008 (size: 0x18)
    FText Description_8_B6A3E9DD491F3B8D1CD0C28C9783C569;                             // 0x0020 (size: 0x18)
    int32 Luck_32_7BAF4BEF4D241621F91E3DA2BE535D24;                                   // 0x0038 (size: 0x4)
    class UStaticMesh* Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7;                      // 0x0040 (size: 0x8)
    FLinearColor LineColor_29_3D848A784259CAA3A1117DA7691D4EB1;                       // 0x0048 (size: 0x10)

}; // Size: 0x58

#endif
