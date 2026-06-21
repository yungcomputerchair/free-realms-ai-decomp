// addr: 0x013ce2c0
// name: Deck_getPropertyList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deck_getPropertyList(void * this) */

void * __fastcall Deck_getPropertyList(void *this)

{
                    /* Returns the address of the embedded member at offset +4 for Deck-like
                       objects. Evidence is the trivial this+4 accessor and callers such as
                       DeckDB_insertDeck, DeckDB_setDeckAndStore, and deck-select commands. */
  return (void *)((int)this + 4);
}

