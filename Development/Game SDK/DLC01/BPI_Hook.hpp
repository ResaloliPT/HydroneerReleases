#ifndef UE4SS_SDK_BPI_Hook_HPP
#define UE4SS_SDK_BPI_Hook_HPP

class IBPI_Hook_C : public IInterface
{

    void RemovePart(class ABP_ParentHook_C* Hook);
    void AttachPart(class ABP_ParentHook_C* Hook);
}; // Size: 0x28

#endif
