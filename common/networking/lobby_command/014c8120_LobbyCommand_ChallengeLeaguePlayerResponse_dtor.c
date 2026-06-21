// addr: 0x014c8120
// name: LobbyCommand_ChallengeLeaguePlayerResponse_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayerResponse_dtor(void * this) */

void __fastcall LobbyCommand_ChallengeLeaguePlayerResponse_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for LobbyCommand_ChallengeLeaguePlayerResponse; it releases an
                       owned object pointer, frees a heap-backed string when needed, clears the
                       string, then calls the base destructor. Evidence is
                       LobbyCommand_ChallengeLeaguePlayerResponse::vftable and the small-string
                       cleanup fields. */
  puStack_8 = &LAB_016ab0d3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_ChallengeLeaguePlayerResponse::vftable;
  local_4 = 1;
  if (*(undefined4 **)((int)this + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x34))(1,uVar1);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (0xf < *(uint *)((int)this + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

