// addr: 0x0149ef40
// name: ActionTargetList_applyToThis
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToThis(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToThis(void *this,void *trace)

{
  int iVar1;
  void *env;
  void *env_00;
  int iVar2;
  int *piVar3;
  void *unaff_EDI;
  undefined1 local_15;
  int local_10;
  int *local_c;
  int *local_4;
  
                    /* Handles 'target == this' by temporarily setting the current target to
                       this/origin card, then iterating child action entries via the virtual apply
                       routine. Restores the previous target before returning. */
  EvaluationEnvironment_tracef(trace,"target == this",unaff_EDI);
  local_4 = *(int **)((int)this + 8);
  piVar3 = (int *)*local_4;
  iVar1 = (int)this + 4;
  local_10 = iVar1;
  local_c = piVar3;
  env = EvaluationEnvironment_resolveTarget(trace);
  if (piVar3 == (int *)*(int *)((int)this + 8)) {
    FUN_00d83c2d();
  }
  if (piVar3[3] != 10) {
    env_00 = EvaluationEnvironment_getOriginCard(trace);
    EvaluationEnvironment_setCurrentTargetFromElement(trace,env_00,unaff_EDI);
  }
  local_15 = 0;
  iVar2 = iVar1;
  while( true ) {
    if ((iVar2 == 0) || (iVar2 != iVar1)) {
      FUN_00d83c2d();
    }
    if (piVar3 == local_4) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (piVar3 == *(int **)(iVar2 + 4)) {
      FUN_00d83c2d();
      if (piVar3 == *(int **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
    }
    local_15 = (**(code **)(*(int *)this + 0x54))(piVar3[3],piVar3[4],trace,0);
    STLMapIterator_next(&local_10);
    iVar2 = local_10;
    piVar3 = local_c;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,env,unaff_EDI);
  return (bool)local_15;
}

