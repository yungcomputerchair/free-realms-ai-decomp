// addr: 0x01347a60
// name: Game_getEventEmissionDepth
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Game_getEventEmissionDepth(int param_1)

{
                    /* Returns the counter at offset 0x1e8. ProcessEventEmissionState stores this
                       value around enter/exit handling, matching the adjacent increment/decrement
                       helpers. */
  return *(undefined4 *)(param_1 + 0x1e8);
}

