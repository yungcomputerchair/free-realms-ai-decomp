// addr: 0x014c84e0
// name: LobbyCommand_ChallengeLeaguePlayer_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayer_dtor(void * this) */

void __fastcall LobbyCommand_ChallengeLeaguePlayer_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_ChallengeLeaguePlayer; it sets the class vftable
                       and chains to the base destructor. Evidence is
                       LobbyCommand_ChallengeLeaguePlayer::vftable in the function body. */
  puStack_8 = &LAB_016ab188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_ChallengeLeaguePlayer::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

