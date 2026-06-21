// addr: 0x015078a0
// name: CommandObject_InstallAction_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_InstallAction_writeDebug(void * this, void * debugStream)
    */

void __thiscall CommandObject_InstallAction_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_InstallAction, including installed
                       action id, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_InstallAction\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_InstallAction\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

