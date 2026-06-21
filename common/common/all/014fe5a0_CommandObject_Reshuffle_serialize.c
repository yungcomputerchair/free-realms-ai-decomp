// addr: 0x014fe5a0
// name: CommandObject_Reshuffle_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Reshuffle_serialize(void * this, void * stream) */

void __thiscall CommandObject_Reshuffle_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_Reshuffle block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Reshuffle\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_Reshuffle\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

