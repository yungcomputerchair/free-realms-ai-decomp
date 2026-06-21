// addr: 0x014cd920
// name: LobbyCommand_AddLeagueCards_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_AddLeagueCards_ctor(void * this) */

void * __fastcall LobbyCommand_AddLeagueCards_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_AddLeagueCards by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing card-list fields. Evidence is
                       LobbyCommand_AddLeagueCards::vftable and create caller. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab923;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_AddLeagueCards::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

