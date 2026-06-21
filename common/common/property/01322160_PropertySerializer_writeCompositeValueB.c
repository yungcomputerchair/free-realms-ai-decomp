// addr: 0x01322160
// name: PropertySerializer_writeCompositeValueB
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySerializer_writeCompositeValueB(int * serializer) */

void __fastcall PropertySerializer_writeCompositeValueB(int *serializer)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Requests a typed value from vtable slot +0x50, then serializes/logs it with
                       the shared context at serializer[2]. This is one of several tiny property
                       serializer thunks differentiated only by their selector. */
  uVar1 = (**(code **)(*serializer + 0x50))(6);
  iVar2 = serializer[2];
  FUN_012a0710(uVar1,iVar2);
  RuleSetDB_getRuleSet(uVar1,iVar2);
  return;
}

