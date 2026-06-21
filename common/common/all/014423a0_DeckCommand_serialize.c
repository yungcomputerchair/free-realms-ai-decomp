// addr: 0x014423a0
// name: DeckCommand_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_serialize(void * this, void * stream) */

void __thiscall DeckCommand_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes the base DeckCommand block, delegating common fields
                       to NetworkCommand serialization. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting DeckCommand\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending DeckCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

