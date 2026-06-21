// addr: 0x0146cc90
// name: MultiActionState_nextState
// subsystem: common/common/rules
// source (binary assert): common/common/state/MultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0146d5b2) */
/* WARNING: Removing unreachable block (ram,0x0146d5f1) */

undefined4 __fastcall MultiActionState_nextState(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  void *first;
  int *piVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  void *env;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 auStack_514 [7];
  char local_50d;
  int *local_50c;
  int *local_508;
  int *local_504;
  undefined1 auStack_500 [4];
  undefined1 local_4fc [4];
  void *pvStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4e0 [4];
  void *local_4dc;
  undefined4 local_4cc;
  uint local_4c8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c4 [4];
  void *local_4c0;
  undefined4 local_4b0;
  uint local_4ac;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4a8 [4];
  void *local_4a4;
  undefined4 local_494;
  uint local_490;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48c [4];
  void *local_488;
  undefined4 local_478;
  uint local_474;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_470 [4];
  void *local_46c;
  undefined4 local_45c;
  uint local_458;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_454 [4];
  void *local_450;
  undefined4 local_440;
  uint local_43c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_438 [4];
  void *local_434;
  undefined4 local_424;
  uint local_420;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_41c [4];
  void *local_418;
  undefined4 local_408;
  uint local_404;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_400 [4];
  void *local_3fc;
  undefined4 local_3ec;
  uint local_3e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_3e4 [4];
  void *local_3e0;
  undefined4 local_3d0;
  uint local_3cc;
  undefined1 local_3c8 [4];
  void *local_3c4;
  undefined4 local_3b4;
  uint local_3b0;
  undefined1 local_3ac [4];
  void *local_3a8;
  undefined4 local_398;
  uint local_394;
  undefined1 local_390 [4];
  void *local_38c;
  undefined4 local_37c;
  uint local_378;
  undefined1 local_374 [4];
  void *local_370;
  undefined4 local_360;
  uint local_35c;
  undefined1 local_358 [4];
  void *local_354;
  undefined4 local_344;
  uint local_340;
  undefined1 local_33c [4];
  void *local_338;
  undefined4 local_328;
  uint local_324;
  undefined1 local_320 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_318 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2fc [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2e4 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c4 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2ac [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28c [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_274 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_254 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_238 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_21c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_200 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1e4 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c8 [28];
  undefined1 local_1ac [28];
  undefined1 local_190 [28];
  undefined1 local_174 [28];
  undefined1 local_158 [28];
  undefined1 local_13c [28];
  undefined1 local_120 [24];
  undefined1 auStack_108 [32];
  char local_e8 [204];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Computes the next state for MultiActionState, including target selection,
                       auto-select for a single valid target, no-valid-target handling, and creation
                       of command objects. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0169eb1b;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)auStack_514;
  pvVar6 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffae0);
  ExceptionList = &local_14;
  pcVar13 = "MultiActionState::nextState";
  pvVar7 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar7,pcVar13,pvVar6);
  pvVar7 = (void *)StateMachineState_getGame();
  bVar4 = Game_getPendingFlag_131(pvVar7);
  if (bVar4) {
    uVar8 = StateMachineState_resumePreviousWaitState();
    ExceptionList = local_14;
    return uVar8;
  }
  iVar9 = param_1[0x49];
  if (iVar9 == 1) {
    pcVar13 = "MultiActionState::nextState: GetTargetMultiActionState";
    pvVar7 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar7,pcVar13,pvVar6);
    if (((char)param_1[0x5b] == '\x01') && (param_1[0x5a] != 0)) {
      FUN_012fa910();
      local_c = 0;
      CommandObjectList_evaluateToValueData((void *)param_1[0x5a],(void *)param_1[0x3a]);
      if ((local_504 == (int *)0x1) && (cVar5 = FUN_0123c370(), cVar5 == '\0')) {
        param_1[0x44] = 1;
      }
      local_c = 0xffffffff;
      FUN_01300cd0();
    }
    if (param_1[0x44] != 0) {
      piVar11 = param_1 + 0x4c;
      PointerVector_clear(piVar11);
      FUN_00420fb6();
      MessageText_copy_ctor(local_4fc,param_1 + 0x15);
      local_c = 1;
      local_e8[0] = '\0';
      _memset(local_e8 + 1,0,199);
      _sprintf(local_e8,"%d",param_1[0x44]);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c4,local_e8);
      local_c._0_1_ = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_238,"%d");
      local_c._0_1_ = 3;
      FUN_01402480(local_238,local_2c4);
      local_c._0_1_ = 2;
      FUN_0041f1d7();
      local_c._0_1_ = 1;
      FUN_0041f1d7();
      MessageText_formatWithValueData(local_1ac);
      local_c._0_1_ = 4;
      iVar9 = FUN_012b1830("#numselectedkey#",0);
      local_c._0_1_ = 1;
      FUN_0041f1d7();
      if (iVar9 != -1) {
        _sprintf(local_e8,"%d",param_1[0x43] - param_1[0x44]);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28c,local_e8);
        local_c._0_1_ = 5;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_200,"#numselectedkey#");
        local_c._0_1_ = 6;
        FUN_01402480(local_200,local_28c);
        local_c._0_1_ = 5;
        FUN_0041f1d7();
        local_c._0_1_ = 1;
        FUN_0041f1d7();
      }
      MessageText_formatWithValueData(local_158);
      local_c._0_1_ = 7;
      iVar9 = FUN_012b1830("#customnumberkey#",0);
      local_c._0_1_ = 1;
      FUN_0041f1d7();
      if (iVar9 != -1) {
        uVar8 = Rules_getIntegerKey16();
        _sprintf(local_e8,"%d",uVar8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_254,local_e8);
        local_c._0_1_ = 8;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_1c8,"#customnumberkey#");
        local_c._0_1_ = 9;
        FUN_01402480(local_1c8,local_254);
        local_c._0_1_ = 8;
        FUN_0041f1d7();
        local_c._0_1_ = 1;
        FUN_0041f1d7();
      }
      MessageText_formatWithValueData(local_174);
      local_c._0_1_ = 10;
      iVar9 = FUN_012b1830("#customnumber2key#",0);
      local_c._0_1_ = 1;
      FUN_0041f1d7();
      if (iVar9 != -1) {
        uVar8 = Rules_getIntegerKey1B();
        _sprintf(local_e8,"%d",uVar8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_21c,local_e8);
        local_c._0_1_ = 0xb;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_318,"#customnumber2key#");
        local_c._0_1_ = 0xc;
        FUN_01402480(local_318,local_21c);
        local_c._0_1_ = 0xb;
        FUN_0041f1d7();
        local_c._0_1_ = 1;
        FUN_0041f1d7();
      }
      if (param_1[0x47] == 2) {
        local_50c = (int *)FUN_0123c340();
        FUN_0042c155(&local_50c);
      }
      else {
        if (param_1[0x47] != 5) {
          FUN_012f5a60("mTargets.getType() == kExpressionTreeTypeID",
                       "..\\common\\common\\state\\MultiActionState.cpp",0x224);
        }
        FUN_013815b0(param_1[0x3e]);
        uVar12 = StateMachineState_getGame
                           (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
        pvVar7 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
        pvVar7 = (void *)FUN_00d8d382(pvVar7);
        set_play_element_id_field((void *)param_1[0x3a],pvVar7);
        EvaluationEnvironment_setTarget1Return(1);
        EvaluationEnvironment_setTarget2Return(0);
        EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],(void *)0x0,pvVar6);
        EvaluationEnvironment_setPlayElementId(0);
        FUN_01381330(param_1 + 0x46);
        FUN_012fb470(piVar11,param_1[0x3a]);
        (**(code **)(*param_1 + 0x128))();
        iVar9 = unknown_intVector_size(piVar11);
        if (iVar9 == 0) goto LAB_0146e5c2;
      }
      if (((param_1[0x4d] == 0) || (param_1[0x4e] - param_1[0x4d] >> 2 != 1)) ||
         ((char)param_1[0x5d] == '\0')) {
        if ((param_1[0x3f] == 1) || (param_1[0x47] == 2)) {
          iVar9 = MessageText_formatWithValueData(local_190);
          local_c._0_1_ = 0xd;
          if (*(uint *)(iVar9 + 0x18) < 0x10) {
            iVar9 = iVar9 + 4;
          }
          else {
            iVar9 = *(int *)(iVar9 + 4);
          }
          uVar8 = GamePlayer_getPlayerId(iVar9);
          pcVar13 = "DRAWCOMMAND PLAYER: %d, TEXT: %s";
          pvVar6 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar6,pcVar13,uVar8);
          local_c._0_1_ = 1;
          FUN_0041f1d7();
          local_508 = Mem_Alloc(0x13c);
          local_c._0_1_ = 0xe;
          if (local_508 == (int *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)GetTargetState_ctor(param_1[2],param_1 + 0x50,local_4fc);
          }
          local_c._0_1_ = 1;
          local_50c = piVar11;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1e4,"draw");
          local_c._0_1_ = 0xf;
          pvVar6 = (void *)FUN_0145d850(local_120,local_1e4);
          local_c._0_1_ = 0x10;
          TcgClient_setFieldA8(piVar11,pvVar6);
          local_c._0_1_ = 0xf;
          FUN_0041f1d7();
          local_c._0_1_ = 1;
          FUN_0041f1d7();
        }
        else {
          local_508 = Mem_Alloc(0x13c);
          local_c._0_1_ = 0x11;
          if (local_508 == (int *)0x0) {
            local_c._0_1_ = 1;
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)FUN_0141ed60(param_1[2],piVar11,local_4fc);
            local_c._0_1_ = 1;
          }
        }
        StateMachineState_setButtonPressed((char)param_1[0x45]);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2fc,"done");
        local_c._0_1_ = 0x12;
        uVar8 = FUN_0145d850(local_13c,local_2fc);
        local_c._0_1_ = 0x13;
        StateMachineState_setMessageText(uVar8);
        local_c._0_1_ = 0x12;
        FUN_0041f1d7();
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_0041f1d7();
        (**(code **)(*piVar11 + 0x100))(param_1 + 0x1c);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_2e4,"done");
        puStack_10._0_1_ = 0x14;
        FUN_0145d850(auStack_108,abStack_2e4);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x16);
        FUN_0041f1d7();
        bVar4 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
        if (bVar4) {
          FUN_00f972e0(&DAT_0176cfd0);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_274,"0");
        puStack_10._0_1_ = 0x17;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_2ac,"");
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
        (**(code **)(*param_1 + 0x8c))
                  (0,abStack_2ac,auStack_500,auStack_108,abStack_274,param_1 + 0x1c);
        local_c._0_1_ = 0x17;
        FUN_0041f1d7();
        local_c._0_1_ = 0x16;
        FUN_0041f1d7();
        uVar8 = StateMachine_setCurrentState(piVar11);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_0041f1d7();
      }
      else {
        uVar8 = StateMachineState_getGame("1 Valid target, auto selecting.");
        Game_logGeneralFormatted(uVar8);
        FUN_01258ec0(local_320);
        piVar11 = (int *)FUN_01258670();
        param_1[0x4a] = *piVar11;
        pcVar1 = *(code **)(*param_1 + 0x124);
        param_1[0x49] = 2;
        uVar8 = (*pcVar1)();
      }
      goto LAB_0146e8fd;
    }
  }
  else {
    if (iVar9 == 2) {
      pcVar13 = "MultiActionState::nextState: CreateCommandObjectMultiActionState";
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar13,pvVar6);
      if (param_1[0x3f] == 6) {
        if (param_1[0x44] < 1) {
          ExceptionList = local_14;
          return 1;
        }
        StateMachineState_getGame();
        Game_incrementActionEvaluationCount();
      }
      else {
        if (param_1[0x3f] != 4) {
          FUN_00420fb6();
          piVar11 = param_1 + 0x4c;
          PointerVector_clear(piVar11);
          if (param_1[0x47] == 2) {
            local_50c = (int *)FUN_0123c340();
            FUN_0042c155(&local_50c);
          }
          else {
            if (param_1[0x47] != 5) {
              FUN_012f5a60("mTargets.getType() == kExpressionTreeTypeID",
                           "..\\common\\common\\state\\MultiActionState.cpp",0x2d9);
            }
            FUN_013815b0(param_1[0x3e]);
            uVar12 = StateMachineState_getGame
                               (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
            pvVar7 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
            pvVar7 = (void *)FUN_00d8d382(pvVar7);
            set_play_element_id_field((void *)param_1[0x3a],pvVar7);
            iVar9 = param_1[0x3f];
            if (iVar9 != 4) {
              EvaluationEnvironment_setTarget1Return(1);
            }
            else {
              EvaluationEnvironment_setTarget1Return(0);
            }
            EvaluationEnvironment_setTarget2Return(iVar9 == 4);
            EvaluationEnvironment_setCurrentTargetFromElement
                      ((void *)param_1[0x3a],(void *)0x0,pvVar6);
            EvaluationEnvironment_setPlayElementId(0);
            FUN_01381330(param_1 + 0x46);
            FUN_012fb470(piVar11,param_1[0x3a]);
            (**(code **)(*param_1 + 0x128))();
            iVar9 = unknown_intVector_size(piVar11);
            if (iVar9 == 0) {
              uVar8 = StateMachineState_getGame("No Valid targets in mulitaction state");
              Game_logGeneralFormatted(uVar8);
              param_1[0x49] = 3;
              ExceptionList = local_14;
              return 1;
            }
          }
        }
        FUN_01258ec0(&local_508);
        local_50d = '\0';
        while( true ) {
          piVar3 = local_504;
          piVar11 = (int *)param_1[0x4e];
          if (piVar11 < (int *)param_1[0x4d]) {
            FUN_00d83c2d();
          }
          if ((local_508 == (int *)0x0) || (local_508 != param_1 + 0x4c)) {
            FUN_00d83c2d();
          }
          if (piVar3 == piVar11) break;
          if (local_508 == (int *)0x0) {
            FUN_00d83c2d();
          }
          if ((int *)local_508[2] <= piVar3) {
            FUN_00d83c2d();
          }
          if (*piVar3 != 0) {
            if (param_1[0x3f] == 4) {
              if (param_1[0x4b] != 0) {
                FUN_01258670();
                iVar9 = PlayElement_getId();
                iVar10 = PlayElement_getId();
                bVar4 = iVar9 == iVar10;
LAB_0146dc36:
                if (bVar4) {
                  local_50d = '\x01';
                }
              }
            }
            else if (param_1[0x4a] != 0) {
              FUN_01258670();
              local_50c = (int *)PlayElement_getId();
              piVar11 = (int *)PlayElement_getId();
              bVar4 = piVar11 == local_50c;
              goto LAB_0146dc36;
            }
          }
          if ((int *)local_508[2] <= piVar3) {
            FUN_00d83c2d();
          }
          local_504 = piVar3 + 1;
        }
        if (local_50d == '\0') {
          piVar11 = (int *)param_1[0x51];
          if ((int *)param_1[0x52] < piVar11) {
            FUN_00d83c2d();
          }
          while( true ) {
            local_50c = (int *)param_1[0x52];
            if (local_50c < (int *)param_1[0x51]) {
              FUN_00d83c2d();
            }
            if (param_1 == (int *)0xfffffec0) {
              FUN_00d83c2d();
            }
            if (piVar11 == local_50c) break;
            if (param_1[0x3f] == 4) {
              if (param_1[0x4b] != 0) {
                if (param_1 == (int *)0xfffffec0) {
                  FUN_00d83c2d();
                }
                if ((int *)param_1[0x52] <= piVar11) {
                  FUN_00d83c2d();
                }
LAB_0146dcff:
                iVar9 = PlayElement_getId();
                if (*piVar11 == iVar9) {
                  local_50d = '\x01';
                }
              }
            }
            else if (param_1[0x4a] != 0) {
              if (param_1 == (int *)0xfffffec0) {
                FUN_00d83c2d();
              }
              if ((int *)param_1[0x52] <= piVar11) {
                FUN_00d83c2d();
              }
              goto LAB_0146dcff;
            }
            if (param_1 == (int *)0xfffffec0) {
              FUN_00d83c2d();
            }
            if ((int *)param_1[0x52] <= piVar11) {
              FUN_00d83c2d();
            }
            piVar11 = piVar11 + 1;
          }
          if (local_50d == '\0') {
            param_1[0x49] = (uint)(param_1[0x3f] == 4) * 4 + 1;
            uVar8 = (**(code **)(*param_1 + 0x124))();
            ExceptionList = local_14;
            return uVar8;
          }
        }
      }
      uVar2 = param_1[0x52];
      if (uVar2 < (uint)param_1[0x51]) {
        FUN_00d83c2d();
      }
      local_50c = (int *)param_1[0x51];
      if ((int *)param_1[0x52] < local_50c) {
        FUN_00d83c2d();
      }
      FUN_0041f5e6(&local_508,param_1 + 0x50,local_50c,param_1 + 0x50,uVar2);
      pvVar7 = (void *)param_1[0x4e];
      piVar11 = param_1 + 0x4c;
      if (pvVar7 < (void *)param_1[0x4d]) {
        FUN_00d83c2d();
      }
      local_50c = (int *)param_1[0x4d];
      if ((int *)param_1[0x4e] < local_50c) {
        FUN_00d83c2d();
      }
      PointerVector_eraseRangeAssignIterator
                (piVar11,&local_508,piVar11,local_50c,piVar11,pvVar7,pvVar6);
      FUN_013815b0(param_1[0x3e]);
      uVar12 = StateMachineState_getGame
                         (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                          &Card::RTTI_Type_Descriptor,0);
      pvVar7 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      pvVar7 = (void *)FUN_00d8d382(pvVar7);
      set_play_element_id_field((void *)param_1[0x3a],pvVar7);
      if (param_1[0x4a] != 0) {
        piVar11 = (int *)FUN_00d8d382(param_1[0x4a],0,&PlayElement::RTTI_Type_Descriptor,
                                      &Card::RTTI_Type_Descriptor,0);
        if ((piVar11 != (int *)0x0) && (cVar5 = (**(code **)(*piVar11 + 0x1e8))(), cVar5 != '\0')) {
          iVar9 = (**(code **)(*piVar11 + 0x28))();
          pvVar7 = (void *)StateMachineState_getGame();
          pvVar7 = PlayArea_findPlayerElementById(pvVar7,iVar9);
          FUN_013876d0(pvVar7);
        }
        EvaluationEnvironment_setCurrentTargetFromElement
                  ((void *)param_1[0x3a],(void *)param_1[0x4a],pvVar6);
      }
      EvaluationEnvironment_setTarget1Return(0);
      EvaluationEnvironment_setTarget2Return(0);
      if (param_1[0x4b] != 0) {
        piVar11 = (int *)FUN_00d8d382(param_1[0x4a],0,&PlayElement::RTTI_Type_Descriptor,
                                      &Card::RTTI_Type_Descriptor,0);
        if ((piVar11 != (int *)0x0) && (cVar5 = (**(code **)(*piVar11 + 0x1e8))(), cVar5 != '\0')) {
          iVar9 = (**(code **)(*piVar11 + 0x28))();
          pvVar6 = (void *)StateMachineState_getGame();
          pvVar6 = PlayArea_findPlayerElementById(pvVar6,iVar9);
          FUN_013876d0(pvVar6);
        }
        EvaluationEnvironment_setPlayElementId(param_1[0x4b]);
      }
      iVar9 = FUN_00d8d382(param_1[0x4a],0,&PlayElement::RTTI_Type_Descriptor,
                           &Card::RTTI_Type_Descriptor,0);
      pvStack_4f8 = (void *)0x0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      local_c = 0x2d;
      (**(code **)(*param_1 + 300))(local_4fc,1,param_1[0x3a]);
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
      EvaluationEnvironment_setNumShownReturn(param_1[0x43] - param_1[0x44]);
      param_1[0x5c] = param_1[0x5c] + 1;
      uVar8 = (**(code **)(*(int *)param_1[2] + 0x40))();
      GameResult_appendValue(local_4fc);
      uVar8 = StateMachine_setCurrentState(uVar8);
      local_c = 0xffffffff;
      if (pvStack_4f8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_4f8);
      }
      ExceptionList = local_14;
      return uVar8;
    }
    if (iVar9 != 5) {
      FUN_012f5a60("false","..\\common\\common\\state\\MultiActionState.cpp",0x369);
      ExceptionList = local_14;
      return 0;
    }
    pcVar13 = "MultiActionState::nextState: GetTarget2MultiActionState";
    pvVar7 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar7,pcVar13,pvVar6);
    if (((char)param_1[0x5b] == '\x01') && (param_1[0x5a] != 0)) {
      FUN_012fa910();
      local_c = 0x19;
      CommandObjectList_evaluateToValueData((void *)param_1[0x5a],env);
      if ((local_504 == (int *)0x1) && (cVar5 = FUN_0123c370(), cVar5 == '\0')) {
        param_1[0x44] = 1;
      }
      local_c = 0xffffffff;
      FUN_01300cd0();
    }
    if (param_1[0x44] != 0) {
      FUN_01258ec0(&local_508);
      local_50d = '\0';
      piVar11 = local_504;
      while( true ) {
        local_50c = (int *)param_1[0x4e];
        if (local_50c < (int *)param_1[0x4d]) {
          FUN_00d83c2d();
        }
        if ((local_508 == (int *)0x0) || (local_508 != param_1 + 0x4c)) {
          FUN_00d83c2d();
        }
        if (piVar11 == local_50c) break;
        if (local_508 == (int *)0x0) {
          FUN_00d83c2d();
        }
        if ((int *)local_508[2] <= piVar11) {
          FUN_00d83c2d();
        }
        iVar9 = PlayElement_getId();
        iVar10 = PlayElement_getId();
        if (iVar10 == iVar9) {
          local_50d = '\x01';
        }
        if ((int *)local_508[2] <= piVar11) {
          FUN_00d83c2d();
        }
        piVar11 = piVar11 + 1;
      }
      if (local_50d == '\0') {
        piVar11 = (int *)param_1[0x51];
        if ((int *)param_1[0x52] < piVar11) {
          FUN_00d83c2d();
        }
        while( true ) {
          local_50c = (int *)param_1[0x52];
          if (local_50c < (int *)param_1[0x51]) {
            FUN_00d83c2d();
          }
          if (param_1 == (int *)0xfffffec0) {
            FUN_00d83c2d();
          }
          if (piVar11 == local_50c) break;
          if (param_1[0x4a] != 0) {
            if (param_1 == (int *)0xfffffec0) {
              FUN_00d83c2d();
            }
            if ((int *)param_1[0x52] <= piVar11) {
              FUN_00d83c2d();
            }
            iVar9 = PlayElement_getId();
            if (*piVar11 == iVar9) {
              local_50d = '\x01';
            }
          }
          if (param_1 == (int *)0xfffffec0) {
            FUN_00d83c2d();
          }
          if ((int *)param_1[0x52] <= piVar11) {
            FUN_00d83c2d();
          }
          piVar11 = piVar11 + 1;
        }
        if (local_50d == '\0') {
          pcVar1 = *(code **)(*param_1 + 0x124);
          param_1[0x49] = 1;
          uVar8 = (*pcVar1)();
          ExceptionList = local_14;
          return uVar8;
        }
      }
      uVar2 = param_1[0x52];
      if (uVar2 < (uint)param_1[0x51]) {
        FUN_00d83c2d();
      }
      local_50c = (int *)param_1[0x51];
      if ((int *)param_1[0x52] < local_50c) {
        FUN_00d83c2d();
      }
      FUN_0041f5e6(&local_508,param_1 + 0x50,local_50c,param_1 + 0x50,uVar2);
      pvVar7 = (void *)param_1[0x4e];
      if (pvVar7 < (void *)param_1[0x4d]) {
        FUN_00d83c2d();
      }
      first = (void *)param_1[0x4d];
      if ((void *)param_1[0x4e] < first) {
        FUN_00d83c2d();
      }
      piVar11 = param_1 + 0x4c;
      PointerVector_eraseRangeAssignIterator(piVar11,&local_508,piVar11,first,piVar11,pvVar7,pvVar6)
      ;
      MessageText_copy_ctor(local_4fc,param_1 + 0x15);
      local_c = 0x1a;
      local_e8[0] = '\0';
      _memset(local_e8 + 1,0,199);
      _sprintf(local_e8,"%d",param_1[0x44]);
      pcVar13 = local_e8;
      local_490 = 0xf;
      local_494 = 0;
      local_4a4 = (void *)((uint)local_4a4 & 0xffffff00);
      do {
        cVar5 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar5 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_4a8,local_e8,(int)pcVar13 - (int)(local_e8 + 1));
      local_c._0_1_ = 0x1b;
      local_420 = 0xf;
      local_424 = 0;
      local_434 = (void *)((uint)local_434 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_438,"%d",2)
      ;
      local_c._0_1_ = 0x1c;
      FUN_01402480(local_438,local_4a8);
      local_c = CONCAT31(local_c._1_3_,0x1b);
      if (0xf < local_420) {
                    /* WARNING: Subroutine does not return */
        _free(local_434);
      }
      local_420 = 0xf;
      local_424 = 0;
      local_434 = (void *)((uint)local_434 & 0xffffff00);
      local_c._0_1_ = 0x1a;
      if (0xf < local_490) {
                    /* WARNING: Subroutine does not return */
        _free(local_4a4);
      }
      local_490 = 0xf;
      local_494 = 0;
      local_4a4 = (void *)((uint)local_4a4 & 0xffffff00);
      MessageText_formatWithValueData(local_33c);
      local_c._0_1_ = 0x1d;
      iVar9 = FUN_01231320("#numselectedkey#",0,0x10);
      local_50d = iVar9 != -1;
      local_c._0_1_ = 0x1a;
      if (0xf < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_338);
      }
      local_324 = 0xf;
      local_328 = 0;
      local_338 = (void *)((uint)local_338 & 0xffffff00);
      if ((bool)local_50d) {
        _sprintf(local_e8,"%d",param_1[0x43] - param_1[0x44]);
        pcVar13 = local_e8;
        local_458 = 0xf;
        local_45c = 0;
        local_46c = (void *)((uint)local_46c & 0xffffff00);
        do {
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_470,local_e8,(int)pcVar13 - (int)(local_e8 + 1));
        local_c._0_1_ = 0x1e;
        local_4c8 = 0xf;
        local_4cc = 0;
        local_4dc = (void *)((uint)local_4dc & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_4e0,"#numselectedkey#",0x10);
        local_c._0_1_ = 0x1f;
        FUN_01402480(local_4e0,local_470);
        local_c = CONCAT31(local_c._1_3_,0x1e);
        if (0xf < local_4c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_4dc);
        }
        local_4c8 = 0xf;
        local_4cc = 0;
        local_4dc = (void *)((uint)local_4dc & 0xffffff00);
        local_c._0_1_ = 0x1a;
        if (0xf < local_458) {
                    /* WARNING: Subroutine does not return */
          _free(local_46c);
        }
        local_458 = 0xf;
        local_45c = 0;
        local_46c = (void *)((uint)local_46c & 0xffffff00);
      }
      local_c._0_1_ = 0x1a;
      MessageText_formatWithValueData(local_374);
      local_c._0_1_ = 0x20;
      iVar9 = FUN_01231320("#customnumberkey#",0,0x11);
      local_50d = iVar9 != -1;
      local_c._0_1_ = 0x1a;
      if (0xf < local_35c) {
                    /* WARNING: Subroutine does not return */
        _free(local_370);
      }
      local_35c = 0xf;
      local_360 = 0;
      local_370 = (void *)((uint)local_370 & 0xffffff00);
      if ((bool)local_50d) {
        uVar8 = Rules_getIntegerKey16();
        _sprintf(local_e8,"%d",uVar8);
        pcVar13 = local_e8;
        local_4ac = 0xf;
        local_4b0 = 0;
        local_4c0 = (void *)((uint)local_4c0 & 0xffffff00);
        do {
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_4c4,local_e8,(int)pcVar13 - (int)(local_e8 + 1));
        local_c._0_1_ = 0x21;
        local_3e8 = 0xf;
        local_3ec = 0;
        local_3fc = (void *)((uint)local_3fc & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_400,"#customnumberkey#",0x11);
        local_c._0_1_ = 0x22;
        FUN_01402480(local_400,local_4c4);
        local_c = CONCAT31(local_c._1_3_,0x21);
        if (0xf < local_3e8) {
                    /* WARNING: Subroutine does not return */
          _free(local_3fc);
        }
        local_3e8 = 0xf;
        local_3ec = 0;
        local_3fc = (void *)((uint)local_3fc & 0xffffff00);
        local_c._0_1_ = 0x1a;
        if (0xf < local_4ac) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c0);
        }
        local_4ac = 0xf;
        local_4b0 = 0;
        local_4c0 = (void *)((uint)local_4c0 & 0xffffff00);
      }
      local_c._0_1_ = 0x1a;
      MessageText_formatWithValueData(local_3ac);
      local_c._0_1_ = 0x23;
      iVar9 = FUN_01231320("#customnumber2key#",0,0x12);
      local_50d = iVar9 != -1;
      local_c._0_1_ = 0x1a;
      if (0xf < local_394) {
                    /* WARNING: Subroutine does not return */
        _free(local_3a8);
      }
      local_394 = 0xf;
      local_398 = 0;
      local_3a8 = (void *)((uint)local_3a8 & 0xffffff00);
      if ((bool)local_50d) {
        uVar8 = Rules_getIntegerKey1B();
        _sprintf(local_e8,"%d",uVar8);
        pcVar13 = local_e8;
        local_43c = 0xf;
        local_440 = 0;
        local_450 = (void *)((uint)local_450 & 0xffffff00);
        do {
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_454,local_e8,(int)pcVar13 - (int)(local_e8 + 1));
        local_c._0_1_ = 0x24;
        local_474 = 0xf;
        local_478 = 0;
        local_488 = (void *)((uint)local_488 & 0xffffff00);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_48c,"#customnumber2key#",0x12);
        local_c._0_1_ = 0x25;
        FUN_01402480(local_48c,local_454);
        local_c = CONCAT31(local_c._1_3_,0x24);
        if (0xf < local_474) {
                    /* WARNING: Subroutine does not return */
          _free(local_488);
        }
        local_474 = 0xf;
        local_478 = 0;
        local_488 = (void *)((uint)local_488 & 0xffffff00);
        local_c._0_1_ = 0x1a;
        if (0xf < local_43c) {
                    /* WARNING: Subroutine does not return */
          _free(local_450);
        }
        local_43c = 0xf;
        local_440 = 0;
        local_450 = (void *)((uint)local_450 & 0xffffff00);
      }
      local_c._0_1_ = 0x1a;
      if (param_1[0x47] == 2) {
        local_50c = (int *)param_1[0x48];
        FUN_0042c155(&local_50c);
      }
      else {
        if (param_1[0x47] != 5) {
          FUN_012f5a60("mTargets.getType() == kExpressionTreeTypeID",
                       "..\\common\\common\\state\\MultiActionState.cpp",0x2a4);
        }
        FUN_013815b0(param_1[0x3e]);
        uVar12 = StateMachineState_getGame
                           (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
        pvVar7 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
        pvVar7 = (void *)FUN_00d8d382(pvVar7);
        set_play_element_id_field((void *)param_1[0x3a],pvVar7);
        EvaluationEnvironment_setTarget1Return(0);
        EvaluationEnvironment_setTarget2Return(1);
        EvaluationEnvironment_setCurrentTargetFromElement
                  ((void *)param_1[0x3a],(void *)param_1[0x4a],pvVar6);
        FUN_012fb470(param_1 + 0x4c,param_1[0x3a]);
        (**(code **)(*param_1 + 0x128))();
        if ((param_1[0x4d] == 0) || (param_1[0x4e] - param_1[0x4d] >> 2 == 0)) {
LAB_0146e5c2:
          uVar8 = StateMachineState_getGame("No Valid targets in mulitaction state");
          Game_logGeneralFormatted(uVar8);
          param_1[0x49] = 3;
          local_c = 0xffffffff;
          MessageText_dtor();
          ExceptionList = local_14;
          return 1;
        }
      }
      if ((param_1[0x3f] == 1) || (param_1[0x47] == 2)) {
        iVar9 = MessageText_formatWithValueData(local_390);
        local_c._0_1_ = 0x26;
        if (*(uint *)(iVar9 + 0x18) < 0x10) {
          iVar9 = iVar9 + 4;
        }
        else {
          iVar9 = *(int *)(iVar9 + 4);
        }
        uVar8 = GamePlayer_getPlayerId(iVar9);
        pcVar13 = "DRAWCOMMAND PLAYER: %d, TEXT: %s";
        pvVar6 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar6,pcVar13,uVar8);
        local_c._0_1_ = 0x1a;
        if (0xf < local_378) {
                    /* WARNING: Subroutine does not return */
          _free(local_38c);
        }
        local_378 = 0xf;
        local_37c = 0;
        local_38c = (void *)((uint)local_38c & 0xffffff00);
        local_508 = Mem_Alloc(0x13c);
        local_c._0_1_ = 0x27;
        if (local_508 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)GetTargetState_ctor(param_1[2],param_1 + 0x50,local_4fc);
        }
        local_c._0_1_ = 0x1a;
        local_404 = 0xf;
        local_408 = 0;
        local_418 = (void *)((uint)local_418 & 0xffffff00);
        local_50c = piVar11;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_41c,"draw",4);
        local_c._0_1_ = 0x28;
        pvVar6 = (void *)FUN_0145d850(local_358,local_41c);
        local_c._0_1_ = 0x29;
        TcgClient_setFieldA8(piVar11,pvVar6);
        local_c = CONCAT31(local_c._1_3_,0x28);
        if (0xf < local_340) {
                    /* WARNING: Subroutine does not return */
          _free(local_354);
        }
        local_340 = 0xf;
        local_344 = 0;
        local_354 = (void *)((uint)local_354 & 0xffffff00);
        local_c._0_1_ = 0x1a;
        if (0xf < local_404) {
                    /* WARNING: Subroutine does not return */
          _free(local_418);
        }
        local_404 = 0xf;
        local_408 = 0;
        local_418 = (void *)((uint)local_418 & 0xffffff00);
      }
      else {
        local_50c = Mem_Alloc(0x13c);
        local_c._0_1_ = 0x2a;
        if (local_50c == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)FUN_0141ed60(param_1[2],param_1 + 0x4c,local_4fc);
        }
      }
      local_c._0_1_ = 0x1a;
      StateMachineState_setButtonPressed((char)param_1[0x45]);
      local_3cc = 0xf;
      local_3d0 = 0;
      local_3e0 = (void *)((uint)local_3e0 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_3e4,"done",4);
      local_c._0_1_ = 0x2b;
      uVar8 = FUN_0145d850(local_3c8,local_3e4);
      local_c._0_1_ = 0x2c;
      StateMachineState_setMessageText(uVar8);
      local_c = CONCAT31(local_c._1_3_,0x2b);
      if (0xf < local_3b0) {
                    /* WARNING: Subroutine does not return */
        _free(local_3c4);
      }
      local_3b0 = 0xf;
      local_3b4 = 0;
      local_3c4 = (void *)((uint)local_3c4 & 0xffffff00);
      local_c = CONCAT31(local_c._1_3_,0x1a);
      if (0xf < local_3cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_3e0);
      }
      local_3cc = 0xf;
      local_3d0 = 0;
      local_3e0 = (void *)((uint)local_3e0 & 0xffffff00);
      uVar8 = StateMachine_setCurrentState(piVar11);
LAB_0146e8fd:
      local_c = 0xffffffff;
      MessageText_dtor();
      ExceptionList = local_14;
      return uVar8;
    }
  }
  ExceptionList = local_14;
  return 1;
}

