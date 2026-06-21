// addr: 0x0064e0bc
// name: FUN_0064e0bc
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0064e0bc(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 local_38 [4];
  undefined4 *local_34;
  int local_30;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_004a5f6a();
    local_8 = param_1;
    puVar5 = (undefined4 *)FUN_004b2bd4(&local_8);
    *puVar5 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      for (piVar11 = *(int **)(*(int *)(param_1 + 0x10) + 0x10); *piVar11 != 0;
          piVar11 = piVar11 + 2) {
        iVar10 = FUN_0064dfa2(*piVar11);
        if (iVar10 != 0) {
          local_8 = iVar10;
          FUN_004923b3(local_34,local_38);
          puVar5 = &local_14;
          FUN_0064e058(local_24,&local_8);
          cVar4 = FUN_00483239(puVar5);
          if (cVar4 != '\0') {
            if (*(int *)(iVar10 + 0x18) == 0) {
              FUN_0064e0bc(iVar10);
            }
            local_8 = 0;
            if (0 < *(int *)(iVar10 + 0x14)) {
              do {
                FUN_004923b3(local_34,local_38);
                puVar14 = local_1c;
                iVar7 = local_8 * 8;
                FUN_0064e058(local_2c,*(int *)(iVar10 + 0x18) + iVar7);
                cVar4 = FUN_00483239(puVar14);
                if (cVar4 != '\0') {
                  iVar7 = *(int *)(iVar10 + 0x18) + iVar7;
                  iVar2 = *(int *)(iVar7 + 4);
                  iVar3 = piVar11[1];
                  piVar6 = (int *)FUN_004b2bd4(iVar7);
                  *piVar6 = iVar2 + iVar3;
                }
                local_8 = local_8 + 1;
              } while (local_8 < *(int *)(iVar10 + 0x14));
            }
          }
        }
      }
    }
    iVar10 = DAT_01cc491c;
    puVar1 = (uint *)(DAT_01cc491c + 0x1c);
    uVar12 = local_30 * 8;
    uVar8 = *puVar1 + uVar12;
    if ((*(uint *)(DAT_01cc491c + 0x10) < *puVar1 + uVar12) &&
       ((*(uint *)(DAT_01cc491c + 0x10) < uVar12 ||
        (iVar7 = FUN_0052138d(), uVar8 = uVar12, iVar7 == 0)))) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(iVar10 + 0x18) + *puVar1);
      *puVar1 = uVar8;
    }
    FUN_004923b3(*local_34,local_38);
    local_c = local_14;
    local_8 = local_10;
    FUN_004923b3(local_34,local_38);
    cVar4 = FUN_00483239(&local_14);
    puVar13 = puVar5;
    while (cVar4 == '\0') {
      puVar9 = (undefined4 *)FUN_004923d7();
      *puVar13 = *puVar9;
      iVar10 = FUN_004923d7();
      puVar13[1] = *(undefined4 *)(iVar10 + 4);
      FUN_00483f1e();
      puVar13 = puVar13 + 2;
      FUN_004923b3(local_34,local_38);
      cVar4 = FUN_00483239(&local_14);
    }
    *(int *)(param_1 + 0x14) = local_30;
    *(undefined4 **)(param_1 + 0x18) = puVar5;
    FUN_004b0cc8();
  }
  return;
}

