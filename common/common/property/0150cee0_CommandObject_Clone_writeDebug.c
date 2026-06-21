// addr: 0x0150cee0
// name: CommandObject_Clone_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_Clone_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_Clone_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_Clone, including clone-card id,
                       bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_Clone\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"CloneCard: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_Clone\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

