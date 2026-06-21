// addr: 0x01468600
// name: PlayCardState_cardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/PlayCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall PlayCardState_cardPlayed(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *this;
  undefined4 uVar6;
  undefined8 uVar7;
  int playerId_;
  char *fmt;
  int *piStack_d8;
  undefined1 auStack_d4 [4];
  int *piStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  void *pvStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Handles a cardPlayed event for PlayCardState, validating the player and card
                       action and transitioning toward ActionPlayedState. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169e26f;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff14);
  ExceptionList = &local_c;
  StateMachineState_getActivePlayer();
  iVar3 = GamePlayer_getPlayerId();
  if (iVar3 == param_2) {
    uVar7 = StateMachineState_getGame(param_3);
    pvVar5 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    if ((pvVar5 == (void *)0x0) ||
       (this = (int *)FUN_00d8d382(pvVar5,0,&PlayElement::RTTI_Type_Descriptor,
                                   &Card::RTTI_Type_Descriptor,0), this == (int *)0x0)) {
      (**(code **)(*param_1 + 0x88))();
      uVar4 = 0;
    }
    else {
      pvStack_bc = (void *)(**(code **)(*this + 0x30))();
      iVar3 = param_2;
      pvVar5 = (void *)StateMachineState_getGame();
      PlayArea_findPlayerElementById(pvVar5,iVar3);
      PlayElement_getGame();
      iStack_b8 = FUN_0139d7c0();
      iStack_c4 = 0;
      iStack_c0 = 0;
      piStack_d0 = (int *)0x0;
      piStack_cc = (int *)0x0;
      uStack_c8 = 0;
      uStack_4 = 0;
      (**(code **)(*this + 0x114))(auStack_d4,1);
      Card_checkModifierPredicate68(this,auStack_d4,3);
      piStack_b4 = piStack_cc;
      if (piStack_cc < piStack_d0) {
        FUN_00d83c2d();
      }
      piStack_b0 = piStack_d0;
      if (piStack_cc < piStack_d0) {
        FUN_00d83c2d();
      }
      piStack_d8 = piStack_b0;
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0xd4) {
          FUN_00d83c2d();
        }
        if (piStack_d8 == piStack_b4) break;
        if (&stack0x00000000 == (undefined1 *)0xd4) {
          FUN_00d83c2d();
        }
        if (piStack_cc <= piStack_d8) {
          FUN_00d83c2d();
        }
        iVar3 = *piStack_d8;
        if (iVar3 != 0) {
          if (pvStack_bc == (void *)iStack_b8) {
            EvaluationEnvironment_ctor();
            uStack_4 = CONCAT31(uStack_4._1_3_,2);
            EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar2);
            EvaluationEnvironment_setBooleanKey9(1);
            EvaluationEnvironment_setBooleanKey4(0);
            EvaluationEnvironment_setActionReturn(iVar3);
            set_play_element_id_field(auStack_a0,this);
            playerId_ = param_2;
            pvVar5 = (void *)StateMachineState_getGame();
            pvVar5 = PlayArea_findPlayerElementById(pvVar5,playerId_);
            if (pvVar5 == (void *)0x0) {
              FUN_012f5a60("player","..\\common\\common\\state\\PlayCardState.cpp",0xb3);
            }
            FUN_013815b0(pvVar5);
            cVar1 = (**(code **)(*this + 0xdc))(iVar3,auStack_a0,1);
            if (cVar1 != '\0') {
              iStack_c4 = iStack_c4 + 1;
              iStack_c0 = iVar3;
            }
            uStack_4 = uStack_4 & 0xffffff00;
            FUN_01385460();
          }
          else {
            FUN_012fa910();
            uStack_4 = uStack_4 & 0xffffff00;
            FUN_01300cd0();
          }
        }
        if (piStack_cc <= piStack_d8) {
          FUN_00d83c2d();
        }
        piStack_d8 = piStack_d8 + 1;
      }
      if (iStack_c0 == 0) {
        (**(code **)(*param_1 + 0x88))();
        uStack_4 = 0xffffffff;
        if (piStack_d0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_d0);
        }
        uVar4 = 0;
      }
      else if (iStack_c4 < 2) {
        *(undefined1 *)(param_1 + 0x3e) = 1;
        pvStack_bc = Mem_Alloc(0x18);
        uStack_4._0_1_ = 3;
        if (pvStack_bc == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = ReturnValueMap_ctor();
        }
        uStack_4 = (uint)uStack_4._1_3_ << 8;
        ReturnValueMap_setInteger(4,param_2);
        ReturnValueMap_setInteger(3,param_3);
        uVar6 = FUN_01321f20();
        ReturnValueMap_setInteger(5,uVar6);
        StateMachine_pushPendingState(uVar4);
        uVar4 = (**(code **)(*(int *)param_1[2] + 0x4c))();
        uVar4 = StateMachine_setCurrentState(uVar4);
        uStack_4 = 0xffffffff;
        if (piStack_d0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_d0);
        }
      }
      else {
        pvVar2 = (void *)StateMachineState_getGame();
        pvVar2 = PlayArea_findPlayerElementById(pvVar2,param_2);
        if (pvVar2 != (void *)0x0) {
          fmt = 
          "This card has more than 1 valid action, right-click to select which action to take.";
          pvVar5 = (void *)StateMachineState_getGame();
          GamePlayer_logFormattedMessage(pvVar5,(int)pvVar2,fmt);
        }
        uStack_4 = 0xffffffff;
        if (piStack_d0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_d0);
        }
        uVar4 = 2;
      }
    }
  }
  else {
    StateMachineState_getActivePlayer(param_2);
    uVar4 = GamePlayer_getPlayerId();
    uVar4 = StateMachineState_getGame("Got an cardPlayed from %d instead of %d.",uVar4);
    Game_logGeneralFormatted(uVar4);
    (**(code **)(*param_1 + 0x88))();
    uVar4 = 0;
  }
  ExceptionList = local_c;
  return uVar4;
}

