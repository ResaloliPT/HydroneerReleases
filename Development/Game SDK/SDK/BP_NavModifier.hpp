#ifndef UE4SS_SDK_BP_NavModifier_HPP
#define UE4SS_SDK_BP_NavModifier_HPP

class ABP_NavModifier_C : public AActor
{
    class UArrowComponent* Arrow;
    class UBoxComponent* Box;
    int32 Length;
    int32 Width;

    void UserConstructionScript();
};

#endif
