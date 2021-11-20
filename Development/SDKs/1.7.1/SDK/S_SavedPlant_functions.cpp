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

void FS_SavedPlant::AfterRead()
{
	READ_PTR_FULL(Class_4_E72AD27E43FB7D95CBD0E48ECF1A2A55, UClass);
}

void FS_SavedPlant::BeforeDelete()
{
	DELE_PTR_FULL(Class_4_E72AD27E43FB7D95CBD0E48ECF1A2A55);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
