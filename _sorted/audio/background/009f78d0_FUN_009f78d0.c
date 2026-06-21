// addr: 0x009f78d0
// name: FUN_009f78d0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_009f78d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      FUN_00c683c0(0);
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar1;
    }
  }
  return;
}

