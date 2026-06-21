// addr: 0x0149f400
// name: ActionTargetList_applyToLastOwner
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToLastOwner(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToLastOwner(void *this,void *trace)

{
  void *this_00;
  byte bVar1;
  void *env;
  int iVar2;
  char *formatText;
  void *env_00;
  void *unaff_EDI;
  undefined4 *puVar3;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == LastOwner' by resolving/logging the last owner card,
                       setting the last owner as current target, applying child actions, and
                       restoring the previous target. Logs if the last owner is null. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == LastOwner",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar3 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar3;
  env = EvaluationEnvironment_resolveTarget(trace);
  iVar2 = FUN_01383790();
  if (iVar2 == 0) {
    EvaluationEnvironment_tracef(trace,"Last Owner NULL!!!!!\n",unaff_EDI);
  }
  Game_handleMissingCostCard();
  EvaluationEnvironment_logCardMessage(trace,"Last OwnerCard: ",formatText,unaff_EDI);
  env_00 = (void *)FUN_01383790();
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

