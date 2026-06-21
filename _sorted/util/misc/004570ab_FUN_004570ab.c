// addr: 0x004570ab
// name: FUN_004570ab
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_004570ab(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)(param_1 + 8) == 0) {
    FUN_004565f6(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  FUN_00452f2b(**(undefined4 **)(param_1 + 4),param_1);
  cVar1 = FUN_00451304(&local_c);
  uVar3 = param_5;
  iVar5 = param_4;
  if (cVar1 == '\0') {
    FUN_00452f2b(*(undefined4 *)(param_1 + 4),param_1);
    cVar1 = FUN_00451304(&local_c);
    uVar3 = param_5;
    iVar6 = param_4;
    if (cVar1 != '\0') {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
      cVar1 = FUN_0045149b(iVar6 + 0xc,param_5);
      if (cVar1 == '\0') goto LAB_00457216;
      uVar4 = 0;
      goto LAB_00457209;
    }
    cVar1 = FUN_0045149b(param_5,param_4 + 0xc);
    if (cVar1 == '\0') {
LAB_004571a3:
      cVar1 = FUN_0045149b(iVar6 + 0xc,uVar3);
      if (cVar1 == '\0') {
LAB_00457216:
        puVar2 = (undefined4 *)FUN_00456b25(local_10,uVar3);
        *param_2 = *puVar2;
        param_2[1] = puVar2[1];
        return param_2;
      }
      local_c = param_3;
      local_8 = iVar6;
      FUN_00452f2b(*(undefined4 *)(param_1 + 4),param_1);
      FUN_00451de3();
      cVar1 = FUN_00451304(&param_3);
      if ((cVar1 == '\0') && (cVar1 = FUN_0045149b(uVar3,local_8 + 0xc), cVar1 == '\0'))
      goto LAB_00457216;
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x15);
      iVar5 = local_8;
    }
    else {
      local_c = param_3;
      local_8 = iVar6;
      FUN_00451d82();
      cVar1 = FUN_0045149b(local_8 + 0xc,uVar3);
      if (cVar1 == '\0') goto LAB_004571a3;
      cVar1 = *(char *)(*(int *)(local_8 + 8) + 0x15);
      iVar5 = iVar6;
      iVar6 = local_8;
    }
    if (cVar1 != '\0') {
      uVar4 = 0;
      goto LAB_00457209;
    }
  }
  else {
    cVar1 = FUN_0045149b(param_5,param_4 + 0xc);
    if (cVar1 == '\0') goto LAB_00457216;
  }
  uVar4 = 1;
  iVar6 = iVar5;
LAB_00457209:
  FUN_004565f6(param_2,uVar4,iVar6,uVar3);
  return param_2;
}

