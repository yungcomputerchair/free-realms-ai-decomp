// addr: 0x013815b0
// name: FUN_013815b0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013815b0(int param_1,undefined4 param_2)

{
                    /* Sets EvaluationEnvironment field 0x14. It is heavily used by card/effect
                       evaluation, but the semantic target/source role is not proven here. */
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

