// addr: 0x013221b0
// name: PropertySerializer_writeCompositeValueD
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySerializer_writeCompositeValueD(int * serializer) */

void __fastcall PropertySerializer_writeCompositeValueD(int *serializer)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Uses the serializer vtable to obtain a typed value object, then emits it
                       through the common pair of helpers FUN_012a0710 and FUN_0129fea0. It differs
                       from neighboring thunks only in the vtable selector argument. */
  uVar1 = (**(code **)(*serializer + 0x50))(0xb);
  iVar2 = serializer[2];
  FUN_012a0710(uVar1,iVar2);
  RuleSetDB_getRuleSet(uVar1,iVar2);
  return;
}

