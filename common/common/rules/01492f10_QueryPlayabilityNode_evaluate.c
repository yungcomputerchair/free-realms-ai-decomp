// addr: 0x01492f10
// name: QueryPlayabilityNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryPlayabilityNode_evaluate(void * candidateCards, void * log) */

bool QueryPlayabilityNode_evaluate(void *candidateCards,void *log)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  char cVar4;
  void **item;
  void *pvVar5;
  char *pcVar6;
  int *piVar7;
  void *pvVar8;
  int elementId_;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  char *local_110;
  char local_109;
  undefined1 *local_108;
  int *local_104;
  undefined1 auStack_100 [4];
  int *local_fc;
  int *local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [4];
  int *local_ec;
  int *local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [4];
  int *local_dc;
  int *local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [4];
  int *local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  void *local_bc;
  void *local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [4];
  int *piStack_ac;
  undefined1 *puStack_a8;
  void *pvStack_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates a QueryPlayabilityNode by deriving target1 and target2 candidate
                       card lists, using hinting/preconditions when needed, matching
                       companion/possession relationships, and updating candidate cards when valid
                       playable target pairs exist. Evidence is the trace "(gvt
                       QueryPlayabilityNode" and many QPN-specific logs for target lists and valid
                       target discovery. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a23d8;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xfffffee0);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"(gvt QueryPlayabilityNode",item);
  local_cc = (int *)0x0;
  local_c8 = (int *)0x0;
  local_c4 = 0;
  local_ec = (int *)0x0;
  local_e8 = (int *)0x0;
  local_e4 = 0;
  local_4 = 1;
  EvaluationEnvironment_logCardList(log,"QPN initial totalCards: ",candidateCards);
  local_109 = '\0';
  pvVar5 = EvaluationEnvironment_resolveTarget(log);
  if (pvVar5 != (void *)0x0) {
    uVar14 = 0;
    pTVar13 = &Card::RTTI_Type_Descriptor;
    pTVar12 = &PlayElement::RTTI_Type_Descriptor;
    uVar11 = 0;
    pvVar5 = EvaluationEnvironment_resolveTarget(log);
    pcVar6 = (char *)FUN_00d8d382(pvVar5,uVar11,pTVar12,pTVar13,uVar14);
    local_110 = pcVar6;
    if (pcVar6 != (char *)0x0) {
      cVar4 = FUN_01383bb0();
      if (cVar4 != '\0') {
        local_109 = '\x01';
      }
      EvaluationEnvironment_logCardMessage(log,"QPN pushing back target1: ",pcVar6,item);
      PointerVector_pushBack(local_d0,&local_110,item);
      goto LAB_0149300a;
    }
  }
  EvaluationEnvironment_tracef(log,"QPN setting target1list equal to totalcards",item);
  ValueDataList_assign(local_d0,candidateCards);
LAB_0149300a:
  pvVar5 = EvaluationEnvironment_resolveTarget2(log);
  if (pvVar5 == (void *)0x0) {
    cVar4 = Rules_getBooleanKey9DefaultFalse();
    if (cVar4 == '\0') {
      EvaluationEnvironment_ctor();
      local_4._0_1_ = 2;
      EvaluationEnvironment_copyFrom(local_a0,log,item);
      EvaluationEnvironment_setTarget1Return(0);
      EvaluationEnvironment_setTarget2Return(1);
      EvaluationEnvironment_setBooleanKey9(1);
      set_boolean_value_key_17(true);
      local_bc = (void *)0x0;
      local_b8 = (void *)0x0;
      local_b4 = 0;
      local_4 = CONCAT31(local_4._1_3_,3);
      EvaluationEnvironment_tracef(log,"QPN getting Target2 cardlist.",item);
      pvVar5 = EvaluationEnvironment_getPreconditionValue(log);
      if (*(int *)((int)pvVar5 + 4) == 5) {
        EvaluationEnvironment_tracef(log,"checking preconditions from environment.",item);
        puVar15 = local_a0;
        puVar9 = local_c0;
        EvaluationEnvironment_getPreconditionValue(log);
        FUN_012fb470(puVar9,puVar15);
      }
      else {
        piVar7 = EvaluationEnvironment_getOriginCard(log);
        (**(code **)(*piVar7 + 0xe0))(local_c0,local_a0);
      }
      pvVar5 = EvaluationEnvironment_getTarget2CardList(local_a0);
      ValueDataList_assign(local_f0,pvVar5);
      EvaluationEnvironment_tracef(log,"QPN got new Target2 cardlist from hinting",item);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_bc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_bc);
      }
      local_bc = (void *)0x0;
      local_b8 = (void *)0x0;
      local_b4 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_01385460();
    }
    else {
      EvaluationEnvironment_tracef(log,"QPN setting the target2 card list from environment",item);
      pvVar5 = EvaluationEnvironment_getTarget2CardList(log);
      ValueDataList_assign(local_f0,pvVar5);
    }
  }
  else {
    uVar14 = 0;
    pTVar13 = &Card::RTTI_Type_Descriptor;
    pTVar12 = &PlayElement::RTTI_Type_Descriptor;
    uVar11 = 0;
    pvVar5 = EvaluationEnvironment_resolveTarget2(log);
    local_110 = (char *)FUN_00d8d382(pvVar5,uVar11,pTVar12,pTVar13,uVar14);
    if (local_110 != (char *)0x0) {
      EvaluationEnvironment_logCardMessage(log,"QPN pushing back target2: ",local_110,item);
      PointerVector_pushBack(local_f0,&local_110,item);
    }
  }
  EvaluationEnvironment_logCardList(log,"QPN starting target1List: ",local_d0);
  EvaluationEnvironment_logCardList(log,"QPN starting target2List: ",local_f0);
  piVar7 = local_cc;
  local_dc = (int *)0x0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_fc = (int *)0x0;
  local_f8 = (int *)0x0;
  local_f4 = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),5);
  if ((((local_cc == (int *)0x0) || ((int)local_c8 - (int)local_cc >> 2 == 0)) ||
      (local_ec == (int *)0x0)) || ((int)local_e8 - (int)local_ec >> 2 == 0)) {
    EvaluationEnvironment_tracef(log,"QPN either target1 or target2 has no valid targets",item);
    pvVar5 = *(void **)((int)candidateCards + 8);
    if (pvVar5 < *(void **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    pvVar8 = *(void **)((int)candidateCards + 4);
    if (*(void **)((int)candidateCards + 8) < pvVar8) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator
              (candidateCards,local_b0,candidateCards,pvVar8,candidateCards,pvVar5,item);
    EvaluationEnvironment_traceExitf(log,") => false",item);
  }
  else {
    if (local_c8 < local_cc) {
      FUN_00d83c2d();
    }
    local_108 = local_d0;
    while( true ) {
      piVar10 = local_c8;
      local_104 = piVar7;
      if (local_c8 < local_cc) {
        FUN_00d83c2d();
      }
      if ((local_108 == (undefined1 *)0x0) || (local_108 != local_d0)) {
        FUN_00d83c2d();
      }
      if (piVar7 == piVar10) break;
      if (local_108 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)(local_108 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      if (*(int *)(*piVar7 + 100) != 0) {
        local_bc = (void *)0x0;
        local_b8 = (void *)0x0;
        local_b4 = 0;
        local_4._0_1_ = 6;
        EvaluationEnvironment_ctor();
        local_4 = CONCAT31(local_4._1_3_,7);
        pvVar5 = EvaluationEnvironment_getGame(log);
        EvaluationEnvironment_setGame(pvVar5);
        set_boolean_value_key_17(true);
        if (*(int **)(local_108 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        iVar1 = *(int *)*piVar7;
        puVar9 = local_a0;
        pvVar5 = EvaluationEnvironment_getMember14(log);
        (**(code **)(iVar1 + 0xe8))(local_c0,pvVar5,puVar9);
        pvVar5 = local_bc;
        if ((local_bc != (void *)0x0) && ((int)local_b8 - (int)local_bc >> 2 != 0)) {
          if (local_b8 < local_bc) {
            FUN_00d83c2d();
          }
          puVar9 = local_c0;
          puStack_a8 = puVar9;
          while( true ) {
            pvVar8 = local_b8;
            pvStack_a4 = pvVar5;
            if (local_b8 < local_bc) {
              FUN_00d83c2d();
            }
            if ((puVar9 == (undefined1 *)0x0) || (puVar9 != local_c0)) {
              FUN_00d83c2d();
            }
            if (pvVar5 == pvVar8) break;
            if (puVar9 == (undefined1 *)0x0) {
              FUN_00d83c2d();
            }
            if (*(void **)(puVar9 + 8) <= pvVar5) {
              FUN_00d83c2d();
            }
            uVar14 = 0;
            pTVar13 = &Card::RTTI_Type_Descriptor;
            pTVar12 = &PlayElement::RTTI_Type_Descriptor;
            uVar11 = 0;
            pvVar5 = EvaluationEnvironment_getGame(log);
            pvVar5 = find_play_element_in_maps(pvVar5,elementId_);
            pcVar6 = (char *)FUN_00d8d382(pvVar5,uVar11,pTVar12,pTVar13,uVar14);
            piVar7 = local_e8;
            local_110 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              if (local_e8 < local_ec) {
                FUN_00d83c2d();
              }
              piVar10 = local_ec;
              if (local_e8 < local_ec) {
                FUN_00d83c2d();
              }
              piVar3 = local_e8;
              piStack_ac = piVar10;
              for (; (piVar10 != piVar7 && ((char *)*piVar10 != pcVar6)); piVar10 = piVar10 + 1) {
              }
              if (local_e8 < local_ec) {
                FUN_00d83c2d();
              }
              if (&stack0x00000000 == (undefined1 *)0xf0) {
                FUN_00d83c2d();
              }
              if (piVar10 != piVar3) {
                if (*(int **)(local_108 + 8) <= local_104) {
                  FUN_00d83c2d();
                }
                piVar7 = local_104;
                EvaluationEnvironment_logCardMessage
                          (log,"QPN Found possession with matching companion: ",(char *)*local_104,
                           item);
                EvaluationEnvironment_logCardMessage(log,"QPN companion found: ",local_110,item);
                if (*(int **)(local_108 + 8) <= piVar7) {
                  FUN_00d83c2d();
                }
                piVar7 = local_d8;
                if (local_d8 < local_dc) {
                  FUN_00d83c2d();
                }
                piVar10 = local_dc;
                if (local_d8 < local_dc) {
                  FUN_00d83c2d();
                }
                piVar3 = local_d8;
                piStack_ac = piVar10;
                if (piVar10 != piVar7) {
                  do {
                    if (*piVar10 == *local_104) break;
                    piVar10 = piVar10 + 1;
                  } while (piVar10 != piVar7);
                }
                if (local_d8 < local_dc) {
                  FUN_00d83c2d();
                }
                if (&stack0x00000000 == (undefined1 *)0xe0) {
                  FUN_00d83c2d();
                }
                if (piVar10 == piVar3) {
                  EvaluationEnvironment_tracef
                            (log,"QPN Possession is not a dupe, adding to validTargets1List",item);
                  piVar7 = local_104;
                  if (*(int **)(local_108 + 8) <= local_104) {
                    FUN_00d83c2d();
                  }
                  PointerVector_pushBack(auStack_e0,piVar7,item);
                }
                piVar7 = local_f8;
                if (local_f8 < local_fc) {
                  FUN_00d83c2d();
                }
                piVar10 = local_fc;
                if (local_f8 < local_fc) {
                  FUN_00d83c2d();
                }
                piVar3 = local_f8;
                piStack_ac = piVar10;
                for (; (piVar10 != piVar7 && ((char *)*piVar10 != local_110)); piVar10 = piVar10 + 1
                    ) {
                }
                if (local_f8 < local_fc) {
                  FUN_00d83c2d();
                }
                if (&stack0x00000000 == &DAT_00000100) {
                  FUN_00d83c2d();
                }
                if (piVar10 == piVar3) {
                  EvaluationEnvironment_tracef
                            (log,"QPN Companion is not a dupe, adding to validTargets2List",item);
                  PointerVector_pushBack(auStack_100,&local_110,item);
                }
              }
            }
            pvVar5 = pvStack_a4;
            puVar9 = puStack_a8;
            if (*(void **)(puStack_a8 + 8) <= pvStack_a4) {
              FUN_00d83c2d();
            }
            pvVar5 = (void *)((int)pvVar5 + 4);
          }
        }
        local_4._0_1_ = 6;
        FUN_01385460();
        local_4 = CONCAT31(local_4._1_3_,5);
        if (local_bc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc);
        }
        local_bc = (void *)0x0;
        local_b8 = (void *)0x0;
        local_b4 = 0;
        piVar7 = local_104;
      }
      if (*(int **)(local_108 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 1;
    }
    if (local_109 == '\0') {
      puVar9 = auStack_e0;
    }
    else {
      EvaluationEnvironment_tracef(log,"QPN setting totalCards equal to validTarget2List",item);
      puVar9 = auStack_100;
    }
    ValueDataList_assign(candidateCards,puVar9);
    PointerVector_assign(log,auStack_100,item);
    if (((local_dc != (int *)0x0) && ((int)local_d8 - (int)local_dc >> 2 != 0)) &&
       ((local_fc != (int *)0x0 && ((int)local_f8 - (int)local_fc >> 2 != 0)))) {
      EvaluationEnvironment_logCardList(log,"QPN Target1\'s found: ",auStack_e0);
      EvaluationEnvironment_logCardList(log,"QPN Target2\'s found: ",auStack_100);
      EvaluationEnvironment_traceExitf(log,") => true",item);
      local_4 = CONCAT31(local_4._1_3_,4);
      if (local_fc != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_fc);
      }
      local_fc = (int *)0x0;
      local_f8 = (int *)0x0;
      local_f4 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_dc != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_dc);
      }
      local_dc = (int *)0x0;
      local_d8 = (int *)0x0;
      local_d4 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_ec != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_ec = (int *)0x0;
      local_e8 = (int *)0x0;
      local_e4 = 0;
      local_4 = 0xffffffff;
      if (local_cc == (int *)0x0) {
        ExceptionList = local_c;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    pvVar5 = *(void **)((int)candidateCards + 8);
    if (pvVar5 < *(void **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    pvVar8 = *(void **)((int)candidateCards + 4);
    if (*(void **)((int)candidateCards + 8) < pvVar8) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator
              (candidateCards,local_b0,candidateCards,pvVar8,candidateCards,pvVar5,item);
    pvVar8 = EvaluationEnvironment_getMember3c(log);
    pvVar5 = *(void **)((int)pvVar8 + 8);
    if (pvVar5 < *(void **)((int)pvVar8 + 4)) {
      FUN_00d83c2d();
    }
    pvVar2 = *(void **)((int)pvVar8 + 4);
    if (*(void **)((int)pvVar8 + 8) < pvVar2) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator(pvVar8,local_b0,pvVar8,pvVar2,pvVar8,pvVar5,item);
    pvVar8 = EvaluationEnvironment_getTarget2CardList(log);
    pvVar5 = *(void **)((int)pvVar8 + 8);
    if (pvVar5 < *(void **)((int)pvVar8 + 4)) {
      FUN_00d83c2d();
    }
    pvVar2 = *(void **)((int)pvVar8 + 4);
    if (*(void **)((int)pvVar8 + 8) < pvVar2) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator(pvVar8,local_b0,pvVar8,pvVar2,pvVar8,pvVar5,item);
    pvVar5 = *(void **)((int)candidateCards + 8);
    if (pvVar5 < *(void **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    pvVar8 = *(void **)((int)candidateCards + 4);
    if (*(void **)((int)candidateCards + 8) < pvVar8) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator
              (candidateCards,local_b0,candidateCards,pvVar8,candidateCards,pvVar5,item);
    pvVar5 = log;
    EvaluationEnvironment_tracef(log,"QPN was unable to find valid targets",item);
    EvaluationEnvironment_traceExitf(log,") => false",pvVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_fc != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = (int *)0x0;
  local_f8 = (int *)0x0;
  local_f4 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_dc != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_dc);
  }
  local_dc = (int *)0x0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_ec != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  local_ec = (int *)0x0;
  local_e8 = (int *)0x0;
  local_e4 = 0;
  local_4 = 0xffffffff;
  if (local_cc == (int *)0x0) {
    ExceptionList = local_c;
    return false;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_cc);
}

