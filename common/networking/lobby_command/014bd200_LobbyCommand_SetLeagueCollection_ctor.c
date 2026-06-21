// addr: 0x014bd200
// name: LobbyCommand_SetLeagueCollection_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetLeagueCollection_ctor(void * this) */

void * __fastcall LobbyCommand_SetLeagueCollection_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetLeagueCollection by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing league collection fields. Evidence is
                       LobbyCommand_SetLeagueCollection::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9423;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SetLeagueCollection::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

