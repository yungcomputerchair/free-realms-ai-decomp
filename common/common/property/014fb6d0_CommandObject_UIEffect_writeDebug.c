// addr: 0x014fb6d0
// name: CommandObject_UIEffect_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_UIEffect_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_UIEffect_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_UIEffect, including UI effect command
                       integer field, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_UIEffect\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_UIEffect\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

