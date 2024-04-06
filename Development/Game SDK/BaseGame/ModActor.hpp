#ifndef UE4SS_SDK_ModActor_HPP
#define UE4SS_SDK_ModActor_HPP

class AModActor_C : public ABP_ModActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UUI_Test_C* UIRef;                                                          // 0x0288 (size: 0x8)
    bool bUIVisible;                                                                  // 0x0290 (size: 0x1)

    void PreBeginPlay();
    void PostBeginPlay();
    void ModMenuButtonPressed(int32 BtnIdx);
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x291

#endif
