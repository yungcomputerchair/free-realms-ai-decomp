// addr: 0x00fa6ec0
// name: FUN_00fa6ec0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00fa6ec0(int *param_1,int param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *param_1 = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *param_1 = (int)**(char **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  FUN_00fa45f0(param_2);
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(bool *)(param_1 + 2) = **(char **)(param_2 + 8) != '\0';
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  return;
}

