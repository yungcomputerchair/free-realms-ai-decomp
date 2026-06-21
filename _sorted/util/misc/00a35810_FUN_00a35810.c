// addr: 0x00a35810
// name: FUN_00a35810
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a35810(int param_1,undefined4 *param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)(*(int *)(param_1 + 4) + 0x1a8) != 0) {
    FUN_00acb430(*(undefined4 *)(param_1 + 0x74));
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x1a8) + 0x61) = 1;
    *(undefined4 *)(param_1 + 0x40) = *param_2;
    *(undefined4 *)(param_1 + 0x44) = param_2[1];
    *(undefined4 *)(param_1 + 0x48) = param_2[2];
    *(undefined4 *)(param_1 + 0x4c) = param_2[3];
    FUN_00a35150(0);
  }
  return;
}

