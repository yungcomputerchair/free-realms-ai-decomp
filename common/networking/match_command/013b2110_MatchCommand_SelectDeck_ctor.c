// addr: 0x013b2110
// name: MatchCommand_SelectDeck_ctor
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandSelectDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectDeck_ctor(void * this, void * deck) */

void __thiscall MatchCommand_SelectDeck_ctor(void *this,void *deck)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  
                    /* Initializes a SelectDeck match command from a non-null deck object:
                       clears/initializes deck-related storage, assigns an empty deck id string, and
                       clones the supplied deck via its vtable slot 0x74. */
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\networking\\match_command\\MatchCommandSelectDeck.cpp",
                 0x1b);
  }
  Deck_clearCardEntryPointers(deck);
  *(undefined1 *)((int)this + 0x28) = 0;
  pbVar1 = Deck_getPropertyList(deck);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
             pbVar1,0,0xffffffff);
  uVar2 = (**(code **)(*(int *)deck + 0x74))();
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  return;
}

