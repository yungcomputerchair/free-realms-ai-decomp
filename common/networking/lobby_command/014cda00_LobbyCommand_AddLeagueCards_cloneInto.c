// addr: 0x014cda00
// name: LobbyCommand_AddLeagueCards_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddLeagueCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddLeagueCards_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_AddLeagueCards_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AddLeagueCards into a target command, including the
                       league id/field at offset 8 and card collection at 0xc. The RTTI cast and
                       clone assertion in LobbyCommandAddLeagueCards.cpp identify the function. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AddLeagueCards::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandAddLeagueCards.cpp",
                 0x5e);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  CollectionElementVector_copyAssign((int)this + 0xc);
  return;
}

