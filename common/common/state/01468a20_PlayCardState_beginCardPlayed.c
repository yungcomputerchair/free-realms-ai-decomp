// addr: 0x01468a20
// name: PlayCardState_beginCardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/PlayCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall
PlayCardState_beginCardPlayed(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *this;
  int *piVar7;
  undefined8 uVar8;
  int playerId_;
  char *fmt;
  int local_d4;
  int iStack_d0;
  int *piStack_cc;
  undefined1 local_c8 [4];
  void *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int iStack_b4;
  int *piStack_b0;
  void *local_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Handles beginCardPlayed for PlayCardState, checking the player and selected
                       card/target before continuing play-card flow. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e2a6;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff1c);
  ExceptionList = &local_c;
  StateMachineState_getActivePlayer();
  iVar4 = GamePlayer_getPlayerId();
  if (iVar4 != param_2) {
    StateMachineState_getActivePlayer(param_2);
    uVar5 = GamePlayer_getPlayerId();
    uVar5 = StateMachineState_getGame("Got an beginCardPlayed from %d instead of %d.",uVar5);
    Game_logGeneralFormatted(uVar5);
    (**(code **)(*param_1 + 0x88))();
    ExceptionList = local_c;
    return 0;
  }
  uVar8 = StateMachineState_getGame(param_3);
  pvVar6 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  if (pvVar6 != (void *)0x0) {
    this = (int *)FUN_00d8d382(pvVar6,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
    if (this == (int *)0x0) {
      (**(code **)(*param_1 + 0x88))();
      ExceptionList = local_c;
      return 0;
    }
    iVar4 = param_2;
    pvVar6 = (void *)StateMachineState_getGame();
    local_ac = PlayArea_findPlayerElementById(pvVar6,iVar4);
    if (local_ac != (void *)0x0) {
      local_d4 = 0;
      local_b8 = 0;
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_4 = 0;
      (**(code **)(*this + 0x114))(local_c8,1);
      Card_checkModifierPredicate68(this,local_c8,3);
      piVar7 = (int *)FUN_01258f50(&iStack_d0);
      iStack_b4 = *piVar7;
      piStack_b0 = (int *)piVar7[1];
      piVar7 = (int *)FUN_01258f20(auStack_a8);
      iStack_d0 = *piVar7;
      piVar7 = (int *)piVar7[1];
      while( true ) {
        iVar4 = iStack_d0;
        piStack_cc = piVar7;
        if ((iStack_d0 == 0) || (iStack_d0 != iStack_b4)) {
          FUN_00d83c2d();
        }
        if (piVar7 == piStack_b0) break;
        if (iVar4 == 0) {
          FUN_00d83c2d();
        }
        if (*(int **)(iVar4 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        iVar4 = *piVar7;
        if (iVar4 != 0) {
          EvaluationEnvironment_ctor();
          local_4 = CONCAT31(local_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar3);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setBooleanKey4(0);
          EvaluationEnvironment_setActionReturn(iVar4);
          set_play_element_id_field(auStack_a0,this);
          playerId_ = param_2;
          pvVar6 = (void *)StateMachineState_getGame();
          pvVar6 = PlayArea_findPlayerElementById(pvVar6,playerId_);
          if (pvVar6 == (void *)0x0) {
            FUN_012f5a60("player","..\\common\\common\\state\\PlayCardState.cpp",0x103);
          }
          FUN_013815b0(pvVar6);
          cVar1 = (**(code **)(*this + 0xdc))(iVar4,auStack_a0,1);
          if (cVar1 != '\0') {
            local_d4 = local_d4 + 1;
            local_b8 = iVar4;
          }
          local_4 = local_4 & 0xffffff00;
          FUN_01385460();
          piVar7 = piStack_cc;
        }
        if (*(int **)(iStack_d0 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 1;
      }
      if (local_b8 == 0) {
        (**(code **)(*param_1 + 0x88))();
        local_4 = 0xffffffff;
        if (local_c4 == (void *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c4);
      }
      if (1 < local_d4) {
        pvVar3 = (void *)StateMachineState_getGame();
        pvVar3 = PlayArea_findPlayerElementById(pvVar3,param_2);
        if (pvVar3 != (void *)0x0) {
          fmt = 
          "This card has more than 1 valid action, right-click to select which action to take.";
          pvVar6 = (void *)StateMachineState_getGame();
          GamePlayer_logFormattedMessage(pvVar6,(int)pvVar3,fmt);
        }
        local_4 = 0xffffffff;
        FUN_012591b0();
        ExceptionList = local_c;
        return 1;
      }
      uVar2 = (**(code **)(*this + 0xe4))(param_4,local_ac);
      local_4 = 0xffffffff;
      FUN_012591b0();
      ExceptionList = local_c;
      return uVar2;
    }
  }
  (**(code **)(*param_1 + 0x88))();
  ExceptionList = local_c;
  return 0;
}

