// addr: 0x01325d30
// name: FUN_01325d30
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_01325d30(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_01325100(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  if (param_4 == iVar1) {
    if (*param_5 < *(int *)(param_4 + 0xc)) {
      FUN_01325100(param_2,1,param_4,param_5);
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
        FUN_01325100(param_2,0,iVar1,param_5);
        return param_2;
      }
    }
    else {
      iVar1 = *param_5;
      iVar2 = *(int *)(param_4 + 0xc);
      bVar6 = SBORROW4(iVar2,iVar1);
      iVar3 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        FUN_01322ec0();
        iVar3 = *param_5;
        if (*(int *)(param_4 + 0xc) < iVar3) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x21) != '\0') {
            FUN_01325100(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_01325100(param_2,1,param_4,param_5);
          return param_2;
        }
        bVar6 = SBORROW4(*(int *)(param_4 + 0xc),iVar3);
        iVar3 = *(int *)(param_4 + 0xc) - iVar3;
      }
      if (bVar6 != iVar3 < 0) {
        local_8 = *(undefined4 *)(param_1 + 4);
        local_c = param_1;
        FUN_01322f50();
        cVar4 = FUN_01322960(&local_c);
        if ((cVar4 != '\0') || (*param_5 < *(int *)(param_4 + 0xc))) {
          if (*(char *)(*(int *)(param_4 + 8) + 0x21) != '\0') {
            FUN_01325100(param_2,0,param_4,param_5);
            return param_2;
          }
          FUN_01325100(param_2,1,param_4,param_5);
          return param_2;
        }
      }
    }
  }
  puVar5 = (undefined4 *)FUN_01325400(&local_c,param_5);
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  return param_2;
}

