// addr: 0x014e1640
// name: GameCommand_BeginCardPlayed_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_BeginCardPlayed_writeDebug(void * this, void * debugStream)
    */

void __thiscall GameCommand_BeginCardPlayed_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for GameCommand_BeginCardPlayed, including card id,
                       bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_BeginCardPlayed\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Card ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"Ending GameCommand_BeginCardPlayed\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

