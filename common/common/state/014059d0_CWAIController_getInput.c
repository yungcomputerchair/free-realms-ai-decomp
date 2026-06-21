// addr: 0x014059d0
// name: CWAIController_getInput
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01405bcf) */

bool __fastcall CWAIController_getInput(void *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *local_4c;
  uint local_48;
  undefined1 local_38 [4];
  uint local_34;
  uint local_30;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* Implements the operation identified by referenced string
                       'CWAIController::getInput waitForUser'. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_01691358;
  local_14 = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  CWAIController_debugLog(param_1,"CWAIController::getInput",uVar3);
  pvVar4 = Game_getCurrentTurn(*(void **)((int)param_1 + 0x10));
  uVar5 = get_field_14(pvVar4);
  pvVar4 = param_1;
  CWAIController_debugLog(param_1,"turn: %d",uVar5);
  Game_logGeneral(*(void **)((int)param_1 + 0x10),"CWAIController::getInput",pvVar4);
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    if (*(int *)((int)param_1 + 8) == 1) {
      bVar1 = CWAIController_handleScript(param_1);
      ExceptionList = local_14;
      return bVar1;
    }
    if ((*(void **)((int)param_1 + 0x10) != (void *)0x0) &&
       (bVar1 = unknown_getGameGuardFlag(*(void **)((int)param_1 + 0x10)), !bVar1)) {
      pvVar4 = Game_getCurrentTurn(*(void **)((int)param_1 + 0x10));
      GameTurn_getCurrentStateMachine(pvVar4);
      iVar6 = StateMachine_getCurrentState();
      if (iVar6 != 0) {
        pvVar4 = (void *)FUN_00d8d382(iVar6,0,&StateMachineState::RTTI_Type_Descriptor,
                                      &GetTargetState::RTTI_Type_Descriptor,0);
        if (pvVar4 != (void *)0x0) {
          compare_field_18(pvVar4,local_38);
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_c = 1;
          FUN_0041f3a1(&local_4c);
          while( true ) {
            uVar3 = local_30;
            if (local_30 < local_34) {
              FUN_00d83c2d();
            }
            if ((local_4c == (undefined1 *)0x0) || (local_4c != local_38)) {
              FUN_00d83c2d();
            }
            if (local_48 == uVar3) break;
            pvVar4 = *(void **)((int)param_1 + 0x10);
            piVar7 = (int *)FUN_01240910();
            piVar7 = find_play_element_in_maps(pvVar4,*piVar7);
            (**(code **)(*piVar7 + 0x15c))(0x22971,0);
            FUN_012fa910();
            local_14 = (void *)CONCAT31(local_14._1_3_,2);
            cVar2 = (**(code **)(*piVar7 + 4))(0x2298d,&local_4c);
            if ((cVar2 != '\0') && (iVar8 = FUN_0123c340(), iVar8 == 1)) {
              uVar9 = FUN_01240910();
              FUN_0042c155(uVar9);
            }
            local_c = CONCAT31(local_c._1_3_,1);
            FUN_01300cd0();
            FUN_01240940();
          }
          iVar8 = CardFormula_selectRandomCounterCard(local_38);
          if (iVar8 != 0) {
            piVar7 = *(int **)((int)param_1 + 0x10);
            iVar8 = *piVar7;
            uVar9 = PlayElement_getId(0,0);
            uVar9 = (**(code **)(*piVar7 + 0x228))(uVar9);
            cVar2 = (**(code **)(iVar8 + 0xd0))(uVar9);
            if (cVar2 != '\0') {
              local_c = local_c & 0xffffff00;
              StdVector_clearStorage(auStack_28);
              local_c = 0xffffffff;
              StdVector_clearStorage(local_38);
              ExceptionList = local_14;
              return true;
            }
          }
          local_c = local_c & 0xffffff00;
          StdVector_clearStorage(auStack_28);
          local_c = 0xffffffff;
          StdVector_clearStorage(local_38);
        }
        piVar7 = (int *)FUN_00d8d382(iVar6,0,&StateMachineState::RTTI_Type_Descriptor,
                                     &CustomChoiceDialogState::RTTI_Type_Descriptor,0);
        if (piVar7 != (int *)0x0) {
          pvVar4 = (void *)(**(code **)(*piVar7 + 0x11c))();
          pvVar4 = EvaluationEnvironment_getOriginCard(pvVar4);
          cVar2 = FUN_01404e80(pvVar4);
          cVar2 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0xe4))
                            (*(undefined4 *)((int)param_1 + 0xc),cVar2 != '\0',0);
          if (cVar2 != '\0') {
            ExceptionList = local_14;
            return true;
          }
        }
      }
      (**(code **)(**(int **)((int)param_1 + 0x10) + 0xe4))(*(undefined4 *)((int)param_1 + 0xc),1,0)
      ;
    }
  }
  else {
    pvVar4 = param_1;
    CWAIController_debugLog(param_1,"CWAIController::getInput waitForUser",uVar3);
    Game_logGeneral(*(void **)((int)param_1 + 0x10),"CWAIController::getInput waitForUser",pvVar4);
  }
  ExceptionList = local_14;
  return true;
}

