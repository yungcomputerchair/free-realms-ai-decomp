// addr: 0x014e0500
// name: GameCommand_CardDeSelected_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CardDeSelected_serialize(void * this, void * stream) */

void __thiscall GameCommand_CardDeSelected_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_CardDeSelected debug/serialized output with base
                       GameCommand fields and the deselected card id. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_CardDeSelected\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"DeSelected Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_CardDeSelected\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

