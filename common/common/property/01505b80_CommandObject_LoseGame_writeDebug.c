// addr: 0x01505b80
// name: CommandObject_LoseGame_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_LoseGame_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_LoseGame_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_LoseGame, including lose-game command
                       integer field, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_LoseGame\n");
  CommandObject_dump(this,debugStream);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"Ending CommandObject_LoseGame\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

