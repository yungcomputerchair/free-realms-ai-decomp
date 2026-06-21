// addr: 0x01509400
// name: CommandObject_GameProperties_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_GameProperties_serialize(void * this, void * serializer) */

void __thiscall CommandObject_GameProperties_serialize(void *this,void *serializer)

{
  uint value;
  
                    /* Serializes/dumps CommandObject_GameProperties with property id, value object,
                       and add-token id/flag. Evidence is the class name and Property, Value, Add
                       Token labels. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_GameProperties\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"Property: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(serializer,"Value: ");
  (**(code **)(*(int *)((int)this + 0x120) + 0x28))(serializer);
  DebugStream_writeCString(serializer,"Add Token: ");
  if (*(int *)((int)this + 300) == 0) {
    value = 0;
  }
  else {
    value = PlayElement_getId();
  }
  Serializer_appendInteger(serializer,value);
  DebugStream_writeCString(serializer,"Ending CommandObject_GameProperties\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

