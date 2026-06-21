// addr: 0x013813d0
// name: EvaluationEnvironment_setGame
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall EvaluationEnvironment_setGame(int param_1,undefined4 param_2)

{
                    /* Stores the game pointer into EvaluationEnvironment field 4. This matches
                       EvaluationEnvironment_getOriginCard asserting mGame when the same field is
                       null. */
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

