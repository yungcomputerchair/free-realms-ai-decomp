// addr: 0x01365440
// name: Game_Expiring
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall Game_Expiring(void *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *local_3c;
  undefined1 local_24 [12];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'card: %s is
                       suspended'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f5d8;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"Game::expireCommandFromPlayers %d, %d",param_2);
  piVar6 = (int *)FUN_01354a00(local_24,&param_2);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  iVar7 = *(int *)((int)param_1 + 0x10c);
  if ((iVar1 == 0) || (iVar1 != (int)param_1 + 0x108)) {
    FUN_00d83c2d(uVar5);
  }
  if (iVar2 != iVar7) {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar5);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar5);
    }
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    param_2 = *(int **)(iVar2 + 0x18);
    if (param_2 < *(uint *)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    uVar5 = *(uint *)(iVar2 + 0x14);
    if (*(uint *)(iVar2 + 0x18) < uVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if ((int *)uVar5 == param_2) break;
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if ((*(uint *)(iVar2 + 0x18) <= uVar5) && (FUN_00d83c2d(), *(uint *)(iVar2 + 0x18) <= uVar5))
      {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar5 + 4) == 0) {
LAB_0136565d:
        if (*(uint *)(iVar2 + 0x18) <= uVar5) {
          FUN_00d83c2d();
        }
        FUN_01361a10(uVar5);
      }
      else {
        iVar7 = PlayElement_getId();
        bVar4 = StateMachineState_containsId70(*(void **)((int)param_1 + 0x68),iVar7);
        if (bVar4) {
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
        else {
          piVar6 = (int *)CommandObject_getOriginCardCached();
          if ((piVar6 == (int *)0x0) || (iVar7 = (**(code **)(*piVar6 + 0x28))(), iVar7 == param_3))
          {
            if (*(int *)((int)param_1 + 300) != 0) {
              Card_getPropertyMap();
              iVar7 = CommandObject_getDurationMap();
              if (*(uint *)(iVar7 + 0x18) < 0x10) {
                iVar7 = iVar7 + 4;
              }
              else {
                iVar7 = *(int *)(iVar7 + 4);
              }
              PlayElement_getId();
              Game_logGeneral(param_1,"Game::Expiring command: %s from card: %s (%d)",iVar7);
            }
            (**(code **)(**(int **)(uVar5 + 4) + 0x4c))();
            if (*(undefined4 **)(uVar5 + 4) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(uVar5 + 4))(1);
            }
            goto LAB_0136565d;
          }
        }
      }
      if (*(uint *)(iVar2 + 0x18) <= uVar5) {
        FUN_00d83c2d();
      }
      uVar5 = uVar5 + 8;
    }
    param_2 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    local_3c = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_3c == param_2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_14 <= local_3c) {
        FUN_00d83c2d();
      }
      piVar6 = *(int **)(iVar2 + 0x18);
      if (piVar6 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar8 = *(int **)(iVar2 + 0x14);
      if (*(int **)(iVar2 + 0x18) < piVar8) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar6) {
        do {
          if ((*piVar8 == *local_3c) && (piVar8[1] == local_3c[1])) break;
          piVar8 = piVar8 + 2;
        } while (piVar8 != piVar6);
      }
      piVar6 = *(int **)(iVar2 + 0x18);
      if (piVar6 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar6) {
        piVar6 = *(int **)(iVar2 + 0x18);
        piVar3 = piVar8;
        while (piVar3 = piVar3 + 2, piVar3 != piVar6) {
          *piVar8 = *piVar3;
          piVar8[1] = piVar3[1];
          piVar8 = piVar8 + 2;
        }
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -8;
      }
      if (local_14 <= local_3c) {
        FUN_00d83c2d();
      }
      local_3c = local_3c + 2;
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
  return 1;
}

