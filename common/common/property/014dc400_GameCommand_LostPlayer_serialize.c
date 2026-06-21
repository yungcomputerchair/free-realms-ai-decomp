// addr: 0x014dc400
// name: GameCommand_LostPlayer_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_LostPlayer_serialize(void * this, void * stream) */

void __thiscall GameCommand_LostPlayer_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_LostPlayer debug/serialized output with base GameCommand
                       fields and an account id. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_LostPlayer\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Account ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_LostPlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

