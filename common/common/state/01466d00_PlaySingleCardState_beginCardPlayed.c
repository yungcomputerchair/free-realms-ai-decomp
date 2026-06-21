// addr: 0x01466d00
// name: PlaySingleCardState_beginCardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/PlaySingleCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall
PlaySingleCardState_beginCardPlayed(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int playerId_;
  char *fmt;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int *piStack_c8;
  int iStack_c4;
  int *local_c0;
  undefined1 local_bc [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Handles beginCardPlayed for PlaySingleCardState, validating the acting player
                       and target before preparing the play action. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169dec6;
  local_c = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff1c);
  ExceptionList = &local_c;
  StateMachineState_getActivePlayer();
  iVar5 = GamePlayer_getPlayerId();
  if (iVar5 == param_2) {
    piVar8 = (int *)param_1[0x40];
    if (piVar8 < (int *)param_1[0x3f]) {
      FUN_00d83c2d();
    }
    piVar9 = (int *)param_1[0x3f];
    piVar1 = piVar9;
    if ((int *)param_1[0x40] < piVar9) {
      FUN_00d83c2d();
    }
    for (; (piVar1 != piVar8 && (*piVar1 != param_3)); piVar1 = piVar1 + 1) {
    }
    piVar8 = (int *)param_1[0x40];
    local_c0 = piVar9;
    if (piVar8 < (int *)param_1[0x3f]) {
      FUN_00d83c2d();
    }
    if (param_1 == (int *)0xffffff08) {
      FUN_00d83c2d();
    }
    if (piVar1 == piVar8) {
      uVar6 = StateMachineState_getGame("Got a non valid target!");
      Game_logGeneralFormatted(uVar6);
    }
    else {
      uVar10 = StateMachineState_getGame(param_3);
      pvVar7 = find_play_element_in_maps((void *)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      if ((pvVar7 != (void *)0x0) &&
         (piVar8 = (int *)FUN_00d8d382(pvVar7,0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0), piVar8 != (int *)0x0)) {
        iVar5 = param_2;
        pvVar7 = (void *)StateMachineState_getGame();
        local_ac = PlayArea_findPlayerElementById(pvVar7,iVar5);
        if (local_ac != (void *)0x0) {
          local_d0 = 0;
          local_d4 = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_b0 = 0;
          local_4 = 0;
          (**(code **)(*piVar8 + 0x114))(local_bc,1);
          Card_checkModifierPredicate68(piVar8,local_bc,3);
          piVar9 = (int *)FUN_01258f50(&iStack_cc);
          iStack_c4 = *piVar9;
          local_c0 = (int *)piVar9[1];
          piVar9 = (int *)FUN_01258f20(auStack_a8);
          iStack_cc = *piVar9;
          piVar9 = (int *)piVar9[1];
          while( true ) {
            iVar5 = iStack_cc;
            piStack_c8 = piVar9;
            if ((iStack_cc == 0) || (iStack_cc != iStack_c4)) {
              FUN_00d83c2d();
            }
            if (piVar9 == local_c0) break;
            if (iVar5 == 0) {
              FUN_00d83c2d();
            }
            if (*(int **)(iVar5 + 8) <= piVar9) {
              FUN_00d83c2d();
            }
            iVar5 = *piVar9;
            if (iVar5 != 0) {
              EvaluationEnvironment_ctor();
              local_4 = CONCAT31(local_4._1_3_,1);
              EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar4);
              EvaluationEnvironment_setBooleanKey9(1);
              EvaluationEnvironment_setBooleanKey4(0);
              EvaluationEnvironment_setActionReturn(iVar5);
              set_play_element_id_field(auStack_a0,piVar8);
              playerId_ = param_2;
              pvVar7 = (void *)StateMachineState_getGame();
              pvVar7 = PlayArea_findPlayerElementById(pvVar7,playerId_);
              if (pvVar7 == (void *)0x0) {
                FUN_012f5a60("player","..\\common\\common\\state\\PlaySingleCardState.cpp",0x107);
              }
              FUN_013815b0(pvVar7);
              cVar2 = (**(code **)(*piVar8 + 0xdc))(iVar5,auStack_a0,1);
              if (cVar2 != '\0') {
                local_d0 = local_d0 + 1;
                local_d4 = iVar5;
              }
              local_4 = local_4 & 0xffffff00;
              FUN_01385460();
              piVar9 = piStack_c8;
            }
            if (*(int **)(iStack_cc + 8) <= piVar9) {
              FUN_00d83c2d();
            }
            piVar9 = piVar9 + 1;
          }
          if (local_d4 == 0) {
            (**(code **)(*param_1 + 0x88))();
            local_4 = 0xffffffff;
            FUN_012591b0();
            ExceptionList = local_c;
            return 0;
          }
          if (1 < local_d0) {
            pvVar4 = (void *)StateMachineState_getGame();
            pvVar4 = PlayArea_findPlayerElementById(pvVar4,param_2);
            if (pvVar4 != (void *)0x0) {
              fmt = 
              "This card has more than 1 valid action, right-click to select which action to take.";
              pvVar7 = (void *)StateMachineState_getGame();
              GamePlayer_logFormattedMessage(pvVar7,(int)pvVar4,fmt);
            }
            local_4 = 0xffffffff;
            FUN_012591b0();
            ExceptionList = local_c;
            return 1;
          }
          uVar3 = (**(code **)(*piVar8 + 0xe4))(param_4,local_ac);
          local_4 = 0xffffffff;
          FUN_012591b0();
          ExceptionList = local_c;
          return uVar3;
        }
      }
    }
    (**(code **)(*param_1 + 0x88))();
  }
  else {
    StateMachineState_getActivePlayer(param_2);
    uVar6 = GamePlayer_getPlayerId();
    uVar6 = StateMachineState_getGame("Got an beginCardPlayed from %d instead of %d.",uVar6);
    Game_logGeneralFormatted(uVar6);
    (**(code **)(*param_1 + 0x88))();
  }
  ExceptionList = local_c;
  return 0;
}

