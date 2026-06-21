// addr: 0x013645d0
// name: Game_expireCommandsFromCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall Game_expireCommandsFromCard(void *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_2c [8];
  undefined1 local_24 [4];
  int *local_20;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Expiring command:
                       %s from card: %s'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    PlayElement_getId(param_3,DAT_01b839d8 ^ (uint)&stack0xffffffb0);
    Game_logGeneral(param_1,"Game::expireCommandsFromCard %d, %d (%p)",param_2);
  }
  piVar6 = (int *)FUN_01354a00(local_2c,&param_2);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  iVar7 = *(int *)((int)param_1 + 0x10c);
  if ((iVar1 == 0) || (iVar1 != (int)param_1 + 0x108)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar7) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    param_2 = *(int **)(iVar2 + 0x18);
    if (param_2 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    piVar6 = *(int **)(iVar2 + 0x14);
    if (*(int **)(iVar2 + 0x18) < piVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (piVar6 == param_2) break;
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar2 + 0x18) <= piVar6) {
        FUN_00d83c2d();
      }
      if (piVar6[1] == 0) {
LAB_013647e6:
        if (*(int **)(iVar2 + 0x18) <= piVar6) {
          FUN_00d83c2d();
        }
        FUN_01361a10(piVar6);
      }
      else {
        if ((*(int **)(iVar2 + 0x18) <= piVar6) &&
           (FUN_00d83c2d(), *(int **)(iVar2 + 0x18) <= piVar6)) {
          FUN_00d83c2d();
        }
        if (*piVar6 == param_3) {
          iVar7 = PlayElement_getId();
          bVar5 = StateMachineState_containsId70(*(void **)((int)param_1 + 0x68),iVar7);
          if (!bVar5) {
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
              Game_logGeneral(param_1,"Expiring command: %s from card: %s",iVar7);
            }
            (**(code **)(*(int *)piVar6[1] + 0x4c))();
            if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)piVar6[1])(1);
            }
            if (*(int **)(iVar2 + 0x18) <= piVar6) {
              FUN_00d83c2d();
            }
            piVar6[1] = 0;
            goto LAB_013647e6;
          }
          if (*(int *)((int)param_1 + 300) != 0) {
            CommandObject_getOriginCardCached();
            iVar7 = Card_getPropertyMap();
            if (*(uint *)(iVar7 + 0x18) < 0x10) {
              Game_logGeneral(param_1,"card: %s is suspended",iVar7 + 4);
            }
            else {
              Game_logGeneral(param_1,"card: %s is suspended",*(undefined4 *)(iVar7 + 4));
            }
          }
        }
      }
      if (*(int **)(iVar2 + 0x18) <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 2;
    }
    param_2 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar6 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piVar6 == param_2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_14 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar3 = *(int **)(iVar2 + 0x18);
      if (piVar3 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar4 = *(int **)(iVar2 + 0x14);
      if (*(int **)(iVar2 + 0x18) < piVar4) {
        FUN_00d83c2d();
      }
      piVar8 = piVar4;
      if (piVar4 != piVar3) {
        do {
          if ((*piVar8 == *piVar6) && (piVar8[1] == piVar6[1])) break;
          piVar8 = piVar8 + 2;
        } while (piVar8 != piVar3);
      }
      piVar3 = *(int **)(iVar2 + 0x18);
      local_20 = piVar4;
      if (piVar3 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar3) {
        piVar3 = *(int **)(iVar2 + 0x18);
        piVar4 = piVar8;
        while (piVar4 = piVar4 + 2, piVar4 != piVar3) {
          *piVar8 = *piVar4;
          piVar8[1] = piVar4[1];
          piVar8 = piVar8 + 2;
        }
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -8;
      }
      if (local_14 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 2;
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

