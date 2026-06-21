// addr: 0x014c22f0
// name: LobbyCommand_RemoveGroups_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandRemoveGroups.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveGroups_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_RemoveGroups_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_RemoveGroups into an existing target command, including
                       the member at offset 8. The RTTI cast to LobbyCommand_RemoveGroups and
                       'clone' assertion in LobbyCommandRemoveGroups.cpp identify this cloneInto
                       implementation. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_RemoveGroups::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandRemoveGroups.cpp",0x68)
    ;
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  FUN_005f1e5c((int)this + 8);
  return;
}

