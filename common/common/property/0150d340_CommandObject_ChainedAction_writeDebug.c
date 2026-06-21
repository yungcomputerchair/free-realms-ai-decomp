// addr: 0x0150d340
// name: CommandObject_ChainedAction_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_ChainedAction_writeDebug(void * this, void * debugStream)
    */

void __thiscall CommandObject_ChainedAction_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_ChainedAction, including state-pushed
                       flag, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_ChainedAction\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"StatePushed: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x78));
  DebugStream_writeCString(debugStream,"Ending CommandObject_ChainedAction\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

