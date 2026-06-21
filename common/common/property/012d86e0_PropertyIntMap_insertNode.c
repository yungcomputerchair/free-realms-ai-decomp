// addr: 0x012d86e0
// name: PropertyIntMap_insertNode
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
PropertyIntMap_insertNode(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_c;
  undefined4 local_8;
  
                    /* Inserts or locates a node in a property integer map. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_012d7b30(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  if (param_4 == iVar1) {
    if (*param_5 < *(int *)(param_4 + 0xc)) {
      FUN_012d7b30(param_2,1,param_4,param_5);
      return param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((param_3 == 0) || (param_3 != param_1)) {
      FUN_00d83c2d();
    }
    if (param_4 == iVar1) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
      if (*(int *)(iVar1 + 0xc) < *param_5) {
        FUN_012d7b30(param_2,0,iVar1,param_5);
        return param_2;
      }
    }
    else {
      iVar1 = *param_5;
      iVar2 = *(int *)(param_4 + 0xc);
      bVar6 = SBORROW4(iVar2,iVar1);
      iVar3 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        FUN_012d5950();
        iVar3 = *param_5;
        if (*(int *)(param_4 + 0xc) < iVar3) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x15) != '\0') {
            FUN_012d7b30(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_012d7b30(param_2,1,param_4,param_5);
          return param_2;
        }
        bVar6 = SBORROW4(*(int *)(param_4 + 0xc),iVar3);
        iVar3 = *(int *)(param_4 + 0xc) - iVar3;
      }
      if (bVar6 != iVar3 < 0) {
        local_8 = *(undefined4 *)(param_1 + 4);
        local_c = param_1;
        FUN_012d60b0();
        cVar4 = FUN_012d5120(&local_c);
        if ((cVar4 != '\0') || (*param_5 < *(int *)(param_4 + 0xc))) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x15) != '\0') {
            FUN_012d7b30(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_012d7b30(param_2,1,param_4,param_5);
          return param_2;
        }
      }
    }
  }
  puVar5 = (undefined4 *)FUN_012d81b0(&local_c,param_5);
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  return param_2;
}

