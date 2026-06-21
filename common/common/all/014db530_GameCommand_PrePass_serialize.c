// addr: 0x014db530
// name: GameCommand_PrePass_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_PrePass_serialize(void * this, void * stream) */

void __thiscall GameCommand_PrePass_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_PrePass block via the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_PrePass\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_PrePass\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

