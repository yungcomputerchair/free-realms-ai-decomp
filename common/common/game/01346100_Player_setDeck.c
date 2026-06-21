// addr: 0x01346100
// name: Player_setDeck
// subsystem: common/common/game
// source (binary assert): common/common/game/Player.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Player_setDeck(void * this, void * deck) */

bool __thiscall Player_setDeck(void *this,void *deck)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
                    /* Refuses to replace an existing deck, asserts the new deck, copies the deck
                       property-list string into the player, stores the deck pointer, and returns
                       success. */
  iVar1 = FUN_00f942a0(0,*(undefined4 *)((int)this + 0x20),&DAT_0175b400,0);
  if (iVar1 != 0) {
    return false;
  }
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\game\\Player.cpp",0x109);
  }
  pbVar2 = Deck_getPropertyList(deck);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
             pbVar2,0,0xffffffff);
  *(void **)((int)this + 0x28) = deck;
  return true;
}

