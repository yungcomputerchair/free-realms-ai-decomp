// addr: 0x012a0670
// name: RuleSetDB_MapMember_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall RuleSetDB_MapMember_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RuleSetDB map member and loads the RuleSetDB index. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b467;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005258fb(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  FUN_0129d6c0();
  local_4._0_1_ = 1;
  FUN_0129d730();
  local_4._0_1_ = 2;
  FUN_012a0600();
  local_4._0_1_ = 3;
  RuleSetDB_MapMember_ctor((int)(param_1 + 0xd));
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = 0x9f3;
  RuleSetDB_loadIndex(param_1,0x9f3);
  ExceptionList = local_c;
  return param_1;
}

