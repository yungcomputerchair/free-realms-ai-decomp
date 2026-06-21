// addr: 0x015064d0
// name: CommandObject_IntroduceCard_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_IntroduceCard_serialize(void * this, void * stream) */

void __thiscall CommandObject_IntroduceCard_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_IntroduceCard block using the
                       embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_IntroduceCard\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_IntroduceCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

