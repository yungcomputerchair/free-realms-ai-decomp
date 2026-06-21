// addr: 0x0149f0f0
// name: ActionTargetList_applyToDynamicCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToDynamicCard(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToDynamicCard(void *this,void *trace)

{
  void *this_00;
  byte bVar1;
  void *env;
  void *env_00;
  int iVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == DyanmicCard' by resolving the dynamic card, temporarily
                       setting it as current target, applying child actions, and restoring the prior
                       target. Logs an error if no dynamic card exists. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == DyanmicCard",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar3 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar3;
  env = EvaluationEnvironment_resolveTarget(trace);
  env_00 = (void *)Rules_getDynamicCardReturnCard();
  if (env_00 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"Couldn\'t get dynamicCard",unaff_EDI);
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,env_00,unaff_EDI);
  trace = (void *)0x0;
  iVar2 = (int)this + 4;
  while( true ) {
    if ((iVar2 == 0) || (iVar2 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_4) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
      if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
    }
    bVar1 = (**(code **)(*(int *)this + 0x54))(puVar3[3],puVar3[4],this_00,1);
    trace = (void *)(uint)bVar1;
    STLMapIterator_next(&local_10);
    iVar2 = local_10;
    puVar3 = local_c;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(this_00,env,unaff_EDI);
  return (bool)trace._0_1_;
}

