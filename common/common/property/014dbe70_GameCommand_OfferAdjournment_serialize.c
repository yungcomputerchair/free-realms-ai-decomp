// addr: 0x014dbe70
// name: GameCommand_OfferAdjournment_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OfferAdjournment_serialize(void * this, void * stream) */

void __thiscall GameCommand_OfferAdjournment_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_OfferAdjournment debug/serialized output with the base
                       GameCommand fields and a message field. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_OfferAdjournment\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Message: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_OfferAdjournment\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

