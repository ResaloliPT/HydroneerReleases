﻿// Name: Hydroneer, Version: 1.7.1

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

void AArchVisCharacter::AfterRead()
{
	ACharacter::AfterRead();

}

void AArchVisCharacter::BeforeDelete()
{
	ACharacter::BeforeDelete();

}

void UArchVisCharMovementComponent::AfterRead()
{
	UCharacterMovementComponent::AfterRead();

}

void UArchVisCharMovementComponent::BeforeDelete()
{
	UCharacterMovementComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
