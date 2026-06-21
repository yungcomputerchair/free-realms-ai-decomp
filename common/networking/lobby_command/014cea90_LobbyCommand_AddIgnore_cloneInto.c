// addr: 0x014cea90
// name: LobbyCommand_AddIgnore_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddIgnore.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnore_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_AddIgnore_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AddIgnore into an existing target command, including
                       its member at offset 8. Evidence is the RTTI cast to LobbyCommand_AddIgnore
                       and 'clone' assertion in LobbyCommandAddIgnore.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AddIgnore::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandAddIgnore.cpp",0x3e);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  FUN_005f1e5c((int)this + 8);
  return;
}

