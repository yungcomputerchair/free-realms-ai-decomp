// addr: 0x01369c70
// name: Game_receiveCommandText
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_receiveCommandText(void * this, char * commandLine) */

void __thiscall Game_receiveCommandText(void *this,char *commandLine)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  void *map;
  undefined1 *playerId_;
  int *piVar9;
  char *******pppppppcVar10;
  undefined4 uVar11;
  int key_;
  undefined8 uVar12;
  char *****local_c0;
  void *local_bc;
  undefined1 local_b5;
  undefined1 *local_b4;
  int local_b0;
  undefined1 local_ac [8];
  void *local_a4;
  void *local_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [4];
  char ******local_7c [4];
  undefined4 local_6c;
  uint local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  char ******local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined1 local_28;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Parses textual game commands and dispatches them to setup, account
                       preference, card/action, button, movement, prepass, and other Game event
                       handlers. Unknown or comment lines are ignored/logged. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168025c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_c0;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff30);
  local_c0 = (char *****)commandLine;
  if (commandLine == (char *)0x0) {
    return;
  }
  if (*commandLine == '#') {
    return;
  }
  ExceptionList = &local_c;
  CommandText_advancePastTab();
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (char ******)((uint)local_7c[0] & 0xffffff00);
  pcVar4 = commandLine;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_80,commandLine,(int)pcVar4 - (int)(commandLine + 1));
  local_4 = 0;
  local_b5 = 0;
  iVar5 = FUN_00f942a0();
  if (iVar5 == 0) {
    uVar6 = CommandText_readInt();
    (**(code **)(*(int *)this + 0x28))();
    Game_logGeneral(this,"setup(%d) => %d",uVar6);
    (**(code **)(*(int *)this + 0xa4))();
  }
  else {
    bVar1 = TokenString_equalsCString(local_80,"matchID");
    if (bVar1) {
      uVar6 = CommandText_readInt();
      *(undefined4 *)((int)this + 100) = uVar6;
      Game_logGeneral(this,"Setting matchID: %d",uVar6);
    }
    else {
      bVar1 = TokenString_equalsCString(local_80,"playerCount");
      if (bVar1) {
        pppppppcVar10 = (char *******)&local_c0;
        uVar6 = CommandText_readInt();
        *(undefined4 *)((int)this + 0x154) = uVar6;
        *(undefined4 *)((int)this + 0x158) = uVar6;
        pcVar4 = "playercount set.";
      }
      else {
        bVar1 = TokenString_equalsCString(local_80,"leagueID");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          *(undefined4 *)((int)this + 0x2ec) = uVar6;
          Game_logGeneral(this,"setting LeagueID: %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"playFormat");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          *(undefined4 *)((int)this + 0x288) = uVar6;
          Game_logGeneral(this,"setting playFormat: %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"addLeagueCardAction");
        if (bVar1) {
          iVar5 = CommandText_readInt();
          iVar7 = CommandText_readInt();
          local_bc = (void *)CommandText_readInt();
          local_b0 = CommandText_readInt();
          Game_addLeagueCardAction(this,iVar5,iVar7,(int)local_bc,local_b0);
          Game_logGeneral(this,"setting leagueCardAction: %d, %d, %d, %d",iVar5);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player1 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 1 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player2 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 2 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player3 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 3 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player4 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 4 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player5 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 5 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player6 Order");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 6 Order set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player1 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 1 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player2 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 2 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player3 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 3 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player4 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 4 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player5 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 5 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"Player6 Account");
        if (bVar1) {
          local_bc = (void *)CommandText_readInt();
          FUN_0042c155();
          Game_logGeneral(this,"Player 6 Account set.",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"AccountPref");
        if (bVar1) {
          local_4c = 0xf;
          local_50 = 0;
          local_60 = (char ******)((uint)local_60 & 0xffffff00);
          local_4._0_1_ = 1;
          local_b4 = (undefined1 *)CommandText_readInt();
          CommandText_readInt();
          local_a0 = (void *)CommandText_readInt();
          local_b0 = CommandText_readInt();
          pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   CommandText_readString(local_48,&local_c0);
          local_4._0_1_ = 2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (local_64,pbVar8,0,0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_0041f1d7();
          LobbyAccount_ensureSingleton();
          pvVar3 = LobbyServiceAccountMap_findValue(map,key_);
          LobbyAccount_ensureSingleton();
          if (pvVar3 == (void *)0x0) {
            FUN_012df9f0();
          }
          FUN_012fa910();
          local_4 = CONCAT31(local_4._1_3_,3);
          if (local_b0 == 2) {
            pppppppcVar10 = (char *******)local_60;
            if (local_4c < 0x10) {
              pppppppcVar10 = &local_60;
            }
            local_bc = (void *)_atol((char *)pppppppcVar10);
            FUN_01300680();
            local_a4 = local_bc;
          }
          else if (local_b0 == 3) {
            PropertyValue_setString();
          }
          else {
            FUN_01300680();
          }
          local_bc = (void *)Account_getPropertySet();
          if (local_bc == (void *)0x0) {
            FUN_012f5a60();
          }
          pvVar3 = local_a0;
          cVar2 = FUN_013110e0();
          if (cVar2 == '\0') {
            Property_cloneIfPresent(pvVar3,local_ac);
          }
          else {
            PropertySet_tryCopyPropertyValue(local_bc,(int)pvVar3,local_ac);
          }
          Game_logGeneral(this,
                          "Setting AccontPref: playerID: %d, accountID: %d, key: %d, type: %d, value: %s"
                          ,local_b4);
          local_4._0_1_ = 1;
          FUN_01300cd0();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0041f1d7();
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"stop");
        if (bVar1) {
          Game_logGeneral(this,"stop()",pvVar3);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"setupDeckForPlayer");
        if (bVar1) {
          local_4c = 0xf;
          local_50 = 0;
          local_60 = (char ******)((uint)local_60 & 0xffffff00);
          local_4._0_1_ = 4;
          playerId_ = (undefined1 *)CommandText_readInt();
          local_b4 = playerId_;
          pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   CommandText_readString();
          local_4._0_1_ = 5;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (local_64,pbVar8,0,0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_0041f1d7();
          local_a0 = PlayArea_findPlayerElementById(this,(int)playerId_);
          piVar9 = IntObjectMap_getOrInsert((void *)((int)this + 0x210),(int *)&local_b4);
          if (*piVar9 == 0) {
            FUN_012f5a60();
          }
          (**(code **)(*(int *)this + 0x38))();
          Game_logGeneral(this,"setupDeckForPlayer(%d, %s) -> %d",playerId_);
          local_4 = local_4 & 0xffffff00;
          FUN_0041f1d7();
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"cardPlayed");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          CommandText_readInt();
          (**(code **)(*(int *)this + 0xc0))();
          Game_logGeneral(this,"cardPlayed(%d, %d) => %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"cardIntroduced");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          CommandText_readInt();
          (**(code **)(*(int *)this + 0xc4))();
          Game_logGeneral(this,"cardIntroduced(%d, %d) => %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"beginCardPlayed");
        if (bVar1) {
          local_60 = (char ******)0x0;
          local_5c = 0;
          local_58 = 0;
          local_4._0_1_ = 6;
          uVar6 = CommandText_readInt();
          CommandText_readInt();
          (**(code **)(*(int *)this + 200))();
          Game_logGeneral(this,"beginCardPlayed(%d, %d, ...) => %d",uVar6);
          local_4 = (uint)local_4._1_3_ << 8;
          StdVector_clearStorage(local_64);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"actionPlayed");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          local_bc = (void *)CommandText_readInt();
          CommandText_readInt();
          (**(code **)(*(int *)this + 0xcc))(uVar6);
          PackedActionId_getLow12Bits();
          PackedActionId_getHighBits();
          Game_logGeneral(this,"actionPlayed(%d, %d, %d (%d)) => %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"cardSelected");
        if (bVar1) {
          uVar6 = CommandText_readInt();
          CommandText_readInt();
          (**(code **)(*(int *)this + 0xd0))();
          Game_logGeneral(this,"cardSelected(%d, %d) => %d",uVar6);
          goto LAB_0136acf3;
        }
        bVar1 = TokenString_equalsCString(local_80,"concede");
        if (bVar1) {
          pppppppcVar10 = (char *******)CommandText_readInt();
          (**(code **)(*(int *)this + 0x1d4))();
          pcVar4 = "concedeGame(%d)";
        }
        else {
          bVar1 = TokenString_equalsCString(local_80,"cardDeselected");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            CommandText_readInt();
            (**(code **)(*(int *)this + 0xd4))();
            Game_logGeneral(this,"cardDeselected(%d, %d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"playAreaSelected");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            CommandText_readInt();
            (**(code **)(*(int *)this + 0xd8))();
            Game_logGeneral(this,"playAreaSelected(%d, %d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"tokensMoved");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            CommandText_readInt();
            local_b4 = (undefined1 *)CommandText_readInt();
            (**(code **)(*(int *)this + 0xdc))();
            Game_logGeneral(this,"tokensMoved(%d, %d, %d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"stateSpecificMessage");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            uVar11 = CommandText_readInt();
            local_bc = (void *)CommandText_readInt();
            FUN_012fa910();
            local_4._0_1_ = 7;
            FUN_012fa910();
            local_4._0_1_ = 8;
            FUN_01300680();
            local_5c = uVar11;
            FUN_01300680();
            local_a4 = local_bc;
            (**(code **)(*(int *)this + 0xf8))(uVar6,local_64,local_ac);
            Game_logGeneral(this,"stateSpecificMessage(%d, %d, %d) => %d",uVar6);
            local_4._0_1_ = 7;
            FUN_01300cd0();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_01300cd0();
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"buttonPressed");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            CommandText_readInt();
            (**(code **)(*(int *)this + 0xe4))();
            Game_logGeneral(this,"buttonPressed(%d, %d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"synchPointReached");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            (**(code **)(*(int *)this + 0x100))();
            Game_logGeneral(this,"synchPointReached(%d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"dragStopped");
          if (bVar1) {
            uVar6 = CommandText_readInt();
            CommandText_readInt();
            (**(code **)(*(int *)this + 0xfc))();
            Game_logGeneral(this,"dragStopped(%d,%d) => %d",uVar6);
            goto LAB_0136acf3;
          }
          bVar1 = TokenString_equalsCString(local_80,"prepass");
          if (bVar1) {
            pppppppcVar10 = (char *******)CommandText_readInt();
            Game_prepass(this,(int)pppppppcVar10);
            pcVar4 = "prepass(%d) => 1";
          }
          else {
            bVar1 = TokenString_equalsCString(local_80,"cancelprepass");
            if (bVar1) {
              uVar12 = CommandText_readInt();
              pppppppcVar10 = (char *******)uVar12;
              RefCountMap_releaseKey(this,(int)((ulonglong)uVar12 >> 0x20));
              pcVar4 = "cancelprepass(%d) => 1";
            }
            else {
              bVar1 = TokenString_equalsCString(local_80,"receiveList");
              if (bVar1) {
                local_60 = (char ******)0x0;
                local_5c = 0;
                local_58 = 0;
                local_4._0_1_ = 9;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48,"");
                local_4 = CONCAT31(local_4._1_3_,10);
                iVar7 = CommandText_readInt();
                iVar5 = iVar7;
                if (0 < iVar7) {
                  do {
                    local_14 = 0xf;
                    local_18 = 0;
                    local_28 = 0;
                    local_4._0_1_ = 0xb;
                    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)CommandText_readString();
                    local_4._0_1_ = 0xc;
                    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                              (local_2c,pbVar8,0,0xffffffff);
                    local_4._0_1_ = 0xb;
                    FUN_0041f1d7();
                    StdVector28_pushBack(local_64,local_2c,pvVar3);
                    StdString_appendSubstring();
                    local_4 = CONCAT31(local_4._1_3_,10);
                    FUN_0041f1d7();
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
                GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
                uVar6 = StateMachine_getCurrentState();
                iVar5 = FUN_00d8d382(uVar6);
                if (iVar5 != 0) {
                  local_b4 = &stack0xffffff1c;
                  FUN_01246d00(local_64);
                  local_4 = CONCAT31((int3)(local_4 >> 8),10);
                  PickListState_receiveList();
                }
                Game_logGeneral(this,"receiveList(%d, %s) => %d",iVar7);
                local_4._0_1_ = 9;
                FUN_0041f1d7();
                local_4 = (uint)local_4._1_3_ << 8;
                StdVector_StdStringRange_clear(local_64);
                goto LAB_0136acf3;
              }
              pppppppcVar10 = (char *******)local_7c[0];
              if (local_68 < 0x10) {
                pppppppcVar10 = local_7c;
              }
              pcVar4 = "Unknown command: \'%s\'";
            }
          }
        }
      }
      Game_logGeneral(this,pcVar4,pppppppcVar10);
    }
  }
LAB_0136acf3:
  local_4 = 0xffffffff;
  if (local_68 < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_7c[0]);
}

