// addr: 0x0152c610
// name: EventCommand_RespondEventSessionsOnDay_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionsOnDay_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RespondEventSessionsOnDay_serialize(void *this,void *serializer)

{
                    /* Serializes EventCommand_RespondEventSessionsOnDay: calls the base serializer
                       then appends three integer fields and an int-vector. */
  (**(code **)(*(int *)this + 8))(serializer);
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x14);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

