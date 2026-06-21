// addr: 0x01503240
// name: CommandObject_MultiPlayer_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_MultiPlayer_serialize(void * this, void * stream) */

void __thiscall CommandObject_MultiPlayer_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_MultiPlayer block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_MultiPlayer\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_MultiPlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

