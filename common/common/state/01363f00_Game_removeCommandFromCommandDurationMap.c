// addr: 0x01363f00
// name: Game_removeCommandFromCommandDurationMap
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x013640aa) */
/* WARNING: Removing unreachable block (ram,0x013640bd) */
/* WARNING: Removing unreachable block (ram,0x013641b2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall Game_removeCommandFromCommandDurationMap(void *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Removing command:
                       %s from card: %s'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    uVar6 = PlayElement_getId(param_2,DAT_01b839d8 ^ (uint)&stack0xffffffac);
    Game_logGeneral(param_1,"Game::removeCommandFromCommandDurationMap %d (%p)",uVar6);
  }
  piVar1 = *(int **)((int)param_1 + 0x10c);
  piVar2 = (int *)*piVar1;
  do {
    if (param_1 == (void *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      ExceptionList = local_c;
      return;
    }
    if (param_1 == (void *)0xfffffef8) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)param_1 + 0x10c)) {
      FUN_00d83c2d();
    }
    local_4 = 0;
    uVar3 = piVar2[6];
    if (uVar3 < (uint)piVar2[5]) {
      FUN_00d83c2d();
    }
    uVar8 = piVar2[5];
    if ((uint)piVar2[6] < uVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (uVar8 == uVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (((uint)piVar2[6] <= uVar8) && (FUN_00d83c2d(), (uint)piVar2[6] <= uVar8)) {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar8 + 4) == param_2) {
        if (*(int *)((int)param_1 + 300) != 0) {
          CommandObject_getOriginCardCached();
          Card_getPropertyMap();
          iVar7 = CommandObject_getDurationMap();
          if (*(uint *)(iVar7 + 0x18) < 0x10) {
            iVar7 = iVar7 + 4;
          }
          else {
            iVar7 = *(int *)(iVar7 + 4);
          }
          Game_logGeneral(param_1,"Removing command: %s from card: %s",iVar7);
        }
        if ((uint)piVar2[6] <= uVar8) {
          FUN_00d83c2d();
        }
        *(undefined4 *)(uVar8 + 4) = 0;
        if ((uint)piVar2[6] <= uVar8) {
          FUN_00d83c2d();
        }
        FUN_01361a10(uVar8);
      }
      if ((uint)piVar2[6] <= uVar8) {
        FUN_00d83c2d();
      }
      uVar8 = uVar8 + 8;
    }
    local_38 = (int *)0x0;
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_38 == (int *)0x0) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      FUN_00d83c2d();
      piVar4 = (int *)piVar2[6];
      if (piVar4 < (int *)piVar2[5]) {
        FUN_00d83c2d();
      }
      piVar9 = (int *)piVar2[5];
      if ((int *)piVar2[6] < piVar9) {
        FUN_00d83c2d();
      }
      if (piVar9 != piVar4) {
        do {
          if ((*piVar9 == *local_38) && (piVar9[1] == local_38[1])) break;
          piVar9 = piVar9 + 2;
        } while (piVar9 != piVar4);
      }
      piVar4 = (int *)piVar2[6];
      if (piVar4 < (int *)piVar2[5]) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar9 != piVar4) {
        piVar4 = (int *)piVar2[6];
        piVar5 = piVar9;
        while (piVar5 = piVar5 + 2, piVar5 != piVar4) {
          *piVar9 = *piVar5;
          piVar9[1] = piVar5[1];
          piVar9 = piVar9 + 2;
        }
        piVar2[6] = piVar2[6] + -8;
      }
      FUN_00d83c2d();
      local_38 = local_38 + 2;
    }
    local_4 = 0xffffffff;
    FUN_0134a830();
  } while( true );
}

