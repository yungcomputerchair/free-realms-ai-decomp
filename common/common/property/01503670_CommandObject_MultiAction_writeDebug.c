// addr: 0x01503670
// name: CommandObject_MultiAction_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_MultiAction_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_MultiAction_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_MultiAction, including
                       mValidateNumActions flag, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_MultiAction\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"mValidateNumActions: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_MultiAction\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

