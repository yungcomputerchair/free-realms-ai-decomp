// addr: 0x0142c890
// name: PickListState_receiveList
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
PickListState_receiveList
          (int param_1,undefined4 param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
          undefined4 param_5)

{
  rsize_t _DstSize;
  int *piVar1;
  int *piVar2;
  void *sourceEnv;
  undefined4 *****pppppuVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  undefined4 uVar8;
  char *****pppppcVar9;
  int iVar10;
  undefined1 *this;
  void *outVector;
  void *env;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar12;
  int *piVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  int local_188;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_184;
  int *local_180;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_17c;
  undefined1 local_178 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_174;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_170;
  int local_16c;
  undefined1 *local_168;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_164;
  int *local_15c;
  int *local_158;
  undefined4 local_154;
  undefined1 auStack_150 [4];
  int *piStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [4];
  int *local_13c;
  int *local_138;
  undefined4 local_134;
  int *local_130;
  int *local_128;
  int *local_124;
  int local_120;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_11c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_118;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbStack_10c;
  int *piStack_fc;
  undefined1 local_f8 [148];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  char ****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  char ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ****local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Implements the operation identified by referenced string 'Cards Matched:'. */
  puStack_8 = &LAB_01695cd8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_188;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe68);
  ExceptionList = &local_c;
  local_4 = 0;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
  local_188 = param_1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_2c,"",0);
  pbVar11 = param_4;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_4 < param_3) {
    FUN_00d83c2d();
  }
  pbVar12 = param_3;
  if (param_4 < param_3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (pbVar12 == pbVar11) break;
    if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (param_4 <= pbVar12) {
      FUN_00d83c2d();
    }
    FUN_012326a0();
    local_4._0_1_ = 2;
    StdString_appendSubstring();
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (char ****)((uint)local_60[0] & 0xffffff00);
    if (param_4 <= pbVar12) {
      FUN_00d83c2d();
    }
    pbVar12 = pbVar12 + 0x1c;
  }
  pppppuVar3 = (undefined4 *****)local_28[0];
  if (local_14 < 0x10) {
    pppppuVar3 = local_28;
  }
  pcVar15 = "PickListState::receiveList %s";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar15,pppppuVar3);
  StateMachineState_getGame();
  Game_writeGameLog();
  pvVar4 = Mem_Alloc(0x34);
  local_4._0_1_ = 3;
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_180 = pvVar4;
    puVar5 = (undefined4 *)StateMachineState_getGame();
    puVar5 = GameCommand_ValueList_ctor(pvVar4,puVar5,sourceEnv);
  }
  local_4._0_1_ = 1;
  local_180 = (int *)&stack0xfffffe54;
  FUN_01246d00(&param_2);
  local_4._0_1_ = 1;
  FUN_014d7290();
  set_field_4(puVar5,*(uint *)(param_1 + 0xf8));
  StateMachineState_getGame();
  Game_dispatchCommandToPlayerOrAll();
  local_128 = (int *)0x0;
  local_124 = (int *)0x0;
  local_120 = 0;
  local_4._0_1_ = 5;
  if (*(char *)(param_1 + 0x149) == '\0') {
    local_174 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_170 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_16c = 0;
    local_4._0_1_ = 6;
    piVar6 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar6 + 0x144))();
    local_13c = (int *)0x0;
    local_138 = (int *)0x0;
    local_134 = 0;
    local_4 = CONCAT31(local_4._1_3_,7);
    ValueDataList_assign(local_140,local_178);
    local_184 = param_4;
    if (param_4 < param_3) {
      FUN_00d83c2d();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_48,"",0);
    pbVar11 = param_3;
    local_4 = CONCAT31(local_4._1_3_,8);
    if (param_4 < param_3) {
      FUN_00d83c2d();
    }
    local_180 = &param_2;
    while( true ) {
      pbStack_17c = pbVar11;
      if ((local_180 == (int *)0x0) || (local_180 != &param_2)) {
        FUN_00d83c2d();
      }
      if (pbVar11 == local_184) break;
      piStack_14c = (int *)0x0;
      piStack_148 = (int *)0x0;
      uStack_144 = 0;
      local_4._0_1_ = 9;
      FUN_012fa910();
      piVar6 = local_180;
      local_4 = CONCAT31(local_4._1_3_,10);
      if (*(char *)(param_1 + 0x148) == '\0') {
        if (local_180 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            piVar6[2] <= pbVar11) {
          FUN_00d83c2d();
        }
        FUN_01300680();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (pbStack_10c,pbVar11,0,0xffffffff);
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            piVar6[2] <= pbVar11) {
          FUN_00d83c2d();
        }
        StdString_appendSubstring();
      }
      else {
        if (local_180 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
            piVar6[2] <= pbVar11) {
          FUN_00d83c2d();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (char ****)((uint)local_60[0] & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_64,pbVar11,0,0xffffffff);
        local_4._0_1_ = 0xb;
        pppppcVar9 = (char *****)local_60[0];
        if (local_4c < 0x10) {
          pppppcVar9 = local_60;
        }
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 _atol((char *)pppppcVar9);
        FUN_01300680();
        pbStack_10c = pbVar7;
        StdString_appendSubstring();
        local_4 = CONCAT31(local_4._1_3_,10);
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (char ****)((uint)local_60[0] & 0xffffff00);
      }
      piVar6 = local_180;
      pbVar12 = pbVar11 + 0x1c;
      local_11c = pbVar12;
      pbStack_118 = pbVar11;
      if (((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           local_180[2] < pbVar12) ||
         (pbVar12 < (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    local_180[1])) {
        FUN_00d83c2d();
      }
      if (piVar6 != &param_2) {
        FUN_00d83c2d();
      }
      if (pbVar12 != local_184) {
        FUN_01241650();
      }
      piVar6 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar6 + 0x188))(local_178);
      pbVar11 = local_170;
      if (*(char *)(param_1 + 0x139) == '\0') {
        puVar16 = auStack_150;
        this = local_178;
      }
      else {
        if (local_170 < local_174) {
          FUN_00d83c2d();
        }
        pbVar12 = local_174;
        if (local_170 < local_174) {
          FUN_00d83c2d();
        }
        if (pbVar12 != pbVar11) {
          iVar10 = (int)local_170 - (int)pbVar11 >> 2;
          _DstSize = iVar10 * 4;
          if (0 < iVar10) {
            _memmove_s(pbVar12,_DstSize,pbVar11,_DstSize);
          }
          local_170 = pbVar12 + _DstSize;
        }
        local_130 = local_138;
        if (local_138 < local_13c) {
          FUN_00d83c2d();
        }
        piVar6 = local_13c;
        if (local_138 < local_13c) {
          FUN_00d83c2d();
        }
        local_168 = local_140;
        while( true ) {
          puVar16 = local_168;
          if ((local_168 == (undefined1 *)0x0) || (local_168 != local_140)) {
            FUN_00d83c2d();
          }
          if (piVar6 == local_130) break;
          if (puVar16 == (undefined1 *)0x0) {
            FUN_00d83c2d();
          }
          if (*(int **)(puVar16 + 8) <= piVar6) {
            FUN_00d83c2d();
          }
          piVar1 = piStack_148;
          if (piStack_148 < piStack_14c) {
            FUN_00d83c2d();
          }
          piVar13 = piStack_14c;
          if (piStack_148 < piStack_14c) {
            FUN_00d83c2d();
          }
          piVar2 = piStack_148;
          piStack_fc = piVar13;
          if (piVar13 != piVar1) {
            do {
              if (*piVar13 == *piVar6) break;
              piVar13 = piVar13 + 1;
            } while (piVar13 != piVar1);
          }
          if (piStack_148 < piStack_14c) {
            FUN_00d83c2d();
          }
          if (&stack0x00000000 == (undefined1 *)0x150) {
            FUN_00d83c2d();
          }
          if (piVar13 == piVar2) {
            if (*(int **)(local_168 + 8) <= piVar6) {
              FUN_00d83c2d();
            }
            if ((local_174 ==
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0
                ) || ((uint)(local_16c - (int)local_174 >> 2) <=
                      (uint)((int)local_170 - (int)local_174 >> 2))) {
              if (local_170 < local_174) {
                FUN_00d83c2d();
              }
              FUN_012619f0();
            }
            else {
              *(int *)local_170 = *piVar6;
              local_170 = local_170 + 4;
            }
          }
          if (*(int **)(local_168 + 8) <= piVar6) {
            FUN_00d83c2d();
          }
          piVar6 = piVar6 + 1;
        }
        puVar16 = local_178;
        this = local_140;
      }
      ValueDataList_assign(this,puVar16);
      local_4._0_1_ = 9;
      FUN_01300cd0();
      local_4 = CONCAT31(local_4._1_3_,8);
      if (piStack_14c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_14c);
      }
      piStack_14c = (int *)0x0;
      piStack_148 = (int *)0x0;
      uStack_144 = 0;
      param_1 = local_188;
      pbVar11 = local_11c;
      if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
          local_180[2] <= pbStack_17c) {
        FUN_00d83c2d();
        param_1 = local_188;
        pbVar11 = local_11c;
      }
    }
    iVar10 = *(int *)(param_1 + 0xf8);
    pvVar4 = (void *)StateMachineState_getGame();
    local_184 = PlayArea_findPlayerElementById(pvVar4,iVar10);
    local_15c = (int *)0x0;
    local_158 = (int *)0x0;
    local_154 = 0;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    StateMachineState_getGame();
    FUN_013630f0();
    local_11c = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                local_158;
    if (local_158 < local_15c) {
      FUN_00d83c2d();
    }
    piVar6 = local_15c;
    pbVar11 = local_184;
    if (local_158 < local_15c) {
      FUN_00d83c2d();
      pbVar11 = local_184;
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x160) {
        FUN_00d83c2d();
      }
      if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)piVar6 ==
          local_11c) break;
      if (pbVar11 != (void *)0x0) {
        Game_copyCommandObjectList(pbVar11,local_64);
        local_4 = CONCAT31(local_4._1_3_,0xd);
        if (&stack0x00000000 == (undefined1 *)0x160) {
          FUN_00d83c2d();
        }
        if (local_158 <= piVar6) {
          FUN_00d83c2d();
        }
        iVar10 = *piVar6;
        pcVar15 = "%s: picks %s.";
        pvVar4 = (void *)StateMachineState_getGame();
        GamePlayer_logFormattedMessage(pvVar4,iVar10,pcVar15);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = (char ****)((uint)local_60[0] & 0xffffff00);
        pbVar11 = local_184;
      }
      if (&stack0x00000000 == (undefined1 *)0x160) {
        FUN_00d83c2d();
      }
      if (local_158 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
    EvaluationEnvironment_logCardList(*(void **)(local_188 + 0xe8),"Cards Matched: ",local_178);
    local_11c = local_170;
    if (local_170 < local_174) {
      FUN_00d83c2d();
    }
    pbVar11 = local_174;
    if (local_170 < local_174) {
      FUN_00d83c2d();
    }
    local_168 = local_178;
    while( true ) {
      puVar16 = local_168;
      iVar10 = local_188;
      if ((local_168 == (undefined1 *)0x0) || (local_168 != local_178)) {
        FUN_00d83c2d();
      }
      if (pbVar11 == local_11c) break;
      EvaluationEnvironment_ctor();
      local_4 = CONCAT31(local_4._1_3_,0xe);
      EvaluationEnvironment_copyFrom(local_f8,*(void **)(iVar10 + 0xe8),sourceEnv);
      FUN_013815c0();
      if (puVar16 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (puVar16 + 8) <= pbVar11) {
        FUN_00d83c2d();
      }
      EvaluationEnvironment_setCurrentTargetFromElement(local_f8,*(void **)pbVar11,sourceEnv);
      StateMachineState_getGame();
      EvaluationEnvironment_setGame();
      FUN_012fa910();
      local_4._0_1_ = 0xf;
      CommandObjectList_evaluateToValueData((void *)(iVar10 + 0x13c),local_f8);
      PlayElementList_collectCommandObjects(local_f8,outVector);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      local_130 = piStack_148;
      if (piStack_148 < piStack_14c) {
        FUN_00d83c2d();
      }
      piVar6 = piStack_14c;
      if (piStack_148 < piStack_14c) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x150) {
          FUN_00d83c2d();
        }
        if (piVar6 == local_130) break;
        if (&stack0x00000000 == (undefined1 *)0x150) {
          FUN_00d83c2d();
        }
        if (piStack_148 <= piVar6) {
          FUN_00d83c2d();
        }
        if ((local_128 == (int *)0x0) ||
           ((uint)(local_120 - (int)local_128 >> 2) <= (uint)((int)local_124 - (int)local_128 >> 2))
           ) {
          if (local_124 < local_128) {
            FUN_00d83c2d();
          }
          FUN_01315a20();
        }
        else {
          *local_124 = *piVar6;
          local_124 = local_124 + 1;
        }
        if (piStack_148 <= piVar6) {
          FUN_00d83c2d();
        }
        piVar6 = piVar6 + 1;
      }
      local_4 = CONCAT31(local_4._1_3_,0xf);
      if (piStack_14c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_14c);
      }
      piStack_14c = (int *)0x0;
      piStack_148 = (int *)0x0;
      uStack_144 = 0;
      local_4._0_1_ = 0xe;
      FUN_01300cd0();
      local_4 = CONCAT31(local_4._1_3_,0xc);
      FUN_01385460();
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (local_168 + 8) <= pbVar11) {
        FUN_00d83c2d();
      }
      pbVar11 = pbVar11 + 4;
    }
    local_4 = CONCAT31(local_4._1_3_,8);
    if (local_15c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_15c);
    }
    local_15c = (int *)0x0;
    local_158 = (int *)0x0;
    local_154 = 0;
    local_4 = CONCAT31(local_4._1_3_,7);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (local_13c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_13c);
    }
    local_13c = (int *)0x0;
    local_138 = (int *)0x0;
    local_134 = 0;
    local_4._0_1_ = 5;
    if (local_174 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_174);
    }
    local_174 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_170 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_16c = 0;
    param_1 = local_188;
  }
  else {
    local_11c = param_4;
    if (param_4 < param_3) {
      FUN_00d83c2d();
    }
    uVar14 = StateMachineState_getGame();
    pvVar4 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    local_130 = (int *)FUN_00d8d382(pvVar4);
    pbVar11 = param_3;
    if (param_4 < param_3) {
      FUN_00d83c2d();
    }
    local_168 = (undefined1 *)&param_2;
    local_164 = pbVar11;
    while( true ) {
      puVar16 = local_168;
      local_164 = pbVar11;
      if ((local_168 == (undefined1 *)0x0) || ((undefined4 *)local_168 != &param_2)) {
        FUN_00d83c2d();
      }
      if (pbVar11 == local_11c) break;
      if (puVar16 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (puVar16 + 8) <= pbVar11) {
        FUN_00d83c2d();
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_48,pbVar11,0,0xffffffff);
      local_4._0_1_ = 0x11;
      EvaluationEnvironment_ctor();
      local_4._0_1_ = 0x12;
      EvaluationEnvironment_copyFrom(local_f8,*(void **)(param_1 + 0xe8),sourceEnv);
      FUN_013815c0();
      EvaluationEnvironment_setCurrentTargetFromElement(local_f8,local_130,sourceEnv);
      StateMachineState_getGame();
      EvaluationEnvironment_setGame();
      if (*(int *)(param_1 + 0x118) == 2) {
        iVar10 = *(int *)(param_1 + 0xf8);
        pvVar4 = (void *)StateMachineState_getGame();
        local_184 = PlayArea_findPlayerElementById(pvVar4,iVar10);
        local_15c = (int *)0x0;
        local_158 = (int *)0x0;
        local_154 = 0;
        local_4 = CONCAT31(local_4._1_3_,0x13);
        StateMachineState_getGame();
        FUN_013630f0();
        local_180 = local_158;
        if (local_158 < local_15c) {
          FUN_00d83c2d();
        }
        piVar6 = local_15c;
        pbVar11 = local_184;
        if (local_158 < local_15c) {
          FUN_00d83c2d();
          pbVar11 = local_184;
        }
        while( true ) {
          if (&stack0x00000000 == (undefined1 *)0x160) {
            FUN_00d83c2d();
          }
          if (piVar6 == local_180) break;
          if (pbVar11 != (void *)0x0) {
            Game_copyCommandObjectList(pbVar11,local_64);
            local_4 = CONCAT31(local_4._1_3_,0x14);
            if (&stack0x00000000 == (undefined1 *)0x160) {
              FUN_00d83c2d();
            }
            if (local_158 <= piVar6) {
              FUN_00d83c2d();
            }
            iVar10 = *piVar6;
            pcVar15 = "%s: picks %s.";
            pvVar4 = (void *)StateMachineState_getGame();
            GamePlayer_logFormattedMessage(pvVar4,iVar10,pcVar15);
            local_4 = CONCAT31(local_4._1_3_,0x13);
            if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
              _free(local_60[0]);
            }
            local_4c = 0xf;
            local_50 = 0;
            local_60[0] = (char ****)((uint)local_60[0] & 0xffffff00);
            pbVar11 = local_184;
          }
          if (&stack0x00000000 == (undefined1 *)0x160) {
            FUN_00d83c2d();
          }
          if (local_158 <= piVar6) {
            FUN_00d83c2d();
          }
          piVar6 = piVar6 + 1;
        }
        local_4._0_1_ = 0x12;
        if (local_15c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_15c);
        }
        local_15c = (int *)0x0;
        local_158 = (int *)0x0;
        local_154 = 0;
      }
      else {
        pppppcVar9 = (char *****)local_44[0];
        if (local_30 < 0x10) {
          pppppcVar9 = local_44;
        }
        _atol((char *)pppppcVar9);
        EvaluationEnvironment_setCustomNumberReturn();
      }
      FUN_012fa910();
      local_4._0_1_ = 0x15;
      CommandObjectList_evaluateToValueData((void *)(local_188 + 0x13c),env);
      PlayElementList_collectCommandObjects(local_f8,local_140);
      local_4 = CONCAT31(local_4._1_3_,0x16);
      local_180 = local_138;
      if (local_138 < local_13c) {
        FUN_00d83c2d();
      }
      piVar6 = local_13c;
      if (local_138 < local_13c) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x140) {
          FUN_00d83c2d();
        }
        if (piVar6 == local_180) break;
        if (&stack0x00000000 == (undefined1 *)0x140) {
          FUN_00d83c2d();
        }
        if (local_138 <= piVar6) {
          FUN_00d83c2d();
        }
        if ((local_128 == (int *)0x0) ||
           ((uint)(local_120 - (int)local_128 >> 2) <= (uint)((int)local_124 - (int)local_128 >> 2))
           ) {
          if (local_124 < local_128) {
            FUN_00d83c2d();
          }
          FUN_01315a20();
        }
        else {
          *local_124 = *piVar6;
          local_124 = local_124 + 1;
        }
        if (local_138 <= piVar6) {
          FUN_00d83c2d();
        }
        piVar6 = piVar6 + 1;
      }
      local_4 = CONCAT31(local_4._1_3_,0x15);
      if (local_13c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_13c);
      }
      local_13c = (int *)0x0;
      local_138 = (int *)0x0;
      local_134 = 0;
      local_4._0_1_ = 0x12;
      FUN_01300cd0();
      local_4._0_1_ = 0x11;
      FUN_01385460();
      local_4._0_1_ = 5;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44[0]);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (local_168 + 8) <= local_164) {
        FUN_00d83c2d();
      }
      pbVar11 = local_164 + 0x1c;
      local_164 = pbVar11;
      param_1 = local_188;
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  GameResult_appendValue();
  uVar8 = StateMachine_setCurrentState();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_128 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_128 = (int *)0x0;
  local_124 = (int *)0x0;
  local_120 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_14 < 0x10) {
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
    local_4 = 0xffffffff;
    if (param_3 ==
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      ExceptionList = local_c;
      return uVar8;
    }
    StdStringRange_destroy(param_3,param_4);
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28[0]);
}

