// addr: 0x013d8740
// name: LobbyCommand_AcceptAdjournedGame_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAcceptAdjournedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AcceptAdjournedGame_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall
LobbyCommand_AcceptAdjournedGame_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies an AcceptAdjournedGame command into an existing destination. It
                       RTTI-casts to LobbyCommand_AcceptAdjournedGame, asserts on failure, copies
                       base LobbyCommand state, then copies fields at offsets 8, 0xc, 0x10, and
                       0x14. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_AcceptAdjournedGame::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandAcceptAdjournedGame.cpp",0x51);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)((int)thisObj_00 + 0x10) = *(undefined1 *)((int)this + 0x10);
  *(undefined4 *)((int)thisObj_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  return;
}

