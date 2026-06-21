// addr: 0x00c67020
// name: FUN_00c67020
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c67020(int param_1,float param_2)

{
  float10 fVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*(int *)(param_1 + 0x10) != 0) {
    if (0.0 <= param_2) {
      fVar1 = (float10)param_2;
    }
    else {
      fVar1 = (float10)FUN_007bd530();
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0078f560(0,(float)fVar1);
      return;
    }
  }
  return;
}

