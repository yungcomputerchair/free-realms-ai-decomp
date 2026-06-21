// addr: 0x013d0280
// name: DeckCommand_AddOnlineDeck_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_AddOnlineDeck_dump(void * this, void * debugStream) */

void __thiscall DeckCommand_AddOnlineDeck_dump(void *this,void *debugStream)

{
  void *size;
  
                    /* Dumps DeckCommand_AddOnlineDeck, including serialized deck length and byte
                       payload. Evidence is the 'Starting/Ending DeckCommand_AddOnlineDeck' and
                       SerializedDeck labels. */
  size = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting DeckCommand_AddOnlineDeck\n");
  DeckCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"SerializedDeckLength: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 4));
  DebugStream_writeCString(debugStream,"SerializedDeck: ");
  GrowableBuffer_append(debugStream,*(void **)((int)this + 8),*(void **)((int)this + 4),(int)size);
  DebugStream_writeCString(debugStream,"Ending DeckCommand_AddOnlineDeck\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

