// addr: 0x014c8420
// name: LobbyCommand_ChallengeLeaguePlayer_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_ChallengeLeaguePlayer_ctor(void * this) */

void * __fastcall LobbyCommand_ChallengeLeaguePlayer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_ChallengeLeaguePlayer by installing its vtable and
                       clearing player/challenge fields including a flag. Evidence is
                       LobbyCommand_ChallengeLeaguePlayer::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_ChallengeLeaguePlayer::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

