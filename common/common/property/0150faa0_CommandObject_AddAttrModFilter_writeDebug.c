// addr: 0x0150faa0
// name: CommandObject_AddAttrModFilter_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_AddAttrModFilter_writeDebug(void * this, void *
   debugStream) */

void __thiscall CommandObject_AddAttrModFilter_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_AddAttrModFilter, including value data
                       and property key, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_AddAttrModFilter\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(debugStream);
  DebugStream_writeCString(debugStream,"PropertyKey: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x128));
  DebugStream_writeCString(debugStream,"Ending CommandObject_AddAttrModFilter\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

