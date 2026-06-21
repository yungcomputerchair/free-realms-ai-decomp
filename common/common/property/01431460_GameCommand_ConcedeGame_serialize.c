// addr: 0x01431460
// name: GameCommand_ConcedeGame_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ConcedeGame_serialize(void * this, void * stream) */

void __thiscall GameCommand_ConcedeGame_serialize(void *this,void *stream)

{
                    /* Writes debug/serialized output for GameCommand_ConcedeGame, wrapping the base
                       GameCommand fields and a boolean/integer field between start/end markers. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_ConcedeGame\n");
  GameCommand_serialize(this,stream);
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_ConcedeGame\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

