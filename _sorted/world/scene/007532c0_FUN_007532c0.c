// addr: 0x007532c0
// name: FUN_007532c0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_007532c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_01554cb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  FUN_00fc4580(4000);
  ExceptionList = local_c;
  return param_1;
}

