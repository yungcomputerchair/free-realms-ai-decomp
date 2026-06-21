// addr: 0x014fac50
// name: CommandObject_UnreadyCard_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_UnreadyCard_serialize(void * this, void * stream) */

void __thiscall CommandObject_UnreadyCard_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_UnreadyCard block using the
                       SetProperty debug writer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_UnreadyCard\n");
  CommandObject_SetProperty_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_UnreadyCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

