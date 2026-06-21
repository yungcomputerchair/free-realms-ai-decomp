// addr: 0x0085e0d0
// name: GCtrl_findDeepestChildAtPoint
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
GCtrl_findDeepestChildAtPoint(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int **ppiVar8;
  int iVar9;
  int *piVar10;
  int *local_24;
  int *piStack_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 local_14 [4];
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = (int)param_2;
                    /* Searches child controls from back to front and returns the deepest child
                       containing a point, delegating recursion to 0085e330. Evidence is
                       child-vector traversal, bounds checks, and caller/callee recursion. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015732ab;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_1c = param_1;
  bVar2 = false;
  bVar1 = false;
  if (param_2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    if (*(int *)((int)param_2 + 0x48) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)param_2 + 0x4c) - *(int *)((int)param_2 + 0x48) >> 2;
    }
    piVar10 = (int *)(iVar6 + -1);
    local_18 = piVar10;
    param_2 = piVar10;
    piVar3 = local_18;
    while (param_2 = piVar10, local_18 = piVar3, -1 < (int)piVar10) {
      iVar6 = *(int *)(iVar5 + 0x48);
      if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= piVar10)) {
        local_24 = (int *)0x0;
        ppiVar8 = &local_24;
        local_4 = 0;
        bVar1 = true;
      }
      else {
        if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= piVar10)) {
          FUN_00d83c2d(uVar4);
        }
        ppiVar8 = (int **)(*(int *)(iVar5 + 0x48) + (int)piVar10 * 4);
      }
      piVar10 = *ppiVar8;
      local_4 = 0xffffffff;
      if ((bVar1) && (bVar1 = false, local_24 != (int *)0x0)) {
        (**(code **)(*local_24 + 0x10))(0);
      }
      iVar6 = *piVar10;
      FUN_00409723(local_14,0);
      uVar7 = FUN_004cd10a();
      iVar6 = (**(code **)(iVar6 + 8))(uVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_0042b2c9(), iVar6 == 0)) {
        piVar10 = param_2;
        iVar6 = *(int *)(iVar5 + 0x48);
        if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= param_2)) {
          piStack_20 = (int *)0x0;
          ppiVar8 = &piStack_20;
          local_4 = 1;
          bVar2 = true;
        }
        else {
          if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= param_2)) {
            FUN_00d83c2d();
          }
          ppiVar8 = (int **)(*(int *)(iVar5 + 0x48) + (int)piVar10 * 4);
        }
        piVar10 = *ppiVar8;
        local_4 = 0xffffffff;
        if ((bVar2) && (bVar2 = false, piStack_20 != (int *)0x0)) {
          (**(code **)(*piStack_20 + 0x10))(0);
        }
        iVar6 = *piVar10;
        FUN_00409805(auStack_10,0);
        uVar7 = FUN_004cd10a();
        iVar6 = (**(code **)(iVar6 + 8))(uVar7);
      }
      else {
        iVar6 = *(int *)(iVar6 + 0xb4);
      }
      iVar9 = GCtrl_findDeepestChildAtPointRecursive(iVar6,param_3,param_4);
      if (iVar6 != iVar9) {
        ExceptionList = local_c;
        return iVar9;
      }
      piVar10 = (int *)((int)param_2 + -1);
      param_2 = piVar10;
      piVar3 = local_18;
    }
    bVar1 = false;
    iVar6 = *(int *)(iVar5 + 0x48);
    if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= piVar3)) {
      param_2 = (int *)0x0;
      piVar10 = (int *)&param_2;
      local_4 = 2;
      bVar1 = true;
    }
    else {
      if ((iVar6 == 0) || ((int *)(*(int *)(iVar5 + 0x4c) - iVar6 >> 2) <= piVar3)) {
        FUN_00d83c2d(uVar4);
      }
      piVar10 = (int *)(*(int *)(iVar5 + 0x48) + (int)piVar3 * 4);
    }
    iVar5 = *piVar10;
    local_4 = 0xffffffff;
    if ((bVar1) && (param_2 != (int *)0x0)) {
      (**(code **)(*param_2 + 0x10))(0);
    }
  }
  ExceptionList = local_c;
  return iVar5;
}

