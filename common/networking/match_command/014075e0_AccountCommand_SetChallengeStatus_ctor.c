// addr: 0x014075e0
// name: AccountCommand_SetChallengeStatus_ctor
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * AccountCommand_SetChallengeStatus_ctor(undefined4 * param_1) */

undefined4 * __fastcall AccountCommand_SetChallengeStatus_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence:
                       AccountCommand_SetChallengeStatus::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169170e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = AccountCommand_SetChallengeStatus::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 1;
  StdTree_node48_ctor_01321780();
  ExceptionList = local_c;
  return param_1;
}

