// addr: 0x0152db50
// name: EventCommand_SendReadyStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendReadyStatus_serialize(void * this, void * serializer) */

void __thiscall EventCommand_SendReadyStatus_serialize(void *this,void *serializer)

{
                    /* Serializes SendReadyStatus by writing the SerializableIntField base and one
                       boolean/byte ready flag. Serializer begin/end virtual calls surround the
                       write. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

