// addr: 0x0150c610
// name: CommandObject_CreateCard_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CreateCard_serialize(void * this, void * serializer) */

void __thiscall CommandObject_CreateCard_serialize(void *this,void *serializer)

{
  uint value;
  
                    /* Serializes/dumps CommandObject_CreateCard with optional player id, new card
                       id, and a byte flag. Evidence is the CommandObject_CreateCard strings and
                       NewCardID label. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_CreateCard\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"Player: ");
  if (*(int *)((int)this + 0x11c) == 0) {
    value = 0;
  }
  else {
    value = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(serializer,value);
  DebugStream_writeCString(serializer,"NewCardID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x120));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x124));
  DebugStream_writeCString(serializer,"Ending CommandObject_CreateCard\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

