// addr: 0x014dc9f0
// name: GameCommand_GameOverReached_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_GameOverReached_serialize(void * this, void * stream) */

void __thiscall GameCommand_GameOverReached_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_GameOverReached block via the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_GameOverReached\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_GameOverReached\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

