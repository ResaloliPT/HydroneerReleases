#ifndef UE4SS_SDK_BP_Brazier_HPP
#define UE4SS_SDK_BP_Brazier_HPP

class ABP_Brazier_C : public ABP_ParentBuildLighting_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x04C8 (size: 0x8)

    void SetProxyCollisionVisibility();
    void ReceiveBeginPlay();
    void OverrideLightOn();
    void OverrideLightOff();
    void ActorLoaded();
    void ExecuteUbergraph_BP_Brazier(int32 EntryPoint);
}; // Size: 0x4D0

#endif
