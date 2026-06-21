// addr: 0x013d9280
// name: LobbyCommand_DeleteAdjournedGame_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandDeleteAdjournedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_DeleteAdjournedGame_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall
LobbyCommand_DeleteAdjournedGame_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a DeleteAdjournedGame command into an existing destination. It
                       RTTI-casts the destination, asserts on clone failure, invokes the base
                       LobbyCommand copy, and copies offsets 8, 0xc, and 0x10. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_DeleteAdjournedGame::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandDeleteAdjournedGame.cpp",0x46);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

