// addr: 0x015354d0
// name: EventCommand_NextMatchingTime_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NextMatchingTime_serialize(void * this, void * serializer)
    */

void __thiscall EventCommand_NextMatchingTime_serialize(void *this,void *serializer)

{
                    /* Serializes NextMatchingTime by writing the SerializableIntField base followed
                       by two integer time fields. Serializer begin/end calls wrap the payload. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

