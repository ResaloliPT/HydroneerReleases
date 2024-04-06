#ifndef UE4SS_SDK_BP_SmallFurnace_HPP
#define UE4SS_SDK_BP_SmallFurnace_HPP

class ABP_SmallFurnace_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Fire3;
    class UParticleSystemComponent* Fire2;
    class UParticleSystemComponent* Fire1;
    class USphereComponent* Sphere_0;
    class UAudioComponent* FurnaceFireSound;
    TArray<class ABP_ParentItem_C*> HotItems;

    void OnCompleted_F891126646B2254A9EBB3F8644EA3E18();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void ActorLoaded();
    void ExecuteUbergraph_BP_SmallFurnace(int32 EntryPoint);
};

#endif
