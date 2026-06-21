// addr: 0x01455120
// name: CWLastActionQueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWLastActionQueryNode_evaluate(void * this, void * candidateCards, void *
   log) */

bool __thiscall CWLastActionQueryNode_evaluate(void *this,void *candidateCards,void *log)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void **item;
  int extraout_EAX;
  undefined4 extraout_EAX_00;
  int extraout_EAX_01;
  char *pcVar6;
  int *piVar7;
  void *pvVar8;
  int key_;
  int elementId_;
  undefined4 uVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  undefined4 uVar12;
  char *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Evaluates a CWLastActionQueryNode by matching the current event id, resolving
                       event source/target or source-list cards, intersecting matching cards with
                       the candidate list, and falling back to LastActionQueryNode evaluation for
                       ordinary events. Evidence is the exact trace "(gvt:CWLastActionQueryNode" and
                       logs "event %d on env did not match mEvent %d" and "Evaluating SourceList for
                       card:". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bf20;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff98);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"(gvt:CWLastActionQueryNode",item);
  iVar1 = *(int *)((int)this + 0x1c);
  EvaluationEnvironment_emitActionDebugLog(log);
  if (extraout_EAX != iVar1) {
    EvaluationEnvironment_emitActionDebugLog(log);
    pvVar8 = log;
    EvaluationEnvironment_tracef(log,"event %d on env did not match mEvent %d",extraout_EAX_00);
    EvaluationEnvironment_traceExitf(log,") => false",pvVar8);
    ExceptionList = local_c;
    return false;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  bVar3 = false;
  if ((*(int *)((int)candidateCards + 4) != 0) &&
     (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 != 0)) {
    bVar3 = true;
  }
  bVar2 = false;
  EvaluationEnvironment_emitActionDebugLog(log);
  if (extraout_EAX_01 < 0x4d) {
    if ((extraout_EAX_01 != 0x4c) && (extraout_EAX_01 != 0x16)) {
LAB_0145546e:
      bVar3 = LastActionQueryNode_evaluate(this,candidateCards,log);
      if (bVar3) {
        EvaluationEnvironment_traceExitf(log,") => true",item);
        ExceptionList = local_c;
        return true;
      }
LAB_01455253:
      EvaluationEnvironment_traceExitf(log,") => false",item);
      ExceptionList = local_c;
      return false;
    }
    if (*(int *)((int)this + 0x20) == 0) {
      pcVar6 = EvaluationEnvironment_getIntegerAsObject((void *)0x34);
    }
    else {
      pcVar6 = Rules_getVariable7Card();
    }
    local_54 = pcVar6;
    (**(code **)(*(int *)this + 0x50))(pcVar6,log);
    if (((!bVar3) || (pcVar6 == (char *)0x0)) ||
       (bVar3 = IntVector_contains((int)pcVar6,candidateCards), !bVar3)) {
      PointerVector_clear(candidateCards);
      goto LAB_01455253;
    }
    PointerVector_clear(candidateCards);
    PointerVector_pushBack(candidateCards,&local_54,item);
  }
  else {
    if (1 < extraout_EAX_01 - 0x1af7cU) goto LAB_0145546e;
    bVar4 = EvaluationEnvironment_hasValueForKey(log,key_);
    if ((bVar4) && (*(int *)((int)this + 0x20) != 0)) {
      FUN_012fa910();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_013833c0(0x44,local_28);
      FUN_01300db0();
      FUN_0123c3a0();
      piVar7 = (int *)FUN_0041f5d2(local_40);
      local_48 = *piVar7;
      local_44 = piVar7[1];
      piVar7 = (int *)FUN_0041f3a1(local_38);
      local_50 = *piVar7;
      local_4c = piVar7[1];
      while( true ) {
        if ((local_50 == 0) || (local_50 != local_48)) {
          FUN_00d83c2d();
        }
        if (local_4c == local_44) break;
        BinaryStreamCursor_checkReadableDword(&local_50);
        uVar12 = 0;
        pTVar11 = &Card::RTTI_Type_Descriptor;
        pTVar10 = &PlayElement::RTTI_Type_Descriptor;
        uVar9 = 0;
        pvVar8 = EvaluationEnvironment_getGame(log);
        pvVar8 = find_play_element_in_maps(pvVar8,elementId_);
        pcVar6 = (char *)FUN_00d8d382(pvVar8,uVar9,pTVar10,pTVar11,uVar12);
        local_54 = pcVar6;
        EvaluationEnvironment_logCardMessage(log,"Evaluating SourceList for card:",pcVar6,item);
        if ((pcVar6 != (char *)0x0) &&
           (cVar5 = (**(code **)(*(int *)this + 0x50))(pcVar6,log), cVar5 != '\0')) {
          uVar9 = PlayElement_getId();
          EvaluationEnvironment_tracef(log,"matched Card %d",uVar9);
          bVar2 = true;
          if ((bVar3) && (bVar4 = IntVector_contains((int)pcVar6,candidateCards), bVar4)) {
            PointerVector_pushBack(candidateCards,&local_54,item);
          }
        }
        BinaryStreamCursor_readDwordCursor(&local_50,local_30,(void *)0x0);
      }
      if (!bVar2) {
        EvaluationEnvironment_traceExitf(log,") => false",item);
        local_4 = local_4 & 0xffffff00;
        FUN_01300cd0();
LAB_01455437:
        local_4 = 0xffffffff;
        STLVector_int_clear(local_1c);
        ExceptionList = local_c;
        return false;
      }
      EvaluationEnvironment_traceExitf(log,") => true",item);
      local_4 = local_4 & 0xffffff00;
      FUN_01300cd0();
      goto LAB_01455404;
    }
    bVar3 = LastActionQueryNode_evaluate(this,candidateCards,log);
    if (!bVar3) {
      EvaluationEnvironment_traceExitf(log,") => false",item);
      goto LAB_01455437;
    }
  }
  EvaluationEnvironment_traceExitf(log,") => true",item);
LAB_01455404:
  local_4 = 0xffffffff;
  STLVector_int_clear(local_1c);
  ExceptionList = local_c;
  return true;
}

