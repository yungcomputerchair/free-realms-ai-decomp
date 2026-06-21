// addr: 0x01322180
// name: PropertySerializer_writeCompositeValueC
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySerializer_writeCompositeValueC(int * serializer) */

void __fastcall PropertySerializer_writeCompositeValueC(int *serializer)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Fetches a selector-specific value object through the serializer vtable and
                       emits it using FUN_012a0710 followed by FUN_0129fea0 with serializer[2] as
                       context. The function is a compact serializer thunk. */
  uVar1 = (**(code **)(*serializer + 0x50))(7);
  iVar2 = serializer[2];
  FUN_012a0710(uVar1,iVar2);
  RuleSetDB_getRuleSet(uVar1,iVar2);
  return;
}

