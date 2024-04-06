#ifndef UE4SS_SDK_BP_SledCart_HPP
#define UE4SS_SDK_BP_SledCart_HPP

class ABP_SledCart_C : public ABP_ParentCart_C
{
    class UStaticMeshComponent* SM_IceCartSkiRight;                                   // 0x0490 (size: 0x8)
    class UStaticMeshComponent* SM_IceCartSkiLeft;                                    // 0x0498 (size: 0x8)

    void CalculateWheelTurn(float DeltaSeconds);
}; // Size: 0x4A0

#endif
