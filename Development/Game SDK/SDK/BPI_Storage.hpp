#ifndef UE4SS_SDK_BPI_Storage_HPP
#define UE4SS_SDK_BPI_Storage_HPP

class IBPI_Storage_C : public IInterface
{

    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ItemStored(class ABP_ParentItem_C* Item);
};

#endif
