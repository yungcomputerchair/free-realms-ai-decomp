// addr: 0x0136b200
// name: Game_applyDeserializedPlayElementRanges
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
Game_applyDeserializedPlayElementRanges(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  int local_2c;
  int *local_28;
  undefined1 local_24 [4];
  int *local_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies and appends play-element ranges, updates int-keyed game records, and
                       applies/removes elements during Game_deserialize-style state restoration.
                       Exact high-level operation is unclear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01680308;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  iVar1 = param_1 + 0x108;
  FUN_01354a00(&local_2c,&param_2);
  iVar5 = local_2c;
  iVar3 = *(int *)(param_1 + 0x10c);
  if ((local_2c == 0) || (local_2c != iVar1)) {
    FUN_00d83c2d(uVar6);
  }
  piVar8 = local_28;
  if (local_28 != (int *)iVar3) {
    if (iVar5 == 0) {
      FUN_00d83c2d(uVar6);
    }
    if (local_28 == (int *)*(int *)(iVar5 + 4)) {
      FUN_00d83c2d(uVar6);
    }
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    uVar10 = *(uint *)((int)local_28 + 0x14);
    uVar4 = param_4;
    if (*(uint *)((int)local_28 + 0x18) < uVar10) {
      FUN_00d83c2d(uVar6);
      uVar4 = param_4;
    }
    while( true ) {
      uVar6 = *(uint *)((int)local_28 + 0x18);
      if (uVar6 < *(uint *)((int)local_28 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar9 = local_18;
      if (uVar10 == uVar6) break;
      if (*(uint *)((int)local_28 + 0x18) <= uVar10) {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar10 + 4) != 0) {
        if (*(uint *)((int)local_28 + 0x18) <= uVar10) {
          FUN_00d83c2d();
        }
        uVar6 = get_field_68(*(void **)(uVar10 + 4));
        if (uVar6 == uVar4) {
          if (*(uint *)((int)local_28 + 0x18) <= uVar10) {
            FUN_00d83c2d();
          }
          FUN_01361a10(uVar10);
        }
      }
      if (*(uint *)((int)local_28 + 0x18) <= uVar10) {
        FUN_00d83c2d();
      }
      uVar10 = uVar10 + 8;
    }
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar12 = local_14;
      local_28 = piVar9;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      if (piVar9 == piVar12) break;
      if (local_14 <= piVar9) {
        FUN_00d83c2d();
      }
      piVar12 = *(int **)((int)piVar8 + 0x18);
      if (piVar12 < *(int **)((int)piVar8 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar7 = *(int **)((int)piVar8 + 0x14);
      if (*(int **)((int)piVar8 + 0x18) < piVar7) {
        FUN_00d83c2d();
      }
      piVar11 = piVar7;
      if (piVar7 != piVar12) {
        do {
          if ((*piVar11 == *piVar9) && (piVar11[1] == piVar9[1])) break;
          piVar11 = piVar11 + 2;
        } while (piVar11 != piVar12);
      }
      piVar12 = *(int **)((int)piVar8 + 0x18);
      local_20 = piVar7;
      if (piVar12 < *(int **)((int)piVar8 + 0x14)) {
        FUN_00d83c2d();
        piVar9 = local_28;
      }
      if (piVar8 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar11 != piVar12) {
        piVar12 = *(int **)((int)piVar8 + 0x18);
        piVar7 = piVar11;
        while (piVar7 = piVar7 + 2, piVar7 != piVar12) {
          *piVar11 = *piVar7;
          piVar11[1] = piVar7[1];
          piVar11 = piVar11 + 2;
        }
        *(int *)((int)piVar8 + 0x18) = *(int *)((int)piVar8 + 0x18) + -8;
      }
      if (local_14 <= piVar9) {
        FUN_00d83c2d();
      }
      piVar9 = piVar9 + 2;
    }
    if ((*(int *)((int)piVar8 + 0x14) == 0) ||
       (*(int *)((int)piVar8 + 0x18) - *(int *)((int)piVar8 + 0x14) >> 3 == 0)) {
      piVar8 = *(int **)(param_1 + 0x10c);
      cVar2 = *(char *)(piVar8[1] + 0x21);
      piVar9 = piVar8;
      piVar12 = (int *)piVar8[1];
      while (cVar2 == '\0') {
        if (param_2 < piVar12[3]) {
          piVar7 = (int *)*piVar12;
          piVar9 = piVar12;
        }
        else {
          piVar7 = (int *)piVar12[2];
        }
        piVar12 = piVar7;
        cVar2 = *(char *)((int)piVar7 + 0x21);
      }
      cVar2 = *(char *)(piVar8[1] + 0x21);
      piVar12 = (int *)piVar8[1];
      while (local_2c = iVar1, local_28 = piVar8, cVar2 == '\0') {
        if (piVar12[3] < param_2) {
          piVar7 = (int *)piVar12[2];
          piVar12 = piVar8;
        }
        else {
          piVar7 = (int *)*piVar12;
        }
        piVar8 = piVar12;
        piVar12 = piVar7;
        cVar2 = *(char *)((int)piVar7 + 0x21);
      }
      while( true ) {
        if ((local_2c == 0) || (local_2c != iVar1)) {
          FUN_00d83c2d();
        }
        if (local_28 == piVar9) break;
        FUN_0134a830();
      }
      FUN_013669d0(local_24,iVar1,piVar8,iVar1,piVar9);
    }
    if ((local_18 != (int *)0x0) && ((int)local_14 - (int)local_18 >> 3 != 0)) {
      iVar3 = *(int *)(param_1 + 0x10c);
      piVar8 = (int *)FUN_01354a00(local_24,&param_3);
      if ((*piVar8 == 0) || (*piVar8 != iVar1)) {
        FUN_00d83c2d();
      }
      piVar9 = local_18;
      if (piVar8[1] == iVar3) {
        puVar13 = local_1c;
        Game_IntKeyTree_getOrInsertRecord(&param_3);
        FUN_0135d5b0(puVar13);
      }
      else {
        if (local_14 < local_18) {
          FUN_00d83c2d();
        }
        while( true ) {
          piVar8 = local_14;
          if (local_14 < local_18) {
            FUN_00d83c2d();
          }
          if (piVar9 == piVar8) break;
          if (local_14 <= piVar9) {
            FUN_00d83c2d();
          }
          piVar8 = piVar9;
          Game_IntKeyTree_getOrInsertRecord(&param_3);
          FUN_01361a10(piVar8);
          if (local_14 <= piVar9) {
            FUN_00d83c2d();
          }
          piVar9 = piVar9 + 2;
        }
      }
    }
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return 1;
}

