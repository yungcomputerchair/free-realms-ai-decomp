// addr: 0x014c16d0
// name: LobbyCommand_RequestAddBuddy_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandRequestAddBuddy.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RequestAddBuddy_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall LobbyCommand_RequestAddBuddy_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a RequestAddBuddy command into an existing destination. It RTTI-casts
                       the target, copies LobbyCommand base state, and copies the derived field at
                       offset 8. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_RequestAddBuddy::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandRequestAddBuddy.cpp",
                 0x34);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

