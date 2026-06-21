// addr: 0x0149f1e0
// name: ActionTargetList_applyToTarget2
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToTarget2(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToTarget2(void *this,void *trace)

{
  void *this_00;
  char cVar1;
  byte bVar2;
  void *pvVar3;
  void *env;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == target2'. During cost checking it may succeed without a
                       target2; otherwise it resolves target2, applies child actions to it, and
                       restores the prior target. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == target2",unaff_ESI);
  pvVar3 = EvaluationEnvironment_resolveTarget2(trace);
  if (pvVar3 == (void *)0x0) {
    cVar1 = FUN_01383b90();
    if (cVar1 == '\x01') {
      pvVar3 = EvaluationEnvironment_getAction(trace);
      if (pvVar3 == (void *)0x1) {
        EvaluationEnvironment_tracef
                  (trace,
                   "In a handleTarget2 action node during cost checking when we don\'t have a target2."
                   ,unaff_ESI);
        return true;
      }
    }
  }
  local_4 = *(undefined4 **)((int)this + 8);
  iVar4 = (int)this + 4;
  puVar6 = (undefined4 *)*local_4;
  local_10 = iVar4;
  local_c = puVar6;
  pvVar3 = EvaluationEnvironment_resolveTarget(trace);
  env = EvaluationEnvironment_resolveTarget2(trace);
  if (env == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"Couldn\'t get target 2!",unaff_EDI);
    return false;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,env,unaff_EDI);
  trace = (void *)0x0;
  iVar5 = iVar4;
  while( true ) {
    if ((iVar5 == 0) || (iVar5 != iVar4)) {
      FUN_00d83c2d();
    }
    if (puVar6 == local_4) break;
    if (iVar5 == 0) {
      FUN_00d83c2d();
    }
    if (puVar6 == *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
      if (puVar6 == *(undefined4 **)(iVar5 + 4)) {
        FUN_00d83c2d();
      }
    }
    bVar2 = (**(code **)(*(int *)this + 0x54))(puVar6[3],puVar6[4],this_00,1);
    trace = (void *)(uint)bVar2;
    STLMapIterator_next(&local_10);
    iVar5 = local_10;
    puVar6 = local_c;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(this_00,pvVar3,unaff_EDI);
  return (bool)trace._0_1_;
}

