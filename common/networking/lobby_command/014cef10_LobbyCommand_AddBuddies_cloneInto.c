// addr: 0x014cef10
// name: LobbyCommand_AddBuddies_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddBuddies.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddBuddies_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_AddBuddies_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_AddBuddies into a target command, copying the member at
                       offset 8 after the NetworkCommand base copy. RTTI and the clone assertion in
                       LobbyCommandAddBuddies.cpp identify the function. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_AddBuddies::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandAddBuddies.cpp",0x3e);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  FUN_005f1e5c((int)this + 8);
  return;
}

