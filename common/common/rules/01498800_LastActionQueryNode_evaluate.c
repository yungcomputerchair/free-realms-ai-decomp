// addr: 0x01498800
// name: LastActionQueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LastActionQueryNode_evaluate(void * this, void * candidateCards, void *
   log) */

bool __thiscall LastActionQueryNode_evaluate(void *this,void *candidateCards,void *log)

{
  bool bVar1;
  bool bVar2;
  void **item;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  void *context;
  void *pvVar7;
  void *local_28;
  int local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a LastActionQueryNode by selecting the relevant last-event source,
                       target, discard, draw, play, attach, or prevent card, testing it against
                       child logic, and intersecting with candidate cards when present. Evidence is
                       the exact trace "(gvt:LastActionQueryNode" and event-check logs. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3128;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"(gvt:LastActionQueryNode",item);
  pvVar7 = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  bVar1 = false;
  if ((*(int *)((int)candidateCards + 4) != 0) &&
     (*(int *)((int)candidateCards + 8) - *(int *)((int)candidateCards + 4) >> 2 != 0)) {
    bVar1 = true;
  }
  if (this == (void *)0xfffffff0) {
    FUN_00d83c2d();
  }
  local_28 = (void *)0x0;
  switch(*(undefined4 *)((int)this + 0x1c)) {
  case 0:
    break;
  case 1:
    EvaluationEnvironment_tracef(log,"Checking Any event",item);
    CommandObject_getActionFromEnvironment(log);
    pvVar5 = EvaluationEnvironment_getOriginCard(log);
    bVar2 = card_check_target_modifier_predicates(pvVar5,context);
    if (!bVar2) {
      pvVar7 = EvaluationEnvironment_getOriginCard(log);
      local_28 = pvVar7;
    }
    break;
  default:
    EvaluationEnvironment_tracef(log,"doing default event check.",item);
    if (*(int *)((int)this + 0x20) == 0) {
      EvaluationEnvironment_tracef(log,"Checking last action target.",item);
      pvVar7 = (void *)0x34;
    }
    else {
      EvaluationEnvironment_tracef(log,"Checking last action source.",item);
      pvVar7 = (void *)0x33;
    }
    pvVar7 = EvaluationEnvironment_getIntegerAsObject(pvVar7);
    local_28 = pvVar7;
    (**(code **)(*(int *)this + 0x50))(pvVar7,log);
    break;
  case 0xc:
  case 0x4a:
    pvVar7 = Rules_getVariable7Card();
    iVar6 = *(int *)this;
    pvVar5 = log;
    local_28 = pvVar7;
    pvVar3 = Rules_getVariable7Card();
    (**(code **)(iVar6 + 0x50))(pvVar3,pvVar5);
    break;
  case 0xd:
    EvaluationEnvironment_tracef(log,"Checking Discard Event",item);
    if (*(int *)((int)this + 0x20) == 0) {
      pvVar7 = Rules_getVariable2dCard();
      iVar6 = *(int *)this;
      pvVar5 = log;
      local_28 = pvVar7;
      pvVar3 = Rules_getVariable2dCard();
      (**(code **)(iVar6 + 0x50))(pvVar3,pvVar5);
    }
    else {
      EvaluationEnvironment_tracef(log,"Checking Card that caused the discard.",item);
      pvVar7 = (void *)FUN_01383e60();
      iVar6 = *(int *)this;
      local_28 = pvVar7;
      uVar4 = FUN_01383e60(log);
      (**(code **)(iVar6 + 0x50))(uVar4);
    }
    break;
  case 0x11:
    EvaluationEnvironment_tracef(log,"DrawFromDrawDeckEvent",item);
    pvVar5 = (void *)FUN_013836d0();
    if (pvVar5 != (void *)0x0) {
      pvVar7 = (void *)unknown_getField30(pvVar5);
      local_24[0] = *(int *)this;
      pvVar3 = log;
      local_28 = pvVar7;
      iVar6 = unknown_getField30(pvVar5);
      (**(code **)(local_24[0] + 0x50))(iVar6,pvVar3);
    }
    break;
  case 0x16:
  case 0x37:
  case 0x4c:
    pvVar7 = Rules_getVariable7Card();
    iVar6 = *(int *)this;
    pvVar5 = log;
    local_28 = pvVar7;
    pvVar3 = Rules_getVariable7Card();
    (**(code **)(iVar6 + 0x50))(pvVar3,pvVar5);
    break;
  case 0x32:
    EvaluationEnvironment_tracef(log,"Checking Discard Pre Event",item);
    if (*(int *)((int)this + 0x20) == 0) {
      pvVar7 = Rules_getVariable2dCard();
      iVar6 = *(int *)this;
      pvVar5 = log;
      local_28 = pvVar7;
      pvVar3 = Rules_getVariable2dCard();
      (**(code **)(iVar6 + 0x50))(pvVar3,pvVar5);
    }
    else {
      EvaluationEnvironment_tracef(log,"Checking Card that caused the discard.",item);
      pvVar7 = (void *)FUN_01383e60();
      iVar6 = *(int *)this;
      local_28 = pvVar7;
      uVar4 = FUN_01383e60(log);
      (**(code **)(iVar6 + 0x50))(uVar4);
    }
  }
  if (((bVar1) && (pvVar7 != (void *)0x0)) &&
     (bVar1 = IntVector_contains((int)pvVar7,candidateCards), bVar1)) {
    PointerVector_clear(candidateCards);
    PointerVector_pushBack(candidateCards,&local_28,item);
    EvaluationEnvironment_traceExitf(log,") => true",item);
    bVar1 = true;
  }
  else {
    pvVar7 = *(void **)((int)candidateCards + 8);
    if (pvVar7 < *(void **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    pvVar5 = *(void **)((int)candidateCards + 4);
    if (*(void **)((int)candidateCards + 8) < pvVar5) {
      FUN_00d83c2d();
    }
    PointerVector_eraseRangeAssignIterator
              (candidateCards,local_24,candidateCards,pvVar5,candidateCards,pvVar7,item);
    EvaluationEnvironment_traceExitf(log,") => false",item);
    bVar1 = false;
  }
  ExceptionList = local_c;
  return bVar1;
}

