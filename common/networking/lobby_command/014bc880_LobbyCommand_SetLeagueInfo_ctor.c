// addr: 0x014bc880
// name: LobbyCommand_SetLeagueInfo_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetLeagueInfo_ctor(void * this) */

void * __fastcall LobbyCommand_SetLeagueInfo_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetLeagueInfo by invoking LobbyCommand_ctor,
                       installing its vtable, initializing two container members, and clearing
                       league info fields. Evidence is LobbyCommand_SetLeagueInfo::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a92b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = LobbyCommand_SetLeagueInfo::vftable;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005258fb();
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}

