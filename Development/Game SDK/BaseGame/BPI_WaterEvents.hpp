#ifndef UE4SS_SDK_BPI_WaterEvents_HPP
#define UE4SS_SDK_BPI_WaterEvents_HPP

class IBPI_WaterEvents_C : public IInterface
{

    void HasWater();
    void HasNoWater();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
}; // Size: 0x28

#endif
