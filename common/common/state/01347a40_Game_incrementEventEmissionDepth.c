// addr: 0x01347a40
// name: Game_incrementEventEmissionDepth
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Game_incrementEventEmissionDepth(int param_1)

{
                    /* Increments the counter at offset 0x1e8. ProcessEventEmissionState::enterState
                       calls it after preparing event emission and stores the prior counter
                       separately. */
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
  return;
}

