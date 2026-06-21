// addr: 0x012c5ef0
// name: FUN_012c5ef0
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_012c5ef0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)(param_1 + 8);
  *param_2 = 0;
  if (uVar1 < uVar2) {
    FUN_00d83c2d();
  }
  *param_2 = param_1;
  param_2[1] = uVar2;
  return param_2;
}

