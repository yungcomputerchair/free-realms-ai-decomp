// addr: 0x013621e0
// name: FUN_013621e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_013621e0(int param_1,undefined4 *param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int local_c;
  undefined4 local_8;
  
                    /* Finds or inserts a string-keyed state-machine/action entry in a red-black
                       tree. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0135e650(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  if (param_4 == iVar1) {
    bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
    if (bVar2) {
      FUN_0135e650(param_2,1,param_4,param_5);
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
        FUN_0135e650(param_2,0,*(undefined4 *)(*(int *)(param_1 + 4) + 8),param_5);
        return param_2;
      }
    }
    else {
      bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
      if (bVar2) {
        FUN_0134b8d0();
        bVar2 = StdString_lessByPrefixCompare((void *)(param_4 + 0xc),param_5);
        if (bVar2) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x2d) != '\0') {
            FUN_0135e650(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_0135e650(param_2,1,param_4,param_5);
          return param_2;
        }
      }
      bVar2 = StdString_lessByPrefixCompare((void *)(param_4 + 0xc),param_5);
      if (bVar2) {
        local_8 = *(undefined4 *)(param_1 + 4);
        local_c = param_1;
        FUN_0131d920();
        cVar3 = FUN_0131d5b0(&local_c);
        if (cVar3 == '\0') {
          bVar2 = StdString_lessByPrefixCompare(param_5,(void *)(param_4 + 0xc));
          if (!bVar2) goto LAB_013623b5;
        }
        if (*(char *)(*(int *)(param_4 + 8) + 0x2d) != '\0') {
          FUN_0135e650(param_2,0,param_4,param_5);
          return param_2;
        }
        FUN_0135e650(param_2,1,param_4,param_5);
        return param_2;
      }
    }
  }
LAB_013623b5:
  puVar4 = (undefined4 *)FUN_013620a0(&local_c,param_5);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  return param_2;
}

