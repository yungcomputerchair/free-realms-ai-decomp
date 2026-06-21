// addr: 0x014c60b0
// name: LobbyCommand_ChangeLobbyDisplay_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandChangeLobbyDisplay.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall
LobbyCommand_ChangeLobbyDisplay_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a ChangeLobbyDisplay command into an existing destination. It
                       RTTI-casts the target, copies base LobbyCommand state, and copies the derived
                       field at offset 8. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_ChangeLobbyDisplay::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandChangeLobbyDisplay.cpp"
                 ,0x39);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

