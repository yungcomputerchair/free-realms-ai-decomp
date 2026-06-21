// addr: 0x005dd394
// name: FUN_005dd394
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_005dd394(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6)

{
                    /* Initializes a small record from three scalar fields, one source word, and a
                       byte flag, then clears a trailing byte. No class/file evidence, so left
                       unnamed. */
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}

