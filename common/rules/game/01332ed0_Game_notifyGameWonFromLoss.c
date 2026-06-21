// addr: 0x01332ed0
// name: Game_notifyGameWonFromLoss
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Game_notifyGameWonFromLoss(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  void *this;
  bool value_;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  void *pvStack_d0;
  int iStack_cc;
  void *pvStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_bc;
  undefined1 auStack_b8 [4];
  void *pvStack_b4;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 auStack_9c [4];
  void *pvStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [4];
  void *pvStack_7c;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [4];
  void *pvStack_60;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_2c;
  undefined1 uStack_28;
  uint uStack_18;
  undefined4 uStack_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Builds win/loss/surrender/timeout messages, logs to the relevant player, and
                       emits a game-won display action. Evidence: strings for surrender, timeout,
                       and "You have won the game!" plus caller Game_gameWonFromLoss. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167af34;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)&pvStack_d0);
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff20;
  ExceptionList = &local_c;
  if (param_4 == 0) {
    FUN_012f5a60("inLoser != NULL","..\\common\\rules\\game\\cwgame.cpp",0x79b,uVar1);
  }
  uVar10 = 0;
  pTVar9 = &CWPlayer::RTTI_Type_Descriptor;
  pTVar8 = &Player::RTTI_Type_Descriptor;
  uVar7 = 0;
  pvVar2 = PlayArea_findPlayerElementById(param_1,param_1[0x4f]);
  iStack_cc = FUN_00d8d382(pvVar2,uVar7,pTVar8,pTVar9,uVar10);
  if (iStack_cc == 0) {
    FUN_012f5a60("myPlayer","..\\common\\rules\\game\\cwgame.cpp",0x79f,uVar1);
  }
  pvStack_c8 = (void *)FUN_00d8d382(param_4,0,&Player::RTTI_Type_Descriptor,
                                    &CWPlayer::RTTI_Type_Descriptor,0);
  pvStack_d0 = (void *)FUN_00d8d382(param_3,0,&Player::RTTI_Type_Descriptor,
                                    &CWPlayer::RTTI_Type_Descriptor,0);
  puVar6 = (undefined4 *)param_1[0xcd];
  if ((undefined4 *)param_1[0xce] < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    puStack_c4 = (undefined4 *)param_1[0xce];
    puStack_bc = puVar6;
    if (puStack_c4 < (undefined4 *)param_1[0xcd]) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    pvVar2 = pvStack_d0;
    if (puVar6 == puStack_c4) break;
    if (param_1 == (int *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)param_1[0xce] <= puVar6) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)*puVar6;
    iVar3 = GamePlayer_getPlayerId();
    iVar4 = GamePlayer_getPlayerId();
    puVar6 = puStack_bc;
    if ((iVar3 != iVar4) && (pvStack_d0 == (void *)0x0)) {
      pvStack_d0 = pvVar2;
    }
    if ((undefined4 *)param_1[0xce] <= puStack_bc) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  uStack_14 = 0xf;
  uStack_18 = 0;
  uStack_28 = 0;
  iStack_4._0_1_ = 0;
  iStack_4._1_3_ = 0;
  iVar3 = iStack_cc;
  if (pvStack_d0 != (void *)0x0) {
    iVar4 = GamePlayer_getPlayerId();
    iVar3 = iStack_cc;
    iVar5 = GamePlayer_getPlayerId();
    if (iVar5 == iVar4) {
      switch(param_2) {
      case 1:
      case 3:
      case 4:
        GamePlayer_logFormattedMessage
                  (param_1,iVar3,"Your opponent has surrendered to you. You have won the game!");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_2c,
                   "100001568",9);
        break;
      case 2:
        GamePlayer_logFormattedMessage(param_1,iVar3,"Your opponent has run out of time and lost!");
        break;
      default:
        GamePlayer_logFormattedMessage(param_1,iVar3,"You have won the game!");
      }
      goto LAB_0133335e;
    }
  }
  this = pvStack_c8;
  if (pvStack_c8 != (void *)0x0) {
    switch(param_2) {
    case 1:
    case 3:
    case 4:
      iVar4 = GamePlayer_getPlayerId();
      if (param_1[0x4f] == iVar4) {
        if (pvVar2 != (void *)0x0) {
          Game_copyCommandObjectList(pvVar2,auStack_64);
          iStack_4._0_1_ = 1;
          GamePlayer_logFormattedMessage
                    (param_1,iVar3,
                     "You have given up and your forces have surrendered to the opposition. %s has won the game!"
                    );
          iStack_4._0_1_ = 0;
          if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_60);
          }
          uStack_4c = 0xf;
          uStack_50 = 0;
          pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
        }
      }
      else {
        Game_copyCommandObjectList(this,auStack_80);
        iStack_4._0_1_ = 2;
        Game_copyCommandObjectList(this,auStack_b8);
        iStack_4._0_1_ = 3;
        GamePlayer_logFormattedMessage
                  (param_1,iVar3,
                   "%s has given up and surrendered to the opposition. %s has lost the game!");
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_b4);
        }
        uStack_a0 = 0xf;
        uStack_a4 = 0;
        pvStack_b4 = (void *)((uint)pvStack_b4 & 0xffffff00);
        iStack_4._0_1_ = 0;
        if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_7c);
        }
        uStack_68 = 0xf;
        uStack_6c = 0;
        pvStack_7c = (void *)((uint)pvStack_7c & 0xffffff00);
      }
      break;
    case 2:
      iVar4 = GamePlayer_getPlayerId();
      if (param_1[0x4f] == iVar4) {
        GamePlayer_logFormattedMessage(param_1,iVar3,"You have run out of time and lost!");
      }
      else {
        Game_copyCommandObjectList(this,auStack_48);
        iStack_4._0_1_ = 4;
        GamePlayer_logFormattedMessage
                  (param_1,iVar3,
                   "The final countdown has just reached zero. %s has run out of time and lost the game!"
                  );
        iStack_4._0_1_ = 0;
        if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_44);
        }
        uStack_30 = 0xf;
        uStack_34 = 0;
        pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
      }
      break;
    default:
      if (pvVar2 != (void *)0x0) {
        Game_copyCommandObjectList(pvVar2,auStack_9c);
        iStack_4._0_1_ = 5;
        GamePlayer_logFormattedMessage(param_1,iVar3,"%s has won the game!");
        iStack_4._0_1_ = 0;
        if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_98);
        }
        uStack_84 = 0xf;
        uStack_88 = 0;
        pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
      }
    }
  }
LAB_0133335e:
  puStack_c4 = Mem_Alloc(0x14);
  iStack_4._0_1_ = 6;
  if (puStack_c4 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0();
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  iVar3 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar2,iVar3);
  FUN_012f8c70(0xba);
  iVar3 = GamePlayer_getPlayerId();
  DisplayActionBuilder_addIntArg(pvVar2,iVar3);
  value_ = (bool)Game_getFlag_318();
  DisplayActionBuilder_addBoolArg(pvVar2,value_);
  (**(code **)(*param_1 + 0x154))(pvVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  if (uStack_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_2c);
}

