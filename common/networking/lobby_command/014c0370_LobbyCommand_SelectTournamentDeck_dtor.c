// addr: 0x014c0370
// name: LobbyCommand_SelectTournamentDeck_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_dtor(void * this) */

void __fastcall LobbyCommand_SelectTournamentDeck_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destructor for LobbyCommand_SelectTournamentDeck; it destroys an owned object
                       pointer, releases a possible heap-backed string, and runs base cleanup. */
  puStack_8 = &LAB_016a9d03;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SelectTournamentDeck::vftable;
  local_4 = 1;
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1,uVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

