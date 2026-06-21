// addr: 0x005f2948
// name: FUN_005f2948
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_005f2948(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
    FUN_005eb281(param_2,1,*(undefined4 *)(param_1 + 4),param_5);
    return param_2;
  }
  FUN_005dbcd1(**(undefined4 **)(param_1 + 4),param_1);
  cVar1 = FUN_005dbcf5(&local_c);
  uVar3 = param_5;
  iVar5 = param_4;
  if (cVar1 == '\0') {
    FUN_005dbcd1(*(undefined4 *)(param_1 + 4),param_1);
    cVar1 = FUN_005dbcf5(&local_c);
    uVar3 = param_5;
    iVar6 = param_4;
    if (cVar1 != '\0') {
      iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
      cVar1 = FUN_004cf386(iVar6 + 0xc,param_5);
      if (cVar1 == '\0') goto LAB_005f2ab3;
      uVar4 = 0;
      goto LAB_005f2aa6;
    }
    cVar1 = FUN_004cf386(param_5,param_4 + 0xc);
    if (cVar1 == '\0') {
LAB_005f2a40:
      cVar1 = FUN_004cf386(iVar6 + 0xc,uVar3);
      if (cVar1 == '\0') {
LAB_005f2ab3:
        puVar2 = (undefined4 *)FUN_005ef6c3(local_10,uVar3);
        *param_2 = *puVar2;
        param_2[1] = puVar2[1];
        return param_2;
      }
      local_c = param_3;
      local_8 = iVar6;
      FUN_005dbcd1(*(undefined4 *)(param_1 + 4),param_1);
      FUN_005e187d();
      cVar1 = FUN_005dbcf5(&param_3);
      if ((cVar1 == '\0') && (cVar1 = FUN_004cf386(uVar3,local_8 + 0xc), cVar1 == '\0'))
      goto LAB_005f2ab3;
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x15);
      iVar5 = local_8;
    }
    else {
      local_c = param_3;
      local_8 = iVar6;
      FUN_005dd764();
      cVar1 = FUN_004cf386(local_8 + 0xc,uVar3);
      if (cVar1 == '\0') goto LAB_005f2a40;
      cVar1 = *(char *)(*(int *)(local_8 + 8) + 0x15);
      iVar5 = iVar6;
      iVar6 = local_8;
    }
    if (cVar1 != '\0') {
      uVar4 = 0;
      goto LAB_005f2aa6;
    }
  }
  else {
    cVar1 = FUN_004cf386(param_5,param_4 + 0xc);
    if (cVar1 == '\0') goto LAB_005f2ab3;
  }
  uVar4 = 1;
  iVar6 = iVar5;
LAB_005f2aa6:
  FUN_005eb281(param_2,uVar4,iVar6,uVar3);
  return param_2;
}

