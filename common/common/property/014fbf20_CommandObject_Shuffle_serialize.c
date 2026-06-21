// addr: 0x014fbf20
// name: CommandObject_Shuffle_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Shuffle_serialize(void * this, void * serializer) */

void __thiscall CommandObject_Shuffle_serialize(void *this,void *serializer)

{
  uint value;
  
                    /* Serializes/dumps CommandObject_Shuffle with play area and optional player id.
                       Evidence is the Starting/Ending CommandObject_Shuffle strings and
                       PlayArea/Player labels. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_Shuffle\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"PlayArea: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(serializer,"Player: ");
  if (*(int *)((int)this + 0x120) == 0) {
    value = 0;
  }
  else {
    value = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(serializer,value);
  DebugStream_writeCString(serializer,"Ending CommandObject_Shuffle\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

