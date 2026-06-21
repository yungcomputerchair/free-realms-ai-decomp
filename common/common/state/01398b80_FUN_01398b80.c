// addr: 0x01398b80
// name: FUN_01398b80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01398b80(int *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  void *this;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int **sourceEnv;
  int *local_c4;
  int *local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined1 *puStack_ac;
  undefined1 auStack_a4 [148];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Small helper/dispatcher using calls: FUN_01385460; 00d82463;
                       EvaluationEnvironment_copyFrom; FUN_01387f70; FUN_01383050; FUN_01322230. No
                       class-identifying evidence is present. */
  puStack_8 = &LAB_01684a86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_c0 = (int *)0x0;
  local_bc = 0;
  local_b8 = 0;
  local_4 = 0;
  sourceEnv = &local_c4;
  cVar2 = (**(code **)(*param_1 + 200))(sourceEnv,DAT_01b839d8 ^ (uint)&stack0xffffff2c);
  if (cVar2 == '\0') {
    Game_logGeneralFormatted
              (param_1[0xc],"couldn\'t get available actions in card.getAvailableActions");
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_c4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    uVar5 = 0;
  }
  else {
    uVar3 = Rules_getBooleanKey9DefaultFalse();
    uStack_b4 = CONCAT31(uStack_b4._1_3_,uVar3);
    EvaluationEnvironment_setBooleanKey9(1);
    piStack_b0 = local_c0;
    if (local_c0 < local_c4) {
      FUN_00d83c2d();
    }
    piVar7 = local_c4;
    if (local_c0 < local_c4) {
      FUN_00d83c2d();
    }
    puVar8 = &stack0xffffff38;
    puStack_ac = puVar8;
    while( true ) {
      if ((puVar8 == (undefined1 *)0x0) || (puVar8 != &stack0xffffff38)) {
        FUN_00d83c2d();
      }
      if (piVar7 == piStack_b0) break;
      if (puVar8 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(puVar8 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      iVar1 = *piVar7;
      local_b8 = iVar1;
      if ((iVar1 != 0) && (cVar2 = CommandObject_setActionReturnKey5(), cVar2 != '\x01')) {
        iVar4 = FUN_01321f20();
        if (iVar4 == 0) {
          FUN_0137e030(&local_b8);
        }
        else {
          EvaluationEnvironment_ctor();
          puStack_8._0_1_ = 1;
          EvaluationEnvironment_copyFrom(auStack_a4,param_3,sourceEnv);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setActionReturn(iVar1);
          EvaluationEnvironment_setBooleanKey4(0);
          FUN_01383010();
          FUN_01383050();
          FUN_013815d0();
          this = Game_getCurrentTurn((void *)param_1[0xc]);
          GameTurn_getCurrentStateMachine(this);
          uVar5 = StateMachine_getCurrentState();
          uVar6 = PlayElement_getId();
          uVar6 = FUN_01321f20(uVar6);
          Game_logGeneral((void *)param_1[0xc],
                          "Getting available actions .. checking action %d on card %d",uVar6);
          iVar4 = FUN_00d8d382(uVar5,0,&StateMachineState::RTTI_Type_Descriptor,
                               &PlaySingleCardState::RTTI_Type_Descriptor,0);
          if (iVar4 == 0) {
            cVar2 = RuleMatcher_checkEventPhaseAndPlayState(param_1,auStack_a4);
            if (cVar2 == '\0') {
              Game_logGeneral((void *)param_1[0xc],"basicprecondions failed.",sourceEnv);
              puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
              FUN_01385460();
              puVar8 = puStack_ac;
              goto LAB_01398e30;
            }
          }
          else {
            set_boolean_value_key_18(true);
            FUN_01381350(0);
            set_boolean_value_key_17(true);
          }
          (**(code **)(*param_1 + 0xdc))(iVar1,auStack_a4,1);
          FUN_0137e030(&local_b8);
          Game_logGeneral((void *)param_1[0xc],"(Done)",sourceEnv);
          puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
          FUN_01385460();
          puVar8 = puStack_ac;
        }
      }
LAB_01398e30:
      if (*(int **)(puVar8 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 1;
    }
    EvaluationEnvironment_setBooleanKey9(uStack_b4);
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_c4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c4);
    }
    uVar5 = 1;
  }
  ExceptionList = pvStack_10;
  return uVar5;
}

