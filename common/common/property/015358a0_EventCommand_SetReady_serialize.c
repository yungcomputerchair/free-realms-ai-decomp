// addr: 0x015358a0
// name: EventCommand_SetReady_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SetReady_serialize(void * this, void * serializer) */

void __thiscall EventCommand_SetReady_serialize(void *this,void *serializer)

{
                    /* Serializes SetReady by writing the SerializableIntField base and a single
                       boolean/byte ready flag. The flag is stored in the byte initialized by the
                       SetReady constructor. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

