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

void UChaosSolver::AfterRead()
{
	UObject::AfterRead();

}

void UChaosSolver::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AChaosSolverActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpriteComponent, UBillboardComponent);
}

void AChaosSolverActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpriteComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
