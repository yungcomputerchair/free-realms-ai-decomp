// addr: 0x01509cc0
// name: CommandObject_DummyEvent_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DummyEvent_serialize(void * this, void * stream) */

void __thiscall CommandObject_DummyEvent_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_DummyEvent block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_DummyEvent\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_DummyEvent\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

