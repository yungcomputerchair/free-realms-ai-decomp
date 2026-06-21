// addr: 0x01410d70
// name: CWGameTurn_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWGameTurn_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWGameTurn by running GameTurn_ctor, installing
                       CWGameTurn::vftable, initializing embedded state, and clearing the current
                       player id field. Evidence: direct GameTurn_ctor call and CWGameTurn::vftable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016926d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameTurn_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CWGameTurn::vftable;
  FUN_005258fb();
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}

