// addr: 0x01404730
// name: CardFormula_selectRandomCounterCard
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __fastcall CardFormula_selectRandomCounterCard(void *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 uVar8;
  undefined4 extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 unaff_EBX;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int unaff_retaddr;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Selects a random candidate card/object from context lists, preferring objects
                       that counter the current card attribute and falling back to a random
                       candidate. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016911f8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  uVar5 = CardFormula_computeScaledValue(param_1);
  iVar6 = _rand();
  uStack_30 = CONCAT13(iVar6 % 100 < (int)uVar5 / 2,
                       CONCAT12(iVar6 % 100 < (int)uVar5,(undefined2)uStack_30));
  (**(code **)(**(int **)((int)param_1 + 0x10) + 0x228))(uVar4);
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x0;
  uStack_4 = 0;
  (**(code **)(**(int **)((int)param_1 + 0x10) + 0x144))(&puStack_1c);
  puVar9 = puStack_1c;
  if (puStack_18 < puStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar2 = puStack_18;
    if (puStack_18 < puStack_1c) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar2) goto LAB_014049ab;
    if (puStack_18 <= puVar9) {
      FUN_00d83c2d();
    }
    piVar7 = (int *)*puVar9;
    iVar6 = (**(code **)(*piVar7 + 0x28))();
    if ((iVar6 == iStack_28) && (cVar3 = (**(code **)(*piVar7 + 0x1c0))(0x22633), cVar3 != '\0'))
    break;
    if (puStack_18 <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 1;
  }
  (**(code **)(*piVar7 + 0x15c))(0x22974,0);
  uVar11 = (**(code **)(*piVar7 + 0x15c))(0x22973,0);
  iVar6 = (int)((ulonglong)uVar11 >> 0x20);
  piStack_2c = (int *)0x0;
  iStack_28 = 99999;
  if ((char)((uint)unaff_EBX >> 0x10) != '\0') {
    uVar4 = *(uint *)(unaff_retaddr + 4);
    if (*(uint *)(unaff_retaddr + 8) < uVar4) {
      FUN_00d83c2d();
      iVar6 = extraout_EDX;
    }
    while( true ) {
      uVar5 = *(uint *)(unaff_retaddr + 8);
      if (uVar5 < *(uint *)(unaff_retaddr + 4)) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_00;
      }
      if (uVar4 == uVar5) break;
      if (*(uint *)(unaff_retaddr + 8) <= uVar4) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_01;
      }
      piVar7 = find_play_element_in_maps(*(void **)((int)param_1 + 0x10),iVar6);
      iVar6 = (**(code **)(*piVar7 + 0x15c))(0x22974,0);
      uVar12 = (**(code **)(*piVar7 + 0x15c))(0x22973,0);
      uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (iVar6 == 0x222e6) {
        bVar10 = uStack_30 == 0x222e7;
LAB_0140491b:
        if (!bVar10) goto LAB_0140491d;
LAB_01404929:
        if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
          uVar5 = _rand();
          uVar1 = CONCAT44(extraout_EDX_02,iStack_28);
          uVar12 = CONCAT44(extraout_EDX_02,iStack_28);
          uVar5 = uVar5 & 0x80000001;
          bVar10 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar10 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar10) goto LAB_0140494f;
        }
        else {
          uVar1 = CONCAT44(uVar8,iStack_28);
          if ((int)uVar12 < iStack_28) {
LAB_0140494f:
            piStack_2c = piVar7;
            uVar1 = uVar12;
          }
        }
      }
      else {
        if (iVar6 == 0x222e8) {
          bVar10 = uStack_30 == 0x222e6;
          goto LAB_0140491b;
        }
        if (iVar6 == 0x222e7) {
          bVar10 = uStack_30 == 0x222e8;
          goto LAB_0140491b;
        }
LAB_0140491d:
        uVar1 = CONCAT44(uVar8,iStack_28);
        if ((iVar6 == uStack_30) && (uVar1 = CONCAT44(uVar8,iStack_28), (int)uVar11 < (int)uVar12))
        goto LAB_01404929;
      }
      iVar6 = (int)((ulonglong)uVar1 >> 0x20);
      iStack_28 = (int)uVar1;
      if (*(uint *)(unaff_retaddr + 8) <= uVar4) {
        FUN_00d83c2d();
        iVar6 = extraout_EDX_03;
      }
      uVar4 = uVar4 + 4;
    }
    if (piStack_2c != (int *)0x0) {
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_1c == (undefined4 *)0x0) {
        ExceptionList = pvStack_10;
        return piStack_2c;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
  }
LAB_014049ab:
  if ((*(int *)(unaff_retaddr + 4) == 0) ||
     (uVar4 = *(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2, uVar4 == 0)) {
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
    piVar7 = (int *)0x0;
  }
  else {
    uVar5 = _rand();
    if ((*(int *)(unaff_retaddr + 4) == 0) ||
       ((uint)(*(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2) <= uVar5 % uVar4)) {
      FUN_00d83c2d();
    }
    piVar7 = find_play_element_in_maps(*(void **)((int)param_1 + 0x10),*(int *)(unaff_retaddr + 4));
    puStack_8 = (undefined1 *)0xffffffff;
    if (puStack_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1c);
    }
  }
  ExceptionList = pvStack_10;
  return piVar7;
}

