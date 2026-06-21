// addr: 0x01404a50
// name: CardFormula_selectCounterCardFromList
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CardFormula_selectCounterCardFromList(void *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 unaff_EBX;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int unaff_retaddr;
  int *piStack_38;
  void *pvStack_34;
  int *piStack_24;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Selects a counter/preferred card from a provided vector or fallback vectors,
                       using card attribute ids and random fallback. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01691228;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  CardFormula_computeScaledValue(param_1);
  _rand();
  (**(code **)(**(int **)((int)param_1 + 0x10) + 0x228))(uVar3);
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x0;
  uStack_4 = 0;
  (**(code **)(**(int **)((int)param_1 + 0x10) + 0x144))(&puStack_1c);
  puVar10 = puStack_1c;
  if (puStack_18 < puStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = puStack_18;
    if (puStack_18 < puStack_1c) {
      FUN_00d83c2d();
    }
    if (puVar10 == puVar1) goto LAB_01404d8d;
    if (puStack_18 <= puVar10) {
      FUN_00d83c2d();
    }
    piVar6 = (int *)*puVar10;
    pvVar4 = (void *)(**(code **)(*piVar6 + 0x28))();
    if ((pvVar4 == param_1) && (cVar2 = (**(code **)(*piVar6 + 0x1c0))(0x22633), cVar2 != '\0'))
    break;
    if (puStack_18 <= puVar10) {
      FUN_00d83c2d();
    }
    puVar10 = puVar10 + 1;
  }
  iVar5 = (**(code **)(*piVar6 + 0x15c))(0x22974,0);
  uVar12 = (**(code **)(*piVar6 + 0x15c))(0x22973,0);
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  piStack_24 = *(int **)(param_2 + 4);
  piStack_38 = (int *)0x0;
  if (*(uint *)(param_2 + 8) < piStack_24) {
    FUN_00d83c2d();
    iVar8 = extraout_EDX;
  }
  while( true ) {
    uVar3 = *(uint *)(param_2 + 8);
    if (uVar3 < *(uint *)(param_2 + 4)) {
      FUN_00d83c2d();
      iVar8 = extraout_EDX_00;
    }
    piVar6 = piStack_38;
    if (piStack_24 == (int *)uVar3) break;
    if (*(uint *)(param_2 + 8) <= piStack_24) {
      FUN_00d83c2d();
      iVar8 = extraout_EDX_01;
    }
    piVar6 = find_play_element_in_maps(*(void **)((int)param_1 + 0x10),iVar8);
    iVar7 = (**(code **)(*piVar6 + 0x15c))(0x22974,0);
    uVar13 = (**(code **)(*piVar6 + 0x15c))(0x22973,0);
    iVar8 = (int)((ulonglong)uVar13 >> 0x20);
    param_1 = pvStack_34;
    if (iVar5 == 0x222e6) {
      bVar11 = iVar7 == 0x222e7;
LAB_01404c1a:
      if (bVar11) break;
    }
    else {
      if (iVar5 == 0x222e8) {
        bVar11 = iVar7 == 0x222e6;
        goto LAB_01404c1a;
      }
      if (iVar5 == 0x222e7) {
        bVar11 = iVar7 == 0x222e8;
        goto LAB_01404c1a;
      }
    }
    if ((iVar5 == iVar7) && ((int)uVar13 < (int)uVar12)) break;
    if (*(uint *)(param_2 + 8) <= piStack_24) {
      FUN_00d83c2d();
      iVar8 = extraout_EDX_02;
    }
    piStack_24 = (int *)((int)piStack_24 + 4);
  }
  piStack_38 = piVar6;
  if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
LAB_01404d42:
    if (piStack_38 == (int *)0x0) {
LAB_01404d8d:
      if ((*(int *)(param_2 + 4) == 0) ||
         (uVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2, uVar3 == 0)) {
        if ((*(int *)(unaff_retaddr + 4) == 0) ||
           (uVar3 = *(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2, uVar3 == 0)) {
          puStack_8 = (undefined1 *)0xffffffff;
          if (puStack_1c == (undefined4 *)0x0) {
            ExceptionList = pvStack_10;
            return (int *)0x0;
          }
                    /* WARNING: Subroutine does not return */
          _free(puStack_1c);
        }
        uVar9 = _rand();
        uVar9 = uVar9 % uVar3;
        if ((*(int *)(unaff_retaddr + 4) == 0) ||
           ((uint)(*(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2) <= uVar9)) {
          FUN_00d83c2d();
        }
        iVar8 = *(int *)(*(int *)(unaff_retaddr + 4) + uVar9 * 4);
      }
      else {
        uVar9 = _rand();
        if ((*(int *)(param_2 + 4) == 0) ||
           ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) <= uVar9 % uVar3)) {
          FUN_00d83c2d();
        }
        iVar8 = *(int *)(param_2 + 4);
      }
      piVar6 = find_play_element_in_maps(*(void **)((int)param_1 + 0x10),iVar8);
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_1c == (undefined4 *)0x0) {
        ExceptionList = pvStack_10;
        return piVar6;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
  }
  else if (piStack_38 == (int *)0x0) {
    piStack_24 = *(int **)(unaff_retaddr + 4);
    if (*(int **)(unaff_retaddr + 8) < piStack_24) {
      FUN_00d83c2d();
    }
    do {
      piVar6 = *(int **)(unaff_retaddr + 8);
      if (piVar6 < *(int **)(unaff_retaddr + 4)) {
        FUN_00d83c2d();
      }
      if (piStack_24 == piVar6) goto LAB_01404d8d;
      if (*(int **)(unaff_retaddr + 8) <= piStack_24) {
        FUN_00d83c2d();
      }
      piStack_38 = find_play_element_in_maps(*(void **)((int)param_1 + 0x10),*piStack_24);
      iVar8 = (**(code **)(*piStack_38 + 0x15c))(0x22974,0);
      iVar7 = (**(code **)(*piStack_38 + 0x15c))(0x22973,0);
      if (iVar5 == 0x222e6) {
        bVar11 = iVar8 == 0x222e7;
LAB_01404d0a:
        if (bVar11) goto LAB_01404d42;
      }
      else {
        if (iVar5 == 0x222e8) {
          bVar11 = iVar8 == 0x222e6;
          goto LAB_01404d0a;
        }
        if (iVar5 == 0x222e7) {
          bVar11 = iVar8 == 0x222e8;
          goto LAB_01404d0a;
        }
      }
      if ((iVar5 == iVar8) && (iVar7 < (int)uVar12)) goto LAB_01404d42;
      if (*(int **)(unaff_retaddr + 8) <= piStack_24) {
        FUN_00d83c2d();
      }
      piStack_24 = piStack_24 + 1;
    } while( true );
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (puStack_1c == (undefined4 *)0x0) {
    ExceptionList = pvStack_10;
    return piStack_38;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_1c);
}

