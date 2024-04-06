#ifndef UE4SS_SDK_BP_PipeCork_HPP
#define UE4SS_SDK_BP_PipeCork_HPP

class ABP_PipeCork_C : public ABP_ParentPipe_C
{
    class UBoxComponent* X+Box;                                                       // 0x04C0 (size: 0x8)

    bool IsValidClipActor(class ABP_ParentBuild_C* BuildItem);
    void UserConstructionScript();
}; // Size: 0x4C8

#endif
