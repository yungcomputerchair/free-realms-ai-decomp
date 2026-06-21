// addr: 0x0150db20
// name: CommandObject_Attach_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Attach_serialize(void * this, void * stream) */

void __thiscall CommandObject_Attach_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_Attach block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Attach\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_Attach\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

