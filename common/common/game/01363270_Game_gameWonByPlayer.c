// addr: 0x01363270
// name: Game_gameWonByPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_gameWonByPlayer(void * this, int playerId_) */

void __thiscall Game_gameWonByPlayer(void *this,int playerId_)

{
  void *unused_;
  undefined1 *puVar1;
  void *this_00;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_a0;
  undefined1 local_9c [4];
  int *local_98;
  int *local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  int *local_88;
  void *local_84;
  void *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar5 = playerId_;
                    /* Handles a player win: logs and writes game-log entries, builds victory
                       messages, updates per-player defaults, and notifies players. Evidence: 'GAME
                       WON BY PLAYER', '#GAME WON BY PLAYER', and victory message strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f383;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff50;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x1d8) == '\0') {
    Game_logGeneral(this,"GAME WON BY PLAYER %d",playerId_);
    Game_writeGameLog(this,"#GAME WON BY PLAYER %d",iVar5);
    local_6c = (void *)0x0;
    local_68 = 0;
    local_64 = 0;
    local_7c = (void *)0x0;
    local_78 = 0;
    local_74 = 0;
    local_4 = 1;
    FUN_0042c155(&playerId_);
    *(undefined1 *)((int)this + 0x131) = 1;
    local_84 = PlayArea_findPlayerElementById(this,iVar5);
    if (local_84 != (void *)0x0) {
      local_a0 = (int *)GamePlayer_getAccountId(uVar2);
      piVar3 = IntDefaultMap_getOrInsert((void *)((int)this + 0x230),(int *)&local_a0);
      *piVar3 = 1;
    }
    piVar3 = *(int **)((int)this + 0x28);
    if (*(int **)((int)this + 0x2c) < piVar3) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar4 = *(int **)((int)this + 0x2c);
      if (piVar4 < *(int **)((int)this + 0x28)) {
        FUN_00d83c2d();
      }
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (piVar3 == piVar4) break;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x2c) <= piVar3) {
        FUN_00d83c2d();
      }
      if ((void *)*piVar3 != local_84) {
        if (*(int **)((int)this + 0x2c) <= piVar3) {
          FUN_00d83c2d();
        }
        local_a0 = (int *)GamePlayer_getPlayerId();
        FUN_0042c155(&local_a0);
        if (*(int **)((int)this + 0x2c) <= piVar3) {
          FUN_00d83c2d();
        }
        local_a0 = (int *)GamePlayer_getAccountId();
        piVar4 = IntDefaultMap_getOrInsert((void *)((int)this + 0x230),(int *)&local_a0);
        *piVar4 = -1;
      }
      if (*(int **)((int)this + 0x2c) <= piVar3) {
        FUN_00d83c2d();
      }
      piVar3 = piVar3 + 1;
    }
    local_98 = (int *)0x0;
    local_94 = (int *)0x0;
    local_90 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_013630f0(local_9c);
    local_a0 = local_94;
    if (local_94 < local_98) {
      FUN_00d83c2d();
    }
    piVar3 = local_98;
    if (local_94 < local_98) {
      FUN_00d83c2d();
    }
    local_8c = local_9c;
    while( true ) {
      puVar1 = local_8c;
      local_88 = piVar3;
      if ((local_8c == (undefined1 *)0x0) || (local_8c != local_9c)) {
        FUN_00d83c2d();
      }
      if (piVar3 == local_a0) break;
      if (puVar1 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(puVar1 + 8) <= piVar3) {
        FUN_00d83c2d();
      }
      this_00 = local_84;
      unused_ = (void *)*piVar3;
      if (unused_ == local_84) {
        iVar5 = GamePlayer_getPlayerId();
        if (iVar5 == *(int *)((int)this + 0x13c)) {
          if (*(int *)((int)this + 0x154) < 2) {
            GamePlayer_logFormattedMessage
                      (this,(int)unused_,
                       "You have defeated all opposing players! You have won the game!");
          }
          else {
            GamePlayer_logFormattedMessage(this,(int)unused_,"You have won the game.");
          }
        }
      }
      else if (*(int *)((int)this + 0x154) < 2) {
        Game_copyCommandObjectList(local_84,local_44);
        local_4._0_1_ = 3;
        Game_copyCommandObjectList(this_00,local_60);
        local_4._0_1_ = 4;
        GamePlayer_logFormattedMessage
                  (this,(int)unused_,"%s has defeated all opposing players. %s has won the game.");
        local_4 = CONCAT31(local_4._1_3_,3);
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_5c);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        piVar3 = local_88;
      }
      else {
        Game_copyCommandObjectList(local_84,local_28);
        local_4._0_1_ = 5;
        GamePlayer_logFormattedMessage(this,(int)unused_,"%s has won the game!");
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
      }
      if (*(int **)(local_8c + 8) <= piVar3) {
        FUN_00d83c2d();
      }
      piVar3 = piVar3 + 1;
    }
    (**(code **)(*(int *)this + 0x1d0))();
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_98 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_98);
    }
    local_98 = (int *)0x0;
    local_94 = (int *)0x0;
    local_90 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    local_7c = (void *)0x0;
    local_78 = 0;
    local_74 = 0;
    local_4 = 0xffffffff;
    if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}

