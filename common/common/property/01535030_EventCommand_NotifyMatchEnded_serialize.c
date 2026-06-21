// addr: 0x01535030
// name: EventCommand_NotifyMatchEnded_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NotifyMatchEnded_serialize(void * this, void * serializer)
    */

void __thiscall EventCommand_NotifyMatchEnded_serialize(void *this,void *serializer)

{
                    /* Serializes NotifyMatchEnded by writing the SerializableIntField base followed
                       by three integer fields. The shape matches the three scalar members
                       initialized by its constructor. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

