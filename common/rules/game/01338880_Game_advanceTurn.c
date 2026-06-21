// addr: 0x01338880
// name: Game_advanceTurn
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01338de3) */
/* WARNING: Removing unreachable block (ram,0x01338f6f) */

undefined4 __fastcall Game_advanceTurn(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  int *unaff_EBX;
  uint uVar13;
  void *pvVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint *puStack_48;
  void *pvStack_44;
  int *piStack_40;
  uint uStack_3c;
  uint uStack_38;
  void *pvStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  void *pvStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Advances game state/turns, creating StartOfGame on first start, selecting the
                       next player, creating a GameTurn, and logging "STARTING TURN". Evidence:
                       cwgame.cpp strings "inAdvanceTurn", "creating StartOfGame", and caller flow.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167b899;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"inAdvanceTurn",uVar6);
  if ((char)param_1[0x5f] == '\0') {
    *(undefined1 *)((int)param_1 + 0x17d) = 1;
    Game_logGeneral(param_1,"GameIsSetup = false",uVar6);
    ExceptionList = local_c;
    return 0;
  }
  if ((char)param_1[0x46] == '\0') {
    piVar9 = param_1;
    Game_logGeneral(param_1,"GameStarted = false",uVar6);
    *(undefined1 *)(param_1 + 0x46) = 1;
    *(undefined1 *)((int)param_1 + 0x17d) = 0;
    Game_logGeneral(param_1,"creating StartOfGame",piVar9);
    if (param_1[0x1a] != 0) {
      Game_logGeneral(param_1,"Overwriting turn pointer!",uVar6);
      if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x1a])(1);
      }
      param_1[0x1a] = 0;
    }
    pvVar7 = Mem_Alloc(0xb8);
    uStack_4 = 0;
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)CWGameTurn_ctor();
    }
    uStack_4 = 0xffffffff;
    param_1[0x1a] = (int)pvVar7;
    set_field_4(pvVar7,(uint)param_1);
    (**(code **)(*param_1 + 0x50))(0);
    set_field_14((void *)param_1[0x1a],0);
    uStack_3c = 0;
    uStack_38 = 0;
    pvStack_34 = (void *)0x0;
    puStack_8 = (undefined1 *)0x1;
    FUN_013630f0(&piStack_40);
    uVar6 = uStack_38;
    if (uStack_38 < uStack_3c) {
      FUN_00d83c2d();
    }
    uVar13 = uStack_3c;
    if (uStack_38 < uStack_3c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x40) {
        FUN_00d83c2d();
      }
      if (uVar13 == uVar6) break;
      if (&stack0x00000000 == (undefined1 *)0x40) {
        FUN_00d83c2d();
      }
      if ((uStack_38 <= uVar13) && (FUN_00d83c2d(), uStack_38 <= uVar13)) {
        FUN_00d83c2d();
      }
      uVar13 = uVar13 + 4;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x1a] + 0x38))();
    param_1[0xcb] = iVar8;
    GameTurn_setTurnNumber(iVar8);
    puStack_48 = (uint *)0x0;
    pvStack_44 = (void *)0x29;
    piVar9 = GameTurn_getCurrentStateMachine((void *)param_1[0x1a]);
    (**(code **)(*piVar9 + 0x38))(0x12,&puStack_48);
    bVar5 = Game_getFlag_14d(param_1);
    if (!bVar5) {
      pvVar7 = Mem_Alloc(0x24);
      uStack_10._0_1_ = 2;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_0141a120(param_1);
      }
      uStack_10 = CONCAT31(uStack_10._1_3_,1);
      iVar8 = Game_getMyPlayerID(param_1);
      Game_dispatchCommandToPlayer(param_1,iVar8,pvVar7);
    }
    uStack_10 = 0xffffffff;
    if (pvStack_44 == (void *)0x0) {
      ExceptionList = pvStack_18;
      return 2;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  Game_logGeneral(param_1,"game is already started.",uVar6);
  iVar8 = *param_1;
  iVar10 = (**(code **)(iVar8 + 0x54))();
  (**(code **)(iVar8 + 0x50))(iVar10 + 1);
  uVar11 = (**(code **)(*param_1 + 0x54))();
  Game_logGeneral(param_1,"STARTING TURN: %d",uVar11);
  pvStack_1c = (void *)0x0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  puStack_8 = (undefined1 *)0x3;
  FUN_013630f0(auStack_20);
  pvVar7 = pvStack_18;
  if (pvStack_18 < pvStack_1c) {
    FUN_00d83c2d();
  }
  pvVar14 = pvStack_1c;
  if (pvStack_18 < pvStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (pvVar14 == pvVar7) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if ((pvStack_18 <= pvVar14) && (FUN_00d83c2d(), pvStack_18 <= pvVar14)) {
      FUN_00d83c2d();
    }
    pvVar14 = (void *)((int)pvVar14 + 4);
  }
  if (param_1[0x1a] != 0) {
    FUN_013363c0(param_1 + 0x1a);
  }
  if (*(char *)((int)param_1 + 0x131) != '\0') {
    *(undefined1 *)((int)param_1 + 0x131) = 0;
  }
  if (*(char *)((int)param_1 + 0x38a) != '\0') {
    *(undefined1 *)((int)param_1 + 0x38a) = 0;
  }
  pvVar7 = Mem_Alloc(0xb8);
  puStack_8._0_1_ = 4;
  if (pvVar7 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)CWGameTurn_ctor();
  }
  puStack_8._0_1_ = 3;
  set_field_4(piVar9,(uint)param_1);
  puStack_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  pvStack_24 = (void *)0x0;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
  (**(code **)(*param_1 + 0x144))(&puStack_30);
  puVar16 = puStack_30;
  if (puStack_2c < puStack_30) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar4 = puStack_2c;
    if (puStack_2c < puStack_30) {
      FUN_00d83c2d();
    }
    if (puVar16 == puVar4) break;
    if (puStack_2c <= puVar16) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)*puVar16 + 0x20c))(1);
    if (puStack_2c <= puVar16) {
      FUN_00d83c2d();
    }
    puVar16 = puVar16 + 1;
  }
  if (param_1[0x1a] == 0) {
    pcVar2 = *(code **)(*param_1 + 0x54);
    param_1[0x1a] = (int)piVar9;
    uVar6 = (*pcVar2)();
    set_field_14(piVar9,uVar6);
    GameTurn_setTurnNumber(param_1[0xcb]);
    iVar8 = *piVar9;
    goto LAB_01339008;
  }
  uVar6 = (**(code **)(*param_1 + 0x54))();
  set_field_14(piVar9,uVar6);
  uVar6 = get_field_8((void *)param_1[0x1a]);
  puVar12 = (uint *)param_1[0xce];
  if (puVar12 < (uint *)param_1[0xcd]) {
    FUN_00d83c2d();
  }
  puVar15 = (uint *)param_1[0xcd];
  if ((uint *)param_1[0xce] < puVar15) {
    FUN_00d83c2d();
  }
  for (; (puVar15 != puVar12 && (*puVar15 != uVar6)); puVar15 = puVar15 + 1) {
  }
  puVar12 = (uint *)param_1[0xce];
  pvVar7 = (void *)0x0;
  puStack_48 = puVar15;
  if (puVar12 < (uint *)param_1[0xcd]) {
    FUN_00d83c2d();
  }
  if (param_1 == (int *)0xfffffcd0) {
    FUN_00d83c2d();
  }
  if (((puVar15 == puVar12) && (param_1[0xcd] != 0)) && (param_1[0xce] - param_1[0xcd] >> 2 != 0)) {
    do {
      do {
        iVar8 = GamePlayer_getPlayerId();
        piVar9 = (int *)param_1[0xf];
        if (piVar9 < (int *)param_1[0xe]) {
          FUN_00d83c2d();
        }
        piVar1 = (int *)param_1[0xe];
        piVar17 = piVar1;
        if ((int *)param_1[0xf] < piVar1) {
          FUN_00d83c2d();
        }
        for (; (piVar17 != piVar9 && (*piVar17 != iVar8)); piVar17 = piVar17 + 1) {
        }
        piVar9 = (int *)param_1[0xf];
        piStack_40 = piVar1;
        if (piVar9 < (int *)param_1[0xe]) {
          FUN_00d83c2d();
        }
        if (param_1 == (int *)0xffffffcc) {
          FUN_00d83c2d();
        }
      } while (piVar17 == piVar9);
      if (param_1 == (int *)0xffffffcc) {
        FUN_00d83c2d();
      }
      if ((int *)param_1[0xf] <= piVar17) {
        FUN_00d83c2d();
      }
      piVar9 = (int *)param_1[0xf];
      piVar17 = piVar17 + 1;
      if (piVar9 < (int *)param_1[0xe]) {
        FUN_00d83c2d();
      }
      if (piVar17 == piVar9) {
        piVar17 = (int *)param_1[0xe];
        if ((piVar17 == (int *)0x0) || (param_1[0xf] - (int)piVar17 >> 2 == 0)) {
          uVar11 = FUN_01259830();
          return uVar11;
        }
        if ((int *)param_1[0xf] < piVar17) {
          FUN_00d83c2d();
        }
        if (((int *)param_1[0xf] < piVar17) || (piVar17 < (int *)param_1[0xe])) {
          FUN_00d83c2d();
        }
        bVar5 = piVar17 < (int *)param_1[0xf];
      }
      else {
        bVar5 = piVar17 < (int *)param_1[0xf];
      }
      if (!bVar5) {
        FUN_00d83c2d();
      }
      pvVar7 = PlayArea_findPlayerElementById(param_1,*piVar17);
      if (pvVar7 == (void *)0x0) {
        FUN_012f5a60("player","..\\common\\rules\\game\\cwgame.cpp",0x537);
      }
      puVar12 = (uint *)param_1[0xce];
      if (puVar12 < (uint *)param_1[0xcd]) {
        FUN_00d83c2d();
      }
      puVar15 = (uint *)param_1[0xcd];
      puVar3 = puVar15;
      if ((uint *)param_1[0xce] < puVar15) {
        FUN_00d83c2d();
      }
      for (; (puVar3 != puVar12 && ((void *)*puVar3 != pvVar7)); puVar3 = puVar3 + 1) {
      }
      puVar12 = (uint *)param_1[0xce];
      puStack_48 = puVar15;
      if (puVar12 < (uint *)param_1[0xcd]) {
        FUN_00d83c2d();
      }
      if (param_1 == (int *)0xfffffcd0) {
        FUN_00d83c2d();
      }
    } while ((puVar3 == puVar12) || (pvVar7 == (void *)0x0));
  }
  else {
    puVar12 = (uint *)param_1[0xce];
    if (puVar12 < (uint *)param_1[0xcd]) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xfffffcd0) {
      FUN_00d83c2d();
    }
    if (((puVar15 == puVar12) || (param_1[0xcd] == 0)) || (param_1[0xce] - param_1[0xcd] >> 2 == 0))
    {
      FUN_012f5dc0("Player List is size == 0!");
    }
    else {
      if (param_1 == (int *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if ((uint *)param_1[0xce] <= puVar15) {
        FUN_00d83c2d();
      }
      puVar12 = (uint *)param_1[0xce];
      puVar15 = puVar15 + 1;
      if (puVar12 < (uint *)param_1[0xcd]) {
        FUN_00d83c2d();
      }
      if (puVar15 == puVar12) {
        puVar12 = (uint *)FUN_013337b0(0);
        pvVar7 = (void *)*puVar12;
      }
      else {
        if ((uint *)param_1[0xce] <= puVar15) {
          FUN_00d83c2d();
        }
        pvVar7 = (void *)*puVar15;
      }
      if (pvVar7 != (void *)0x0) goto LAB_01338f9e;
    }
    FUN_012f5a60("nextPlayer","..\\common\\rules\\game\\cwgame.cpp",0x54b);
  }
LAB_01338f9e:
  GameTurn_startForPlayer(pvVar7);
  param_1[0x1a] = (int)unaff_EBX;
  GameTurn_setTurnNumber(param_1[0xcb]);
  iVar8 = *unaff_EBX;
LAB_01339008:
  uVar11 = (**(code **)(iVar8 + 0x4c))(0x1adb1);
  uStack_10 = CONCAT31(uStack_10._1_3_,3);
  if (pvStack_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pvStack_34 = (void *)0x0;
  puStack_30 = (undefined4 *)0x0;
  puStack_2c = (undefined4 *)0x0;
  uStack_10 = 0xffffffff;
  if (pvStack_24 == (void *)0x0) {
    ExceptionList = pvStack_18;
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_24);
}

