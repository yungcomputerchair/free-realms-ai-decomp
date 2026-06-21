// addr: 0x0149f310
// name: ActionTargetList_applyToLastPlayedCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToLastPlayedCard(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToLastPlayedCard(void *this,void *trace)

{
  void *this_00;
  byte bVar1;
  void *env;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *unaff_EDI;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == LastPlayedCard' by resolving the last played card,
                       applying all child actions to it, and restoring the previous target. Returns
                       false when the last played card is null. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == LastPlayedCard",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar4 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar4;
  env = EvaluationEnvironment_resolveTarget(trace);
  pvVar2 = Rules_getVariable7Card();
  if (pvVar2 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"Last Played Card is NULL!!!",unaff_EDI);
    return false;
  }
  pvVar2 = Rules_getVariable7Card();
  EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar2,unaff_EDI);
  trace = (void *)0x0;
  iVar3 = (int)this + 4;
  while( true ) {
    if ((iVar3 == 0) || (iVar3 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar4 == local_4) break;
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)(iVar3 + 4)) {
      FUN_00d83c2d();
      if (puVar4 == *(undefined4 **)(iVar3 + 4)) {
        FUN_00d83c2d();
      }
    }
    bVar1 = (**(code **)(*(int *)this + 0x54))(puVar4[3],puVar4[4],this_00,1);
    trace = (void *)(uint)bVar1;
    STLMapIterator_next(&local_10);
    iVar3 = local_10;
    puVar4 = local_c;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(this_00,env,unaff_EDI);
  return (bool)trace._0_1_;
}

