// addr: 0x013ce740
// name: Deck_setName
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deck_setName(void * this, void * value) */

void __thiscall Deck_setName(void *this,void *value)

{
                    /* Copies a std::string into Deck's first string field at offset 4. Evidence:
                       Deck ctor initializes this field and SelectTournamentDeck callers pass
                       deck/tournament name strings before deck operations. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             value,0,0xffffffff);
  return;
}

