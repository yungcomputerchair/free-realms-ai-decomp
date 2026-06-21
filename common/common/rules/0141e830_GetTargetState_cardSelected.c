// addr: 0x0141e830
// name: GetTargetState_cardSelected
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GetTargetState_cardSelected(int *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  void **item;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  int *piVar9;
  int *this;
  undefined4 *puVar10;
  int extraout_EDX;
  int actionId_;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 auStack_e4 [4];
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  void *pvStack_d4;
  undefined4 *puStack_d0;
  void *pvStack_cc;
  undefined1 auStack_c8 [4];
  void *pvStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *apuStack_b8 [3];
  void *pvStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Handles card selection in GetTargetState, validating
                       costs/targets/preconditions and queuing command objects or canceling. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016941a8;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff08);
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x4c))();
  pvVar6 = (void *)StateMachineState_getCurrentTurn();
  pvVar6 = (void *)PlayerRef_getPlayerIdOrZero(pvVar6);
  pcVar1 = *(code **)(*param_1 + 0xb8);
  param_1[0x38] = (int)pvVar6;
  pvStack_cc = pvVar6;
  uVar7 = (*pcVar1)();
  pvVar8 = (void *)StateMachineState_getGame();
  piVar9 = PlayArea_findPlayerElementById(pvVar8,(int)pvVar6);
  puStack_d0 = (undefined4 *)(**(code **)(*param_1 + 0xc0))();
  uVar11 = StateMachineState_getGame(uVar7);
  pvVar6 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  if ((pvVar6 == (void *)0x0) && ((char)param_1[0x3e] == '\0')) {
    pcVar12 = "No such play element %d.";
  }
  else {
    uVar11 = FUN_00d8d382(pvVar6,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
    ;
    actionId_ = (int)((ulonglong)uVar11 >> 0x20);
    this = (int *)uVar11;
    if ((this != (int *)0x0) || ((char)param_1[0x3e] != '\0')) {
      if (*(char *)((int)param_1 + 0x121) != '\0') {
        GetTargetState_enterState(param_1);
        actionId_ = extraout_EDX;
      }
      puStack_e0 = (undefined4 *)0x0;
      puStack_dc = (undefined4 *)0x0;
      uStack_d8 = 0;
      iStack_4 = 0;
      if ((char)param_1[0x3e] == '\0') {
        if ((this == (int *)0x0) ||
           (pvStack_d4 = Card_getActionByID(this,actionId_), pvStack_d4 == (void *)0x0)) {
          cVar5 = (**(code **)(*piVar9 + 0x74))(this,auStack_e4,param_1[0x3a]);
        }
        else {
          cVar5 = (**(code **)(*piVar9 + 0x70))(this,auStack_e4,pvStack_d4,param_1[0x3a]);
          EvaluationEnvironment_ctor();
          iStack_4 = CONCAT31(iStack_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,(void *)param_1[0x3a],item);
          puStack_d0 = puStack_dc;
          if (puStack_dc < puStack_e0) {
            FUN_00d83c2d();
          }
          puVar10 = puStack_e0;
          pvStack_c4 = (void *)0x0;
          uStack_c0 = 0;
          uStack_bc = 0;
          iStack_4 = CONCAT31(iStack_4._1_3_,2);
          if (puStack_dc < puStack_e0) {
            FUN_00d83c2d();
          }
          apuStack_b8[0] = auStack_e4;
          while( true ) {
            puVar2 = apuStack_b8[0];
            if ((apuStack_b8[0] == (undefined1 *)0x0) || (apuStack_b8[0] != auStack_e4)) {
              FUN_00d83c2d();
            }
            if (puVar10 == puStack_d0) break;
            if (puVar2 == (undefined1 *)0x0) {
              FUN_00d83c2d();
            }
            if (*(undefined4 **)(puVar2 + 8) <= puVar10) {
              FUN_00d83c2d();
            }
            pcVar12 = (char *)*puVar10;
            cVar3 = FUN_01383ba0();
            if (cVar3 == '\0') {
              EvaluationEnvironment_setPlayElementId(pcVar12);
            }
            else {
              EvaluationEnvironment_setCurrentTargetFromElement(auStack_a0,pcVar12,item);
            }
            EvaluationEnvironment_logCardMessage
                      ((void *)param_1[0x3a],"Checking Costs versus card: ",pcVar12,item);
            (**(code **)(*this + 0xf4))(pvStack_d4,auStack_a0);
            EvaluationEnvironment_addCommandObjectChecked(apuStack_b8);
            local_c = (void *)CONCAT31(local_c._1_3_,3);
            cVar3 = (**(code **)(*this + 500))(&uStack_a8,apuStack_b8);
            if (cVar3 == '\0') {
              EvaluationEnvironment_tracef
                        ((void *)param_1[0x3a],"command object preconditions failed.",item);
            }
            else {
              EvaluationEnvironment_logCardMessage
                        ((void *)param_1[0x3a],"Card passed cost validation: ",pcVar12,item);
              if (*(undefined4 **)(apuStack_b8[0] + 8) <= puVar10) {
                FUN_00d83c2d();
              }
              PointerVector_pushBack(auStack_c8,puVar10,item);
            }
            CommandObjectVector_clear(auStack_a0);
            iStack_4 = CONCAT31(iStack_4._1_3_,2);
            if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_ac);
            }
            pvStack_ac = (void *)0x0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            if (*(undefined4 **)(apuStack_b8[0] + 8) <= puVar10) {
              FUN_00d83c2d();
            }
            puVar10 = puVar10 + 1;
          }
          ValueDataList_assign(auStack_e4,auStack_c8);
          iStack_4 = CONCAT31(iStack_4._1_3_,1);
          if (pvStack_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_c4);
          }
          pvStack_c4 = (void *)0x0;
          uStack_c0 = 0;
          uStack_bc = 0;
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_01385460();
        }
        if (cVar5 == '\0') {
          uVar7 = StateMachineState_getGame("validTargets failed in GetTargetState");
          Game_logGeneralFormatted(uVar7);
        }
      }
      else {
        ValueDataList_assign(auStack_e4,param_1 + 0x3f);
      }
      if (((puStack_e0 != (undefined4 *)0x0) && ((int)puStack_dc - (int)puStack_e0 >> 2 != 0)) ||
         ((char)param_1[0x43] != '\0')) {
        ValueDataList_assign(param_1 + 0x3f,auStack_e4);
        GetTargetState_stateSpecificMessage(auStack_e4);
        iStack_4 = 0xffffffff;
        if (puStack_e0 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return 2;
        }
                    /* WARNING: Subroutine does not return */
        _free(puStack_e0);
      }
      uVar7 = StateMachineState_getGame("no valid targets, canceling gettarget");
      Game_logGeneralFormatted(uVar7);
      FUN_0145c9e0((void *)param_1[1],'\x01');
      pvStack_d4 = Mem_Alloc(0x18);
      iStack_4._0_1_ = 4;
      if (pvStack_d4 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = ReturnValueMap_ctor();
      }
      pvVar6 = pvStack_cc;
      iStack_4._0_1_ = 0;
      ReturnValueMap_setInteger(4,pvStack_cc);
      ReturnValueMap_setInteger(param_1[0x4e],0);
      StateMachine_pushPendingState(uVar7);
      (**(code **)(*param_1 + 0x88))();
      pvVar8 = (void *)StateMachineState_getGame();
      bVar4 = Game_getFlag_14d(pvVar8);
      if ((bVar4) && (cVar5 = EvaluationEnvironment_setTraceIndentAction(), cVar5 != '\0')) {
        pvVar8 = Mem_Alloc(0x28);
        iStack_4._0_1_ = 5;
        pvStack_cc = pvVar8;
        if (pvVar8 == (void *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar10 = (undefined4 *)StateMachineState_getGame();
          puVar10 = GameCommand_ForceEndGetTarget_ctor(pvVar8,puVar10,item);
        }
        iStack_4._0_1_ = 0;
        StateMachineState_getGame();
        pvVar8 = (void *)FUN_01347a90();
        GetTargetState_setChosenTargetId(puVar10,pvVar8,(int)item);
        pvVar8 = (void *)StateMachineState_getGame();
        Game_broadcastCallbackResultExceptPlayer(pvVar8,(int)pvVar6,puVar10);
      }
      uVar7 = StateMachineState_resumePreviousWaitState();
      iStack_4 = 0xffffffff;
      if (puStack_e0 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_e0);
    }
    pcVar12 = "Play element %d not a card.";
  }
  uVar7 = StateMachineState_getGame(pcVar12,uVar7);
  Game_logGeneralFormatted(uVar7);
  ExceptionList = local_c;
  return 0;
}

