// addr: 0x010a4580
// name: FUN_010a4580
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_010a4580(int param_1,int param_2,int param_3,int param_4)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10))) {
    param_4 = param_4 * 0xc;
    FUN_010a44f0(param_2,*(undefined4 *)(*(int *)(param_3 + 0xc) + param_4 + 4),
                 *(undefined4 *)(*(int *)(param_3 + 0xc) + param_4),1);
    *(undefined1 *)(*(int *)(param_3 + 0xc) + 8 + param_4) = 1;
  }
  return;
}

