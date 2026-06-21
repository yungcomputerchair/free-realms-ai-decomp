// addr: 0x01347a80
// name: Game_incrementActionEvaluationCount
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Game_incrementActionEvaluationCount(int param_1)

{
                    /* Increments and returns the counter at offset 0x1ec. WhileState and
                       MultiActionState call it just before evaluating/doing action effects. */
  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  return *(undefined4 *)(param_1 + 0x1ec);
}

