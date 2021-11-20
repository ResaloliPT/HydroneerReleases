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

void FS_StoredItem::AfterRead()
{
	READ_PTR_FULL(Item_7_A9C42C1946D765E5B6E452B61A5AA499, UClass);
	READ_PTR_FULL(Mesh_8_F28EE44843FD62D4516E8DBC0B176063, UStaticMesh);
}

void FS_StoredItem::BeforeDelete()
{
	DELE_PTR_FULL(Item_7_A9C42C1946D765E5B6E452B61A5AA499);
	DELE_PTR_FULL(Mesh_8_F28EE44843FD62D4516E8DBC0B176063);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
