// addr: 0x0141a320
// name: GameCommand_ReadyForStartOfGame_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ReadyForStartOfGame_serialize(void * this, void * stream) */

void __thiscall GameCommand_ReadyForStartOfGame_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_ReadyForStartOfGame block using the
                       common GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_ReadyForStartOfGame\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_ReadyForStartOfGame\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

