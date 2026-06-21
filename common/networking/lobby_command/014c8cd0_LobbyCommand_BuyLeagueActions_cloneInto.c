// addr: 0x014c8cd0
// name: LobbyCommand_BuyLeagueActions_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandBuyLeagueActions.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_BuyLeagueActions_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_BuyLeagueActions_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_BuyLeagueActions into a target command, including two
                       scalar fields, a member at 0x10, and a scalar at 0x20. Evidence is the RTTI
                       cast and clone assertion in LobbyCommandBuyLeagueActions.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_BuyLeagueActions::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandBuyLeagueActions.cpp",
                 0x4d);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  FUN_005f1e5c((int)this + 0x10);
  *(undefined4 *)((int)thisObj + 0x20) = *(undefined4 *)((int)this + 0x20);
  return;
}

