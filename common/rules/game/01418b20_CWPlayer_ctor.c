// addr: 0x01418b20
// name: CWPlayer_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWPlayer_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWPlayer by running Player_ctor, installing CWPlayer::vftable,
                       initializing member fields, and constructing an embedded component at offset
                       0x14. Evidence: direct Player_ctor call and CWPlayer::vftable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693463;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  Player_ctor(param_1);
  local_4 = 0;
  *param_1 = CWPlayer::vftable;
  param_1[0x13] = 0;
  FUN_01247380(uVar1);
  param_1[0x17] = 0;
  ExceptionList = local_c;
  return param_1;
}

