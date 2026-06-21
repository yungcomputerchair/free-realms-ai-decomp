// addr: 0x01496960
// name: MoveActionNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MoveActionNode_evaluate(void * this, void * result, void * log) */

bool __thiscall MoveActionNode_evaluate(void *this,void *result,void *log)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *env;
  void *env_00;
  void *element;
  bool bVar4;
  void *element_00;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Evaluates a MoveActionNode by resolving the source card and destination,
                       building either an attach or move command object, queuing it in the
                       environment, and returning true on success. Evidence is the "(
                       MoveActionNode" trace and logs "Move From", "Move To", and errors for
                       non-card source or missing destination. */
  iStack_4 = -1;
  puStack_8 = &LAB_016a2ae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"( MoveActionNode",DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  EvaluationEnvironment_tracef(log,"Move From: (%d)",*(undefined4 *)((int)this + 0x14));
  element_00 = *(void **)((int)this + 0x14);
  uVar2 = (**(code **)(*(int *)this + 0x50))(element_00,log);
  pvVar3 = (void *)FUN_00d8d382(uVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = log;
    EvaluationEnvironment_tracef(log,"Trying to move something that is not a card!",element_00);
    EvaluationEnvironment_traceExitf(log,") => false",pvVar3);
    bVar4 = false;
  }
  else {
    EvaluationEnvironment_tracef(log,"Move To: (%d)",*(undefined4 *)((int)this + 0x10));
    env = (void *)(**(code **)(*(int *)this + 0x50))(*(undefined4 *)((int)this + 0x10),log);
    if (env == (void *)0x0) {
      pvVar3 = log;
      EvaluationEnvironment_tracef(log,"Couldn\'t get destination!",element_00);
      EvaluationEnvironment_traceExitf(log,") => false",pvVar3);
      bVar4 = false;
    }
    else {
      env_00 = EvaluationEnvironment_resolveTarget(log);
      element = EvaluationEnvironment_getOriginCard(log);
      set_play_element_id_field(log,pvVar3);
      EvaluationEnvironment_setCurrentTargetFromElement(log,env,element_00);
      if (*(int *)((int)this + 0x1c) == 10) {
        pvVar3 = Mem_Alloc(0x124);
        local_c = (void *)0x0;
        if (pvVar3 == (void *)0x0) {
          local_c = (void *)0xffffffff;
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = CommandObjectAttach_ctor(pvVar3,log);
          local_c = (void *)0xffffffff;
        }
      }
      else {
        pvVar3 = Mem_Alloc(0x13c);
        local_c = (void *)0x1;
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = CommandObject_Move_ctor(pvVar3,log,*(int *)((int)this + 0x1c));
        }
        local_c = (void *)0xffffffff;
        CommandObjectMove_setMoveSourceContext(pvVar3,*(void **)((int)this + 0x18),(int)element_00);
        MoveActionNode_setMoveDestination(*(undefined4 *)((int)this + 0x1c));
      }
      EvaluationEnvironment_addCommandObject(log,pvVar3,element_00);
      set_play_element_id_field(log,element);
      EvaluationEnvironment_setCurrentTargetFromElement(log,env_00,element_00);
      iVar1 = iStack_4;
      FUN_01300680(1);
      bVar4 = true;
      *(undefined1 *)(iVar1 + 8) = 1;
      EvaluationEnvironment_traceExitf(log,") => true",element_00);
    }
  }
  ExceptionList = pvStack_14;
  return bVar4;
}

