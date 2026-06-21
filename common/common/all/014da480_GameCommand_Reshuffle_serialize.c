// addr: 0x014da480
// name: GameCommand_Reshuffle_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_Reshuffle_serialize(void * this, void * stream) */

void __thiscall GameCommand_Reshuffle_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_Reshuffle block via the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_Reshuffle\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_Reshuffle\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

