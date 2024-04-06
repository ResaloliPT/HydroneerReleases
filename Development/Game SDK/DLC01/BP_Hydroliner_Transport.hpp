#ifndef UE4SS_SDK_BP_Hydroliner_Transport_HPP
#define UE4SS_SDK_BP_Hydroliner_Transport_HPP

class ABP_Hydroliner_Transport_C : public ABP_Hydroliner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UBoxComponent* Trigger_Tickets;                                             // 0x0498 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachineHandle;                              // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachineDrawer;                              // 0x04A8 (size: 0x8)
    class UBoxComponent* Trigger_Vehicles;                                            // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachine;                                    // 0x04B8 (size: 0x8)
    float Timeline_TicketHandle_Alpha_D2C4203B441D428612F5B9814B4D1EE7;               // 0x04C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_TicketHandle__Direction_D2C4203B441D428612F5B9814B4D1EE7; // 0x04C4 (size: 0x1)
    class UTimelineComponent* Timeline_TicketHandle;                                  // 0x04C8 (size: 0x8)
    float Timeline_TicketDrawer_Alpha_2D1828164C20CA0E19E22C9B61080FA9;               // 0x04D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_TicketDrawer__Direction_2D1828164C20CA0E19E22C9B61080FA9; // 0x04D4 (size: 0x1)
    class UTimelineComponent* Timeline_TicketDrawer;                                  // 0x04D8 (size: 0x8)
    TArray<class ABP_ShipTicket_C*> Tickets;                                          // 0x04E0 (size: 0x10)
    TArray<class ABP_ParentVehicle_C*> Vehicles;                                      // 0x04F0 (size: 0x10)
    TArray<class ABP_ParentVehicle_C*> LockedVehicles;                                // 0x0500 (size: 0x10)
    int32 TicketCount;                                                                // 0x0510 (size: 0x4)
    bool TicketDrawerOpen;                                                            // 0x0514 (size: 0x1)

    void HandleEndOverlapPlayerBounds(class AActor* Actor, class USceneComponent* Component);
    void HandleBeginOverlapPlayerBounds(class AActor* Actor, class UPrimitiveComponent* Component);
    void InitTravel();
    void InitArrive();
    void UpdateButtonState(uint8 State);
    void UnlockVehicles();
    void LockVehicles();
    void Timeline_TicketDrawer__FinishedFunc();
    void Timeline_TicketDrawer__UpdateFunc();
    void Timeline_TicketHandle__FinishedFunc();
    void Timeline_TicketHandle__UpdateFunc();
    void BndEvt__BP_Hydroliner_Transport_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ButtonBeginTravel();
    void RouteComplete();
    void Travel();
    void StopReached();
    void ToggleTicketMachineDrawer(bool Open);
    void LoadComplete();
    void BeginTravel();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_Hydroliner_Transport(int32 EntryPoint);
}; // Size: 0x515

#endif
