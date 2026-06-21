// addr: 0x014e1030
// name: GameCommand_ButtonPressed_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ButtonPressed_writeDebug(void * this, void * debugStream) */

void __thiscall GameCommand_ButtonPressed_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for GameCommand_ButtonPressed, including button id, turn
                       number, and state, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_ButtonPressed\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Button ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"TurnNumber: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"State: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(debugStream,"Ending GameCommand_ButtonPressed\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

