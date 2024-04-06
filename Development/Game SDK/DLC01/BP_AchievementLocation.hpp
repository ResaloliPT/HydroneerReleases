#ifndef UE4SS_SDK_BP_AchievementLocation_HPP
#define UE4SS_SDK_BP_AchievementLocation_HPP

class ABP_AchievementLocation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FString LocationActionName;                                                       // 0x0238 (size: 0x10)

    void BndEvt__BP_AchievementLocation_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_AchievementLocation(int32 EntryPoint);
}; // Size: 0x248

#endif
