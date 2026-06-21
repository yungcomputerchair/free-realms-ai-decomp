// addr: 0x014071f0
// name: AccountCommand_serializeStringIntList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_serializeStringIntList(void * this, void * serializer) */

void __thiscall AccountCommand_serializeStringIntList(void *this,void *serializer)

{
  int iVar1;
  int iVar2;
  void *serializer_00;
  
                    /* Serializes an AccountCommand-derived object by writing the base
                       AccountCommand, a count/int field, then iterating a tree/list of string plus
                       integer entries. Evidence is AccountCommand_serialize, string serialization,
                       integer append, and iterator advancement. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  iVar1 = **(int **)((int)this + 0x1c);
  while( true ) {
    iVar2 = *(int *)((int)this + 0x1c);
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if (iVar1 == iVar2) break;
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)this + 0x1c)) {
      FUN_00d83c2d();
    }
    Serializer_appendString(serializer,(void *)(iVar1 + 0xc));
    if (iVar1 == *(int *)((int)this + 0x1c)) {
      FUN_00d83c2d();
    }
    Serializer_appendInteger(serializer,*(uint *)(iVar1 + 0x28));
    FUN_0131d920();
  }
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

