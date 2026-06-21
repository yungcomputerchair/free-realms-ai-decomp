// addr: 0x01322210
// name: PropertySerializer_writeCompositeValueE
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySerializer_writeCompositeValueE(int * serializer) */

void __fastcall PropertySerializer_writeCompositeValueE(int *serializer)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Serializer thunk that requests a typed value object via vtable slot +0x50 and
                       writes it using FUN_012a0710 and FUN_0129fea0. The only known caller is
                       FUN_01395560, but no concrete property type is exposed. */
  uVar1 = (**(code **)(*serializer + 0x50))(0x15);
  iVar2 = serializer[2];
  FUN_012a0710(uVar1,iVar2);
  RuleSetDB_getRuleSet(uVar1,iVar2);
  return;
}

