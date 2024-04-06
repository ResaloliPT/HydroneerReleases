#ifndef UE4SS_SDK_BP_ParentLogicExplosives_HPP
#define UE4SS_SDK_BP_ParentLogicExplosives_HPP

class ABP_ParentLogicExplosives_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Explosive_C* AC_Explosive;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UBoxComponent* X-Box;

    void UserConstructionScript();
    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_ParentLogicExplosives(int32 EntryPoint);
};

#endif
