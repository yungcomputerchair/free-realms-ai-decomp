// addr: 0x013dd760
// name: DeckProperty_validateMutableDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckProperty_validateMutableDeck(void * deckName, void * errorOut) */

bool DeckProperty_validateMutableDeck(void *deckName,void *errorOut)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *deckName_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a deck by name, reports "Invalid Deck!" if missing, rejects
                       read-only decks with "Deck is read-only!", and otherwise prepares/touches the
                       deck before returning success. Evidence is DeckDB_getDeck,
                       NamedProperty_isNameMutable, DeckDB helpers, and the exact error strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ca38;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  if (*(uint *)((int)deckName + 0x18) < 0x10) {
    pcVar6 = (char *)((int)deckName + 4);
  }
  else {
    pcVar6 = *(char **)((int)deckName + 4);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar4 = pcVar6;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
  local_4 = 0;
  deckName_00 = local_28;
  pvVar5 = (void *)FUN_012aab80(deckName_00,uVar3);
  pvVar5 = DeckDB_getDeck(pvVar5,deckName_00);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (pvVar5 == (void *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (errorOut,"Invalid Deck!",0xd);
    ExceptionList = local_c;
    return false;
  }
  bVar2 = NamedProperty_isNameMutable(pvVar5);
  if (bVar2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (errorOut,"Deck is read-only!",0x12);
    ExceptionList = local_c;
    return false;
  }
  FUN_012aab80(pvVar5,uVar3);
  DeckDB_sendDeleteOnlineDeckForCurrentDeck();
  ExceptionList = local_c;
  return true;
}

