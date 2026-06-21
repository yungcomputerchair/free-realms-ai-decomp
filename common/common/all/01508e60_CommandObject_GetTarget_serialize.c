// addr: 0x01508e60
// name: CommandObject_GetTarget_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_GetTarget_serialize(void * this, void * stream) */

void __thiscall CommandObject_GetTarget_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_GetTarget block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_GetTarget\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_GetTarget\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

