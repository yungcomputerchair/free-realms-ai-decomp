// addr: 0x00bef0b0
// name: FUN_00bef0b0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bef0b0(int param_1,int param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(short **)(param_2 + 0xc) < *(short **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(int *)(param_1 + 4) = (int)**(short **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
  }
  if (*(short **)(param_2 + 0xc) < *(short **)(param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(int *)(param_1 + 8) = (int)**(short **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
  return;
}

