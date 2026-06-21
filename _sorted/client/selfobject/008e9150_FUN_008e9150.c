// addr: 0x008e9150
// name: FUN_008e9150
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008e9150(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01587421;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*param_1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_008db780();
  }
  *(int *)(iVar1 + 0x34) = param_1[2];
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (param_1[2] == 0) {
    param_1[1] = iVar1;
  }
  else {
    *(int *)(param_1[2] + 0x30) = iVar1;
  }
  param_1[2] = iVar1;
  param_1[3] = param_1[3] + 1;
  ExceptionList = local_c;
  return;
}

