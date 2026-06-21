// addr: 0x014fdcb0
// name: CommandObject_Reveal_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Reveal_serialize(void * this, void * stream) */

void __thiscall CommandObject_Reveal_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_Reveal block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_Reveal\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_Reveal\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

