// addr: 0x014fc470
// name: CommandObject_SetProperty_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_SetProperty_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_SetProperty_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_SetProperty, including property id,
                       value data, and boolean flag, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_SetProperty\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  (**(code **)(*(int *)((int)this + 0x120) + 0x28))(debugStream);
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 300));
  DebugStream_writeCString(debugStream,"Ending CommandObject_SetProperty\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

