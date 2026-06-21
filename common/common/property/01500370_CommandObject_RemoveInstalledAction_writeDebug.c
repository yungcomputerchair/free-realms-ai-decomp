// addr: 0x01500370
// name: CommandObject_RemoveInstalledAction_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveInstalledAction_writeDebug(void * this, void *
   debugStream) */

void __thiscall CommandObject_RemoveInstalledAction_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_RemoveInstalledAction, including
                       installed action id, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_RemoveInstalledAction\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_RemoveInstalledAction\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

