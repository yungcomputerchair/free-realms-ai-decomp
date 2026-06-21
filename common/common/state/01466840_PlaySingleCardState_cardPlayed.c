// addr: 0x01466840
// name: PlaySingleCardState_cardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/PlaySingleCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall PlaySingleCardState_cardPlayed(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int playerId_;
  char *fmt;
  int local_d8;
  int iStack_d4;
  int iStack_cc;
  int *piStack_c8;
  undefined1 auStack_c4 [4];
  void *pvStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int *local_b0;
  int iStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Handles a cardPlayed event for PlaySingleCardState, validating the
                       player/target and pushing an ActionPlayedState or logging
                       invalid/wrong-player cases. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169de82;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff18);
  ExceptionList = &local_c;
  StateMachineState_getActivePlayer();
  iVar4 = GamePlayer_getPlayerId();
  if (iVar4 == param_2) {
    piVar7 = (int *)param_1[0x40];
    if (piVar7 < (int *)param_1[0x3f]) {
      FUN_00d83c2d();
    }
    piVar9 = (int *)param_1[0x3f];
    piVar1 = piVar9;
    if ((int *)param_1[0x40] < piVar9) {
      FUN_00d83c2d();
    }
    for (; (piVar1 != piVar7 && (*piVar1 != param_3)); piVar1 = piVar1 + 1) {
    }
    piVar7 = (int *)param_1[0x40];
    local_b0 = piVar9;
    if (piVar7 < (int *)param_1[0x3f]) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xffffff08) {
      FUN_00d83c2d();
    }
    if (piVar1 == piVar7) {
      uVar5 = StateMachineState_getGame("Got a non valid target!");
      Game_logGeneralFormatted(uVar5);
    }
    else {
      uVar11 = StateMachineState_getGame(param_3);
      pvVar6 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if ((pvVar6 != (void *)0x0) &&
         (piVar7 = (int *)FUN_00d8d382(pvVar6,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0), piVar7 != (int *)0x0)) {
        iVar8 = (**(code **)(*piVar7 + 0x30))();
        iVar4 = param_2;
        pvVar6 = (void *)StateMachineState_getGame();
        PlayArea_findPlayerElementById(pvVar6,iVar4);
        PlayElement_getGame();
        iStack_ac = FUN_0139d7c0();
        iStack_d4 = 0;
        local_d8 = 0;
        pvStack_c0 = (void *)0x0;
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_4 = 0;
        (**(code **)(*piVar7 + 0x114))(auStack_c4,1);
        Card_checkModifierPredicate68(piVar7,auStack_c4,3);
        piVar9 = (int *)FUN_01258f50(&iStack_cc);
        iStack_b4 = *piVar9;
        local_b0 = (int *)piVar9[1];
        piVar9 = (int *)FUN_01258f20(auStack_a8);
        iStack_cc = *piVar9;
        piVar9 = (int *)piVar9[1];
        while( true ) {
          iVar4 = iStack_cc;
          piStack_c8 = piVar9;
          if ((iStack_cc == 0) || (iStack_cc != iStack_b4)) {
            FUN_00d83c2d();
          }
          if (piVar9 == local_b0) break;
          if (iVar4 == 0) {
            FUN_00d83c2d();
          }
          if (*(int **)(iVar4 + 8) <= piVar9) {
            FUN_00d83c2d();
          }
          iVar4 = *piVar9;
          if ((iVar4 != 0) && (iVar8 == iStack_ac)) {
            EvaluationEnvironment_ctor();
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar3);
            EvaluationEnvironment_setBooleanKey9(1);
            EvaluationEnvironment_setBooleanKey4(0);
            EvaluationEnvironment_setActionReturn(iVar4);
            set_play_element_id_field(auStack_a0,piVar7);
            playerId_ = param_2;
            pvVar6 = (void *)StateMachineState_getGame();
            pvVar6 = PlayArea_findPlayerElementById(pvVar6,playerId_);
            if (pvVar6 == (void *)0x0) {
              FUN_012f5a60("player","..\\common\\common\\state\\PlaySingleCardState.cpp",0xab);
            }
            FUN_013815b0(pvVar6);
            cVar2 = (**(code **)(*piVar7 + 0xdc))(iVar4,auStack_a0,1);
            if (cVar2 != '\0') {
              iStack_d4 = iStack_d4 + 1;
              local_d8 = iVar4;
            }
            uStack_4 = uStack_4 & 0xffffff00;
            FUN_01385460();
            piVar9 = piStack_c8;
          }
          if (*(int **)(iStack_cc + 8) <= piVar9) {
            FUN_00d83c2d();
          }
          piVar9 = piVar9 + 1;
        }
        if (local_d8 == 0) {
          (**(code **)(*param_1 + 0x88))();
          uStack_4 = 0xffffffff;
          if (pvStack_c0 == (void *)0x0) {
            ExceptionList = local_c;
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          _free(pvStack_c0);
        }
        if (1 < iStack_d4) {
          pvVar3 = (void *)StateMachineState_getGame();
          pvVar3 = PlayArea_findPlayerElementById(pvVar3,param_2);
          if (pvVar3 != (void *)0x0) {
            fmt = 
            "This card has more than 1 valid action, right-click to select which action to take.";
            pvVar6 = (void *)StateMachineState_getGame();
            GamePlayer_logFormattedMessage(pvVar6,(int)pvVar3,fmt);
          }
          uStack_4 = 0xffffffff;
          FUN_012591b0();
          ExceptionList = local_c;
          return 2;
        }
        pvVar3 = Mem_Alloc(0x18);
        uStack_4._0_1_ = 2;
        if (pvVar3 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = ReturnValueMap_ctor();
        }
        uStack_4._0_1_ = 0;
        ReturnValueMap_setInteger(4,param_2);
        ReturnValueMap_setInteger(3,param_3);
        uVar10 = FUN_01321f20();
        ReturnValueMap_setInteger(5,uVar10);
        set_boolean_value_key_17(true);
        set_boolean_value_key_18(true);
        set_value_boolean(0x1d,true);
        set_value_boolean(8,true);
        set_value_boolean(0x1e,true);
        StateMachine_pushPendingState(uVar5);
        pvVar3 = Mem_Alloc(0x19c);
        uStack_4._0_1_ = 3;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = ActionPlayedState_copy_ctor(pvVar3,(void *)param_1[2]);
        }
        uStack_4 = (uint)uStack_4._1_3_ << 8;
        uVar5 = StateMachine_setCurrentState(pvVar3);
        uStack_4 = 0xffffffff;
        FUN_012591b0();
        ExceptionList = local_c;
        return uVar5;
      }
    }
    (**(code **)(*param_1 + 0x88))();
  }
  else {
    StateMachineState_getActivePlayer(param_2);
    uVar5 = GamePlayer_getPlayerId();
    uVar5 = StateMachineState_getGame("Got an cardPlayed from %d instead of %d.",uVar5);
    Game_logGeneralFormatted(uVar5);
    (**(code **)(*param_1 + 0x88))();
  }
  ExceptionList = local_c;
  return 0;
}

