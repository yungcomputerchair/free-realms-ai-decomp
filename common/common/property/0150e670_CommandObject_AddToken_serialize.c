// addr: 0x0150e670
// name: CommandObject_AddToken_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_AddToken_serialize(void * this, void * serializer) */

void __thiscall CommandObject_AddToken_serialize(void *this,void *serializer)

{
  uint value;
  
                    /* Serializes/dumps CommandObject_AddToken with value data, property id,
                       optional player id, and token type. Evidence is the CommandObject_AddToken
                       strings and field labels. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_AddToken\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"Value DAta: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(serializer);
  DebugStream_writeCString(serializer,"Property: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x128));
  DebugStream_writeCString(serializer,"Player: ");
  if (*(int *)((int)this + 300) == 0) {
    value = 0;
  }
  else {
    value = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(serializer,value);
  DebugStream_writeCString(serializer,"Token Type: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x130));
  DebugStream_writeCString(serializer,"Ending CommandObject_AddToken\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

