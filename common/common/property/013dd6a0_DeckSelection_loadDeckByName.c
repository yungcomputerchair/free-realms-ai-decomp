// addr: 0x013dd6a0
// name: DeckSelection_loadDeckByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckSelection_loadDeckByName(void * this, void * deckDb, void * errorOut)
    */

bool __thiscall DeckSelection_loadDeckByName(void *this,void *deckDb,void *errorOut)

{
  code *pcVar1;
  int iVar2;
  
                    /* Looks up a deck by name/key in the deck database, stores the resulting deck
                       object on success, and reports "Error!" on failure. If a previous owned deck
                       object is present, it is deleted before the new deck pointer is installed and
                       a virtual notification is invoked. */
  FUN_012aab80(deckDb);
  iVar2 = DeckDB_getDeckByName(deckDb);
  if (iVar2 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (errorOut,"Error!",6);
    return false;
  }
  if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x18);
  *(int *)((int)this + 0xc) = iVar2;
  *(undefined1 *)((int)this + 9) = 0;
  (*pcVar1)();
  return true;
}

