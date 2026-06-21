// addr: 0x014db9e0
// name: GameCommand_OfferDraw_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OfferDraw_serialize(void * this, void * stream) */

void __thiscall GameCommand_OfferDraw_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_OfferDraw block via the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_OfferDraw\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_OfferDraw\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

