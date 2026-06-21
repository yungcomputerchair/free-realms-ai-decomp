// addr: 0x015098e0
// name: CommandObject_EmitSound_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_EmitSound_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_EmitSound_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_EmitSound, including sound id,
                       bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_EmitSound\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_EmitSound\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

