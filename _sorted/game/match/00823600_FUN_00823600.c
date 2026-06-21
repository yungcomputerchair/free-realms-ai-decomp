// addr: 0x00823600
// name: FUN_00823600
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00823600(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_2;
                    /* Returns the pointer stored in a vector-like member at this+0x48 for the
                       requested index, or null when the index is out of range. Exact owning class
                       is unclear from this isolated helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156ac69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 == 0) || ((int *)(*(int *)(param_1 + 0x4c) - iVar1 >> 2) <= param_2)) {
    param_2 = (int *)0x0;
    puVar5 = &param_2;
    bVar3 = true;
  }
  else {
    if ((iVar1 == 0) || ((int *)(*(int *)(param_1 + 0x4c) - iVar1 >> 2) <= param_2)) {
      FUN_00d83c2d(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
    }
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x48) + (int)piVar4 * 4);
  }
  uVar2 = *puVar5;
  local_4 = 0xffffffff;
  if ((bVar3) && (param_2 != (int *)0x0)) {
    (**(code **)(*param_2 + 0x10))(0);
  }
  ExceptionList = local_c;
  return uVar2;
}

