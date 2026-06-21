// addr: 0x0133ca80
// name: Game_gameWonFromLoss
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_gameWonFromLoss(void * this, int playerId_, int arg_, bool flag_) */

void __thiscall Game_gameWonFromLoss(void *this,int playerId_,int arg_,bool flag_)

{
  void *this_00;
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *extraout_EAX;
  undefined4 unaff_EBP;
  undefined4 *puVar9;
  int *unaff_EDI;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 local_8 [8];
  
                    /* Handles the special case where a game is won due to another player's loss,
                       guarding against duplicate processing and logging/writing 'GAME WON FROM LOSS
                       BY PLAYER'. */
  bVar2 = unknown_getGameGuardFlag(this);
  if (!bVar2) {
    bVar2 = Game_getPendingFlag_131(this);
    if (bVar2) {
      Game_logGeneral(this,"gameWonFromLoss received twice.",unaff_EBP);
      return;
    }
    uVar4 = FUN_00d8d382(playerId_,0,&Player::RTTI_Type_Descriptor,&CWPlayer::RTTI_Type_Descriptor,0
                        );
    uVar5 = GamePlayer_getPlayerId();
    Game_logGeneral(this,"GAME WON FROM LOSS BY PLAYER %d",uVar5);
    uVar5 = GamePlayer_getPlayerId();
    Game_writeGameLog(this,"#GAME WON FROM LOSS BY PLAYER %d",uVar5);
    *(undefined1 *)((int)this + 0x131) = 1;
    *(undefined1 *)((int)this + 0x38a) = 1;
    puVar9 = *(undefined4 **)((int)this + 0x28);
    if (*(undefined4 **)((int)this + 0x2c) < puVar9) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = *(undefined4 **)((int)this + 0x2c);
      local_14[0] = puVar1;
      if (puVar1 < *(undefined4 **)((int)this + 0x28)) {
        FUN_00d83c2d();
      }
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (puVar9 == puVar1) break;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
        FUN_00d83c2d();
      }
      FUN_00d8d382(*puVar9,0,&Player::RTTI_Type_Descriptor,&CWPlayer::RTTI_Type_Descriptor,0);
      iVar6 = GamePlayer_getPlayerId();
      iVar7 = GamePlayer_getPlayerId();
      if (iVar6 == iVar7) {
        if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
          FUN_00d83c2d();
        }
        local_14[0] = (undefined4 *)GamePlayer_getAccountId();
        piVar8 = IntDefaultMap_getOrInsert((void *)((int)this + 0x230),(int *)local_14);
        *piVar8 = -1;
      }
      else {
        if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
          FUN_00d83c2d();
        }
        local_14[0] = (undefined4 *)GamePlayer_getAccountId();
        piVar8 = IntDefaultMap_getOrInsert((void *)((int)this + 0x230),(int *)local_14);
        *piVar8 = 1;
        if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
          FUN_00d83c2d();
        }
        local_14[0] = (undefined4 *)GamePlayer_getPlayerId();
        this_00 = (void *)((int)this + 0x3cc);
        StdRbTreeInt_find(this_00,local_8,local_14,unaff_EDI);
        iVar6 = extraout_EAX[1];
        local_c = *(int *)((int)this + 0x3d0);
        if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
          FUN_00d83c2d();
        }
        if (iVar6 == local_c) {
          if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
            FUN_00d83c2d();
          }
          local_14[0] = (undefined4 *)GamePlayer_getPlayerId();
          piVar8 = IntDefaultMap_getOrInsert(this_00,(int *)local_14);
          *piVar8 = 1;
        }
        else {
          if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
            FUN_00d83c2d();
          }
          local_14[0] = (undefined4 *)GamePlayer_getPlayerId();
          piVar8 = IntDefaultMap_getOrInsert(this_00,(int *)local_14);
          *piVar8 = *piVar8 + 1;
        }
        if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
          FUN_00d83c2d();
        }
        GamePlayer_getPlayerId();
      }
      if (*(undefined4 **)((int)this + 0x2c) <= puVar9) {
        FUN_00d83c2d();
      }
      puVar9 = puVar9 + 1;
    }
    Game_notifyGameWonFromLoss(arg_,0,uVar4);
    Game_handleMatchNotOverAfterWin(arg_);
    if ((flag_) || (cVar3 = Game_matchGameWon(), cVar3 != '\0')) {
      (**(code **)(*(int *)this + 0x1d0))();
    }
  }
  return;
}

