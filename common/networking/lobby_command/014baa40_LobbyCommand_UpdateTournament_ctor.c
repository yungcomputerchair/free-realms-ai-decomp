// addr: 0x014baa40
// name: LobbyCommand_UpdateTournament_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_UpdateTournament_ctor(void * this) */

void * __fastcall LobbyCommand_UpdateTournament_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_UpdateTournament by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing tournament state fields. Evidence is
                       LobbyCommand_UpdateTournament::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8d33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_UpdateTournament::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

