// addr: 0x01381350
// name: FUN_01381350
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01381350(int param_1,undefined1 param_2)

{
                    /* Sets a byte flag at offset 0x70 on EvaluationEnvironment-like objects. The
                       flag meaning is not clear from the isolated setter. */
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}

