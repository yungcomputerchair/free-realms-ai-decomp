// addr: 0x014cf050
// name: LobbyCommand_AddBooster_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_AddBooster_ctor(void * this) */

void * __fastcall LobbyCommand_AddBooster_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_AddBooster by invoking LobbyCommand_ctor, installing
                       its vtable, and clearing two booster fields. Evidence is
                       LobbyCommand_AddBooster::vftable and create callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016abd38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_AddBooster::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

