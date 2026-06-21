// addr: 0x009f7750
// name: FUN_009f7750
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_009f7750(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((((param_4 != 0) && (0 < param_3)) && (param_3 <= *(int *)(param_1 + 0xc))) &&
     (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) == param_3) {
        FUN_00c680e0(param_4,param_5,param_2);
        return 1;
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = *piVar1;
    }
  }
  return 0;
}

