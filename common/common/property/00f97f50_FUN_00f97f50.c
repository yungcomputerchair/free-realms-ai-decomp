// addr: 0x00f97f50
// name: FUN_00f97f50
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_00f97f50(int param_1,undefined4 *param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int local_c;
  undefined4 local_8;
  
                    /* Finds or inserts a string-keyed red-black-tree node using string less-than
                       comparison. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00f979d0(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  if (param_4 == iVar1) {
    bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
    if (bVar2) {
      FUN_00f979d0(param_2,1,param_4,param_5);
      return param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((param_3 == 0) || (param_3 != param_1)) {
      FUN_00d83c2d();
    }
    if (param_4 == iVar1) {
      bVar2 = StdString_lessByPrefixCompare
                        ((void *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xc),param_5);
      if (bVar2) {
        FUN_00f979d0(param_2,0,*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_5);
        return param_2;
      }
    }
    else {
      bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
      if (bVar2) {
        FUN_00f94110();
        bVar2 = StdString_lessByPrefixCompare((void *)(param_4 + 0xc),param_5);
        if (bVar2) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x45) != '\0') {
            FUN_00f979d0(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_00f979d0(param_2,1,param_4,param_5);
          return param_2;
        }
      }
      bVar2 = StdString_lessByPrefixCompare((void *)(param_4 + 0xc),param_5);
      if (bVar2) {
        local_8 = *(undefined4 *)(param_1 + 4);
        local_c = param_1;
        FUN_00f943b0();
        cVar3 = FUN_00f93fb0(&local_c);
        if (cVar3 == '\0') {
          bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
          if (!bVar2) goto LAB_00f98125;
        }
        if (*(char *)(*(int *)(param_4 + 8) + 0x45) != '\0') {
          FUN_00f979d0(param_2,0,param_4,param_5);
          return param_2;
        }
        FUN_00f979d0(param_2,1,param_4,param_5);
        return param_2;
      }
    }
  }
LAB_00f98125:
  puVar4 = (undefined4 *)FUN_00f97dd0(&local_c,param_5);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  return param_2;
}

