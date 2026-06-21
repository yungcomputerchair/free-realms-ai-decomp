// addr: 0x01339b80
// name: Game_gameWonByPlayerInternal
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_gameWonByPlayerInternal(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *extraout_EAX;
  undefined4 unaff_EBP;
  int *unaff_EDI;
  int *piVar11;
  undefined4 uVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  int *piStack_14;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
                    /* Handles a game-won event: prevents duplicate wins, marks pending flags,
                       updates win/loss maps for players, finds the loser, logs winner/loser, and
                       invokes win/loss notification. Evidence: strings "GAME WON BY PLAYER %d",
                       "game Won by player received twice.", and call to 01332ed0. */
  bVar3 = unknown_getGameGuardFlag(param_1);
  if (!bVar3) {
    bVar3 = Game_getPendingFlag_131(param_1);
    if (bVar3) {
      Game_logGeneral(param_1,"game Won by player received twice.",unaff_EBP);
      return;
    }
    Game_logGeneral(param_1,"GAME WON BY PLAYER %d",param_2);
    Game_writeGameLog(param_1,"#GAME WON BY PLAYER %d",param_2);
    uVar15 = 0;
    pTVar14 = &CWPlayer::RTTI_Type_Descriptor;
    pTVar13 = &Player::RTTI_Type_Descriptor;
    uVar12 = 0;
    *(undefined1 *)((int)param_1 + 0x131) = 1;
    *(undefined1 *)((int)param_1 + 0x38a) = 1;
    pvVar5 = PlayArea_findPlayerElementById(param_1,param_2);
    iVar6 = FUN_00d8d382(pvVar5,uVar12,pTVar13,pTVar14,uVar15);
    if (iVar6 == 0) {
      FUN_012f5a60("Winner","..\\common\\rules\\game\\cwgame.cpp",0x746);
    }
    piVar11 = (int *)param_1[10];
    if ((int *)param_1[0xb] < piVar11) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar10 = (int *)param_1[0xb];
      piStack_2c = piVar10;
      if (piVar10 < (int *)param_1[10]) {
        FUN_00d83c2d();
      }
      if (param_1 == (int *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (piVar11 == piVar10) break;
      if (param_1 == (int *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if ((int *)param_1[0xb] <= piVar11) {
        FUN_00d83c2d();
      }
      iVar7 = FUN_00d8d382(*piVar11,0,&Player::RTTI_Type_Descriptor,&CWPlayer::RTTI_Type_Descriptor,
                           0);
      iVar8 = GamePlayer_getPlayerId();
      iVar9 = GamePlayer_getPlayerId();
      if (iVar8 == iVar9) {
        if ((int *)param_1[0xb] <= piVar11) {
          FUN_00d83c2d();
        }
        piStack_2c = (int *)GamePlayer_getAccountId();
        piVar10 = IntDefaultMap_getOrInsert(param_1 + 0x8c,(int *)&piStack_2c);
        *piVar10 = 1;
        if ((int *)param_1[0xb] <= piVar11) {
          FUN_00d83c2d();
        }
        piStack_2c = (int *)GamePlayer_getPlayerId();
        piVar10 = param_1 + 0xf3;
        StdRbTreeInt_find(piVar10,auStack_8,&piStack_2c,unaff_EDI);
        iStack_24 = extraout_EAX[1];
        puStack_1c = (undefined4 *)param_1[0xf4];
        if (((int *)*extraout_EAX == (int *)0x0) || ((int *)*extraout_EAX != piVar10)) {
          FUN_00d83c2d();
        }
        if ((undefined4 *)iStack_24 == puStack_1c) {
          if ((int *)param_1[0xb] <= piVar11) {
            FUN_00d83c2d();
          }
          piStack_2c = (int *)GamePlayer_getPlayerId();
          piVar10 = IntDefaultMap_getOrInsert(piVar10,(int *)&piStack_2c);
          *piVar10 = 1;
        }
        else {
          if ((int *)param_1[0xb] <= piVar11) {
            FUN_00d83c2d();
          }
          piStack_2c = (int *)GamePlayer_getPlayerId();
          piVar10 = IntDefaultMap_getOrInsert(piVar10,(int *)&piStack_2c);
          *piVar10 = *piVar10 + 1;
        }
      }
      else {
        if ((int *)param_1[0xb] <= piVar11) {
          FUN_00d83c2d();
        }
        piStack_2c = (int *)GamePlayer_getAccountId();
        piVar10 = IntDefaultMap_getOrInsert(param_1 + 0x8c,(int *)&piStack_2c);
        *piVar10 = -1;
        iVar8 = Game_getVector_24();
        if ((*(int *)(iVar8 + 4) == 0) ||
           ((uint)(*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4) >> 2) < 3)) {
          piStack_2c = (int *)GamePlayer_getAccountId();
          piVar10 = IntDefaultMap_getOrInsert(param_1 + 0xa7,(int *)&piStack_2c);
          *piVar10 = 110000;
        }
        else {
          piStack_2c = (int *)param_1[0xce];
          if (piStack_2c < (int *)param_1[0xcd]) {
            FUN_00d83c2d();
          }
          piVar10 = (int *)param_1[0xcd];
          piVar1 = piVar10;
          if ((int *)param_1[0xce] < piVar10) {
            FUN_00d83c2d();
          }
          for (; (piVar1 != piStack_2c && (*piVar1 != iVar7)); piVar1 = piVar1 + 1) {
          }
          piStack_2c = (int *)param_1[0xce];
          piStack_14 = piVar10;
          if (piStack_2c < (int *)param_1[0xcd]) {
            FUN_00d83c2d();
          }
          if (param_1 + 0xcc == (int *)0x0) {
            FUN_00d83c2d();
          }
          if (piVar1 != piStack_2c) {
            FUN_01331280(auStack_10,param_1 + 0xcc,piVar1);
          }
        }
      }
      if ((int *)param_1[0xb] <= piVar11) {
        FUN_00d83c2d();
      }
      piVar11 = piVar11 + 1;
    }
    piStack_14 = (int *)param_1[0xa8];
    piStack_20 = param_1 + 0xa7;
    puStack_1c = (undefined4 *)*piStack_14;
    piStack_2c = (int *)0x0;
    uStack_30 = 0;
    while( true ) {
      puVar2 = puStack_1c;
      piVar11 = piStack_20;
      if ((piStack_20 == (int *)0x0) || (piStack_20 != param_1 + 0xa7)) {
        FUN_00d83c2d();
      }
      if (puVar2 == piStack_14) break;
      if (piVar11 == (int *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar2 == (undefined4 *)piVar11[1]) {
        FUN_00d83c2d();
      }
      uVar16 = 0;
      pTVar14 = &CWPlayer::RTTI_Type_Descriptor;
      pTVar13 = &Player::RTTI_Type_Descriptor;
      uVar15 = 0;
      uVar12 = Game_findPlayerByAccountId(puVar2[3]);
      iVar7 = FUN_00d8d382(uVar12,uVar15,pTVar13,pTVar14,uVar16);
      if (iVar7 != 0) {
        if (puVar2 == (undefined4 *)piVar11[1]) {
          FUN_00d83c2d();
        }
        uStack_28 = puVar2[3];
        iVar7 = GamePlayer_getPlayerId();
        iVar8 = GamePlayer_getPlayerId();
        if (iVar7 != iVar8) {
          uStack_30 = uStack_28;
          if (puVar2 == (undefined4 *)piVar11[1]) {
            FUN_00d83c2d();
          }
          piStack_2c = (int *)puVar2[4];
        }
      }
      FUN_004d21f9();
    }
    uVar12 = Game_findPlayerByAccountId(uStack_30);
    GamePlayer_getAccountId(uVar12,uStack_30);
    Game_logGeneral(param_1,"Winner: %p (%d), Loser: %p (%d)",iVar6);
    piVar11 = piStack_2c;
    Game_notifyGameWonFromLoss(piStack_2c,iVar6,uVar12);
    Game_handleMatchNotOverAfterWin(piVar11);
    cVar4 = Game_matchGameWon();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x1d0))();
    }
  }
  return;
}

