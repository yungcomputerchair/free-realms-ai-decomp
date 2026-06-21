// addr: 0x014305b0
// name: GameCommand_SelectDeckForPlayer_setDeck
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSelectDeckForPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandSelectDeckForPlayer_setDeck(void * this, void * deck) */

void __thiscall GameCommand_SelectDeckForPlayer_setDeck(void *this,void *deck)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  
                    /* Sets the deck payload for SelectDeckForPlayer: it releases any previous deck
                       object at 0x40, copies the deck name string into the command, and stores a
                       cloned/retained deck object. */
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,
                 "..\\common\\networking\\game_command\\GameCommandSelectDeckForPlayer.cpp",0x1b);
  }
  if (*(undefined4 **)((int)this + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x40))(1);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  pbVar1 = Deck_getPropertyList(deck);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x24),
             pbVar1,0,0xffffffff);
  uVar2 = (**(code **)(*(int *)deck + 0x74))();
  *(undefined4 *)((int)this + 0x40) = uVar2;
  return;
}

