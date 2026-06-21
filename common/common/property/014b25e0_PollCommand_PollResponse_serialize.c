// addr: 0x014b25e0
// name: PollCommand_PollResponse_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_PollResponse_serialize(void * this, void * stream) */

void __thiscall PollCommand_PollResponse_serialize(void *this,void *stream)

{
                    /* Writes PollCommand_PollResponse debug/serialized output, including base
                       PollCommand data and two integer response fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PollCommand_PollResponse\n");
  PollCommand_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending PollCommand_PollResponse\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

