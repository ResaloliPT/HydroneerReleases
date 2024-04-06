#ifndef UE4SS_SDK_BP_NavModifier_HPP
#define UE4SS_SDK_BP_NavModifier_HPP

class ABP_NavModifier_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    int32 Length;                                                                     // 0x0230 (size: 0x4)
    int32 Width;                                                                      // 0x0234 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x238

#endif
