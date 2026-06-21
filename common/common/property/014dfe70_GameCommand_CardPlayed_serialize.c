// addr: 0x014dfe70
// name: GameCommand_CardPlayed_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CardPlayed_serialize(void * this, void * stream) */

void __thiscall GameCommand_CardPlayed_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_CardPlayed debug/serialized output with origin card id,
                       origin instance ids, and target id. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_CardPlayed\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Origin Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Origin Instance ID (first): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Origin Instance ID (second): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"Target ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(stream,"Ending GameCommand_CardPlayed\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

