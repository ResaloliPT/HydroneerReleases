#ifndef UE4SS_SDK_BP_VolcalidusElevator_HPP
#define UE4SS_SDK_BP_VolcalidusElevator_HPP

class ABP_VolcalidusElevator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* UnderPlatform;                                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* TopWood;                                              // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cog1;                                                 // 0x0250 (size: 0x8)
    class USceneComponent* Bottom;                                                    // 0x0258 (size: 0x8)
    class USceneComponent* Top;                                                       // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x0268 (size: 0x8)
    float Movement_Lerp_25F32372464303C6949298B9B7EE4215;                             // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Movement__Direction_25F32372464303C6949298B9B7EE4215; // 0x0274 (size: 0x1)
    class UTimelineComponent* Movement;                                               // 0x0278 (size: 0x8)

    void Movement__FinishedFunc();
    void Movement__UpdateFunc();
    void ReceiveBeginPlay();
    void MovePlatform(bool Direction);
    void BndEvt__BP_VolcalidusElevator_UnderPlatform_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_VolcalidusElevator(int32 EntryPoint);
}; // Size: 0x280

#endif
