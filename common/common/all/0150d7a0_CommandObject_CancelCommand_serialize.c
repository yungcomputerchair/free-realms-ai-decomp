// addr: 0x0150d7a0
// name: CommandObject_CancelCommand_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CancelCommand_serialize(void * this, void * stream) */

void __thiscall CommandObject_CancelCommand_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_CancelCommand block using the
                       embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_CancelCommand\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_CancelCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

