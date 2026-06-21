// addr: 0x0057c129
// name: FUN_0057c129
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 FUN_0057c129(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_48 [20];
  int local_34;
  int local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_5 = 0;
  FUN_00553c83(**(undefined4 **)(param_1 + 4),param_1);
  local_10 = local_18;
  local_c = local_14;
  FUN_00553c83(*(undefined4 *)(param_1 + 4),param_1);
  cVar2 = FUN_00553441(&local_18);
  while (cVar2 == '\0') {
    iVar3 = FUN_005627b4();
    iVar6 = *param_2;
    local_24 = *(int *)(param_3 + 4);
    iVar3 = *(int *)(iVar3 + 4) + -1 + iVar6;
    local_1c = *(int *)(param_3 + 0xc);
    iVar4 = FUN_005627b4();
    piVar1 = *(int **)(iVar4 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    if (((piVar1[0x18] & 8U) != 0) && (iVar4 = FUN_00406665(), iVar4 != 0)) {
      local_24 = local_24 + *(int *)(iVar4 + 0x98);
      iVar6 = iVar6 + *(int *)(iVar4 + 0x94);
      iVar3 = iVar3 + *(int *)(iVar4 + 0x94);
      local_1c = local_1c + *(int *)(iVar4 + 0x98);
    }
    piVar5 = (int *)FUN_0040f6b2(local_48);
    local_34 = piVar5[1];
    if ((((*piVar5 != iVar6) || (piVar5[2] != iVar3)) || (local_34 != local_24)) ||
       (piVar5[3] != local_1c)) {
      FUN_004072e2(iVar6,local_24,(iVar3 - iVar6) + 1,(local_1c - local_24) + 1,4);
      local_5 = 1;
    }
    iVar3 = FUN_005627b4();
    iVar6 = FUN_005627b4();
    *param_2 = *param_2 + *(int *)(iVar6 + 0x14) + *(int *)(iVar3 + 4);
    (**(code **)(*piVar1 + 0x10))(0);
    FUN_00563504();
    FUN_00553c83(*(undefined4 *)(param_1 + 4),param_1);
    cVar2 = FUN_00553441(&local_18);
  }
  return local_5;
}

