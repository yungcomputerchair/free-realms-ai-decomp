// addr: 0x00dae62d
// name: FUN_00dae62d
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00dae62d(undefined **param_1)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined **_Memory;
  uint uVar5;
  char *pcVar6;
  LONG LVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined **ppuVar11;
  int local_1c [2];
  undefined **local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  iVar4 = (int)param_1;
  local_1c[0] = (int)param_1;
  local_1c[1] = 0;
  if ((*(int *)((int)param_1 + 0x1c) == 0) && (*(int *)((int)param_1 + 0x18) == 0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (undefined4 *)0x0;
    param_1 = &PTR_DAT_01b84e88;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    puVar9 = *(undefined4 **)((int)param_1 + 0xbc);
    ppuVar11 = _Memory;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppuVar11 = (undefined *)*puVar9;
      puVar9 = puVar9 + 1;
      ppuVar11 = ppuVar11 + 1;
    }
    local_c = __malloc_crt(4);
    if (local_c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *local_c = 0;
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      *_Memory = PTR_DAT_01b84e88;
      _Memory[1] = PTR_DAT_01b84e8c;
      local_8 = (undefined4 *)0x0;
      _Memory[2] = PTR_DAT_01b84e90;
    }
    else {
      local_8 = __malloc_crt(4);
      if (local_8 == (undefined4 *)0x0) {
LAB_00dae6bd:
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *local_8 = 0;
      uVar3 = *(undefined2 *)((int)param_1 + 0x3e);
      local_10 = FUN_00d94163(local_1c,1,uVar3,0xe,_Memory);
      uVar5 = FUN_00d94163(local_1c,1,uVar3,0xf,_Memory + 1);
      local_10 = local_10 | uVar5;
      local_14 = _Memory + 2;
      iVar8 = FUN_00d94163(local_1c,1,uVar3,0x10,local_14);
      if (iVar8 != 0 || local_10 != 0) {
        FUN_00dae5ed(_Memory);
        goto LAB_00dae6bd;
      }
      pcVar6 = *local_14;
      while (*pcVar6 != '\0') {
        cVar2 = *pcVar6;
        if ((cVar2 < '0') || ('9' < cVar2)) {
          pcVar10 = pcVar6;
          if (cVar2 != ';') goto LAB_00dae747;
          do {
            pcVar1 = pcVar10 + 1;
            *pcVar10 = *pcVar1;
            pcVar10 = pcVar1;
          } while (*pcVar1 != '\0');
        }
        else {
          *pcVar6 = cVar2 + -0x30;
LAB_00dae747:
          pcVar6 = pcVar6 + 1;
        }
      }
    }
    *local_c = 1;
    param_1 = _Memory;
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = 1;
    }
  }
  if (*(LONG **)(iVar4 + 0xb4) != (LONG *)0x0) {
    InterlockedDecrement(*(LONG **)(iVar4 + 0xb4));
  }
  if ((*(LONG **)(iVar4 + 0xb0) != (LONG *)0x0) &&
     (LVar7 = InterlockedDecrement(*(LONG **)(iVar4 + 0xb0)), LVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar4 + 0xb0));
  }
  *(undefined4 **)(iVar4 + 0xb4) = local_8;
  *(undefined4 **)(iVar4 + 0xb0) = local_c;
  *(undefined ***)(iVar4 + 0xbc) = param_1;
  return 0;
}

