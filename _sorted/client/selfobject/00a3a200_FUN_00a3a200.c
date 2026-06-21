// addr: 0x00a3a200
// name: FUN_00a3a200
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_00a3a200(int *param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015b2e11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProfileItem_ctorWithId(pvVar1,param_2);
  }
  *(int *)((int)pvVar1 + 0x4c) = param_1[3];
  *(undefined4 *)((int)pvVar1 + 0x48) = 0;
  if (param_1[3] == 0) {
    param_1[2] = (int)pvVar1;
  }
  else {
    *(void **)(param_1[3] + 0x48) = pvVar1;
  }
  param_1[3] = (int)pvVar1;
  uVar2 = *(uint *)((int)pvVar1 + 0x50) % 0x32;
  *(int *)((int)pvVar1 + 0x54) = param_1[uVar2 + 5];
  param_1[uVar2 + 5] = (int)pvVar1;
  param_1[4] = param_1[4] + 1;
  ExceptionList = local_c;
  return pvVar1;
}

