// addr: 0x00c671f0
// name: FUN_00c671f0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c671f0(int param_1,int param_2,int param_3)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_2 != 0) {
    *(int *)(param_3 + 4) = param_2;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    *(int *)(param_2 + 8) = param_3;
    if (*(int *)(param_3 + 8) != 0) {
      *(int *)(*(int *)(param_3 + 8) + 4) = param_3;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 4) = param_3;
    return;
  }
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_3 + 4) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(*(int *)(param_1 + 8) + 4) = param_3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 8) = param_3;
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = param_3;
  return;
}

