#ifndef UE4SS_SDK_ST_NPC_Request_HPP
#define UE4SS_SDK_ST_NPC_Request_HPP

struct FST_NPC_Request
{
    TSubclassOf<class ABP_ParentItem_C> Class_10_80A531EB46F42A7ED8590D93FB1F14F6;    // 0x0000 (size: 0x8)
    TArray<FST_NPC_RequestContents> Contents_14_BD5E0B104B757ED9799FEB9092188800;     // 0x0008 (size: 0x10)
    float RelativeProbability_23_833F8AD8445B579584293ABA5BBBCC28;                    // 0x0018 (size: 0x4)
    TSubclassOf<class ABP_ParentItem_C> RewardClass_27_DAB8154045BCA9D59E6400A11909536B; // 0x0020 (size: 0x8)
    int32 RewardAmount_24_899F79E442EF8D44271F2DAE131A9071;                           // 0x0028 (size: 0x4)
    bool RandomizeContents?_29_CA9F1A5A4050A4640A1006ABCFFCBAC9;                      // 0x002C (size: 0x1)
    int32 Difficulty_32_730A58094A80A7D9DB4C02A4553A17D7;                             // 0x0030 (size: 0x4)

}; // Size: 0x34

#endif
