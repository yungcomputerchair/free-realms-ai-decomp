// addr: 0x014bab20
// name: LobbyCommand_UpdateTournament_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandUpdateTournament.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateTournament_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_UpdateTournament_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_UpdateTournament into a target command, including a
                       collection at offset 0xc and tournament fields at 0x1c..0x24. The class is
                       identified by RTTI and the clone assertion in
                       LobbyCommandUpdateTournament.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_UpdateTournament::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandUpdateTournament.cpp",
                 0x78);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  StdVector12_assignFromVector((void *)((int)thisObj + 0xc),(int)this + 0xc,(int)unaff_EDI);
  *(undefined4 *)((int)thisObj + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)thisObj + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)thisObj + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

