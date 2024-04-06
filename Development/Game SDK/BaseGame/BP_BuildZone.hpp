#ifndef UE4SS_SDK_BP_BuildZone_HPP
#define UE4SS_SDK_BP_BuildZone_HPP

class ABP_BuildZone_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ForSaleSign;                                          // 0x0238 (size: 0x8)
    class UTextRenderComponent* BuyText;                                              // 0x0240 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Bucket;                                               // 0x0250 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0258 (size: 0x8)
    class UTextRenderComponent* PriceText;                                            // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0268 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0278 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0280 (size: 0x8)
    bool Bought?;                                                                     // 0x0288 (size: 0x1)
    class ABP_HydroVoxelWorld_C* VoxelWorld;                                          // 0x0290 (size: 0x8)
    int32 LandPrice;                                                                  // 0x0298 (size: 0x4)
    FTransform Transform;                                                             // 0x02A0 (size: 0x30)
    FString DigSiteName;                                                              // 0x02D0 (size: 0x10)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void OnCompleted_1C72E9934A5DACF41B95399F1A84D70E();
    void ActorPreSave();
    void ActorSaved();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void HideSign();
    void FlashOverlaps();
    void BndEvt__BP_BuildZone_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_BuildZone_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void ReceiveBeginPlay();
    void SetLOD();
    void ExecuteUbergraph_BP_BuildZone(int32 EntryPoint);
}; // Size: 0x2E0

#endif
