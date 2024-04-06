#ifndef UE4SS_SDK_BP_VehicleStore_HPP
#define UE4SS_SDK_BP_VehicleStore_HPP

class ABP_VehicleStore_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* CurrencyTypeMesh;                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* VehicleMesh;                                          // 0x0240 (size: 0x8)
    class UAC_StoreFunctions_C* AC_StoreFunctions;                                    // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Bucket;                                               // 0x0258 (size: 0x8)
    class USphereComponent* CoinSphere;                                               // 0x0260 (size: 0x8)
    class UTextRenderComponent* Buy;                                                  // 0x0268 (size: 0x8)
    class UTextRenderComponent* PriceText;                                            // 0x0270 (size: 0x8)
    class UStaticMeshComponent* BuyButton;                                            // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0280 (size: 0x8)
    int32 Price;                                                                      // 0x0288 (size: 0x4)
    TArray<class ABP_Coin_C*> Coins;                                                  // 0x0290 (size: 0x10)
    TEnumAsByte<E_Vehicle::Type> Vehicle;                                             // 0x02A0 (size: 0x1)
    TArray<int32> HighlightArray;                                                     // 0x02A8 (size: 0x10)
    TEnumAsByte<E_CurrencyType::Type> Currency Type;                                  // 0x02B8 (size: 0x1)

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
}; // Size: 0x2B9

#endif
