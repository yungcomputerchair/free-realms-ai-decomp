// addr: 0x01364990
// name: Game_expireCommandsFromCard
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_expireCommandsFromCard(void * this, int playerId_, void * card, int
   actionId_) */

void __thiscall Game_expireCommandsFromCard(void *this,int playerId_,void *card,int actionId_)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  bool bVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_cc [4];
  int *local_c8;
  int *local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [4];
  int *piStack_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Expires active commands associated with a card/action: locates the player
                       command list, evaluates action context, skips suspended cards/states, logs
                       expirations, invokes command expiration, and removes matching command
                       pointers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f4c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (card != (void *)0x0) {
    PlayElement_getId(card,DAT_01b839d8 ^ (uint)&stack0xffffff18);
    Game_logGeneral(this,"Game::expireCommandsFromCard %d, %d (%p)",playerId_);
  }
  local_bc = (int)this + 0x108;
  piVar7 = (int *)FUN_01354a00(local_a8,&playerId_);
  iVar1 = *piVar7;
  iVar2 = piVar7[1];
  iVar9 = *(int *)((int)this + 0x10c);
  if ((iVar1 == 0) || (iVar1 != (int)this + 0x108)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar9) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    local_c8 = (int *)0x0;
    local_c4 = (int *)0x0;
    local_c0 = 0;
    local_4 = 0;
    piVar7 = *(int **)(iVar2 + 0x18);
    if (piVar7 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    piVar10 = *(int **)(iVar2 + 0x14);
    if (*(int **)(iVar2 + 0x18) < piVar10) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      piVar3 = local_c4;
      if (piVar10 == piVar7) break;
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar2 + 0x18) <= piVar10) {
        FUN_00d83c2d();
      }
      if (piVar10[1] == 0) {
LAB_01364c23:
        if (*(int **)(iVar2 + 0x18) <= piVar10) {
          FUN_00d83c2d();
        }
        FUN_01361a10(piVar10);
      }
      else {
        if ((*(int **)(iVar2 + 0x18) <= piVar10) &&
           (FUN_00d83c2d(), *(int **)(iVar2 + 0x18) <= piVar10)) {
          FUN_00d83c2d();
        }
        if ((void *)*piVar10 == card) {
          if (*(int **)(iVar2 + 0x18) <= piVar10) {
            FUN_00d83c2d();
          }
          piVar3 = (int *)piVar10[1];
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 1;
          EvaluationEnvironment_setGame(this);
          (**(code **)(*piVar3 + 0x70))(local_a0);
          pvVar8 = CommandObject_getActionFromEnvironment(local_a0);
          if (pvVar8 == (void *)actionId_) {
            iVar9 = PlayElement_getId();
            bVar6 = StateMachineState_containsId70(*(void **)((int)this + 0x68),iVar9);
            if (!bVar6) {
              if (*(int *)((int)this + 300) != 0) {
                CommandObject_getOriginCardCached();
                Card_getPropertyMap();
                iVar9 = CommandObject_getDurationMap();
                if (*(uint *)(iVar9 + 0x18) < 0x10) {
                  iVar9 = iVar9 + 4;
                }
                else {
                  iVar9 = *(int *)(iVar9 + 4);
                }
                Game_logGeneral(this,"Expiring command: %s from card: %s",iVar9);
              }
              (**(code **)(*(int *)piVar10[1] + 0x4c))();
              if ((undefined4 *)piVar10[1] != (undefined4 *)0x0) {
                (*(code *)**(undefined4 **)piVar10[1])(1);
              }
              if (*(int **)(iVar2 + 0x18) <= piVar10) {
                FUN_00d83c2d();
              }
              piVar10[1] = 0;
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_01385460();
              goto LAB_01364c23;
            }
            if (*(int *)((int)this + 300) != 0) {
              CommandObject_getOriginCardCached();
              iVar9 = Card_getPropertyMap();
              if (*(uint *)(iVar9 + 0x18) < 0x10) {
                iVar9 = iVar9 + 4;
              }
              else {
                iVar9 = *(int *)(iVar9 + 4);
              }
              Game_logGeneral(this,"card: %s is suspended",iVar9);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_01385460();
          }
          else {
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_01385460();
          }
        }
      }
      if (*(int **)(iVar2 + 0x18) <= piVar10) {
        FUN_00d83c2d();
      }
      piVar10 = piVar10 + 2;
    }
    if (local_c4 < local_c8) {
      FUN_00d83c2d();
    }
    piVar7 = local_c8;
    if (local_c4 < local_c8) {
      FUN_00d83c2d();
    }
    puStack_b8 = auStack_cc;
    while( true ) {
      puVar5 = puStack_b8;
      if ((puStack_b8 == (undefined1 *)0x0) || (puStack_b8 != auStack_cc)) {
        FUN_00d83c2d();
      }
      if (piVar7 == piVar3) break;
      if (puVar5 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(puVar5 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar10 = *(int **)(iVar2 + 0x18);
      if (piVar10 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      piVar11 = *(int **)(iVar2 + 0x14);
      if (*(int **)(iVar2 + 0x18) < piVar11) {
        FUN_00d83c2d();
      }
      piStack_ac = piVar11;
      if (piVar11 != piVar10) {
        do {
          if ((*piVar11 == *piVar7) && (piVar11[1] == piVar7[1])) break;
          piVar11 = piVar11 + 2;
        } while (piVar11 != piVar10);
      }
      piVar10 = *(int **)(iVar2 + 0x18);
      if (piVar10 < *(int **)(iVar2 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar2 == -0x10) {
        FUN_00d83c2d();
      }
      if (piVar11 != piVar10) {
        piVar10 = *(int **)(iVar2 + 0x18);
        piVar4 = piVar11;
        while (piVar4 = piVar4 + 2, piVar4 != piVar10) {
          *piVar11 = *piVar4;
          piVar11[1] = piVar4[1];
          piVar11 = piVar11 + 2;
        }
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -8;
      }
      if (*(int **)(puStack_b8 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 2;
    }
    if ((*(int *)(iVar2 + 0x14) == 0) || (*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14) >> 3 == 0)
       ) {
      FUN_01361420(auStack_b0,iVar1,iVar2);
    }
    local_4 = 0xffffffff;
    if (local_c8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c8);
    }
  }
  ExceptionList = local_c;
  return;
}

