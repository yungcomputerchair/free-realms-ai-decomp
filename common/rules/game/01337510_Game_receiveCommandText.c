// addr: 0x01337510
// name: Game_receiveCommandText
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Game_receiveCommandText(int *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int actionId;
  int arg3;
  void *pvVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  void *map;
  void *pvVar10;
  char *******_Str;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *******playerId;
  int key_;
  undefined8 uVar15;
  int **ppiVar16;
  char *local_90;
  void *local_8c;
  int local_88 [2];
  int *local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined1 local_64 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  undefined4 ******local_44 [4];
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char ******local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Parses tab-delimited textual game commands such as setup, player
                       order/account, deck setup, card actions, concede, and prepass, dispatching
                       each to the matching Game method. Evidence: many command strings and
                       called-by existing Game_receiveCommandText neighbor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b82c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_90;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff60;
  local_90 = param_2;
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '#') {
    return;
  }
  ExceptionList = &local_c;
  CommandText_advancePastTab(&local_90);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
  pcVar5 = param_2;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,param_2,(int)pcVar5 - (int)(param_2 + 1));
  local_4 = 0;
  iVar6 = FUN_00f942a0(0,local_34,"setup",5);
  if (iVar6 == 0) {
    uVar7 = CommandText_readInt(&local_90);
    (**(code **)(*param_1 + 0x28))(uVar7);
    Game_logGeneral(param_1,"setup(%d) => %d",uVar7);
    goto LAB_01338820;
  }
  bVar1 = TokenString_equalsCString(local_48,"matchID");
  if (bVar1) {
    iVar6 = CommandText_readInt(&local_90);
    param_1[0x19] = iVar6;
    Game_logGeneral(param_1,"Setting matchID: %d",iVar6);
    goto LAB_01338820;
  }
  bVar1 = TokenString_equalsCString(local_48,"playerCount");
  if (bVar1) {
    uVar7 = CommandText_readInt(&local_90);
    FUN_01347c30(uVar7);
    Game_logGeneral(param_1,"playercount set.",uVar4);
    goto LAB_01338820;
  }
  bVar1 = TokenString_equalsCString(local_48,"leagueID");
  if (bVar1) {
    uVar7 = CommandText_readInt(&local_90);
    Game_setMatchStructure(uVar7);
    playerId = (undefined4 *******)param_1[0xbb];
    pcVar5 = "setting LeagueID: %d";
  }
  else {
    bVar1 = TokenString_equalsCString(local_48,"playFormat");
    if (!bVar1) {
      bVar1 = TokenString_equalsCString(local_48,"addLeagueCardAction");
      if (bVar1) {
        iVar6 = CommandText_readInt(&local_90);
        actionId = CommandText_readInt(&local_90);
        arg3 = CommandText_readInt(&local_90);
        local_88[0] = CommandText_readInt(&local_90);
        Game_addLeagueCardAction(param_1,iVar6,actionId,arg3,local_88[0]);
        Game_logGeneral(param_1,"setting leagueCardAction: %d, %d, %d, %d",iVar6);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player1 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 1 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player2 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 2 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player3 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 3 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player4 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 4 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player5 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 5 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player6 Order");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 6 Order set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player1 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 1 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player2 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 2 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player3 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 3 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player4 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 4 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player5 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 5 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player6 Account");
      if (bVar1) {
        local_88[0] = CommandText_readInt(&local_90);
        FUN_0042c155(local_88);
        Game_logGeneral(param_1,"Player 6 Account set.",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"AccountPref");
      if (bVar1) {
        local_14 = 0xf;
        local_18 = 0;
        local_28[0] = (char ******)((uint)local_28[0] & 0xffffff00);
        local_4._0_1_ = 1;
        local_8c = (void *)CommandText_readInt(&local_90);
        uVar7 = CommandText_readInt(&local_90);
        pvVar8 = (void *)CommandText_readInt(&local_90);
        local_88[0] = CommandText_readInt(&local_90);
        pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 CommandText_readString(local_64,&local_90);
        local_4._0_1_ = 2;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_2c,pbVar9,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_0041f1d7();
        LobbyAccount_ensureSingleton();
        pvVar10 = LobbyServiceAccountMap_findValue(map,key_);
        LobbyAccount_ensureSingleton();
        if (pvVar10 == (void *)0x0) {
          FUN_012df9f0(uVar7);
        }
        FUN_012fa910();
        local_4 = CONCAT31(local_4._1_3_,3);
        if (local_88[0] == 2) {
          _Str = (char *******)local_28[0];
          if (local_14 < 0x10) {
            _Str = local_28;
          }
          local_80 = (int *)_atol((char *)_Str);
          FUN_01300680(2);
          local_6c = local_80;
        }
        else if (local_88[0] == 3) {
          PropertyValue_setString(local_2c);
        }
        else {
          FUN_01300680(local_88[0]);
        }
        pvVar10 = (void *)Account_getPropertySet();
        if (pvVar10 == (void *)0x0) {
          FUN_012f5a60("propertySet","..\\common\\rules\\game\\cwgame.cpp",0x3c8);
        }
        cVar2 = FUN_013110e0(pvVar8);
        if (cVar2 == '\0') {
          Property_cloneIfPresent(pvVar8,local_74);
        }
        else {
          PropertySet_tryCopyPropertyValue(pvVar10,(int)pvVar8,local_74);
        }
        Game_logGeneral(param_1,
                        "Setting AccontPref: playerID: %d, accountID: %d, key: %d, type: %d, value: %s"
                        ,local_8c);
        local_4._0_1_ = 1;
        FUN_01300cd0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"stop");
      if (bVar1) {
        Game_logGeneral(param_1,"stop()",uVar4);
        goto LAB_01338820;
      }
      bVar1 = TokenString_equalsCString(local_48,"Player1 Deck: DrawDeck:");
      if (bVar1) {
        local_7c = param_1[0x85];
        ppiVar16 = &local_80;
        pvVar8 = (void *)0x1;
        local_8c = (void *)0x1;
        local_80 = param_1 + 0x84;
        FUN_01331e20(local_88,&local_8c);
        cVar2 = FUN_0132c380(ppiVar16);
        if (cVar2 != '\0') {
          local_8c = Mem_Alloc(0x94);
          local_4._0_1_ = 4;
          if (local_8c == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = CWDeck_ctor();
          }
          local_4 = (uint)local_4._1_3_ << 8;
          local_8c = (void *)0x1;
          puVar11 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
          *puVar11 = uVar7;
        }
        piVar12 = (int *)CommandText_readInt(&local_90);
        uVar7 = CommandText_readInt(&local_90);
LAB_01337ecd:
        local_8c = pvVar8;
        puVar11 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
        local_80 = piVar12;
        local_7c = uVar7;
        (**(code **)(*(int *)*puVar11 + 0x5c))(&local_80);
      }
      else {
        bVar1 = TokenString_equalsCString(local_48,"Player2 Deck: DrawDeck:");
        if (bVar1) {
          local_7c = param_1[0x85];
          local_80 = param_1 + 0x84;
          ppiVar16 = &local_80;
          pvVar8 = (void *)0x2;
          local_8c = (void *)0x2;
          FUN_01331e20(local_88,&local_8c);
          cVar2 = FUN_0132c380(ppiVar16);
          if (cVar2 != '\0') {
            local_8c = Mem_Alloc(0x94);
            local_4 = CONCAT31(local_4._1_3_,5);
LAB_013380b7:
            if (local_8c == (void *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = CWDeck_ctor();
            }
            local_4 = local_4 & 0xffffff00;
            local_8c = pvVar8;
            puVar11 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
            *puVar11 = uVar7;
          }
        }
        else {
          bVar1 = TokenString_equalsCString(local_48,"Player3 Deck: DrawDeck:");
          if (bVar1) {
            local_7c = param_1[0x85];
            ppiVar16 = &local_80;
            pvVar8 = (void *)0x3;
            local_8c = (void *)0x3;
            local_80 = param_1 + 0x84;
            FUN_01331e20(local_88,&local_8c);
            cVar2 = FUN_0132c380(ppiVar16);
            if (cVar2 != '\0') {
              local_8c = Mem_Alloc(0x94);
              local_4._0_1_ = 6;
              if (local_8c == (void *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = CWDeck_ctor();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              local_8c = (void *)0x3;
              puVar11 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
              *puVar11 = uVar7;
            }
            piVar12 = (int *)CommandText_readInt(&local_90);
            uVar7 = CommandText_readInt(&local_90);
            goto LAB_01337ecd;
          }
          bVar1 = TokenString_equalsCString(local_48,"Player4 Deck: DrawDeck:");
          if (bVar1) {
            local_7c = param_1[0x85];
            local_80 = param_1 + 0x84;
            ppiVar16 = &local_80;
            pvVar8 = (void *)0x4;
            local_8c = (void *)0x4;
            FUN_01331e20(local_88,&local_8c);
            cVar2 = FUN_0132c380(ppiVar16);
            if (cVar2 != '\0') {
              local_8c = Mem_Alloc(0x94);
              local_4 = CONCAT31(local_4._1_3_,7);
              goto LAB_013380b7;
            }
          }
          else {
            bVar1 = TokenString_equalsCString(local_48,"Player5 Deck: DrawDeck:");
            if (bVar1) {
              local_7c = param_1[0x85];
              param_1 = param_1 + 0x84;
              ppiVar16 = &local_80;
              local_8c = (void *)0x5;
              local_80 = param_1;
              FUN_01331e20(local_88,&local_8c);
              cVar2 = FUN_0132c380(ppiVar16);
              if (cVar2 != '\0') {
                local_8c = Mem_Alloc(0x94);
                local_4._0_1_ = 8;
                if (local_8c == (void *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = CWDeck_ctor();
                }
                local_4 = (uint)local_4._1_3_ << 8;
                local_8c = (void *)0x5;
                puVar11 = IntObjectMap_getOrInsert(param_1,(int *)&local_8c);
                *puVar11 = uVar7;
              }
              piVar12 = (int *)CommandText_readInt(&local_90);
              uVar7 = CommandText_readInt(&local_90);
              local_8c = (void *)0x5;
              puVar11 = IntObjectMap_getOrInsert(param_1,(int *)&local_8c);
              local_80 = piVar12;
              local_7c = uVar7;
              (**(code **)(*(int *)*puVar11 + 0x5c))(&local_80);
              goto LAB_01338820;
            }
            bVar1 = TokenString_equalsCString(local_48,"Player6 Deck: DrawDeck:");
            if (!bVar1) {
              bVar1 = TokenString_equalsCString(local_48,"setupDeckForPlayer");
              if (bVar1) {
                local_14 = 0xf;
                local_18 = 0;
                local_28[0] = (char ******)((uint)local_28[0] & 0xffffff00);
                local_4._0_1_ = 10;
                pvVar8 = (void *)CommandText_readInt(&local_90);
                local_8c = pvVar8;
                pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)CommandText_readString(local_64,&local_90);
                local_4._0_1_ = 0xb;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                          (local_2c,pbVar9,0,0xffffffff);
                local_4 = CONCAT31(local_4._1_3_,10);
                FUN_0041f1d7();
                pvVar10 = PlayArea_findPlayerElementById(param_1,(int)pvVar8);
                piVar12 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
                iVar6 = *piVar12;
                if (iVar6 == 0) {
                  FUN_012f5a60(&DAT_018d4520,"..\\common\\rules\\game\\cwgame.cpp",0x405);
                }
                (**(code **)(*param_1 + 0x38))(pvVar10,iVar6);
                Game_logGeneral(param_1,"setupDeckForPlayer(%d, %s) -> %d",pvVar8);
                local_4 = local_4 & 0xffffff00;
                FUN_0041f1d7();
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"cardPlayed");
              if (bVar1) {
                uVar7 = CommandText_readInt(&local_90);
                uVar13 = CommandText_readInt(&local_90);
                (**(code **)(*param_1 + 0xc0))(uVar7,uVar13,0,0);
                Game_logGeneral(param_1,"cardPlayed(%d, %d) => %d",uVar7);
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"cardIntroduced");
              if (bVar1) {
                uVar7 = CommandText_readInt(&local_90);
                uVar13 = CommandText_readInt(&local_90);
                (**(code **)(*param_1 + 0xc4))(uVar7,uVar13);
                Game_logGeneral(param_1,"cardIntroduced(%d, %d) => %d",uVar7);
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"beginCardPlayed");
              if (bVar1) {
                local_70 = 0;
                local_6c = (int *)0x0;
                local_68 = 0;
                local_4._0_1_ = 0xc;
                uVar7 = CommandText_readInt(&local_90);
                uVar13 = CommandText_readInt(&local_90);
                (**(code **)(*param_1 + 200))(uVar7,uVar13,local_74,0);
                Game_logGeneral(param_1,"beginCardPlayed(%d, %d, ...) => %d",uVar7);
                local_4 = (uint)local_4._1_3_ << 8;
                StdVector_clearStorage(local_74);
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"actionPlayed");
              if (bVar1) {
                uVar7 = CommandText_readInt(&local_90);
                uVar13 = CommandText_readInt(&local_90);
                uVar14 = CommandText_readInt(&local_90);
                local_8c = (void *)CommandText_readInt(&local_90);
                uVar3 = (**(code **)(*param_1 + 0xcc))
                                  (uVar7,uVar13,uVar14,local_8c != (void *)0x0,0);
                uVar13 = PackedActionId_getLow12Bits(uVar14,local_8c,uVar3);
                PackedActionId_getHighBits(uVar14,uVar13);
                Game_logGeneral(param_1,"actionPlayed(%d, %d, %d (%d), %d) => %d",uVar7);
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"cardSelected");
              if (bVar1) {
                uVar7 = CommandText_readInt(&local_90);
                uVar13 = CommandText_readInt(&local_90);
                (**(code **)(*param_1 + 0xd0))(uVar7,uVar13,0,0);
                Game_logGeneral(param_1,"cardSelected(%d, %d) => %d",uVar7);
                goto LAB_01338820;
              }
              bVar1 = TokenString_equalsCString(local_48,"concede");
              if (bVar1) {
                playerId = (undefined4 *******)CommandText_readInt(&local_90);
                (**(code **)(*param_1 + 0x1d4))(playerId);
                pcVar5 = "concedeGame(%d)";
              }
              else {
                bVar1 = TokenString_equalsCString(local_48,"cardDeselected");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0xd4))(uVar7,uVar13);
                  Game_logGeneral(param_1,"cardDeselected(%d, %d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"playAreaSelected");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0xd8))(uVar7,uVar13);
                  Game_logGeneral(param_1,"playAreaSelected(%d, %d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"tokensMoved");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  uVar14 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0xdc))(uVar7,uVar13,uVar14);
                  Game_logGeneral(param_1,"tokensMoved(%d, %d, %d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"stateSpecificMessage");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  piVar12 = (int *)CommandText_readInt(&local_90);
                  FUN_012fa910();
                  local_4._0_1_ = 0xd;
                  FUN_012fa910();
                  local_4._0_1_ = 0xe;
                  FUN_01300680(2);
                  local_78 = uVar13;
                  FUN_01300680(2);
                  local_6c = piVar12;
                  (**(code **)(*param_1 + 0xf8))(uVar7,&local_80,local_74,0,0,0,0);
                  Game_logGeneral(param_1,"stateSpecificMessage(%d, %d, %d) => %d",uVar7);
                  local_4._0_1_ = 0xd;
                  FUN_01300cd0();
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_01300cd0();
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"buttonPressed");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0xe4))(uVar7,uVar13,0);
                  Game_logGeneral(param_1,"buttonPressed(%d, %d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"synchPointReached");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0x100))(uVar7);
                  Game_logGeneral(param_1,"synchPointReached(%d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"dragStopped");
                if (bVar1) {
                  uVar7 = CommandText_readInt(&local_90);
                  uVar13 = CommandText_readInt(&local_90);
                  (**(code **)(*param_1 + 0xfc))(uVar7,uVar13);
                  Game_logGeneral(param_1,"dragStopped(%d,%d) => %d",uVar7);
                  goto LAB_01338820;
                }
                bVar1 = TokenString_equalsCString(local_48,"prepass");
                if (bVar1) {
                  playerId = (undefined4 *******)CommandText_readInt(&local_90);
                  Game_prepass(param_1,(int)playerId);
                  pcVar5 = "prepass(%d) => 1";
                }
                else {
                  bVar1 = TokenString_equalsCString(local_48,"cancelprepass");
                  if (bVar1) {
                    uVar15 = CommandText_readInt(&local_90);
                    playerId = (undefined4 *******)uVar15;
                    RefCountMap_releaseKey(param_1,(int)((ulonglong)uVar15 >> 0x20));
                    pcVar5 = "cancelprepass(%d) => 1";
                  }
                  else {
                    bVar1 = TokenString_equalsCString(local_48,"receiveList");
                    if (bVar1) goto LAB_01338820;
                    playerId = (undefined4 *******)local_44[0];
                    if (local_30 < 0x10) {
                      playerId = local_44;
                    }
                    pcVar5 = "Unknown command: \'%s\'";
                  }
                }
              }
              goto LAB_01338817;
            }
            local_7c = param_1[0x85];
            local_80 = param_1 + 0x84;
            ppiVar16 = &local_80;
            pvVar8 = (void *)0x6;
            local_8c = (void *)0x6;
            FUN_01331e20(local_88,&local_8c);
            cVar2 = FUN_0132c380(ppiVar16);
            if (cVar2 != '\0') {
              local_8c = Mem_Alloc(0x94);
              local_4 = CONCAT31(local_4._1_3_,9);
              goto LAB_013380b7;
            }
          }
        }
        piVar12 = (int *)CommandText_readInt(&local_90);
        uVar7 = CommandText_readInt(&local_90);
        local_8c = pvVar8;
        puVar11 = IntObjectMap_getOrInsert(param_1 + 0x84,(int *)&local_8c);
        local_80 = piVar12;
        local_7c = uVar7;
        (**(code **)(*(int *)*puVar11 + 0x5c))(&local_80);
      }
      goto LAB_01338820;
    }
    uVar7 = CommandText_readInt(&local_90);
    FUN_013488a0(uVar7);
    playerId = (undefined4 *******)param_1[0xa2];
    pcVar5 = "setting playFormat: %d";
  }
LAB_01338817:
  Game_logGeneral(param_1,pcVar5,playerId);
LAB_01338820:
  local_4 = 0xffffffff;
  if (local_30 < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44[0]);
}

