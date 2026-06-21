// addr: 0x01508a90
// name: CommandObject_GetTopCard_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_GetTopCard_serialize(void * this, void * stream) */

void __thiscall CommandObject_GetTopCard_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_GetTopCard block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_GetTopCard\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_GetTopCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

