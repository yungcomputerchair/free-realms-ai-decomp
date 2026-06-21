// addr: 0x00c672c0
// name: FUN_00c672c0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c672c0(int *param_1,int param_2)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*(int *)(param_2 + 8) == 0) {
    param_1[1] = *(int *)(param_2 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 4) == 0) {
    param_1[2] = *(int *)(param_2 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
  }
  param_1[3] = param_1[3] + -1;
                    /* WARNING: Could not recover jumptable at 0x00c672fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

