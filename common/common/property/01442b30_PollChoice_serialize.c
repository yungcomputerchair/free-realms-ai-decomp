// addr: 0x01442b30
// name: PollChoice_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollChoice_serialize(void * this, void * stream) */

void __thiscall PollChoice_serialize(void *this,void *stream)

{
                    /* Writes a PollChoice record with its ids, choice text/string member, and two
                       trailing integer fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PollChoice\n");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendString(stream,(void *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

