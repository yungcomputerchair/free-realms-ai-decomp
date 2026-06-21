// addr: 0x014cd390
// name: LobbyCommand_AdjournedGame_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAdjournedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AdjournedGame_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_AdjournedGame_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AdjournedGame into a target command, copying scalar
                       fields at 8 and 0xc and a member at 0x10. The class and clone operation are
                       evidenced by RTTI and the assertion in LobbyCommandAdjournedGame.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AdjournedGame::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandAdjournedGame.cpp",0x4b
                );
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  FUN_005f1e5c((int)this + 0x10);
  return;
}

