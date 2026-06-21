// addr: 0x014c86b0
// name: LobbyCommand_ChallengeLeaguePlayer_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandChallengeLeaguePlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayer_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall
LobbyCommand_ChallengeLeaguePlayer_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a ChallengeLeaguePlayer command into an existing destination. It
                       validates the destination RTTI, copies base LobbyCommand fields, then copies
                       offsets 8, 0xc, 0x10, and a byte at 0x14. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_ChallengeLeaguePlayer::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\lobby_command\\LobbyCommandChallengeLeaguePlayer.cpp",0x4e
                );
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined1 *)((int)thisObj_00 + 0x14) = *(undefined1 *)((int)this + 0x14);
  return;
}

