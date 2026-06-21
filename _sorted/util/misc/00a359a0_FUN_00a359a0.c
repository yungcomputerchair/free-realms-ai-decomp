// addr: 0x00a359a0
// name: FUN_00a359a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a359a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int in_stack_00000018;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (in_stack_00000018 == 8) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(int *)(*(int *)(iVar1 + 4) + 0x1a8) != 0) {
      FUN_00acb430(*(undefined4 *)(iVar1 + 0x74));
      *(undefined4 *)(iVar1 + 0x40) = *param_3;
      *(undefined4 *)(iVar1 + 0x44) = param_3[1];
      *(undefined4 *)(iVar1 + 0x48) = param_3[2];
      *(undefined4 *)(iVar1 + 0x4c) = param_3[3];
      FUN_00a35150(0);
    }
  }
  else {
    if (in_stack_00000018 == 0x1000) {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + 0x50) = *param_3;
      *(undefined4 *)(iVar1 + 0x54) = param_3[1];
      *(undefined4 *)(iVar1 + 0x58) = param_3[2];
      *(undefined4 *)(iVar1 + 0x5c) = param_3[3];
      return;
    }
    if (in_stack_00000018 == 0x400) {
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x62) = 0;
      return;
    }
    if (in_stack_00000018 == 0x800) {
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x62) = 0;
      return;
    }
  }
  return;
}

