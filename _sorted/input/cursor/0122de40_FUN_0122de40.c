// addr: 0x0122de40
// name: FUN_0122de40
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_0122de40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined1 param_6)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[1] = param_3;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  *(undefined1 *)(param_1 + 5) = param_6;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}

