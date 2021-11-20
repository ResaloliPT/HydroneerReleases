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

void FS_DTRod::AfterRead()
{
	READ_PTR_FULL(Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7, UStaticMesh);
}

void FS_DTRod::BeforeDelete()
{
	DELE_PTR_FULL(Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
