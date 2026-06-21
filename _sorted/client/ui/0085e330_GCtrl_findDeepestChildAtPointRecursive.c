// addr: 0x0085e330
// name: GCtrl_findDeepestChildAtPointRecursive
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall
GCtrl_findDeepestChildAtPointRecursive(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int *apiStack_24 [2];
  int local_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar6 = param_2;
                    /* Recursive hit-test helper that descends child controls back-to-front, checks
                       bounds, and returns the deepest control at a point. Evidence is bounds
                       checks, child vectors, and mutual recursion with 0085e0d0. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01573302;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = false;
  if (param_2 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar5 = *param_2;
    local_1c = param_1;
    FUN_00409b2a(&param_2,0,DAT_01b839d8 ^ (uint)&stack0xffffffc8);
    uVar4 = FUN_004cd10a();
    iVar5 = (**(code **)(iVar5 + 8))(uVar4);
    if (iVar5 == 0) {
      iStack_10 = param_3[1];
      iStack_14 = *param_3;
      iVar5 = *piVar6;
      FUN_00409805(auStack_18,0);
      uVar4 = FUN_004cd10a();
      piVar7 = (int *)(**(code **)(iVar5 + 8))(uVar4);
      if (piVar7 == (int *)0x0) {
        iVar5 = *piVar6;
        FUN_00409723(&param_3,0);
        uVar4 = FUN_004cd10a();
        iVar5 = (**(code **)(iVar5 + 8))(uVar4);
        if (iVar5 == 0) {
          ExceptionList = local_c;
          return piVar6;
        }
        iVar5 = FUN_0042b2c9();
        if (iVar5 == 0) {
          ExceptionList = local_c;
          return piVar6;
        }
        if (*(int *)(iVar5 + 0xb4) == 0) {
          ExceptionList = local_c;
          return piVar6;
        }
        apiStack_24[0] = *(int **)(iVar5 + 0x68);
        iStack_10 = (iStack_10 - *(int *)(iVar5 + 0x6c)) - *(int *)(iVar5 + 0x98);
        iStack_14 = (iStack_14 - (int)*(int **)(iVar5 + 0x68)) - *(int *)(iVar5 + 0x94);
        piVar7 = *(int **)(iVar5 + 0xb4);
        if ((char)param_4 != '\0') {
          ExceptionList = local_c;
          return piVar7;
        }
        if (*(int *)(iVar5 + 0x70) + -1 < iStack_14) {
          ExceptionList = local_c;
          return piVar6;
        }
        if (iStack_14 < 0) {
          ExceptionList = local_c;
          return piVar6;
        }
        if (*(int *)(iVar5 + 0x74) + -1 < iStack_10) {
          ExceptionList = local_c;
          return piVar6;
        }
        if (iStack_10 < 0) {
          ExceptionList = local_c;
          return piVar6;
        }
      }
      if (piVar7[0x12] == 0) {
        param_2 = (int *)0x0;
        param_3 = param_2;
      }
      else {
        param_2 = (int *)(piVar7[0x13] - piVar7[0x12] >> 2);
        param_3 = param_2;
      }
      do {
        uVar3 = (int)param_3 - 1;
        param_3 = (int *)uVar3;
        if ((int)uVar3 < 0) {
          bVar2 = false;
          if ((char)param_4 == '\0') {
            ExceptionList = local_c;
            return piVar7;
          }
          if (*(char *)(param_1 + 0xfc) != '\0') {
            ExceptionList = local_c;
            return piVar7;
          }
          if (param_2 == (int *)0x0) {
            ExceptionList = local_c;
            return piVar7;
          }
          iVar5 = piVar7[0x12];
          if ((iVar5 == 0) || (piVar7[0x13] - iVar5 >> 2 == 0)) {
            param_4 = (int *)0x0;
            puVar9 = &param_4;
            uStack_4 = 1;
            bVar2 = true;
          }
          else {
            if ((iVar5 == 0) || (piVar7[0x13] - iVar5 >> 2 == 0)) {
              FUN_00d83c2d();
            }
            puVar9 = (undefined4 *)piVar7[0x12];
          }
          piVar6 = (int *)*puVar9;
          uStack_4 = 0xffffffff;
          if (!bVar2) {
            ExceptionList = local_c;
            return piVar6;
          }
          if (param_4 == (int *)0x0) {
            ExceptionList = local_c;
            return piVar6;
          }
          (**(code **)(*param_4 + 0x10))(0);
          ExceptionList = local_c;
          return piVar6;
        }
        iVar5 = piVar7[0x12];
        if ((iVar5 == 0) || ((uint)(piVar7[0x13] - iVar5 >> 2) <= uVar3)) {
          apiStack_24[0] = (int *)0x0;
          ppiVar8 = apiStack_24;
          uStack_4 = 0;
          bVar2 = true;
        }
        else {
          if ((iVar5 == 0) || ((uint)(piVar7[0x13] - iVar5 >> 2) <= uVar3)) {
            FUN_00d83c2d();
          }
          ppiVar8 = (int **)(piVar7[0x12] + uVar3 * 4);
        }
        piVar1 = *ppiVar8;
        uStack_4 = 0xffffffff;
        if ((bVar2) && (bVar2 = false, apiStack_24[0] != (int *)0x0)) {
          (**(code **)(*apiStack_24[0] + 0x10))(0);
        }
        param_1 = local_1c;
      } while ((((piVar1[9] < iStack_14) || (iStack_14 < piVar1[7])) || (piVar1[10] < iStack_10)) ||
              (iStack_10 < piVar1[8]));
      if (((char)param_4 != '\0') ||
         (piVar6 = (int *)GCtrl_findDeepestChildAtPointRecursive(piVar1,&iStack_14,0),
         piVar6 == (int *)0x0)) {
        piVar6 = piVar1;
      }
    }
    else {
      piVar6 = (int *)GCtrl_findDeepestChildAtPoint(iVar5,param_3,param_4);
    }
  }
  ExceptionList = local_c;
  return piVar6;
}

