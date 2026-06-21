// addr: 0x01384050
// name: FUN_01384050
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01384050(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682cc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01383ef0(param_1,10);
  ExceptionList = local_c;
  return param_1;
}

