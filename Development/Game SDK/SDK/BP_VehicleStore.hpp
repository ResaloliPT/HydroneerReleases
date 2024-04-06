#ifndef UE4SS_SDK_BP_VehicleStore_HPP
#define UE4SS_SDK_BP_VehicleStore_HPP

class ABP_VehicleStore_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* CurrencyTypeMesh;
    class UStaticMeshComponent* VehicleMesh;
    class UAC_StoreFunctions_C* AC_StoreFunctions;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Bucket;
    class USphereComponent* CoinSphere;
    class UTextRenderComponent* Buy;
    class UTextRenderComponent* PriceText;
    class UStaticMeshComponent* BuyButton;
    class UStaticMeshComponent* StaticMesh3;
    int32 Price;
    TArray<class ABP_Coin_C*> Coins;
    TEnumAsByte<E_Vehicle::Type> Vehicle;
    TArray<int32> HighlightArray;
    TEnumAsByte<E_CurrencyType::Type> Currency Type;
    TSubclassOf<class ABP_ParentVehicle_C> VehicleClass;

    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void SpawnVehicle();
    void UserConstructionScript();
    void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt?);
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_VehicleStore(int32 EntryPoint);
};

#endif
