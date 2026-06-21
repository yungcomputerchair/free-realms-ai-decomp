// addr: 0x009f7810
// name: FUN_009f7810
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_009f7810(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if ((*(int *)(param_1 + 0xc) != 0) && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      FUN_00c68210(param_2);
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return;
      }
      iVar2 = *piVar1;
    }
  }
  return;
}

