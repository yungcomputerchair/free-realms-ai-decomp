// addr: 0x01322140
// name: PropertySerializer_writeCompositeValueA
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySerializer_writeCompositeValueA(int * serializer) */

void __fastcall PropertySerializer_writeCompositeValueA(int *serializer)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Obtains a typed writer/value object from the serializer vtable using selector
                       0x14, then passes it and serializer[2] through FUN_012a0710 and the
                       logging/output helper FUN_0129fea0. The exact property type is not
                       identified, so the name describes the common serialization behavior without
                       encoding the selector. */
  uVar1 = (**(code **)(*serializer + 0x50))(0x14);
  iVar2 = serializer[2];
  FUN_012a0710(uVar1,iVar2);
  RuleSetDB_getRuleSet(uVar1,iVar2);
  return;
}

