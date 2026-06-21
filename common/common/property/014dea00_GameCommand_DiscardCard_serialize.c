// addr: 0x014dea00
// name: GameCommand_DiscardCard_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DiscardCard_serialize(void * this, void * stream) */

void __thiscall GameCommand_DiscardCard_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_DiscardCard debug/serialized output with discarded card
                       id, two introduced instance ids, and a cost-effect flag. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_DiscardCard\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Discarded Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Introduced Instance ID (first): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Introduced Instance ID (second): ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"Cost Effect: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x4c));
  DebugStream_writeCString(stream,"Ending GameCommand_DiscardCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

