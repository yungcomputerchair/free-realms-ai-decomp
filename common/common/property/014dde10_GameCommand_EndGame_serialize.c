// addr: 0x014dde10
// name: GameCommand_EndGame_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_EndGame_serialize(void * this, void * stream) */

void __thiscall GameCommand_EndGame_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_EndGame debug/serialized output with base GameCommand
                       fields and a trailing boolean/integer result flag. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_EndGame\n");
  GameCommand_serialize(this,stream);
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_EndGame\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

