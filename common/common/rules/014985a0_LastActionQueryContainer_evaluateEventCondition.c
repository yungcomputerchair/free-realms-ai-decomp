// addr: 0x014985a0
// name: LastActionQueryContainer_evaluateEventCondition
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LastActionQueryContainer_evaluateEventCondition(void * this, void *
   result, void * log) */

bool __thiscall LastActionQueryContainer_evaluateEventCondition(void *this,void *result,void *log)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int iVar5;
  code *pcVar6;
  void *context;
  undefined4 unaff_EDI;
  char *format;
  void *pvVar7;
  
                    /* Checks whether the current last-action event and its
                       source/target/discard/play/prevent/attach card satisfy the child condition,
                       setting a boolean return value on success. Evidence is the "(last action
                       query container" trace and event-specific logs such as "Checking last action
                       target." and "Checking Discard Event". */
  EvaluationEnvironment_traceEnterf(log,"(last action query container",unaff_EDI);
  if ((int *)**(int **)((int)this + 0x14) == *(int **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  EvaluationEnvironment_tracefWithPrefix(log,"value: ");
  iVar1 = *(int *)((int)this + 0x20);
  pvVar4 = log;
  switch(*(undefined4 *)((int)this + 0x1c)) {
  case 0:
    goto switchD_014985f0_caseD_0;
  case 1:
    EvaluationEnvironment_tracef(log,"Checking Any event",unaff_EDI);
    CommandObject_getActionFromEnvironment(log);
    pvVar4 = EvaluationEnvironment_getOriginCard(log);
    bVar2 = card_check_target_modifier_predicates(pvVar4,context);
    if (bVar2) goto switchD_014985f0_caseD_0;
    goto LAB_0149875a;
  default:
    if (iVar1 == 0) {
      EvaluationEnvironment_tracef(log,"Checking last action target.",unaff_EDI);
      pvVar7 = (void *)0x34;
    }
    else {
      EvaluationEnvironment_tracef(log,"Checking last action source.",unaff_EDI);
      pvVar7 = (void *)0x33;
    }
    pvVar7 = EvaluationEnvironment_getIntegerAsObject(pvVar7);
    pcVar6 = *(code **)(*(int *)this + 0x50);
    goto LAB_01498752;
  case 0xc:
  case 0x4a:
    EvaluationEnvironment_tracef(log,"Checking Attach Event",unaff_EDI);
    iVar1 = *(int *)this;
    pvVar7 = Rules_getVariable7Card();
    cVar3 = (**(code **)(iVar1 + 0x50))(pvVar7,pvVar4);
    break;
  case 0xd:
    format = "Checking Discard Event";
    goto LAB_01498697;
  case 0x11:
    EvaluationEnvironment_tracef(log,"DrawFromDrawDeckEvent",unaff_EDI);
    pvVar4 = (void *)FUN_013836d0();
    if (pvVar4 == (void *)0x0) goto switchD_014985f0_caseD_0;
    iVar1 = *(int *)this;
    pvVar7 = log;
    iVar5 = unknown_getField30(pvVar4);
    cVar3 = (**(code **)(iVar1 + 0x50))(iVar5,pvVar7);
    break;
  case 0x16:
  case 0x4c:
    EvaluationEnvironment_tracef(log,"Checking Play Event",unaff_EDI);
    iVar1 = *(int *)this;
    pvVar7 = Rules_getVariable7Card();
    pcVar6 = *(code **)(iVar1 + 0x50);
    goto LAB_01498752;
  case 0x32:
    format = "Checking Discard Pre Event";
LAB_01498697:
    EvaluationEnvironment_tracef(log,format,unaff_EDI);
    if (iVar1 != 0) {
      EvaluationEnvironment_tracef(log,"Checking Card that caused the discard.",unaff_EDI);
      iVar1 = *(int *)this;
      pvVar7 = (void *)FUN_01383e60(log);
      pcVar6 = *(code **)(iVar1 + 0x50);
      goto LAB_01498752;
    }
    iVar1 = *(int *)this;
    pvVar7 = Rules_getVariable2dCard();
    cVar3 = (**(code **)(iVar1 + 0x50))(pvVar7,pvVar4);
    break;
  case 0x37:
    EvaluationEnvironment_tracef(log,"Checking Prevent Event",unaff_EDI);
    iVar1 = *(int *)this;
    pvVar7 = Rules_getVariable7Card();
    pcVar6 = *(code **)(iVar1 + 0x50);
LAB_01498752:
    cVar3 = (*pcVar6)(pvVar7,pvVar4);
  }
  if (cVar3 != '\0') {
LAB_0149875a:
    FUN_01300680(1);
    *(undefined1 *)((int)result + 8) = 1;
    EvaluationEnvironment_traceExitf(log,") => true",unaff_EDI);
    return true;
  }
switchD_014985f0_caseD_0:
  EvaluationEnvironment_traceExitf(log,") => false",unaff_EDI);
  return false;
}

