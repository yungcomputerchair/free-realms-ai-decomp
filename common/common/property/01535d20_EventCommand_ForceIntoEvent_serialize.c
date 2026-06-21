// addr: 0x01535d20
// name: EventCommand_ForceIntoEvent_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_ForceIntoEvent_serialize(void * this, void * serializer) */

void __thiscall EventCommand_ForceIntoEvent_serialize(void *this,void *serializer)

{
                    /* Serializes ForceIntoEvent by writing the SerializableIntField base, one
                       integer field, and one boolean/byte flag. The default flag is set to true by
                       the constructor. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

