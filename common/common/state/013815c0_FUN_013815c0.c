// addr: 0x013815c0
// name: FUN_013815c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013815c0(int param_1,undefined4 param_2)

{
                    /* Sets EvaluationEnvironment field 0x18. It is used by action play and target
                       evaluation paths, but the exact environment slot is unresolved. */
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

