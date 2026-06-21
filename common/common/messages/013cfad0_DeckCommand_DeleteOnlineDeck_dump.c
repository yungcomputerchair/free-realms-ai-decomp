// addr: 0x013cfad0
// name: DeckCommand_DeleteOnlineDeck_dump
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_DeleteOnlineDeck_dump(void * thisObj, void * stream) */

void __thiscall DeckCommand_DeleteOnlineDeck_dump(void *this,void *thisObj,void *stream)

{
                    /* Emits a textual/debug dump for DeckCommand_DeleteOnlineDeck, including the
                       DeckCommand base and DeckID string field. Evidence is the Starting/Ending
                       DeckCommand_DeleteOnlineDeck literals and DeckID label. */
  (**(code **)(*(int *)this + 8))(thisObj);
  DebugStream_writeCString(thisObj,"Starting DeckCommand_DeleteOnlineDeck\n");
  DeckCommand_serialize(this,thisObj);
  DebugStream_writeCString(thisObj,"DeckID: ");
  Serializer_appendString(thisObj,(void *)((int)this + 4));
  DebugStream_writeCString(thisObj,"Ending DeckCommand_DeleteOnlineDeck\n");
  (**(code **)(*(int *)this + 0xc))(thisObj);
  return;
}

