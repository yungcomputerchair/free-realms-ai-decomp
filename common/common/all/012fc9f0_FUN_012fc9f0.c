// addr: 0x012fc9f0
// name: FUN_012fc9f0
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_012fc9f0(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  uVar1 = param_4 + ((int)param_2 - (int)param_1 >> 2) * 4;
  if ((*(uint *)(param_3 + 8) < uVar1) || (uVar1 < *(uint *)(param_3 + 4))) {
    FUN_00d83c2d();
  }
  if (param_1 != param_2) {
    param_4 = param_4 - (int)param_1;
    do {
      if (*param_1 != *(int *)(param_4 + (int)param_1)) break;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1 == param_2;
}

