// addr: 0x008475b0
// name: FUN_008475b0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008475b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0156f571;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*param_1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00846be0(param_2);
  }
  *(int *)(iVar1 + 0x14) = param_1[2];
  *(undefined4 *)(iVar1 + 0x10) = 0;
  if (param_1[2] == 0) {
    param_1[1] = iVar1;
  }
  else {
    *(int *)(param_1[2] + 0x10) = iVar1;
  }
  param_1[2] = iVar1;
  param_1[3] = param_1[3] + 1;
  ExceptionList = local_c;
  return;
}

