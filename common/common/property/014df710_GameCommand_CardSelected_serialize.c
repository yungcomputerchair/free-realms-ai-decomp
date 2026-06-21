// addr: 0x014df710
// name: GameCommand_CardSelected_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CardSelected_serialize(void * this, void * stream) */

void __thiscall GameCommand_CardSelected_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_CardSelected debug/serialized output with selected card
                       id, instance ids, player id, and SelectSet flag. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_CardSelected\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Selected Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Selected Card Instance ID (first): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Selected Card Instance ID (second): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"Selected Card Player ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(stream,"SelectSet: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x34));
  DebugStream_writeCString(stream,"Ending GameCommand_CardSelected\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

