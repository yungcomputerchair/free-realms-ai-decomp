// addr: 0x0127eb80
// name: FUN_0127eb80
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0127eb80(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 int *param_5,int *param_6)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_3 != param_5) {
    do {
      if (*param_3 == *param_6) break;
      param_3 = param_3 + 1;
    } while (param_3 != param_5);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

