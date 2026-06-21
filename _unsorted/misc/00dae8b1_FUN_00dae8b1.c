// addr: 0x00dae8b1
// name: FUN_00dae8b1
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00dae8b1(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int *piVar20;
  LONG LVar21;
  undefined **_Memory;
  char *pcVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  int local_14 [2];
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14[0] = param_1;
  local_14[1] = 0;
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (undefined4 *)0x0;
    _Memory = &PTR_DAT_01b84e88;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    local_c = __malloc_crt(4);
    if (local_c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *local_c = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
      ppuVar23 = &PTR_DAT_01b84e88;
      ppuVar24 = _Memory;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppuVar24 = *ppuVar23;
        ppuVar23 = ppuVar23 + 1;
        ppuVar24 = ppuVar24 + 1;
      }
    }
    else {
      local_8 = __malloc_crt(4);
      if (local_8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *local_8 = 0;
      uVar3 = *(undefined2 *)(param_1 + 0x38);
      iVar4 = FUN_00d94163(local_14,1,uVar3,0x15,_Memory + 3);
      iVar5 = FUN_00d94163(local_14,1,uVar3,0x14,_Memory + 4);
      iVar6 = FUN_00d94163(local_14,1,uVar3,0x16,_Memory + 5);
      iVar7 = FUN_00d94163(local_14,1,uVar3,0x17,_Memory + 6);
      iVar8 = FUN_00d94163(local_14,1,uVar3,0x18,_Memory + 7);
      iVar9 = FUN_00d94163(local_14,1,uVar3,0x50,_Memory + 8);
      iVar10 = FUN_00d94163(local_14,1,uVar3,0x51,_Memory + 9);
      iVar11 = FUN_00d94163(local_14,0,uVar3,0x1a,_Memory + 10);
      iVar12 = FUN_00d94163(local_14,0,uVar3,0x19,(int)_Memory + 0x29);
      iVar13 = FUN_00d94163(local_14,0,uVar3,0x54,(int)_Memory + 0x2a);
      iVar14 = FUN_00d94163(local_14,0,uVar3,0x55,(int)_Memory + 0x2b);
      iVar15 = FUN_00d94163(local_14,0,uVar3,0x56,_Memory + 0xb);
      iVar16 = FUN_00d94163(local_14,0,uVar3,0x57,(int)_Memory + 0x2d);
      iVar17 = FUN_00d94163(local_14,0,uVar3,0x52,(int)_Memory + 0x2e);
      iVar18 = FUN_00d94163(local_14,0,uVar3,0x53,(int)_Memory + 0x2f);
      if (iVar18 != 0 ||
          (((((((((((((iVar4 != 0 || iVar5 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) ||
                  iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
             iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0)) {
        FUN_00dae828(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      pcVar19 = _Memory[7];
      while (*pcVar19 != '\0') {
        cVar2 = *pcVar19;
        if ((cVar2 < '0') || ('9' < cVar2)) {
          pcVar22 = pcVar19;
          if (cVar2 != ';') goto LAB_00daeab8;
          do {
            pcVar1 = pcVar22 + 1;
            *pcVar22 = *pcVar1;
            pcVar22 = pcVar1;
          } while (*pcVar1 != '\0');
        }
        else {
          *pcVar19 = cVar2 + -0x30;
LAB_00daeab8:
          pcVar19 = pcVar19 + 1;
        }
      }
    }
    piVar20 = (int *)(param_1 + 0xbc);
    *_Memory = *(undefined **)*piVar20;
    _Memory[1] = *(undefined **)(*piVar20 + 4);
    _Memory[2] = *(undefined **)(*piVar20 + 8);
    *local_c = 1;
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = 1;
    }
  }
  if (*(LONG **)(param_1 + 0xb8) != (LONG *)0x0) {
    InterlockedDecrement(*(LONG **)(param_1 + 0xb8));
  }
  if ((*(LONG **)(param_1 + 0xb0) != (LONG *)0x0) &&
     (LVar21 = InterlockedDecrement(*(LONG **)(param_1 + 0xb0)), LVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xbc));
  }
  *(undefined4 **)(param_1 + 0xb8) = local_8;
  *(undefined4 **)(param_1 + 0xb0) = local_c;
  *(undefined ***)(param_1 + 0xbc) = _Memory;
  return 0;
}

