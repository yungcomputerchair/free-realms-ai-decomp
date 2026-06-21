// addr: 0x014c0510
// name: LobbyCommand_SelectTournamentDeck_setDeck
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSelectTournamentDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_setDeck(int param_1, int * param_2) */

void __thiscall LobbyCommand_SelectTournamentDeck_setDeck(void *this,int param_1,int *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  undefined4 uVar2;
  
                    /* Sets the selected tournament deck on a LobbyCommand_SelectTournamentDeck,
                       asserting the deck pointer is non-null, clearing any previous deck pointer,
                       copying the deck name string, and cloning the deck object through its vtable.
                       The caller in LobbyCommandSetDraft.cpp constructs/fills this command for
                       tournament draft handling. */
  if (param_1 == 0) {
    FUN_012f5a60(&DAT_018d4520,
                 "..\\common\\networking\\lobby_command\\LobbyCommandSelectTournamentDeck.cpp",0x28)
    ;
  }
  Deck_clearCardEntryPointers((void *)param_1);
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  pbVar1 = Deck_getPropertyList((void *)param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 8),
             pbVar1,0,0xffffffff);
  uVar2 = (**(code **)(*(int *)param_1 + 0x74))();
  *(undefined4 *)((int)this + 0x24) = uVar2;
  return;
}

