// addr: 0x0147cef0
// name: AlternateMultiActionState_nextState
// subsystem: common/common/rules
// source (binary assert): common/common/state/AlternateMultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0147cfc9) */
/* WARNING: Removing unreachable block (ram,0x0147d598) */
/* WARNING: Removing unreachable block (ram,0x0147d191) */
/* WARNING: Removing unreachable block (ram,0x0147d1cf) */

undefined4 __fastcall AlternateMultiActionState_nextState(int *param_1)

{
  rsize_t rVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  int *piVar5;
  bool bVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 uVar14;
  char *pcVar15;
  int *local_154;
  int *local_150;
  undefined1 local_14c [4];
  void *local_148;
  undefined4 local_144;
  undefined4 local_140;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_130 [4];
  void *pvStack_12c;
  undefined4 uStack_11c;
  uint uStack_118;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_114 [4];
  void *pvStack_110;
  undefined4 uStack_100;
  uint uStack_fc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_f8 [4];
  void *local_f4;
  undefined4 local_e4;
  uint local_e0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_dc [4];
  void *local_d8;
  undefined4 local_c8;
  uint local_c4;
  undefined1 auStack_c0 [4];
  void *pvStack_bc;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined1 local_a4 [4];
  void *local_a0;
  undefined4 local_90;
  uint local_8c;
  undefined1 auStack_88 [4];
  void *pvStack_84;
  undefined4 uStack_74;
  uint uStack_70;
  undefined1 local_6c [4];
  void *local_68;
  undefined4 local_58;
  uint local_54;
  undefined1 auStack_50 [4];
  void *pvStack_4c;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Computes the next state for AlternateMultiActionState, handling target
                       selection, no-valid-target cases, draw-command text, and command-object
                       creation. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a04fb;
  local_14 = ExceptionList;
  pvVar7 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe98);
  ExceptionList = &local_14;
  pcVar15 = "AlternateMultiActionState::nextState";
  pvVar8 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar8,pcVar15,pvVar7);
  iVar9 = param_1[0x49];
  if (iVar9 == 1) {
    pcVar15 = "AlternateMultiActionState::nextState: GetTargetAlternateMultiActionState";
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar15,pvVar7);
    PointerVector_clear(param_1 + 0x4c);
    FUN_00420fb6();
    MessageText_ctor();
    local_c = 0;
    if (param_1[0x47] == 2) {
      local_154 = (int *)FUN_0123c340();
      FUN_0042c155(&local_154);
    }
    else {
      FUN_013815b0(param_1[0x3e]);
      uVar14 = StateMachineState_getGame
                         (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                          &Card::RTTI_Type_Descriptor,0);
      pvVar7 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      pvVar7 = (void *)FUN_00d8d382(pvVar7);
      set_play_element_id_field((void *)param_1[0x3a],pvVar7);
      EvaluationEnvironment_setTarget1Return(1);
      EvaluationEnvironment_setTarget2Return(0);
      FUN_01381330(param_1 + 0x46);
      (**(code **)(*param_1 + 0x128))();
      if ((param_1[0x4d] == 0) || (param_1[0x4e] - param_1[0x4d] >> 2 == 0)) goto LAB_0147da4e;
    }
    if ((param_1[0x3f] == 1) || (param_1[0x47] == 2)) {
      iVar9 = MessageText_formatWithValueData(local_a4);
      local_c._0_1_ = 1;
      if (*(uint *)(iVar9 + 0x18) < 0x10) {
        iVar9 = iVar9 + 4;
      }
      else {
        iVar9 = *(int *)(iVar9 + 4);
      }
      uVar11 = GamePlayer_getPlayerId(iVar9);
      pcVar15 = "DRAWCOMMAND PLAYER: %d, TEXT: %s";
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar15,uVar11);
      local_c._0_1_ = 0;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a0);
      }
      pvVar7 = (void *)0x0;
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = (void *)((uint)local_a0 & 0xffffff00);
      local_154 = Mem_Alloc(0x13c);
      local_c._0_1_ = 2;
      if (local_154 != (int *)0x0) {
        pvVar7 = (void *)GetTargetState_ctor(param_1[2],param_1 + 0x50,local_14c);
      }
      local_c._0_1_ = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_dc,"draw");
      local_c._0_1_ = 3;
      pvVar8 = (void *)FUN_0145d850(local_6c,local_dc);
      local_c._0_1_ = 4;
      TcgClient_setFieldA8(pvVar7,pvVar8);
      local_c = CONCAT31(local_c._1_3_,3);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = (void *)((uint)local_68 & 0xffffff00);
      local_c._0_1_ = 0;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8 = (void *)((uint)local_d8 & 0xffffff00);
    }
    else {
      local_154 = Mem_Alloc(0x13c);
      local_c._0_1_ = 5;
      if (local_154 == (int *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_0141ed60(param_1[2],param_1 + 0x4c,local_14c);
      }
    }
    local_c._0_1_ = 0;
    StateMachineState_setButtonPressed((char)param_1[0x45]);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_f8,"done");
    local_c._0_1_ = 6;
    uVar11 = FUN_0145d850(local_34,local_f8);
    local_c._0_1_ = 7;
    StateMachineState_setMessageText(uVar11);
    local_c = CONCAT31(local_c._1_3_,6);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = (void *)((uint)local_30 & 0xffffff00);
    local_c = (uint)local_c._1_3_ << 8;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      _free(local_f4);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = (void *)((uint)local_f4 & 0xffffff00);
  }
  else {
    if (iVar9 == 2) {
      pcVar15 = "AlternateMultiActionState::nextState: CreateCommandObjectAlternateMultiActionState"
      ;
      pvVar8 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar8,pcVar15,pvVar7);
      if (param_1[0x3f] != 6) {
        piVar12 = (int *)param_1[0x4d];
        if ((int *)param_1[0x4e] < piVar12) {
          FUN_00d83c2d();
        }
        bVar6 = false;
        local_154 = param_1 + 0x4c;
        while( true ) {
          piVar5 = (int *)param_1[0x4e];
          local_150 = piVar12;
          if (piVar5 < (int *)param_1[0x4d]) {
            FUN_00d83c2d();
          }
          if (piVar12 == piVar5) break;
          if ((int *)param_1[0x4e] <= piVar12) {
            FUN_00d83c2d();
          }
          if (*piVar12 != 0) {
            if (param_1[0x3f] == 4) {
              if (param_1[0x4b] != 0) {
                FUN_01258670();
                iVar9 = PlayElement_getId();
LAB_0147d5f9:
                iVar10 = PlayElement_getId();
                if (iVar9 == iVar10) {
                  bVar6 = true;
                }
              }
            }
            else if (param_1[0x4a] != 0) {
              FUN_01258670();
              iVar9 = PlayElement_getId();
              goto LAB_0147d5f9;
            }
          }
          if ((int *)param_1[0x4e] <= piVar12) {
            FUN_00d83c2d();
          }
          piVar12 = piVar12 + 1;
        }
        if (!bVar6) {
          piVar12 = (int *)param_1[0x51];
          if ((int *)param_1[0x52] < piVar12) {
            FUN_00d83c2d();
          }
          while( true ) {
            piVar5 = (int *)param_1[0x52];
            if (piVar5 < (int *)param_1[0x51]) {
              FUN_00d83c2d();
            }
            if (param_1 == (int *)0xfffffec0) {
              FUN_00d83c2d();
            }
            if (piVar12 == piVar5) break;
            if (param_1[0x3f] == 4) {
              if (param_1 == (int *)0xfffffec0) {
                FUN_00d83c2d();
              }
              if ((int *)param_1[0x52] <= piVar12) {
                FUN_00d83c2d();
              }
            }
            else {
              if (param_1 == (int *)0xfffffec0) {
                FUN_00d83c2d();
              }
              if ((int *)param_1[0x52] <= piVar12) {
                FUN_00d83c2d();
              }
            }
            iVar9 = PlayElement_getId();
            if (*piVar12 == iVar9) {
              bVar6 = true;
            }
            if ((int *)param_1[0x52] <= piVar12) {
              FUN_00d83c2d();
            }
            piVar12 = piVar12 + 1;
          }
          if (!bVar6) {
            param_1[0x49] = (uint)(param_1[0x3f] == 4) * 4 + 1;
            uVar11 = (**(code **)(*param_1 + 0x124))();
            ExceptionList = local_14;
            return uVar11;
          }
        }
      }
      uVar13 = param_1[0x52];
      if (uVar13 < (uint)param_1[0x51]) {
        FUN_00d83c2d();
      }
      uVar2 = param_1[0x51];
      if ((uint)param_1[0x52] < uVar2) {
        FUN_00d83c2d();
      }
      FUN_0041f5e6(&local_154,param_1 + 0x50,uVar2,param_1 + 0x50,uVar13);
      pvVar8 = (void *)param_1[0x4e];
      piVar12 = param_1 + 0x4c;
      if (pvVar8 < (void *)param_1[0x4d]) {
        FUN_00d83c2d();
      }
      pvVar4 = (void *)param_1[0x4d];
      if ((void *)param_1[0x4e] < pvVar4) {
        FUN_00d83c2d();
      }
      PointerVector_eraseRangeAssignIterator
                (piVar12,&local_154,piVar12,pvVar4,piVar12,pvVar8,pvVar7);
      FUN_013815b0(param_1[0x3e]);
      uVar14 = StateMachineState_getGame
                         (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                          &Card::RTTI_Type_Descriptor,0);
      pvVar8 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      pvVar8 = (void *)FUN_00d8d382(pvVar8);
      set_play_element_id_field((void *)param_1[0x3a],pvVar8);
      if ((void *)param_1[0x4a] != (void *)0x0) {
        EvaluationEnvironment_setCurrentTargetFromElement
                  ((void *)param_1[0x3a],(void *)param_1[0x4a],pvVar7);
      }
      EvaluationEnvironment_setTarget1Return(0);
      EvaluationEnvironment_setTarget2Return(0);
      if (param_1[0x4b] != 0) {
        EvaluationEnvironment_setPlayElementId(param_1[0x4b]);
      }
      iVar9 = FUN_00d8d382(param_1[0x4a],0,&PlayElement::RTTI_Type_Descriptor,
                           &Card::RTTI_Type_Descriptor,0);
      local_148 = (void *)0x0;
      local_144 = 0;
      local_140 = 0;
      local_c = 0x10;
      (**(code **)(*param_1 + 300))(local_14c,1,param_1[0x3a]);
      if (iVar9 != 0) {
        FUN_01387840(iVar9);
      }
      iVar9 = FUN_00d8d382(param_1[0x4b],0,&PlayElement::RTTI_Type_Descriptor,
                           &Card::RTTI_Type_Descriptor,0);
      if (iVar9 != 0) {
        FUN_01387840(iVar9);
      }
      param_1[0x44] = param_1[0x44] + -1;
      param_1[0x49] = 4;
      uVar11 = (**(code **)(*(int *)param_1[2] + 0x40))();
      GameResult_appendValue(local_14c);
      uVar11 = StateMachine_setCurrentState(uVar11);
      local_c = 0xffffffff;
      if (local_148 == (void *)0x0) {
        ExceptionList = local_14;
        return uVar11;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_148);
    }
    if (iVar9 != 5) {
      FUN_012f5a60("false","..\\common\\common\\state\\AlternateMultiActionState.cpp",0x152);
      ExceptionList = local_14;
      return 1;
    }
    pcVar15 = "AlternateMultiActionState::nextState: GetTarget2AlternateMultiActionState";
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar15,pvVar7);
    uVar13 = param_1[0x4d];
    if ((uint)param_1[0x4e] < uVar13) {
      FUN_00d83c2d();
    }
    bVar6 = false;
    while( true ) {
      uVar2 = param_1[0x4e];
      if (uVar2 < (uint)param_1[0x4d]) {
        FUN_00d83c2d();
      }
      if (uVar13 == uVar2) break;
      if ((uint)param_1[0x4e] <= uVar13) {
        FUN_00d83c2d();
      }
      iVar9 = PlayElement_getId();
      iVar10 = PlayElement_getId();
      if (iVar10 == iVar9) {
        bVar6 = true;
      }
      if ((uint)param_1[0x4e] <= uVar13) {
        FUN_00d83c2d();
      }
      uVar13 = uVar13 + 4;
    }
    if (!bVar6) {
      piVar12 = (int *)param_1[0x51];
      if ((int *)param_1[0x52] < piVar12) {
        FUN_00d83c2d();
      }
      while( true ) {
        local_154 = (int *)param_1[0x52];
        if (local_154 < (int *)param_1[0x51]) {
          FUN_00d83c2d();
        }
        if (param_1 == (int *)0xfffffec0) {
          FUN_00d83c2d();
        }
        if (piVar12 == local_154) break;
        if (param_1 == (int *)0xfffffec0) {
          FUN_00d83c2d();
        }
        if ((int *)param_1[0x52] <= piVar12) {
          FUN_00d83c2d();
        }
        iVar9 = PlayElement_getId();
        if (*piVar12 == iVar9) {
          bVar6 = true;
        }
        if ((int *)param_1[0x52] <= piVar12) {
          FUN_00d83c2d();
        }
        piVar12 = piVar12 + 1;
      }
      if (!bVar6) {
        pcVar3 = *(code **)(*param_1 + 0x124);
        param_1[0x49] = 1;
        uVar11 = (*pcVar3)();
        ExceptionList = local_14;
        return uVar11;
      }
    }
    pvVar8 = (void *)param_1[0x52];
    if (pvVar8 < (void *)param_1[0x51]) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)param_1[0x51];
    if ((void *)param_1[0x52] < pvVar4) {
      FUN_00d83c2d();
    }
    if (pvVar4 != pvVar8) {
      iVar9 = param_1[0x52] - (int)pvVar8 >> 2;
      rVar1 = iVar9 * 4;
      if (0 < iVar9) {
        _memmove_s(pvVar4,rVar1,pvVar8,rVar1);
      }
      param_1[0x52] = (int)(rVar1 + (int)pvVar4);
    }
    pvVar8 = (void *)param_1[0x4e];
    if (pvVar8 < (void *)param_1[0x4d]) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)param_1[0x4d];
    if ((void *)param_1[0x4e] < pvVar4) {
      FUN_00d83c2d();
    }
    if (pvVar4 != pvVar8) {
      iVar9 = param_1[0x4e] - (int)pvVar8 >> 2;
      rVar1 = iVar9 * 4;
      local_154 = (int *)(rVar1 + (int)pvVar4);
      if (0 < iVar9) {
        _memmove_s(pvVar4,rVar1,pvVar8,rVar1);
      }
      param_1[0x4e] = (int)local_154;
    }
    MessageText_ctor();
    local_c = 8;
    if (param_1[0x47] == 2) {
      local_c = 8;
      local_154 = (int *)param_1[0x48];
      FUN_0042c155(&local_154);
    }
    else {
      FUN_013815b0(param_1[0x3e]);
      uVar14 = StateMachineState_getGame
                         (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                          &Card::RTTI_Type_Descriptor,0);
      pvVar8 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      pvVar8 = (void *)FUN_00d8d382(pvVar8);
      set_play_element_id_field((void *)param_1[0x3a],pvVar8);
      EvaluationEnvironment_setTarget1Return(0);
      EvaluationEnvironment_setTarget2Return(1);
      EvaluationEnvironment_setCurrentTargetFromElement
                ((void *)param_1[0x3a],(void *)param_1[0x4a],pvVar7);
      (**(code **)(*param_1 + 0x128))();
      if ((param_1[0x4d] == 0) || (param_1[0x4e] - param_1[0x4d] >> 2 == 0)) {
LAB_0147da4e:
        uVar11 = StateMachineState_getGame("No Valid targets in mulitaction state");
        Game_logGeneralFormatted(uVar11);
        param_1[0x49] = 3;
        local_c = 0xffffffff;
        MessageText_dtor();
        ExceptionList = local_14;
        return 1;
      }
    }
    if ((param_1[0x3f] == 1) || (param_1[0x47] == 2)) {
      iVar9 = MessageText_formatWithValueData(auStack_50);
      local_c._0_1_ = 9;
      if (*(uint *)(iVar9 + 0x18) < 0x10) {
        iVar9 = iVar9 + 4;
      }
      else {
        iVar9 = *(int *)(iVar9 + 4);
      }
      uVar11 = GamePlayer_getPlayerId(iVar9);
      pcVar15 = "DRAWCOMMAND PLAYER: %d, TEXT: %s";
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar15,uVar11);
      local_c._0_1_ = 8;
      if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_4c);
      }
      pvVar7 = (void *)0x0;
      uStack_38 = 0xf;
      uStack_3c = 0;
      pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
      local_154 = Mem_Alloc(0x13c);
      local_c._0_1_ = 10;
      if (local_154 != (int *)0x0) {
        pvVar7 = (void *)GetTargetState_ctor(param_1[2],param_1 + 0x50,local_14c);
      }
      local_c._0_1_ = 8;
      uStack_118 = 0xf;
      uStack_11c = 0;
      pvStack_12c = (void *)((uint)pvStack_12c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_130,"draw",4);
      local_c._0_1_ = 0xb;
      pvVar8 = (void *)FUN_0145d850(auStack_88,abStack_130);
      local_c._0_1_ = 0xc;
      TcgClient_setFieldA8(pvVar7,pvVar8);
      local_c = CONCAT31(local_c._1_3_,0xb);
      if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_84);
      }
      uStack_70 = 0xf;
      uStack_74 = 0;
      pvStack_84 = (void *)((uint)pvStack_84 & 0xffffff00);
      local_c._0_1_ = 8;
      if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_12c);
      }
      uStack_11c = 0;
      uStack_118 = 0xf;
      pvStack_12c = (void *)((uint)pvStack_12c & 0xffffff00);
    }
    else {
      local_154 = Mem_Alloc(0x13c);
      local_c._0_1_ = 0xd;
      if (local_154 == (int *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_0141ed60(param_1[2],param_1 + 0x4c,local_14c);
      }
    }
    local_c._0_1_ = 8;
    StateMachineState_setButtonPressed((char)param_1[0x45]);
    uStack_fc = 0xf;
    uStack_100 = 0;
    pvStack_110 = (void *)((uint)pvStack_110 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_114,"done",4);
    local_c._0_1_ = 0xe;
    uVar11 = FUN_0145d850(auStack_c0,abStack_114);
    local_c._0_1_ = 0xf;
    StateMachineState_setMessageText(uVar11);
    local_c = CONCAT31(local_c._1_3_,0xe);
    if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_bc);
    }
    uStack_a8 = 0xf;
    uStack_ac = 0;
    pvStack_bc = (void *)((uint)pvStack_bc & 0xffffff00);
    local_c = CONCAT31(local_c._1_3_,8);
    if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_110);
    }
    uStack_fc = 0xf;
    uStack_100 = 0;
    pvStack_110 = (void *)((uint)pvStack_110 & 0xffffff00);
  }
  uVar11 = StateMachine_setCurrentState(pvVar7);
  local_c = 0xffffffff;
  MessageText_dtor();
  ExceptionList = local_14;
  return uVar11;
}

