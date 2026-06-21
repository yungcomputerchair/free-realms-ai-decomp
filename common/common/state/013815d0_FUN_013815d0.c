// addr: 0x013815d0
// name: FUN_013815d0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_013815d0(int param_1)

{
                    /* Clears EvaluationEnvironment field 0x18 to zero. This complements the
                       field-0x18 setter but its semantic name is not established. */
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

