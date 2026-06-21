// addr: 0x014c8040
// name: LobbyCommand_ChallengeLeaguePlayerResponse_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_ChallengeLeaguePlayerResponse_ctor(void * this) */

void * __fastcall LobbyCommand_ChallengeLeaguePlayerResponse_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_ChallengeLeaguePlayerResponse, initializing an SSO
                       string, several numeric fields, and a flag after installing the vtable.
                       Evidence is LobbyCommand_ChallengeLeaguePlayerResponse::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab0a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_ChallengeLeaguePlayerResponse::vftable;
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}

