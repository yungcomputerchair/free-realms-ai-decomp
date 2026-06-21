// addr: 0x01454d60
// name: ZPLastActionQueryContainer_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ZPLastActionQueryContainer_evaluate(void * this, void * result, void *
   log) */

bool __thiscall ZPLastActionQueryContainer_evaluate(void *this,void *result,void *log)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 extraout_EAX;
  int extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int extraout_EAX_02;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  void *pvVar8;
  char *formatText;
  int key_;
  int elementId_;
  int elementId__00;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  char local_4d;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Evaluates a ZP last-action query container by first checking the environment
                       event id, logging the queried property/value, then testing event
                       source/target/source-list cards or delegating to the generic last-action
                       condition evaluator. Evidence is the trace "(ZPlast action query container"
                       plus event mismatch and source-list logs. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0169bef0;
  local_14 = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_14;
  EvaluationEnvironment_traceEnterf(log,"(ZPlast action query container",pvVar4);
  EvaluationEnvironment_emitActionDebugLog(log);
  EvaluationEnvironment_tracef(log,"env->eventID(%d) mEvent: %d",extraout_EAX);
  iVar1 = *(int *)((int)this + 0x1c);
  EvaluationEnvironment_emitActionDebugLog(log);
  if (extraout_EAX_00 != iVar1) {
    EvaluationEnvironment_emitActionDebugLog(log);
    pvVar4 = log;
    EvaluationEnvironment_tracef(log,"event %d on env did not match mEvent %d",extraout_EAX_01);
    EvaluationEnvironment_traceExitf(log,") => false",pvVar4);
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 0;
    ExceptionList = local_14;
    return false;
  }
  piVar6 = (int *)**(int **)((int)this + 0x14);
  if (piVar6 == *(int **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  EvaluationEnvironment_tracef(log,"property: %d",piVar6[3]);
  if (piVar6 == (int *)*(int *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  EvaluationEnvironment_tracefWithPrefix(log,"value: ");
  EvaluationEnvironment_tracef(log,"eventcausedby: %d",*(undefined4 *)((int)this + 0x20));
  local_4d = '\0';
  EvaluationEnvironment_emitActionDebugLog(log);
  if (extraout_EAX_02 < 0x4d) {
    if ((extraout_EAX_02 != 0x4c) && (extraout_EAX_02 != 0x16)) {
LAB_014550c0:
      bVar3 = LastActionQueryContainer_evaluateEventCondition(this,result,log);
      if (bVar3) goto LAB_014550d0;
      goto LAB_014550f5;
    }
    if (*(int *)((int)this + 0x20) == 0) {
      iVar1 = *(int *)this;
      pvVar5 = log;
      pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x34);
      local_4d = (**(code **)(iVar1 + 0x50))(pvVar8,pvVar5);
    }
    else {
      pvVar5 = Rules_getVariable7Card();
      if (pvVar5 == (void *)0x0) {
        pvVar5 = EvaluationEnvironment_getMember14(log);
        piVar6 = (int *)unknown_getField30(pvVar5);
        cVar2 = (**(code **)(*piVar6 + 0x14))(0x22970);
        if (cVar2 != '\0') {
          FUN_012fa9f0(0);
          local_c = 0;
          pvVar5 = EvaluationEnvironment_getMember14(log);
          piVar6 = (int *)unknown_getField30(pvVar5);
          (**(code **)(*piVar6 + 4))(0x22970,local_24);
          FUN_0123c340(0,&PlayElement::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
          pvVar5 = EvaluationEnvironment_getGame(log);
          pvVar5 = find_play_element_in_maps(pvVar5,elementId_);
          uVar7 = FUN_00d8d382(pvVar5);
          FUN_01386d60(uVar7);
          local_c = 0xffffffff;
          FUN_01300cd0();
        }
      }
      iVar1 = *(int *)this;
      pvVar5 = log;
      pvVar8 = Rules_getVariable7Card();
      local_4d = (**(code **)(iVar1 + 0x50))(pvVar8,pvVar5);
    }
  }
  else {
    if (1 < extraout_EAX_02 - 0x1af7cU) goto LAB_014550c0;
    bVar3 = EvaluationEnvironment_hasValueForKey(log,key_);
    if ((bVar3) && (*(int *)((int)this + 0x20) != 0)) {
      FUN_012fa910();
      local_c = 1;
      FUN_013833c0(0x44,local_24);
      FUN_01300db0();
      FUN_0123c3a0();
      piVar6 = (int *)FUN_0041f5d2(local_3c);
      local_44 = *piVar6;
      local_40 = piVar6[1];
      piVar6 = (int *)FUN_0041f3a1(local_34);
      local_4c = *piVar6;
      local_48 = piVar6[1];
      while( true ) {
        if ((local_4c == 0) || (local_4c != local_44)) {
          FUN_00d83c2d();
        }
        if (local_48 == local_40) break;
        BinaryStreamCursor_checkReadableDword(&local_4c);
        uVar11 = 0;
        pTVar10 = &Card::RTTI_Type_Descriptor;
        pTVar9 = &PlayElement::RTTI_Type_Descriptor;
        uVar7 = 0;
        pvVar5 = EvaluationEnvironment_getGame(log);
        pvVar5 = find_play_element_in_maps(pvVar5,elementId__00);
        formatText = (char *)FUN_00d8d382(pvVar5,uVar7,pTVar9,pTVar10,uVar11);
        EvaluationEnvironment_logCardMessage
                  (log,"Evaluating SourceList for card:",formatText,pvVar4);
        if ((formatText != (char *)0x0) &&
           (cVar2 = (**(code **)(*(int *)this + 0x50))(formatText,log), cVar2 != '\0')) {
          uVar7 = PlayElement_getId();
          EvaluationEnvironment_tracef(log,"matched Card %d",uVar7);
          local_4d = '\x01';
        }
        BinaryStreamCursor_readDwordCursor(&local_4c,local_2c,(void *)0x0);
      }
      local_c = 0xffffffff;
      FUN_01300cd0();
    }
    else {
      local_4d = LastActionQueryContainer_evaluateEventCondition(this,result,log);
    }
  }
  if (local_4d != '\0') {
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 1;
LAB_014550d0:
    EvaluationEnvironment_traceExitf(log,") => true",pvVar4);
    ExceptionList = local_14;
    return true;
  }
LAB_014550f5:
  EvaluationEnvironment_traceExitf(log,") => false",pvVar4);
  ExceptionList = local_14;
  return false;
}

