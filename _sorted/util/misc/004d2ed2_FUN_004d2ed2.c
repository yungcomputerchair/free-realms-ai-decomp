// addr: 0x004d2ed2
// name: FUN_004d2ed2
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_004d2ed2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6)

{
                    /* Initializes a small 0x16-byte record from three scalar fields, a two-word
                       source object, and a byte flag, then clears a trailing byte. No class/file
                       evidence, so left unnamed. */
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  *(undefined1 *)(param_1 + 5) = param_6;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}

