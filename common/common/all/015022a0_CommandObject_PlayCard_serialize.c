// addr: 0x015022a0
// name: CommandObject_PlayCard_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_PlayCard_serialize(void * this, void * stream) */

void __thiscall CommandObject_PlayCard_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_PlayCard block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_PlayCard\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_PlayCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

