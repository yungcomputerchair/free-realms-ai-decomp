// addr: 0x013b3f50
// name: LobbyCommand_dumpWithIds
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_dumpWithIds(void * this, void * serializer) */

void __thiscall LobbyCommand_dumpWithIds(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Serializes/dumps a lobby command after the LobbyCommand base dump, writing
                       three integer fields, one string field, a boolean byte, and another integer.
                       Evidence is LobbyCommand_dump plus Serializer_appendInteger and
                       Serializer_appendString pattern; the exact derived class is not identified.
                        */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  LobbyCommand_dump(this,serializer,pvVar1);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendString(serializer,(void *)((int)this + 0x14));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x30));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x34));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

