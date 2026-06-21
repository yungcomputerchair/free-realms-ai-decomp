// addr: 0x014da780
// name: GameCommand_ReplaceCard_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ReplaceCard_serialize(void * this, void * stream) */

void __thiscall GameCommand_ReplaceCard_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_ReplaceCard debug/serialized output with replace card id,
                       introduced instance ids, and target card id after the base GameCommand
                       fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_ReplaceCard\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Replace Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Introduced Instance ID (first): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Introduced Instance ID (second): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"Target Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(stream,"Ending GameCommand_ReplaceCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

