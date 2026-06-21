// addr: 0x0149ffa0
// name: ActionTargetList_applyToTarget3
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToTarget3(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToTarget3(void *this,void *trace)

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
  
                    /* Handles 'target == target3' by resolving target code 0x36, setting it as
                       current target, applying child actions, and restoring the previous target.
                       Returns false and logs if target3 is unavailable. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == target3",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar3 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar3;
  env = EvaluationEnvironment_resolveTarget(trace);
  env_00 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
  if (env_00 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"Couldn\'t get target 3!",unaff_EDI);
    return false;
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

