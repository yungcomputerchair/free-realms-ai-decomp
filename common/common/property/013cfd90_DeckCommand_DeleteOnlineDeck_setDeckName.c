// addr: 0x013cfd90
// name: DeckCommand_DeleteOnlineDeck_setDeckName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_DeleteOnlineDeck_setDeckName(void * this, void * deckName) */

void __thiscall DeckCommand_DeleteOnlineDeck_setDeckName(void *this,void *deckName)

{
                    /* Assigns the deck name string field used by DeckCommand_DeleteOnlineDeck. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             deckName,0,0xffffffff);
  return;
}

