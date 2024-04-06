#ifndef UE4SS_SDK_BP_Hydroliner_WorldTravel_HPP
#define UE4SS_SDK_BP_Hydroliner_WorldTravel_HPP

class ABP_Hydroliner_WorldTravel_C : public ABP_Hydroliner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachineDrawer;                              // 0x0498 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachineHandle;                              // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* ShipTicketMachine;                                    // 0x04A8 (size: 0x8)
    float Timeline_0_Alpha_CA1F031D4A5277AF6E0212B48D825B86;                          // 0x04B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CA1F031D4A5277AF6E0212B48D825B86; // 0x04B4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x04B8 (size: 0x8)
    TSoftObjectPtr<UWorld> Level;                                                     // 0x04C0 (size: 0x28)
    TSoftClassPtr<UUserWidget> LoadingScreenClass;                                    // 0x04E8 (size: 0x28)

    void UpdateButtonState(uint8 State);
    void UpdateButtonState_0(uint8 State);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_4BADEF004E2F9ABFB3B7AB8AED03E8E4(UClass* Loaded);
    void OnLoaded_4BADEF004E2F9ABFB3B7AB8AE2AB7688(UClass* Loaded);
    void OnCompleted_86F3A9134BEFF967A462CF9774278354();
    void OnCompleted_82A65F894DE79A0895CC74B441E9F43B();
    void OnCompleted_3748CB564A71751221FA42B48EB73E31();
    void RouteComplete();
    void ButtonBeginTravel();
    void BeginTravel();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ButtonContinueTravel();
    void ExecuteUbergraph_BP_Hydroliner_WorldTravel(int32 EntryPoint);
}; // Size: 0x510

#endif
