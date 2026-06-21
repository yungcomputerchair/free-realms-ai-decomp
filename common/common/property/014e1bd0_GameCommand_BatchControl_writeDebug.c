// addr: 0x014e1bd0
// name: GameCommand_BatchControl_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_BatchControl_writeDebug(void * this, void * debugStream) */

void __thiscall GameCommand_BatchControl_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for GameCommand_BatchControl, including batch-control
                       status, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_BatchControl\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Batch control status: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"Ending GameCommand_BatchControl\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

