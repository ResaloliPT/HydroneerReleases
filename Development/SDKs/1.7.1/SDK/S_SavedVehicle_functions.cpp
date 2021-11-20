// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FS_SavedVehicle::AfterRead()
{
	READ_PTR_FULL(Vehicle_12_8686FC6646E792BC5AC12B9CFF7173E0, UClass);
}

void FS_SavedVehicle::BeforeDelete()
{
	DELE_PTR_FULL(Vehicle_12_8686FC6646E792BC5AC12B9CFF7173E0);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
