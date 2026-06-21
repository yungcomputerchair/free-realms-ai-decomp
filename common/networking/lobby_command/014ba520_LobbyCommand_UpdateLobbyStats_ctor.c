// addr: 0x014ba520
// name: LobbyCommand_UpdateLobbyStats_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_UpdateLobbyStats_ctor(void * this) */

void * __fastcall LobbyCommand_UpdateLobbyStats_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_UpdateLobbyStats by installing its vtable,
                       initializing several container members, and setting a default value of 800.
                       Evidence is LobbyCommand_UpdateLobbyStats::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8c74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = LobbyCommand_UpdateLobbyStats::vftable;
  FUN_005258fb();
  local_4._0_1_ = 1;
  FUN_005258fb();
  local_4._0_1_ = 2;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)this + 0x2c) = 800;
  FUN_005258fb();
  ExceptionList = local_c;
  return this;
}

