// addr: 0x0140f310
// name: Card_getAvailableActions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall Card_getAvailableActions(int *param_1,int param_2,void *param_3)

{
  int value_;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *extraout_EAX;
  int *extraout_EAX_00;
  int *extraout_EAX_01;
  int *piVar11;
  undefined4 *puVar12;
  int unaff_retaddr;
  int **sourceEnv;
  int *piStack_1c0;
  int *piStack_1b8;
  int *piStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a4;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  uint uStack_194;
  int iStack_190;
  uint uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  uint uStack_180;
  int *piStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [152];
  undefined1 local_a0 [144];
  void *pvStack_10;
  void *local_c;
  int iStack_8;
  undefined4 local_4;
  
                    /* Computes available actions for a card in an EvaluationEnvironment, checking
                       basic preconditions/event-phase match and pushing accepted actions; recurses
                       through nested/action sources as needed. */
  local_4 = 0xffffffff;
  iStack_8._0_1_ = 0x9c;
  iStack_8._1_3_ = 0x16923;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xfffffe28);
  local_4 = 0;
  EvaluationEnvironment_setGame(param_1[0xc]);
  EvaluationEnvironment_setBooleanKey4(0);
  set_play_element_id_field(local_a0,param_1);
  iVar6 = (**(code **)(*param_1 + 0x28))();
  pvVar7 = (void *)FUN_01340340();
  pvVar7 = PlayArea_findPlayerElementById(pvVar7,iVar6);
  FUN_013815b0(pvVar7);
  piStack_1b4 = (int *)0x0;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  sourceEnv = &piStack_1b8;
  cVar4 = (**(code **)(*param_1 + 0x78))();
  if (cVar4 == '\0') {
    Game_logGeneralFormatted
              (param_1[0xc],"couldn\'t get available actions in card.getAvailableActions");
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_1b8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_1b8);
    }
    piStack_1b8 = (int *)0x0;
    piStack_1b4 = (int *)0x0;
    uStack_1b0 = 0;
    iStack_8 = 0xffffffff;
    FUN_01385460();
    uVar9 = 0;
  }
  else {
    uVar5 = Rules_getBooleanKey9DefaultFalse();
    uStack_188 = CONCAT31(uStack_188._1_3_,uVar5);
    EvaluationEnvironment_setBooleanKey9(1);
    piStack_17c = piStack_1b4;
    if (piStack_1b4 < piStack_1b8) {
      FUN_00d83c2d();
    }
    piStack_1c0 = piStack_1b8;
    if (piStack_1b4 < piStack_1b8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1bc) {
        FUN_00d83c2d();
      }
      if (piStack_1c0 == piStack_17c) break;
      if (&stack0x00000000 == (undefined1 *)0x1bc) {
        FUN_00d83c2d();
      }
      if (piStack_1b4 <= piStack_1c0) {
        FUN_00d83c2d();
      }
      iVar6 = *piStack_1c0;
      if (piStack_1b4 <= piStack_1c0) {
        FUN_00d83c2d();
      }
      value_ = piStack_1c0[1];
      iStack_19c = value_;
      if ((iVar6 != 0) && (cVar4 = CommandObject_setActionReturnKey5(), cVar4 != '\x01')) {
        iVar8 = FUN_01321f20();
        if (iVar8 == 0) {
          piVar11 = *(int **)(param_2 + 8);
          iStack_158 = iVar6;
          iStack_154 = value_;
          if (piVar11 < *(int **)(param_2 + 4)) {
            FUN_00d83c2d();
          }
          piVar1 = *(int **)(param_2 + 4);
          if (*(int **)(param_2 + 8) < piVar1) {
            FUN_00d83c2d();
          }
          PairIterator_findPair(&uStack_1ac,param_2,piVar1,(int *)param_2,piVar11);
          uVar2 = *(uint *)(param_2 + 8);
          iStack_190 = *extraout_EAX_01;
          uStack_18c = extraout_EAX_01[1];
          if (uVar2 < *(uint *)(param_2 + 4)) {
            FUN_00d83c2d();
          }
          if ((iStack_190 == 0) || (iStack_190 != param_2)) {
            FUN_00d83c2d();
          }
          if (uStack_18c == uVar2) {
            iStack_16c = iStack_19c;
            iStack_170 = iVar6;
            FUN_01395880(&iStack_170);
          }
        }
        else {
          EvaluationEnvironment_ctor();
          iStack_8 = CONCAT31(iStack_8._1_3_,2);
          EvaluationEnvironment_copyFrom(auStack_138,param_3,sourceEnv);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setActionReturn(iVar6);
          EvaluationEnvironment_setBooleanKey4(0);
          iVar8 = PlayElement_getId();
          if (iVar8 != value_) {
            set_integer_value_for_key(0x38,value_);
            Game_logGeneral((void *)param_1[0xc],"Action is from %d",value_);
          }
          FUN_01383010();
          FUN_01383050();
          FUN_013815d0();
          pvVar7 = Game_getCurrentTurn((void *)param_1[0xc]);
          GameTurn_getCurrentStateMachine(pvVar7);
          uVar9 = StateMachine_getCurrentState();
          uVar10 = PlayElement_getId();
          uVar10 = FUN_01321f20(uVar10);
          uVar10 = PackedActionId_getLow12Bits(uVar10);
          uVar10 = FUN_01321f20(uVar10);
          uVar10 = PackedActionId_getHighBits(uVar10);
          Game_logGeneral((void *)param_1[0xc],
                          "Getting available actions .. checking action %d (%d) on card %d",uVar10);
          iVar8 = FUN_00d8d382(uVar9,0,&StateMachineState::RTTI_Type_Descriptor,
                               &PlaySingleCardState::RTTI_Type_Descriptor,0);
          if (iVar8 == 0) {
            cVar4 = RuleMatcher_checkEventPhaseAndPlayState(param_1,auStack_138);
            if (cVar4 == '\0') {
              Game_logGeneral((void *)param_1[0xc],"basicprecondions failed.",sourceEnv);
              iStack_8._0_1_ = 1;
              FUN_01385460();
              goto LAB_0140f8a3;
            }
          }
          else {
            set_boolean_value_key_18(true);
            FUN_01381350(0);
            set_boolean_value_key_17(true);
          }
          cVar4 = (**(code **)(*param_1 + 0xdc))(iVar6,auStack_138,1);
          if (cVar4 == '\0') {
            piVar11 = *(int **)(param_2 + 8);
            iStack_168 = iVar6;
            iStack_164 = value_;
            if (piVar11 < *(int **)(param_2 + 4)) {
              FUN_00d83c2d();
            }
            piVar1 = *(int **)(param_2 + 4);
            if (*(int **)(param_2 + 8) < piVar1) {
              FUN_00d83c2d();
            }
            PairIterator_findPair(auStack_148,param_2,piVar1,(int *)param_2,piVar11);
            iStack_184 = *extraout_EAX_00;
            uStack_180 = extraout_EAX_00[1];
            uVar2 = *(uint *)(param_2 + 8);
            if (uVar2 < *(uint *)(param_2 + 4)) {
              FUN_00d83c2d();
            }
            if ((iStack_184 == 0) || (iStack_184 != param_2)) {
              FUN_00d83c2d();
            }
            if (uStack_180 == uVar2) {
              piVar11 = &iStack_160;
              iStack_160 = iVar6;
              iStack_15c = value_;
              goto LAB_0140f7e2;
            }
          }
          else {
            piVar11 = *(int **)(unaff_retaddr + 8);
            iStack_150 = iVar6;
            iStack_14c = value_;
            if (piVar11 < *(int **)(unaff_retaddr + 4)) {
              FUN_00d83c2d();
            }
            piVar1 = *(int **)(unaff_retaddr + 4);
            if (*(int **)(unaff_retaddr + 8) < piVar1) {
              FUN_00d83c2d();
            }
            PairIterator_findPair(auStack_140,unaff_retaddr,piVar1,(int *)unaff_retaddr,piVar11);
            iStack_198 = *extraout_EAX;
            uStack_194 = extraout_EAX[1];
            uVar2 = *(uint *)(unaff_retaddr + 8);
            if (uVar2 < *(uint *)(unaff_retaddr + 4)) {
              FUN_00d83c2d();
            }
            if ((iStack_198 == 0) || (iStack_198 != unaff_retaddr)) {
              FUN_00d83c2d();
            }
            if (uStack_194 == uVar2) {
              piVar11 = &iStack_178;
              iStack_174 = iStack_19c;
              iStack_178 = iVar6;
LAB_0140f7e2:
              FUN_01395880(piVar11);
            }
          }
          Game_logGeneral((void *)param_1[0xc],"(Done)",sourceEnv);
          iStack_8._0_1_ = 1;
          FUN_01385460();
        }
      }
LAB_0140f8a3:
      if (piStack_1b4 <= piStack_1c0) {
        FUN_00d83c2d();
      }
      piStack_1c0 = piStack_1c0 + 2;
    }
    EvaluationEnvironment_setBooleanKey9(uStack_188);
    cVar4 = (**(code **)(*param_1 + 0x124))(0x1ae04);
    if (cVar4 != '\0') {
      puStack_1a8 = (undefined4 *)0x0;
      puStack_1a4 = (undefined4 *)0x0;
      uStack_1a0 = 0;
      iStack_8 = CONCAT31(iStack_8._1_3_,3);
      (**(code **)(*param_1 + 0x34))(&uStack_1ac);
      puVar12 = puStack_1a8;
      if (puStack_1a4 < puStack_1a8) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar3 = puStack_1a4;
        if (puStack_1a4 < puStack_1a8) {
          FUN_00d83c2d();
        }
        if (puVar12 == puVar3) break;
        if (puStack_1a4 <= puVar12) {
          FUN_00d83c2d();
        }
        piVar11 = (int *)FUN_00d8d382(*puVar12,0,&Card::RTTI_Type_Descriptor,
                                      &CWCard::RTTI_Type_Descriptor,0);
        if ((piVar11 != (int *)0x0) &&
           ((cVar4 = (**(code **)(*piVar11 + 0x124))(0x1ae10), cVar4 != '\0' ||
            (cVar4 = (**(code **)(*piVar11 + 0x124))(0x1ae0f), cVar4 != '\0')))) {
          Card_getAvailableActions(unaff_retaddr,param_2,param_3);
        }
        if (puStack_1a4 <= puVar12) {
          FUN_00d83c2d();
        }
        puVar12 = puVar12 + 1;
      }
      iStack_8._0_1_ = 1;
      if (puStack_1a8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_1a8);
      }
      puStack_1a8 = (undefined4 *)0x0;
      puStack_1a4 = (undefined4 *)0x0;
      uStack_1a0 = 0;
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_1b8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_1b8);
    }
    piStack_1b8 = (int *)0x0;
    piStack_1b4 = (int *)0x0;
    uStack_1b0 = 0;
    iStack_8 = 0xffffffff;
    FUN_01385460();
    uVar9 = 1;
  }
  ExceptionList = pvStack_10;
  return uVar9;
}

