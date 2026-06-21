// addr: 0x012a46a0
// name: StdMapIntString_findInsertPosition
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdMapIntString_findInsertPosition
          (int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  int local_c;
  undefined4 local_8;
  
                    /* Finds the insertion position for the int-to-string map helper, honoring a
                       hint when possible and returning a parent/side pair for insertion. Evidence
                       is ordered comparisons on the key, sentinel checks, iterator movement, and
                       calls to the node insertion-position helper. */
  iVar2 = param_3;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_012a3d00(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  iVar5 = param_4;
  if (param_4 == iVar1) {
    piVar8 = param_5;
    if (*param_5 < *(int *)(param_4 + 0xc)) {
      FUN_012a3d00(param_2,1,param_4,param_5);
      return param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || (iVar2 != param_1)) {
      FUN_00d83c2d();
    }
    piVar8 = param_5;
    if (iVar5 == iVar1) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
      if (*(int *)(iVar2 + 0xc) < *param_5) {
        FUN_012a3d00(param_2,0,iVar2,param_5);
        return param_2;
      }
    }
    else {
      iVar1 = *param_5;
      iVar3 = *(int *)(iVar5 + 0xc);
      bVar9 = SBORROW4(iVar3,iVar1);
      iVar4 = iVar3 - iVar1;
      if (iVar1 < iVar3) {
        param_3 = iVar2;
        param_4 = iVar5;
        FUN_012a1070();
        iVar4 = *piVar8;
        if (*(int *)(param_4 + 0xc) < iVar4) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x2d) != '\0') {
            FUN_012a3d00(param_2,0,param_4,piVar8);
            return param_2;
          }
          FUN_012a3d00(param_2,1,iVar5,piVar8);
          return param_2;
        }
        bVar9 = SBORROW4(*(int *)(iVar5 + 0xc),iVar4);
        iVar4 = *(int *)(iVar5 + 0xc) - iVar4;
      }
      if (bVar9 != iVar4 < 0) {
        local_8 = *(undefined4 *)(param_1 + 4);
        param_3 = iVar2;
        param_4 = iVar5;
        local_c = param_1;
        MessageDB_RbTreeIterator_next(&param_3);
        cVar6 = FUN_012a07e0(&local_c);
        if ((cVar6 != '\0') || (*piVar8 < *(int *)(param_4 + 0xc))) {
          if (*(char *)(*(int *)(iVar5 + 8) + 0x2d) != '\0') {
            FUN_012a3d00(param_2,0,iVar5,piVar8);
            return param_2;
          }
          FUN_012a3d00(param_2,1,param_4,piVar8);
          return param_2;
        }
      }
    }
  }
  puVar7 = (undefined4 *)FUN_012a4300(&local_c,piVar8);
  *param_2 = *puVar7;
  param_2[1] = puVar7[1];
  return param_2;
}

