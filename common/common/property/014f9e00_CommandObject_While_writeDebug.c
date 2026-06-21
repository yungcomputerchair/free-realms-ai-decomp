// addr: 0x014f9e00
// name: CommandObject_While_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_While_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_While_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_While, including state-pushed flag,
                       bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_While\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"StatePushed: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x78));
  DebugStream_writeCString(debugStream,"Ending CommandObject_While\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

