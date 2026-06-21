// addr: 0x01347a70
// name: Game_decrementEventEmissionDepth
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Game_decrementEventEmissionDepth(int param_1)

{
                    /* Decrements the counter at offset 0x1e8. It complements the
                       ProcessEventEmissionState enter helper that increments the same field. */
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + -1;
  return;
}

