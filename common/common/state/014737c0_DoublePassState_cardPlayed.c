// addr: 0x014737c0
// name: DoublePassState_cardPlayed
// subsystem: common/common/rules
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall DoublePassState_cardPlayed(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  int *this;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  int playerId_;
  undefined1 local_c4 [4];
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int local_b4;
  int iStack_b0;
  int *piStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Handles cardPlayed in DoublePassState, checking player/state validity,
                       default action, and logging wrong-state cardPlayed cases. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f494;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff2c);
  ExceptionList = &local_c;
  param_1[0x38] = param_2;
  if (param_1[0x4a] == 3) {
    pcVar9 = "DoublePassState::cardPlayed %d, %d";
    iVar10 = param_2;
    pvVar4 = (void *)StateMachineState_getGame("DoublePassState::cardPlayed %d, %d",param_2,param_3)
    ;
    Game_logGeneral(pvVar4,pcVar9,iVar10);
    uVar8 = StateMachineState_getGame(param_3);
    pvVar4 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if ((pvVar4 != (void *)0x0) &&
       (this = (int *)FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,
                                   &Card::RTTI_Type_Descriptor,0), this != (int *)0x0)) {
      local_b4 = 0;
      local_c0 = (int *)0x0;
      local_bc = (int *)0x0;
      local_b8 = 0;
      local_4 = 0;
      (**(code **)(*this + 0x114))(local_c4,1);
      Card_checkModifierPredicate68(this,local_c4,3);
      piStack_ac = local_bc;
      if (local_bc < local_c0) {
        FUN_00d83c2d();
      }
      piVar7 = local_c0;
      iStack_b0 = 0;
      if (local_bc < local_c0) {
        FUN_00d83c2d();
      }
      puStack_a8 = local_c4;
      while( true ) {
        puVar1 = puStack_a8;
        piStack_a4 = piVar7;
        if ((puStack_a8 == (undefined1 *)0x0) || (puStack_a8 != local_c4)) {
          FUN_00d83c2d();
        }
        if (piVar7 == piStack_ac) break;
        if (puVar1 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(puVar1 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        iVar10 = *piVar7;
        if (iVar10 != 0) {
          EvaluationEnvironment_ctor();
          local_4 = CONCAT31(local_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],pvVar3);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setBooleanKey4(0);
          EvaluationEnvironment_setActionReturn(iVar10);
          set_play_element_id_field(auStack_a0,this);
          playerId_ = param_2;
          pvVar4 = (void *)StateMachineState_getGame();
          pvVar4 = PlayArea_findPlayerElementById(pvVar4,playerId_);
          if (pvVar4 == (void *)0x0) {
            FUN_012f5a60("player","..\\common\\common\\state\\DoublePassState.cpp",0xf3);
          }
          FUN_013815b0(pvVar4);
          cVar2 = (**(code **)(*this + 0xdc))(iVar10,auStack_a0,1);
          if (cVar2 != '\0') {
            iStack_b0 = iStack_b0 + 1;
            local_b4 = iVar10;
          }
          local_4 = local_4 & 0xffffff00;
          FUN_01385460();
          piVar7 = piStack_a4;
        }
        if (*(int **)(puStack_a8 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 1;
      }
      if (local_b4 == 0) {
        pcVar9 = "defaultActon is NULL!";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar9,pvVar3);
        (**(code **)(*param_1 + 0x88))();
        local_4 = 0xffffffff;
        if (local_c0 == (int *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_c0);
      }
      if (iStack_b0 < 2) {
        iVar10 = param_2;
        pvVar4 = (void *)StateMachineState_getGame();
        pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar10);
        if (pvVar4 == (void *)0x0) {
          pcVar9 = "couldn\'t get player.";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar9,pvVar3);
          (**(code **)(*param_1 + 0x88))();
          local_4 = 0xffffffff;
          FUN_012591b0();
          ExceptionList = local_c;
          return 0;
        }
        piStack_ac = Mem_Alloc(0x18);
        local_4._0_1_ = 2;
        if (piStack_ac == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = ReturnValueMap_ctor();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        ReturnValueMap_setInteger(4,param_2);
        ReturnValueMap_setInteger(3,param_3);
        uVar6 = FUN_01321f20();
        ReturnValueMap_setInteger(5,uVar6);
        set_value_boolean(0x1d,true);
        StateMachine_pushPendingState(uVar5);
        uVar5 = (**(code **)(*(int *)param_1[2] + 0x4c))();
        set_play_element_id_field((void *)param_1[0x3a],this);
        FUN_013815b0(pvVar4);
        EvaluationEnvironment_setActionReturn(0);
        uVar5 = StateMachine_setCurrentState(uVar5);
        local_4 = 0xffffffff;
        FUN_012591b0();
        ExceptionList = local_c;
        return uVar5;
      }
      pvVar3 = (void *)StateMachineState_getGame();
      pvVar3 = PlayArea_findPlayerElementById(pvVar3,param_2);
      if (pvVar3 != (void *)0x0) {
        pcVar9 = 
        "This card has more than 1 valid action, right-click to select which action to take.";
        pvVar4 = (void *)StateMachineState_getGame();
        GamePlayer_logFormattedMessage(pvVar4,(int)pvVar3,pcVar9);
      }
      local_4 = 0xffffffff;
      if (local_c0 == (int *)0x0) {
        ExceptionList = local_c;
        return 2;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_c0);
    }
  }
  else {
    pcVar9 = "Player cardPlayed in wrong state! playerid: %d";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar9,param_2);
  }
  (**(code **)(*param_1 + 0x88))();
  ExceptionList = local_c;
  return 0;
}

