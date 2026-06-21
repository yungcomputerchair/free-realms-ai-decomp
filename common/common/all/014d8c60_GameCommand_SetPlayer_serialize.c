// addr: 0x014d8c60
// name: GameCommand_SetPlayer_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetPlayer_serialize(void * this, void * stream) */

void __thiscall GameCommand_SetPlayer_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_SetPlayer block using the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_SetPlayer\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_SetPlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

