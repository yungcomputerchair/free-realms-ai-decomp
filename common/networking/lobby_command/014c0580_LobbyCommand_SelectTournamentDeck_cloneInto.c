// addr: 0x014c0580
// name: LobbyCommand_SelectTournamentDeck_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSelectTournamentDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SelectTournamentDeck_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  undefined4 uVar1;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_SelectTournamentDeck into a target command, including
                       the deck name string, optional cloned deck object, and scalar/flag fields.
                       RTTI and the clone assertion in LobbyCommandSelectTournamentDeck.cpp identify
                       the class and method pattern. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SelectTournamentDeck::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandSelectTournamentDeck.cpp",0x69)
    ;
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)thisObj + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 8),0,0xffffffff);
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x24) + 0x74))();
    *(undefined4 *)((int)thisObj + 0x24) = uVar1;
  }
  *(undefined4 *)((int)thisObj + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined1 *)((int)thisObj + 0x30) = *(undefined1 *)((int)this + 0x30);
  return;
}

