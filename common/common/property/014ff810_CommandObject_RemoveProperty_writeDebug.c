// addr: 0x014ff810
// name: CommandObject_RemoveProperty_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveProperty_writeDebug(void * this, void * debugStream)
    */

void __thiscall CommandObject_RemoveProperty_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_RemoveProperty, including value data,
                       remove-value data, and boolean flag, bracketed by Starting/Ending literals.
                        */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_RemoveProperty\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(debugStream);
  DebugStream_writeCString(debugStream,"RemoveValueData: ");
  (**(code **)(*(int *)((int)this + 300) + 0x28))(debugStream);
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x128));
  DebugStream_writeCString(debugStream,"Ending CommandObject_RemoveProperty\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

