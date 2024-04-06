#ifndef UE4SS_SDK_BP_ParentLogicExplosives_HPP
#define UE4SS_SDK_BP_ParentLogicExplosives_HPP

class ABP_ParentLogicExplosives_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UAC_Explosive_C* AC_Explosive;                                              // 0x04C0 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x04C8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04D0 (size: 0x8)

    void UserConstructionScript();
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_ParentLogicExplosives(int32 EntryPoint);
}; // Size: 0x4D8

#endif
