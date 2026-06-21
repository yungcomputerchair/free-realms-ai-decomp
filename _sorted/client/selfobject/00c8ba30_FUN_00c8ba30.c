// addr: 0x00c8ba30
// name: FUN_00c8ba30
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c8ba30(int *param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01605f11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = RecipeData_ctorWithId(pvVar1,param_2);
  }
  *(int *)((int)pvVar1 + 0x44) = param_1[3];
  *(undefined4 *)((int)pvVar1 + 0x40) = 0;
  if (param_1[3] == 0) {
    param_1[2] = (int)pvVar1;
  }
  else {
    *(void **)(param_1[3] + 0x40) = pvVar1;
  }
  param_1[3] = (int)pvVar1;
  uVar2 = *(uint *)((int)pvVar1 + 0x48) & 0x3f;
  *(int *)((int)pvVar1 + 0x4c) = param_1[uVar2 + 5];
  param_1[uVar2 + 5] = (int)pvVar1;
  param_1[4] = param_1[4] + 1;
  ExceptionList = local_c;
  return;
}

