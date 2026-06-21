// addr: 0x014bbe50
// name: LobbyCommand_SetupDraft_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetupDraft.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetupDraft_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetupDraft_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_SetupDraft into an existing target command, including
                       two string/vector-like members and a scalar at offset 0x2c. The RTTI cast and
                       'clone' assertion in LobbyCommandSetupDraft.cpp identify the method. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetupDraft::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetupDraft.cpp",0x55);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  FUN_005f1e5c((int)this + 0xc);
  FUN_005f1e5c((int)this + 0x1c);
  *(undefined4 *)((int)thisObj + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return;
}

