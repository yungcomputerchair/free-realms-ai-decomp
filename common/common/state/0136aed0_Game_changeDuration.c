// addr: 0x0136aed0
// name: Game_changeDuration
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall Game_changeDuration(void *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_2c [8];
  undefined1 local_24 [4];
  int *local_20;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Moving Duration on
                       command: %s from card: %s'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016802d8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"Game::changeDuration %d, %d",param_2);
  piVar5 = (int *)FUN_01354a00(local_2c,&param_2);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar6 = *(int *)((int)param_1 + 0x10c);
  if ((iVar1 == 0) || (iVar1 != (int)param_1 + 0x108)) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar2 != iVar6) {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    uVar4 = *(uint *)(iVar2 + 0x18);
    param_2 = (int *)uVar4;
    if (uVar4 < *(uint *)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    uVar7 = *(uint *)(iVar2 + 0x14);
    if (*(uint *)(iVar2 + 0x18) < uVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (uVar7 == uVar4) break;
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if ((*(uint *)(iVar2 + 0x18) <= uVar7) && (FUN_00d83c2d(), *(uint *)(iVar2 + 0x18) <= uVar7))
      {
        FUN_00d83c2d();
      }
      if ((*(int *)(uVar7 + 4) != 0) && (*(int *)((int)param_1 + 300) != 0)) {
        CommandObject_getOriginCardCached();
        Card_getPropertyMap();
        iVar6 = CommandObject_getDurationMap();
        if (*(uint *)(iVar6 + 0x18) < 0x10) {
          iVar6 = iVar6 + 4;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        Game_logGeneral(param_1,"Moving Duration on command: %s from card: %s",iVar6);
      }
      if (*(uint *)(iVar2 + 0x18) <= uVar7) {
        FUN_00d83c2d();
      }
      FUN_01361a10(uVar7);
      if (*(uint *)(iVar2 + 0x18) <= uVar7) {
        FUN_00d83c2d();
      }
      uVar7 = uVar7 + 8;
      uVar4 = (uint)param_2;
    }
    param_2 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar5 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piVar5 == param_2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_14 <= piVar5) {
        FUN_00d83c2d();
      }
      piVar9 = *(int **)(iVar2 + 0x18);
      if (piVar9 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar3 = *(int **)(iVar2 + 0x14);
      if (*(int **)(iVar2 + 0x18) < piVar3) {
        FUN_00d83c2d();
      }
      piVar8 = piVar3;
      if (piVar3 != piVar9) {
        do {
          if ((*piVar8 == *piVar5) && (piVar8[1] == piVar5[1])) break;
          piVar8 = piVar8 + 2;
        } while (piVar8 != piVar9);
      }
      piVar9 = *(int **)(iVar2 + 0x18);
      local_20 = piVar3;
      if (piVar9 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar9) {
        piVar9 = *(int **)(iVar2 + 0x18);
        piVar3 = piVar8;
        while (piVar3 = piVar3 + 2, piVar3 != piVar9) {
          *piVar8 = *piVar3;
          piVar8[1] = piVar3[1];
          piVar8 = piVar8 + 2;
        }
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -8;
      }
      if (local_14 <= piVar5) {
        FUN_00d83c2d();
      }
      piVar9 = piVar5;
      Game_IntKeyTree_getOrInsertRecord(&param_3);
      FUN_01361a10(piVar9);
      if (local_14 <= piVar5) {
        FUN_00d83c2d();
      }
      piVar5 = piVar5 + 2;
    }
    if ((*(int *)(iVar2 + 0x14) == 0) || (*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 3 == 0)
       ) {
      FUN_01361420(local_24,iVar1,iVar2);
    }
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

