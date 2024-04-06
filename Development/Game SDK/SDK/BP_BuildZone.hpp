#ifndef UE4SS_SDK_BP_BuildZone_HPP
#define UE4SS_SDK_BP_BuildZone_HPP

class ABP_BuildZone_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ForSaleSign;
    class UTextRenderComponent* BuyText;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Bucket;
    class UAC_StoreFunctions_C* AC_StoreFunctions;
    class UTextRenderComponent* PriceText;
    class UStaticMeshComponent* Button;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    bool Bought?;
    class ABP_HydroVoxelWorld_C* VoxelWorlds;
    int32 LandPrice;
    FTransform Transform;
    FString DigSiteName;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void OnCompleted_1C72E9934A5DACF41B95399F1A84D70E();
    void ActorSaved();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorPreSave();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void HideSign();
    void FlashOverlaps();
    void BndEvt__BP_BuildZone_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_BuildZone_Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildZone(int32 EntryPoint);
};

#endif
