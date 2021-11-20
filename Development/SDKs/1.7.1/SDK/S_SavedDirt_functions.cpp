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

void FS_SavedDirt::AfterRead()
{
	READ_PTR_FULL(Item_11_1F85D05B4280BC5D178F66A0E8252E5A, UClass);
}

void FS_SavedDirt::BeforeDelete()
{
	DELE_PTR_FULL(Item_11_1F85D05B4280BC5D178F66A0E8252E5A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
