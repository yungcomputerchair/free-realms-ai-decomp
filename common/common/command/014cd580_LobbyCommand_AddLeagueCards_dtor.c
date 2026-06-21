// addr: 0x014cd580
// name: LobbyCommand_AddLeagueCards_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddLeagueCards_dtor(void * this) */

void __fastcall LobbyCommand_AddLeagueCards_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_AddLeagueCards, chaining through lobby command
                       base cleanup. */
  puStack_8 = &LAB_016ab8a3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_AddLeagueCards::vftable;
  local_4 = 0;
  FUN_012c2de0(uVar1);
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

