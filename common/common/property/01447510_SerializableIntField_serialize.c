// addr: 0x01447510
// name: SerializableIntField_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializableIntField_serialize(void * this, void * stream) */

void __thiscall SerializableIntField_serialize(void *this,void *stream)

{
                    /* Serializes a one-field payload through the stream vtable. It begins a write
                       scope, serializes the integer/member at this+4 with FUN_013c23f0, then closes
                       the scope. */
  (**(code **)(*(int *)this + 8))(stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

