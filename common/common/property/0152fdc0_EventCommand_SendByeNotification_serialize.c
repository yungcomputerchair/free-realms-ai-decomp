// addr: 0x0152fdc0
// name: EventCommand_SendByeNotification_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendByeNotification_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_SendByeNotification_serialize(void *this,void *serializer)

{
                    /* Serializes EventCommand_SendByeNotification: calls the base serializer then
                       appends two integer fields and a string/buffer member. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendString(serializer,(void *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

