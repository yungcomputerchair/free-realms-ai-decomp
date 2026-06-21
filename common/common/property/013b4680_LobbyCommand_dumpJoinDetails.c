// addr: 0x013b4680
// name: LobbyCommand_dumpJoinDetails
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_dumpJoinDetails(void * this, void * serializer) */

void __thiscall LobbyCommand_dumpJoinDetails(void *this,void *serializer)

{
  void *pvVar1;
  
                    /* Dumps a derived lobby command by calling the base LobbyCommand_dump and
                       writing five string members plus a boolean-like byte. Evidence is repeated
                       Serializer_appendString calls after LobbyCommand_dump; nearby constructor
                       confirms LobbyCommand_Join is in this region but exact vtable is not shown
                       here. */
  pvVar1 = serializer;
  (**(code **)(*(int *)this + 8))();
  LobbyCommand_dump(this,serializer,pvVar1);
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendString(serializer,(void *)((int)this + 0x24));
  Serializer_appendString(serializer,(void *)((int)this + 0x40));
  Serializer_appendString(serializer,(void *)((int)this + 0x5c));
  Serializer_appendString(serializer,(void *)((int)this + 0x78));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x94));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

