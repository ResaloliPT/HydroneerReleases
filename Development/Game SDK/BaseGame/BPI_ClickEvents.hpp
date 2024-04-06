#ifndef UE4SS_SDK_BPI_ClickEvents_HPP
#define UE4SS_SDK_BPI_ClickEvents_HPP

class IBPI_ClickEvents_C : public IInterface
{

    void RMBUpWhileCarrying();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LMBUpWhileCarrying();
}; // Size: 0x28

#endif
