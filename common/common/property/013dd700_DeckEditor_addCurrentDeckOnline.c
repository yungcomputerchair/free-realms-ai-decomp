// addr: 0x013dd700
// name: DeckEditor_addCurrentDeckOnline
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckEditor_addCurrentDeckOnline(void * this, void * errorOut) */

bool __thiscall DeckEditor_addCurrentDeckOnline(void *this,void *errorOut)

{
  bool bVar1;
  void *deck;
  void *this_00;
  
                    /* Adds the current deck as an online deck unless it is missing or read-only,
                       writing user-facing error text when invalid. */
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (errorOut,"Invalid deck!",0xd);
    return false;
  }
  bVar1 = NamedProperty_isNameMutable(*(void **)((int)this + 0xc));
  if (bVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (errorOut,"Deck is read-only!",0x12);
    return false;
  }
  deck = (void *)(**(code **)(**(int **)((int)this + 0xc) + 0x74))();
  this_00 = (void *)FUN_012aab80();
  DeckDB_addOnlineDeck(this_00,deck);
  *(undefined1 *)((int)this + 9) = 0;
  return true;
}

