// addr: 0x014bd940
// name: LobbyCommand_SetLeagueCards_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetLeagueCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCards_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetLeagueCards_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *this_00;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Copies a LobbyCommand_SetLeagueCards into a target command, copying a scalar
                       at offset 8 and a card container beginning at 0xc. RTTI and the clone
                       assertion in LobbyCommandSetLeagueCards.cpp identify it. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetLeagueCards::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetLeagueCards.cpp",
                 0x39);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  this_00 = (void *)((int)thisObj + 0xc);
  if (this_00 != (void *)((int)this + 0xc)) {
    StdRbTree_eraseRange
              (this_00,auStack_8,this_00,(void *)**(undefined4 **)((int)thisObj + 0x10),this_00,
               *(undefined4 **)((int)thisObj + 0x10),unaff_EDI);
    StdTree_Node21_assignFromTree(this_00,(void *)((int)this + 0xc),unaff_EDI);
  }
  return;
}

