#ifndef UE4SS_SDK_BP_StandingTorch_HPP
#define UE4SS_SDK_BP_StandingTorch_HPP

class ABP_StandingTorch_C : public ABP_ParentBuildLighting_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;

    void SetProxyCollisionVisibility();
    void ReceiveBeginPlay();
    void OverrideLightOn();
    void OverrideLightOff();
    void ActorLoaded();
    void ExecuteUbergraph_BP_StandingTorch(int32 EntryPoint);
};

#endif
