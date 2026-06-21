// addr: 0x0051baf0
// name: FUN_0051baf0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_0051baf0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0050b2eb(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  FUN_004d0a25(**(undefined4 **)(param_1 + 4),param_1);
  cVar4 = FUN_004ce89c(&local_c);
  if (cVar4 == '\0') {
    FUN_004d0a25(*(undefined4 *)(param_1 + 4),param_1);
    cVar4 = FUN_004ce89c(&local_c);
    piVar6 = param_5;
    iVar9 = param_4;
    if (cVar4 != '\0') {
      iVar9 = *(int *)(*(int *)(param_1 + 4) + 8);
      if (*param_5 <= *(int *)(iVar9 + 0xc)) goto LAB_0051bc24;
LAB_0051bb90:
      uVar8 = 0;
      goto LAB_0051bb4e;
    }
    iVar1 = *param_5;
    iVar2 = *(int *)(param_4 + 0xc);
    bVar7 = SBORROW4(iVar2,iVar1);
    iVar3 = iVar2 - iVar1;
    if (iVar1 < iVar2) {
      local_c = param_3;
      local_8 = param_4;
      FUN_004d252e();
      iVar3 = *piVar6;
      if (*(int *)(local_8 + 0xc) < iVar3) {
        iVar1 = iVar9;
        iVar9 = local_8;
        if (*(char *)(*(int *)(local_8 + 8) + 0x19) == '\0') goto LAB_0051bb4c;
        goto LAB_0051bb90;
      }
      bVar7 = SBORROW4(*(int *)(iVar9 + 0xc),iVar3);
      iVar3 = *(int *)(iVar9 + 0xc) - iVar3;
    }
    if (bVar7 == iVar3 < 0) {
LAB_0051bc24:
      puVar5 = (undefined4 *)FUN_00515cae(local_10,piVar6);
      *param_2 = *puVar5;
      param_2[1] = puVar5[1];
      return param_2;
    }
    local_c = param_3;
    local_8 = iVar9;
    FUN_004d0a25(*(undefined4 *)(param_1 + 4),param_1);
    FUN_004e0d7e();
    cVar4 = FUN_004ce89c(&param_3);
    if ((cVar4 == '\0') && (*(int *)(local_8 + 0xc) <= *piVar6)) goto LAB_0051bc24;
    iVar1 = local_8;
    if (*(char *)(*(int *)(iVar9 + 8) + 0x19) != '\0') {
      uVar8 = 0;
      goto LAB_0051bb4e;
    }
  }
  else {
    piVar6 = param_5;
    iVar1 = param_4;
    if (*(int *)(param_4 + 0xc) <= *param_5) goto LAB_0051bc24;
  }
LAB_0051bb4c:
  iVar9 = iVar1;
  uVar8 = 1;
LAB_0051bb4e:
  FUN_0050b2eb(param_2,uVar8,iVar9,piVar6);
  return param_2;
}

