#ifndef UE4SS_SDK_BP_Stove_HPP
#define UE4SS_SDK_BP_Stove_HPP

class ABP_Stove_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UParticleSystemComponent* Fire3;                                            // 0x0490 (size: 0x8)
    class UParticleSystemComponent* Fire2;                                            // 0x0498 (size: 0x8)
    class UParticleSystemComponent* Fire1;                                            // 0x04A0 (size: 0x8)
    class USphereComponent* Sphere_0;                                                 // 0x04A8 (size: 0x8)
    class UAudioComponent* FurnaceFireSound;                                          // 0x04B0 (size: 0x8)
    TArray<class ABP_ParentItem_C*> HotItems;                                         // 0x04B8 (size: 0x10)

    void OnCompleted_7911907C46E40AB44F6997A202CEF202();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void ActorLoaded();
    void ExecuteUbergraph_BP_Stove(int32 EntryPoint);
}; // Size: 0x4C8

#endif
