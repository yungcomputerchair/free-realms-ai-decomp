// addr: 0x01501270
// name: CommandObject_ReadyCard_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_ReadyCard_serialize(void * this, void * stream) */

void __thiscall CommandObject_ReadyCard_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_ReadyCard block through the shared
                       SetProperty debug writer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_ReadyCard\n");
  CommandObject_SetProperty_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_ReadyCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

