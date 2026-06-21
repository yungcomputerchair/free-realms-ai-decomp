// addr: 0x014c2aa0
// name: LobbyCommand_RemoveAdjournedGame_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandRemoveAdjournedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveAdjournedGame_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall
LobbyCommand_RemoveAdjournedGame_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a RemoveAdjournedGame command into an existing destination. It
                       validates the target RTTI, copies base LobbyCommand state, then copies fields
                       at offsets 8 and 0xc. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_RemoveAdjournedGame::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandRemoveAdjournedGame.cpp",0x3b);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

