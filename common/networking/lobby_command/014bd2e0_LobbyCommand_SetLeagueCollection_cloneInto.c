// addr: 0x014bd2e0
// name: LobbyCommand_SetLeagueCollection_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetLeagueCollection.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCollection_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetLeagueCollection_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_SetLeagueCollection into a target command, copying base
                       fields, a scalar at 0xc, and a collection member at 0x10. The function
                       asserts on a failed clone cast in LobbyCommandSetLeagueCollection.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetLeagueCollection::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandSetLeagueCollection.cpp",0x6a);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  CollectionElementVector_copyAssign((int)this + 0x10);
  return;
}

